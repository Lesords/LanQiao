#include<iostream>//ac
#include<string>
using namespace std;
string s;
bool judge(int pos) {//判断是否为一个周期串
	for(int i = pos;i < s.size();i++) {
		if(s[i]!=s[i%pos]) return false;
	}//从第二个周期串往后扫，与第一个周期串判断
	return true;
}
int main() {
	cin>>s;
	int pos = 1,ans = s.size();//初始化为字符串长度
	while(pos < s.size()) {//寻找第二个周期串的起点
		if(s[pos]!=s[0]) pos++;//与起点不同则++
		else {
			//不仅为周期，且需为长度的因子
			if(judge(pos)&&s.size()%pos==0) {
				ans = pos;break;
			}
			else pos++;
		}
	}
	cout<<ans;
	return 0;
}
