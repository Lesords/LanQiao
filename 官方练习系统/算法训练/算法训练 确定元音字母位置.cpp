#include<iostream>//ac
#include<string>
#include<set>
using namespace std;
int main() {
	string s;
	set<char> set;
	char op[5] = {'a','e','i','o','u'};
	for(int i = 0;i < 5;i++) set.insert(op[i]);//Ԫ������
	int ans = 0;//��ʼ��Ϊ0����û��Ԫ����
	cin>>s;
	for(int i = 0;i < s.size();i++) {
		if(set.count(s[i])) {//��ΪԪ��
			ans = i+1;break;//�ַ�λ���Ǵ�1��ʼ��
		}
	}
	cout<<ans;
	return 0;
}
