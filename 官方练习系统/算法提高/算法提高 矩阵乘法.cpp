#include<iostream>//ac
using namespace std;
const int MAXN = 105;
int a[MAXN][MAXN],b[MAXN][MAXN],ans[MAXN][MAXN];
int main() {
	int n,m,k;
	cin>>n>>m>>k;
	for(int i = 1;i <= n;i++)
		for(int j = 1;j <= m;j++) cin>>a[i][j];
	for(int i = 1;i <= m;i++)
		for(int j = 1;j <= k;j++) cin>>b[i][j];
	for(int i = 1;i <= n;i++) {//nÐÐkÁÐ
		for(int j = 1;j <= k;j++) {
			if(j!=1) cout<<' ';
			for(int t = 1;t <= m;t++) //³Ëm´Î
				ans[i][j] += a[i][t]*b[t][j];
			cout<<ans[i][j];
        }
        cout<<endl;
    }
	return 0;
}
