#include<iostream>
#include<cctype> 
using namespace std;
int main()
{
//	char a='f';
//	cout<<ispunct(a);
	string str1="hello new world!";
	int space=0;
	for(auto c:str1){
		if(isspace(c)){
			space++;
		}
		cout<<c<<'\t';
	}
	cout<<endl<<"����"<<space<<"���ո���"<<str1<<"��"<<endl; 
	for(auto &c:str1){
		c=toupper(c);
	}
	cout<<str1<<endl;
	cout<<str1[str1.size()-1]<<endl;
	return 0;
}
 
