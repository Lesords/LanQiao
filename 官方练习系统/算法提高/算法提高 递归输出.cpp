#include<iostream>//ac
#include<string>
using namespace std;
void solve(string n) {
	if(n.size()==0) return;//Ϊ��ʱ����
	cout<<n[0]<<'-';//�����һλ�� '-'
	n.erase(0,1);//ɾ����һλ����
	solve(n);
}
int main() {
	string n;
	cin>>n;
	solve(n);
	return 0;
}
