#include<iostream>
#include<cstdio>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
const int MAXN = 1e3+5;
struct node{
	int num,val;//��¼ѭ����������������ѭ������
};
string s[MAXN];
int num[MAXN];//��¼��ǰ�е���������
int main() {
	freopen("in.txt","r",stdin);
	int cnt = 0;
	string tmp;
	while(getline(cin,tmp)) {
		s[++cnt] = tmp;
	}
	//for(int i = 1;i <= cnt;i++) cout<<s[i]<<endl;
	
	for(int i = 2;i <= cnt;i++) {//����ڶ����Ժ����������
		for(int j = 0;j < s[i].size();j++) {
			if(s[i][j]!=' ') {
				num[i] = j;//��Ϊ�ո��λ�ü�Ϊ�ո��������0��ʼ��
				break;
			}
		}
	}
	//for(int i = 1;i <= cnt;i++) cout<<num[i]<<endl;

	int a = 0,sum = 1;//sum��ʾ���ڵ�ǰ�Ӳ�����ѭ������
	stack<node> st;//ջ������ʷѭ������
	for(int i = 2;i <= cnt;i++) {
		char op = s[i][num[i]];//��ȡ���ַ��жϵ�ǰ��ʲô����
		int len = s[i].size()-2;//ѭ���������ֵ��±�
		if(op=='R') {//ѭ�����ʱ
			int val = s[i][len]-'0';//��ȡѭ������
			if(!st.empty()) {//���ջ��Ϊ�գ���ǰ����ѭ�����
				node dot = st.top();
				if(dot.num==num[i]) {//��ǰ�������һ��ѭ����䲢�У�����
					sum /= dot.val;//ȥ����Чѭ���Ĵ���������
					st.pop();
				}
			}
			sum *= val;//�������µ�ǰѭ���Ĵ���
			st.push(node{num[i],val});//������ǰ��¼
			//cout<<val<<endl;
		}
		else {//���Ӳ���
			int val = s[i][len+1]-'0';//�Ӳ���������λ����ѭ����䲻һ��������
			if(st.empty()) {//ǰ������Чѭ����ֱ�ӼӼ���
				a += val;continue;
			}
			node dot = st.top();
			if(num[i]==dot.num) {//��ǰ������һ��ѭ����䲢��
				sum /= dot.val;//ȥ����Чѭ������
				a += val*sum;//����a��ֵ
				st.pop();
				//cout<<val<<" "<<sum<<endl;
			}
			else {//����ѭ����
				a += val*sum;//����a��ֵ
			}
			//cout<<val<<endl;
		}
		//cout<<sum<<endl;
	}
	cout<<a<<endl;//241830
	return 0;
}
