#include<iostream>//ac
using namespace std;
const int MAXN = 205;
int a[MAXN][MAXN],b[MAXN][MAXN],tmp;
int main() {
	int m,s,n;
	cin>>m>>s>>n;
	for(int i = 1;i <= m;i++) {//m��s��
		for(int j = 1;j <= s;j++) cin>>a[i][j];
	}
	for(int i = 1;i <= s;i++) {//s��n��
		for(int j = 1;j <= n;j++) cin>>b[i][j];
	}
	for(int i = 1;i <= m;i++) {//��
		for(int j = 1;j <= n;j++) {//��
			if(j!=1) cout<<' ';
			tmp = 0;//�����Ӧ��ֵ
			for(int k = 1;k <= s;k++)
				tmp += a[i][k]*b[k][j];//�� * ��
			cout<<tmp;
		}
		cout<<endl;
	}
	return 0;
}
