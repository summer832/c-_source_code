#include<iostream>
using namespace std;
int main()
{
	int current_val=0,val=0;
	if(cin>>current_val){
		int cnt=1;//ͳ�Ƴ��ִ��� 
		while(cin>>val){
			if(val==current_val){
				++cnt;
			}
			else{
				cout<<current_val<<"����"<<cnt<<endl;
			cnt=1;
			current_val=val;}
		}
	cout<<current_val<<"����"<<cnt<<endl;
	}
	return 0;
 } 
