#include<iostream>//ac
using namespace std;
int main() {
	int n;
	cin>>n;
	cout<<n/1440<<' '<<n%1440/60<<' '<<n%60;
	return 0;
}
