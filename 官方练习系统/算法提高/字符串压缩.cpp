#include<iostream>//ac
#include<string>
#include<map>
using namespace std;
int book[3000];
string s;
int main() {
	map<char,int> m;
	getline(cin,s);//整行输入,避免出现未知空格！！！
	for(int i = 0;i < s.size();i++) {
		if(s[i]==' ') {//空格设为1
			book[i] = 1;continue;
		}
		m[s[i]]++;//数量++
		book[i] = m[s[i]];//更新当前为代表的第n次
	}
	for(int i = 0;i < s.size();i++) {
		if(book[i]==1||book[i]==3||book[i]==6) cout<<s[i];
	}//1,3,6才保留，即输出
	cout<<endl;
	return 0;
}
