#include<iostream>//ac
using namespace std;
const int MAXN = 1e4 + 5;
int a[MAXN];
int main() {
	int n,cnt = 0,num = 0,pos = 0;
	cin>>n;
	while(cnt!=n-1) {//ֻ����һ��ʱ���˳�
		pos = pos%n+1;//�ƶ�λ�ã�����
		if(a[pos]) continue;//�����˳�Ȧ�ӵ�
		num++;//����
		if(num==3) {//����Ϊ3ʱ���˳�������
			num = 0,a[pos] = 1,cnt++;
		}//cnt��ʾ��Ȧ����
	}
	for(int i = 1;i <= n;i++) if(!a[i]) {//�ҵ�û��Ȧ�ļ�Ϊ��
		cout<<i<<endl;break;
	}
	return 0;
}
