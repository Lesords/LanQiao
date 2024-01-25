#include<iostream>//ac
#include<algorithm>
#define INF 0x3f3f3f3f
using namespace std;
int main() {
	int n,tmp,minn = INF,maxx = -INF;
	cin>>n;
	while(n--) {
		cin>>tmp;
		minn = min(tmp,minn);
		maxx = max(tmp,maxx);
	}
	cout<<maxx<<' '<<minn<<endl;
	return 0;
}
