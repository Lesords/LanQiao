#include<iostream>//ac
#include<string>
using namespace std;
int A[30],B[30];
int main() {
	string a,b;
	cin>>a>>b;
	if(a.size()!=b.size()) {//���Ȳ�ͬ
		cout<<'N';
		return 0;
	}
	for(int i = 0;i < a.size();i++) {//��Ӧ�ı������
		if(a[i]>='a'&&a[i]<='z') A[a[i]-'a']++;
		else A[a[i]-'A']++;
		if(b[i]>='a'&&b[i]<='z') B[b[i]-'a']++;
		else B[b[i]-'A']++;
	}
	for(int i = 0;i <= 26;i++) {//�ж������Ƿ�һ��
		if(A[i]!=B[i]) {
			cout<<'N';return 0;
		}
	}
	cout<<'Y';
	return 0;
}
