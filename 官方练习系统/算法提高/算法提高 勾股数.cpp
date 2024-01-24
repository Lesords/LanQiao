#include<iostream>//ac
using namespace std;
int main() {
	for(int i = 1;i <= 300;i++)//最大只到300
		for(int j = i+1;j <= 500;j++)
			for(int k = j+1;k <= 500;k++) {
				if(i+j+k>1000) continue;//和不超过1000
				if(i*i+j*j==k*k) cout<<i<<' '<<j<<' '<<k<<endl;
			}
				
	return 0;
}
