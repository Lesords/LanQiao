#include<iostream>//ac
#include<cstring>
#include<string>
#include<cctype>
#include<algorithm>
#define all(x) (x).begin(),(x).end()
using namespace std;
string s;
void mex() {//��д��Сд��Сд���д
	for(int i = 0;i < s.size();i++) {
		if(s[i]>='a'&&s[i]<='z') s[i] = toupper(s[i]);
		else s[i] = tolower(s[i]);
	}
}
void shrink() {
	int l = 1;//�ӵڶ�λ�ÿ�ʼ����
	transform(all(s),s.begin(),::tolower);//��ͳһתСд
	while(l<s.size()) {//�����������
		if(l+1<s.size()&&s[l]==s[l-1]+1) {
			//��ǰ�ַ���ǰһ�ַ�����
			int tmp = l,num = 0;//num��ʾ���ж��ٸ������ַ�
			while(s[l+1]==s[l]+1) l++,num++;
			if(num) {//������������3(numΪ1)����Ҫ����
				s[tmp] = '-';//tmpΪ�ڶ��������ַ���λ��
				//�ܹ���num+2�������ַ����뱣�������ַ�
				//�򽫵ڶ����ַ��޸ĳ� '-'
				//Ȼ����ɾ�� num-1 ���ַ�
				s.erase(tmp+1,num-1);//tmp+1Ϊ��ʼ��
				l -= num-1;//����λ������� ɾ������ ����λ
			}
		}
		else l++;//������������
	}
}
int main() {
	int op;
	cin>>op>>s;
	switch(op) {
		case 1:transform(all(s),s.begin(),::toupper);break;
		case 2:transform(all(s),s.begin(),::tolower);break;
		case 3:reverse(all(s));break;//����
		case 4:mex();break;
		case 5:shrink();break;
	}
	cout<<s<<endl;
	return 0;
}
