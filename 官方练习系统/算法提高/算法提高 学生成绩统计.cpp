#include<iostream>//ac
#include<algorithm>
using namespace std;
struct node{
	string name;
	double score;//ֻ��Ҫ�ж��ܷ�
	friend bool operator < (node a, node b) {
		return a.score < b.score;
	}
}ans[1005];
int main() {
	int n,num;
	double a,b,c;
	cin>>n;
	for(int i = 1;i <= n;i++) {
		cin>>ans[i].name>>num>>a>>b>>c;
		ans[i].score = a+b+c;
	}
	sort(ans+1,ans+n+1);//���ܷ���������
	cout<<ans[n].name<<endl<<ans[1].name;
	return 0;
}
