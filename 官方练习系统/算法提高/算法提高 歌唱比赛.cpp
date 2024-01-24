#include<iostream>//ac
#include<cstdio>
#include<algorithm>
using namespace std;
int main() {
	int n;
	double a,b,c,d;
	cin>>n;
	while(n--) {
		cin>>a>>b>>c>>d;//最大只有100
		printf("%.1f\n",min(100.0,0.7*a+0.2*b+0.1*c+d));
	}
	return 0;
}
