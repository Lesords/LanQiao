#include<iostream>//ac
using namespace std;
int main() {//0Ҳ�㣬���Դ�1000��ʼ����
	for(int i = 1000;i <= 9876;i++) {
		int ans = i%10 + i/10%10 + i/100%10 + i/1000;
		if(ans==10) cout<<i<<endl;
	}
	return 0;
}
