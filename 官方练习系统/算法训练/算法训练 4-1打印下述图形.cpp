#include<iostream>//ac
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i = 1;i <= n;i++) {//�����n��
		for(int j = i+1;j <= n;j++) cout<<' ';//�ȿո���Ǻ�
		for(int j = 1;j <= i*2-1;j++) cout<<'*';
		cout<<"\n";
	}
	return 0;
}
