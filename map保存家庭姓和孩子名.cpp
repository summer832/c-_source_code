#include<iostream>
#include<fstream> 
#include<vector>
#include<string>
#include<cstring>
#include<cctype>
#include<deque>
#include<list>
#include<iterator>
#include<algorithm>
#include<numeric>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
using namespace std; 
int main()
{
	map<string,vector<string>> famliy={{"张",{"张1","张2"}}};
	string first_name,last_name;
	bool flag=true;
	while(flag){
		cout<<"输入1添加新家庭，输入2为已有家庭添加孩子名"<<endl;
		int operat=0;
		cin>>operat;
	//	string first_name,last_name;
		if(operat==1){
			
			cout<<"请输入姓"<<endl;
			cin>>first_name;
			cout<<"请输入孩子名称"<<endl;
			while(cin>>last_name){
				if(last_name=="EOF"){
					break;
				}
				famliy[first_name].push_back(last_name);
			}
		}
		else{
			cout<<"请输入姓"<<endl;
			cin>>first_name;
			cout<<"请输入要添加的姓名"<<endl;
			while(cin>>last_name){
				if(last_name=="EOF"){
					break;
				}
				famliy[first_name].push_back(last_name);
			}
		} 
		cout<<"要继续添加请输入1，完成添加请输入0";
		int sign=0;
		cin>>sign;
		if(sign==0){
			flag=0;
		}
	}
	for(const auto c:famliy){
		cout<<"家庭"<<c.first<<"有孩子为";
		for(const auto a:c.second){
			cout<<a<<'\t';
		} 
		cout<<endl;
	}
 } 
