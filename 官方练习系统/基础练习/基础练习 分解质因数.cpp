#include<iostream>//ac
using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	for(int i = a;i <= b;i++) {//��a��b
		int cnt = 1,n = i;//��ʱ����ÿ�ζ���Ҫ��ʼ��
		cout<<n<<'=';
		for(int j = 2;j <= n;j++) {
			while(n%j==0) {
				if(cnt!=1) cout<<'*';//��һ�������*
				cout<<j,cnt++;
				n /= j;
			}
		}
		cout<<endl;//����
	}
	return 0;
}
