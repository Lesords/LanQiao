#include<iostream>//ac
#include<algorithm>
using namespace std;

//��⣺dp���㷽����
//���ڵ�һ��ֻ�� ���������� һ�ַ���
//��һ��ֻ�� ���������� һ�ַ��������Կ����ȳ�ʼ����һ�к͵�һ��
//Ȼ�����ʣ��λ�ã�����ȫΪż����λ�ü���

int dp[35][35];
int main() {
	int n, m;
	cin>>n>>m;
	for(int i = 1;i <= m;i++) dp[1][i] = 1;//��ʼ����һ��Ϊ1
	for(int i = 1;i <= n;i++) dp[i][1] = 1;//��ʼ����һ��Ϊ1
	for(int i = 2;i <= n;i++) {
		for(int j = 2;j <= m;j++) {
			if(i%2==0&&j%2==0) continue;//����ȫΪż����λ��
			dp[i][j] = dp[i-1][j] +dp[i][j-1];//�Ϻ���������������
		}
	}
	cout<<dp[n][m];
	return 0;
}
