#include<iostream>//ac
#include<string>
#include<map>
using namespace std;
int main() {
	map<string,char> male;
	int n,m;
	string name,age;
	char sex;
	cin>>n;
	for(int i = 1;i <= n;i++) {
		cin>>name>>age>>sex;
		male[name] = male[age] = sex;//ͨ�����ֺ�ѧ�������Ա�
	}
	cin>>m;
	while(m--) {
		cin>>name>>age;//���������ַ������жϿɷ���Թ���
		if(male[name]!=male[age]) cout<<"Y\n";//�Ա�ͬ�ɹ���
		else cout<<"N\n";
	}
	return 0;
}
