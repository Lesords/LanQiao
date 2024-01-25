#include<iostream>//ac
using namespace std;
const int MAXN = 1e6+5;
int dis[MAXN];
int find(int a) {//找祖先
	return dis[a] = dis[a]==a?a:find(dis[a]);
}
int main() {
	int n,m,k,a,b,ans = 0;
	cin>>n>>m>>k;
	for(int i = 1;i <= n*m;i++) dis[i] = i;
	while(k--) {
		cin>>a>>b;
		int tmp_1 = find(a);
		int tmp_2 = find(b);
		if(tmp_1!=tmp_2) {//更新祖先
			dis[tmp_1] = tmp_2;//祖先连接起来
		}//下一次find的时候会更新a的祖先
	}
	for(int i = 1;i <= n*m;i++) if(dis[i]==i) ans++;
	cout<<ans;
	return 0;
}
