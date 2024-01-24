#include<iostream>//ac
using namespace std;
int main() {
	char mid;
	cin>>mid;
	if(mid>'a'&&mid<'z'||mid>'A'&&mid<'Z')//没有特殊情况
		cout<<char(mid-1)<<mid<<char(mid+1);
	else {//四种边界情况
		if(mid=='A') cout<<"ZAB";
		else if(mid=='a') cout<<"zab";
		else if(mid=='Z') cout<<"YZA";
		else cout<<"yza";
	}
	return 0;
}
