#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string str1;
	cout<<"������һ�����������ŵ��ַ���"<<endl;
	getline(cin,str1);
	string str2;
	for(auto &c:str1){
		if(!ispunct(c)){
			str2+=c;
		}
	}
	cout<<str2<<endl;
	return 0;
 } 
