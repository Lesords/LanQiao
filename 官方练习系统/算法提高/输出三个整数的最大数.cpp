#include<iostream>//ac
#include<algorithm>
using namespace std;
int main() {
	int a[5];
	for(int i = 1;i <= 3;i++) cin>>a[i];
	sort(a+1,a+4);
	cout<<a[3]<<endl;
	return 0;
}
