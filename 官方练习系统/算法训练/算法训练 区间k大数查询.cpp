#include<iostream>//ac
#include<algorithm>
using namespace std;
const int MAXN = 1005;//���ݷ�ΧΪ1-1000
int a[MAXN],b[MAXN];
bool cmp(int a,int b) {//�����������
	return a > b;
}
int main() {
	int n,m,l,r,k;
	cin>>n;
	for(int i = 1;i <= n;i++) cin>>a[i];
	cin>>m;
	while(m--) {
		cin>>l>>r>>k;
		int cnt = 1;//ѡȡ��Χ�ڵ����ݣ�Ȼ������
		for(int i = l;i <= r;i++,cnt++) b[cnt] = a[i];
		sort(b+1,b+cnt,cmp);//����
		cout<<b[k]<<'\n';//�ҵ�k����Ϊ��k��
	}
	return 0;
}
