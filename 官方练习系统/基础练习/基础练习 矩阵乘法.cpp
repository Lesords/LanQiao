#include<iostream>//ac
using namespace std;
const int MAXN = 35;
int a[MAXN][MAXN],tmp[MAXN][MAXN],op[MAXN][MAXN],n,m;
void multi() {//����˷�
	for(int i = 1;i <= n;i++)//��������Ϊa�ĵ�ǰֵ
		for(int j = 1;j <= n;j++) op[i][j] = a[i][j];
	for(int i = 1;i <= n;i++) {
		for(int j = 1;j <= n;j++) {
			a[i][j] = 0;
			for(int k = 1;k <= n;k++)//�����ʱ�򲻻ᱻ����
				a[i][j] += op[i][k]*tmp[k][j];
		}
	}
}
int main() {
	cin>>n>>m;
	for(int i = 1;i <= n;i++)
		for(int j = 1;j <= n;j++) {
			cin>>a[i][j],tmp[i][j]=a[i][j];
			//0���ݵ�ʱ��Ϊ��λ����
			if(m==0) a[i][j] = i==j?1:0;
		}
	//������ݲ���Ҫ����
	if(m) for(int i = 1;i < m;i++) multi();//����� m-1 �Σ�����
	for(int i = 1;i <= n;i++) {
		for(int j = 1;j <= n;j++) {
			if(j!=1) cout<<' ';
			cout<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}
