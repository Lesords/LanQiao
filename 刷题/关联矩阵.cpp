#include<iostream>//ac
#include<cstdio>
using namespace std;
int map[105][1005];//�б�ʾ�������б�ʾ����
int main() {
	int n,m,a,b;
	cin>>n>>m;
	for(int i = 1;i <= m;i++) {//m���ߣ��У�
		cin>>a>>b;
		map[a][i] = 1;//��Ϊ��ʼ��
		map[b][i] = -1;//��Ϊ�յ�
	}
	for(int i = 1;i <= n;i++) {
		for(int j = 1;j <= m;j++) {
			if(j!=1) cout<<' ';
			printf("%2d",map[i][j]);//��Ҫ��ʽ������
		}
		cout<<"\n";
	}
	return 0;
}
