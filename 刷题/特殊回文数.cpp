#include<iostream>//ac
using namespace std;
int main() {
	int t;
	cin>>t;
	if(t<=45) {//五位数总和最大为45
		for(int i = 1;i <= 9;i++) {
			for(int j = 0;j <= 9;j++) {
				for(int k = 0;k <= 9;k++) {
					if((i+j)*2+k==t) {
						cout<<i*10001 + j*1010 + k*100<<endl;
					}
				}
			}
		}
	}
	for(int i = 1;i <= 9;i++) {
		for(int j = 0;j <= 9;j++) {
			for(int k = 0;k <= 9;k++) {
				if((i+j+k)*2==t) {
					cout<<i*100001 + j*10010 + k*1100<<endl;
				}
			}
		}
	}
	return 0;
} 
