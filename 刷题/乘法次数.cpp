#include<iostream>//ac
#include<cmath>
using namespace std;
int main() {
	int n,tmp,ans;
	cin>>n;
	for(int i = 1;i <= n;i++) {
		cin>>tmp;
		ans = 0;
		//�Ӵ�С�ж��Ƿ���Ҫ��
        while(tmp!=1) {//1�Ļ�����Ҫ����
        	ans += tmp%2?2:1;
			//ż���Ļ�ֻ��Ҫ��һ��
        	//�����Ļ���Ҫ�����һ��(��λ�� ��λ*2)
        	tmp >>= 1;//��2
        }
        cout<<ans<<endl;
	}
	return 0;
}
