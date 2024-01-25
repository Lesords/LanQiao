#include<iostream>//ac
#include<queue>
using namespace std;
int main() {
	int n,op,a;
    queue<int> q;
	cin>>n;
	while(n--) {
		cin>>op;
		if(op==1) {
			cin>>a;
			q.push(a);
		}
		else if(op==2) {
			if(q.size()==0) {
				cout<<"no"<<endl;
				break;
			}
			cout<<q.front()<<endl;
			q.pop();
		}
		else cout<<q.size()<<endl;
	}
	return 0;
}
