#include<iostream>//ac
using namespace std;
int solve(int n,int k) {//ֱ�Ӹ��ݹ�ʽ���
	if(k==0||k==n) return 1;
	return solve(n-1,k)+solve(n-1,k-1);
}
int main() {
	int n,k;
	cin>>k>>n;
	cout<<solve(n,k);
	return 0;
}
