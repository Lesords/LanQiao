#include<iostream>//ac
#include<string>
#include<cctype>
using namespace std;
int main() {
	string a,b;
	cin>>a>>b;
	if(a.size()!=b.size()) cout<<'1';
	else if(a==b) cout<<'2';
	else {
		int flag = 1;
		for(int i = 0;i < a.size();i++) {
			if(tolower(a[i])!=tolower(b[i])) {//תСд�ж�
				flag = 0;break;
			}
		}
		cout<<(flag?'3':'4');
	}
	return 0;
}
