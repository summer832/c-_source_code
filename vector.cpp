#include<vector>
#include<string>
#include<iostream>
using namespace std;
int main()
{
//	vector<string> T(10,"is"); 
//	vector<int> a{1,4,3,21,13};
//	vector<string> a;
//	string c; 
//	while(cin>>c){
//		a.push_back(c);
//		 
//	}
////	cout<<a<<endl;
//	for(auto c:a){
//		cout<<c<<endl;
//	}
	vector<int> score(11,0);
	unsigned grade;
	while(cin>>grade){
		if(grade<=100){
			++score[grade/10];
		}
		else{
			cout<<"输入分数有误"<<endl;
		}
	}
	for(auto c:score){
		cout<<c<<'\t';
	}
	return 0;
 } 
