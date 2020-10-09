#include<iostream>
#include<string>
#include<utility>
#include<vector>
using namespace std;
int main()
{
	string str;
	int i;
	vector<string,int> pa;
	while(cin>>str){
		cin>>i;
		pa.push_back(make_pair(str,i));
		
	}
	return 0;
}
