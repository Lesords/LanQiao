#include<iostream>//ac
#include<cstring>
#include<string>
#include<cctype>
#include<algorithm>
#define all(x) (x).begin(),(x).end()
using namespace std;
string s;
void mex() {//大写变小写，小写变大写
	for(int i = 0;i < s.size();i++) {
		if(s[i]>='a'&&s[i]<='z') s[i] = toupper(s[i]);
		else s[i] = tolower(s[i]);
	}
}
void shrink() {
	int l = 1;//从第二位置开始遍历
	transform(all(s),s.begin(),::tolower);//先统一转小写
	while(l<s.size()) {//遍历完则结束
		if(l+1<s.size()&&s[l]==s[l-1]+1) {
			//当前字符与前一字符连续
			int tmp = l,num = 0;//num表示还有多少个连续字符
			while(s[l+1]==s[l]+1) l++,num++;
			if(num) {//连续个数超过3(num为1)才需要操作
				s[tmp] = '-';//tmp为第二个连续字符的位置
				//总共有num+2个连续字符，须保留三个字符
				//则将第二个字符修改成 '-'
				//然后再删除 num-1 个字符
				s.erase(tmp+1,num-1);//tmp+1为起始点
				l -= num-1;//操作位置需回退 删除数量 个单位
			}
		}
		else l++;//不连续则跳过
	}
}
int main() {
	int op;
	cin>>op>>s;
	switch(op) {
		case 1:transform(all(s),s.begin(),::toupper);break;
		case 2:transform(all(s),s.begin(),::tolower);break;
		case 3:reverse(all(s));break;//逆序
		case 4:mex();break;
		case 5:shrink();break;
	}
	cout<<s<<endl;
	return 0;
}
