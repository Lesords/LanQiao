#include<iostream>//ac
#include<string>
using namespace std;
int main() {
	int n;
	string ans = "A";
	cin>>n;
	for(int i = 2;i <= n;i++) {
		char tmp = i +'A'-1;//�м�������ַ�
		ans = ans+tmp+ans;//��βһ��
	}//��βһ�£��м����Ŀ���ַ�
	cout<<ans<<endl;
	return 0;
}
