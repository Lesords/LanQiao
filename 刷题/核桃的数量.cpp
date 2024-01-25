#include<iostream>//ac
using namespace std;
int gcd(int a,int b) {
	return a%b==0?b:gcd(b,a%b);
}
int lcd(int a,int b) {
	return a*b/gcd(a,b);
}
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	cout<<lcd(lcd(a,b),c)<<endl;
	return 0;
} 
