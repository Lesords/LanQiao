#include<iostream>//ac
#include<string>
using namespace std;
string s;
bool judge(int pos) {//�ж��Ƿ�Ϊһ�����ڴ�
	for(int i = pos;i < s.size();i++) {
		if(s[i]!=s[i%pos]) return false;
	}//�ӵڶ������ڴ�����ɨ�����һ�����ڴ��ж�
	return true;
}
int main() {
	cin>>s;
	int pos = 1,ans = s.size();//��ʼ��Ϊ�ַ�������
	while(pos < s.size()) {//Ѱ�ҵڶ������ڴ������
		if(s[pos]!=s[0]) pos++;//����㲻ͬ��++
		else {
			//����Ϊ���ڣ�����Ϊ���ȵ�����
			if(judge(pos)&&s.size()%pos==0) {
				ans = pos;break;
			}
			else pos++;
		}
	}
	cout<<ans;
	return 0;
}
