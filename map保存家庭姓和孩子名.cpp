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
	map<string,vector<string>> famliy={{"��",{"��1","��2"}}};
	string first_name,last_name;
	bool flag=true;
	while(flag){
		cout<<"����1����¼�ͥ������2Ϊ���м�ͥ��Ӻ�����"<<endl;
		int operat=0;
		cin>>operat;
	//	string first_name,last_name;
		if(operat==1){
			
			cout<<"��������"<<endl;
			cin>>first_name;
			cout<<"�����뺢������"<<endl;
			while(cin>>last_name){
				if(last_name=="EOF"){
					break;
				}
				famliy[first_name].push_back(last_name);
			}
		}
		else{
			cout<<"��������"<<endl;
			cin>>first_name;
			cout<<"������Ҫ��ӵ�����"<<endl;
			while(cin>>last_name){
				if(last_name=="EOF"){
					break;
				}
				famliy[first_name].push_back(last_name);
			}
		} 
		cout<<"Ҫ�������������1��������������0";
		int sign=0;
		cin>>sign;
		if(sign==0){
			flag=0;
		}
	}
	for(const auto c:famliy){
		cout<<"��ͥ"<<c.first<<"�к���Ϊ";
		for(const auto a:c.second){
			cout<<a<<'\t';
		} 
		cout<<endl;
	}
 } 
