#include<iostream>//ac
#include<algorithm>
#include<map>
using namespace std;
struct node {
	int val,num;
	friend bool operator < (node a,node b) {
		if(a.num==b.num) return a.val<b.val;
		return a.num > b.num;
	}
}a[100];
int main() {
	int n,pos = 1,tmp;
	map<int,int> m;//�����Ӧ�����±�
	cin>>n;
	if(n<=0) return 0;//�и������
	for(int i = 1;i <= n;i++) {
		cin>>tmp;
		if(m[tmp]==0) {//��һ�γ���
			m[tmp] = pos;//�����±�
			a[pos].val = tmp;//��Ӧֵ
			a[pos].num = 1;//��Ӧ����
			pos++;
		}
		a[m[tmp]].num++;//��������
	}
	sort(a+1,a+pos);
	cout<<a[1].val;
	return 0;
}
