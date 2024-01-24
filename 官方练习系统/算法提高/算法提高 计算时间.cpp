#include<iostream>//ac
using namespace std;
int main() {
	int t,n;
	cin>>t;
	while(t--) {
		cin>>n;
		int hour = n/3600;
		int minute = n%3600/60;
		int second = n%60;
		if(hour<10) cout<<'0';
		cout<<hour<<':';
		if(minute<10) cout<<'0';
		cout<<minute<<':';
		if(second<10) cout<<'0';
		cout<<second<<endl;
	}
	return 0;
}
