#include<iostream>//ac
#include<cstdio>
#include<algorithm>
using namespace std;

//��⣺�������ε��ཻ�����(������-�ڶ���)*(������-�ڶ���)

//�ж����������Ƿ��ཻ�ķ���
//���ж� ǰ���� �Ŀ�ͳ��Ƿ�Ϊһ������
//�������ж� ������ �Ŀ�ͳ��Ƿ�Ϊһ������

struct node{
	double val;
	int num;//���Ϊ�ڼ�������
	friend bool operator < (node a,node b) {
		return a.val < b.val;//����
	}
}x[5],y[5];
int main() {
	for(int i = 1;i <= 2;i++) {
		cin>>x[i].val>>y[i].val;
		x[i].num = y[i].num = 1;//��Ǿ��κ�
	}
	for(int i = 3;i <= 4;i++) {
		cin>>x[i].val>>y[i].val;
		x[i].num = y[i].num = 2;//��Ǿ��κ�
	}
	sort(x+1,x+5);
	sort(y+1,y+5);
	if(x[2].num!=x[1].num&&y[2].num!=y[1].num) //�������
		printf("%.2f",(x[3].val-x[2].val)*(y[3].val-y[2].val));
	else cout<<"0.00";
	return 0;
}
