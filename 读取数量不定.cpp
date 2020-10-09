#include<iostream>
using namespace std;
int main()
{
	int sum=0,value=0;
	while(cin>>value){//以输入不为int型的数据作为结束，换行和空格不能结束 
		sum+=value;
	} 
	cout<<sum<<endl;
	return 0;
}
