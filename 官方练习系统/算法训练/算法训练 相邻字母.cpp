#include<iostream>//ac
using namespace std;
int main() {
	char mid;
	cin>>mid;
	if(mid>'a'&&mid<'z'||mid>'A'&&mid<'Z')//û���������
		cout<<char(mid-1)<<mid<<char(mid+1);
	else {//���ֱ߽����
		if(mid=='A') cout<<"ZAB";
		else if(mid=='a') cout<<"zab";
		else if(mid=='Z') cout<<"YZA";
		else cout<<"yza";
	}
	return 0;
}
