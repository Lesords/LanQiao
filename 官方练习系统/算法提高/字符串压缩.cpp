#include<iostream>//ac
#include<string>
#include<map>
using namespace std;
int book[3000];
string s;
int main() {
	map<char,int> m;
	getline(cin,s);//��������,�������δ֪�ո񣡣���
	for(int i = 0;i < s.size();i++) {
		if(s[i]==' ') {//�ո���Ϊ1
			book[i] = 1;continue;
		}
		m[s[i]]++;//����++
		book[i] = m[s[i]];//���µ�ǰΪ����ĵ�n��
	}
	for(int i = 0;i < s.size();i++) {
		if(book[i]==1||book[i]==3||book[i]==6) cout<<s[i];
	}//1,3,6�ű����������
	cout<<endl;
	return 0;
}
