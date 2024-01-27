#include<iostream>
#include<cstdio>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
const int MAXN = 1e3+5;
struct node{
	int num,val;//记录循环语句的缩进数量和循环次数
};
string s[MAXN];
int num[MAXN];//记录当前行的缩进数量
int main() {
	freopen("in.txt","r",stdin);
	int cnt = 0;
	string tmp;
	while(getline(cin,tmp)) {
		s[++cnt] = tmp;
	}
	//for(int i = 1;i <= cnt;i++) cout<<s[i]<<endl;
	
	for(int i = 2;i <= cnt;i++) {//计算第二行以后的缩进数量
		for(int j = 0;j < s[i].size();j++) {
			if(s[i][j]!=' ') {
				num[i] = j;//不为空格的位置即为空格的数量（0开始）
				break;
			}
		}
	}
	//for(int i = 1;i <= cnt;i++) cout<<num[i]<<endl;

	int a = 0,sum = 1;//sum表示对于当前加操作的循环次数
	stack<node> st;//栈保存历史循环次数
	for(int i = 2;i <= cnt;i++) {
		char op = s[i][num[i]];//读取首字符判断当前是什么操作
		int len = s[i].size()-2;//循环语句的数字的下标
		if(op=='R') {//循环语句时
			int val = s[i][len]-'0';//读取循环次数
			if(!st.empty()) {//如果栈不为空，即前面有循环语句
				node dot = st.top();
				if(dot.num==num[i]) {//当前语句与上一个循环语句并列！！！
					sum /= dot.val;//去掉无效循环的次数！！！
					st.pop();
				}
			}
			sum *= val;//继续更新当前循环的次数
			st.push(node{num[i],val});//保留当前记录
			//cout<<val<<endl;
		}
		else {//增加操作
			int val = s[i][len+1]-'0';//加操作的数字位置与循环语句不一样！！！
			if(st.empty()) {//前面无有效循环，直接加即可
				a += val;continue;
			}
			node dot = st.top();
			if(num[i]==dot.num) {//当前行与上一个循环语句并列
				sum /= dot.val;//去掉无效循环次数
				a += val*sum;//更新a的值
				st.pop();
				//cout<<val<<" "<<sum<<endl;
			}
			else {//正常循环体
				a += val*sum;//更新a的值
			}
			//cout<<val<<endl;
		}
		//cout<<sum<<endl;
	}
	cout<<a<<endl;//241830
	return 0;
}
