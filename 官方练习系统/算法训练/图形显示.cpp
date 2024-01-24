#include<iostream>//ac
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i = n;i >= 1;i--) {
		for(int j = 1;j <= i;j++) {
			if(j!=1) cout<<' ';
			cout<<'*';
		}
		cout<<endl;
	}
	return 0;
}
