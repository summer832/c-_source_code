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
	cout<<endl<<"共有"<<space<<"个空格在"<<str1<<"中"<<endl; 
	for(auto &c:str1){
		c=toupper(c);
	}
	cout<<str1<<endl;
	cout<<str1[str1.size()-1]<<endl;
	return 0;
}
 
