#include<iostream>//ac
#include<string>
using namespace std;
int main() {
	string s,ans = "";
	cin>>s;
	for(int i = 0;i < s.size();i++) {
		if(i%2) ans += s[i];//������������λ���ַ�
	}
	int len = ans.size()-1;
	for(int i = 0,j = len;i < s.size();i++) {
		if(i%2) cout<<ans[j--];//����λ�õ������
		else cout<<s[i];//ż������
	}
	return 0;
}
