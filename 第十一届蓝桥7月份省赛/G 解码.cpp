#include<iostream>//ac
#include<string>
using namespace std;
int main() {
	string s;
	cin>>s;
	string ans = "";//��ʼ��Ϊ���ַ���
	for(int i = 0;i < s.size();i++) {//ȫ������һ��
		if(s[i]>='0'&&s[i]<='9') {//��Ϊ���֣���ƴ��ǰһ���ַ� tmp-1 ��
			int tmp = s[i]-'0';
			for(int j = 2;j <= tmp;j++) ans += s[i-1];
		}
		else ans += s[i];//����ֱ����Ӽ���
	}
	cout<<ans;
	return 0;
}
