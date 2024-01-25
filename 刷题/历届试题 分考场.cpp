#include<iostream>//wa!!!
using namespace std;
const int MAXN = 105;
int dis[MAXN];
int find(int n) {
	return dis[n] = n==dis[n]?n:find(dis[n]);
}
int main() {
	int n,m,a,b,cnt = 0;
	cin>>n>>m;
	for(int i = 1;i <= n;i++) dis[i] = i;
	for(int i = 1;i <= m;i++) {
		cin>>a>>b;
		a = find(a),b = find(b);
		if(a!=b) dis[a] = b;
 	}
	for(int i = 1;i <= n;i++) if(find(i)==i) cnt++;
	cout<<cnt<<endl;
	return 0;
}
