#include<iostream>//ac
#include<cmath>
using namespace std;
int main() {
	int tmp,maxx = -2,x,y;//�������ֵΪ0
	for(int i = 1;i <= 3;i++) {
		for(int j = 1;j <= 4;j++) {
			cin>>tmp;
			if(abs(tmp)>maxx) {//��ȵĲ���Ҫ���£�����
				maxx = abs(tmp);//ȡ����ֵ������
				x = i,y = j;
			}
		}
	}
	cout<<maxx<<' '<<x<<' '<<y;
	return 0;
}
