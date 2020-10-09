#include"header.cpp"
#include<algorithm>//大多数算法定义在该头文件中 
int main()
{
	vector<int> algori={1,2,32,31,3,5,6,5,3,2,6,8,9,7,0,5,3,4,6,3,4,2,1,4,6,7,4,5};
	auto iter=algori.begin();
	int num=count(begin(algori),end(algori),2);
	cout<<num<<endl;
	
 } 
