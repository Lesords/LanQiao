#include<iostream>//ac
using namespace std;
int a[105];
int main() {
	int n,tmp,num = 0;
	cin>>n;
	while(n--) {
		cin>>tmp;
		if(tmp) a[++num] = tmp;//�������
	}
	for(int i = 1;i <= num;i++) {//������
		if(i!=1) cout<<' ';
		cout<<a[i];
	}
	cout<<"\n"<<num;
	return 0;
}
