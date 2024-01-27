#include<iostream>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;
struct node{
	int x,y,step;
};
char s[50][60];
int goo[4][2] = {1,0,0,-1,0,1,-1,0};
int nextt[4][2] = {0,1,0,-1,1,0,-1,0};
char op[4] = {'L','R','U','D'};
int vis[50][60];
int main() {
	for(int i = 1;i <= 30;i++) cin>>s[i]+1;
	/*for(int i = 1;i <= 30;i++) {
		for(int j = 1;j <= 50;j++) cout<<s[i][j];
		cout<<endl;
	}*/
	queue<node> q;
	q.push({1,1,0});
	vis[1][1] = 1;
	while(!q.empty()) {
		node tmp = q.front();q.pop();
		if(tmp.x==30&&tmp.y==50) {
			cout<<tmp.step<<endl;
			break;
		}
		for(int i = 0;i < 4;i++) {
			int tx = tmp.x+goo[i][0];
			int ty = tmp.y+goo[i][1];
			if(tx<1||tx>30||ty<1||ty>50) continue;
			if(vis[tx][ty]||s[tx][ty]=='1') continue;
			vis[tx][ty] = tmp.step+1;
			q.push({tx,ty,tmp.step+1});
		}
	}
	vis[1][1] = 0;
	while(!q.empty()) q.pop();
	stack<char> sta;
	cout<<vis[30][50]<<endl;
	q.push({30,50,vis[30][50]});
	int step=vis[30][50];
	int x = 30,y = 50;
	while(step) {
		if(x==1&&y==1) break;
		for(int i = 0;i < 4;i++) {
			int tx = x+nextt[i][0];
			int ty = y+nextt[i][1];
			if(tx<1||tx>30||ty<1||ty>50||s[tx][ty]=='1') continue;
			//if(vis[tx][ty]==-1) continue;
			if(vis[tx][ty]+1!=step) continue;
			sta.push(op[i]);
			x = tx,y = ty;
			step--;
			cout<<tx<<" "<<ty<<endl;
		}
	}
	cout<<"------------\n";
	cout<<sta.size()<<endl;
	while(!sta.empty()) {
		cout<<sta.top();
		sta.pop();
	}
	return 0;
}
