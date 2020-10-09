#include"header.cpp"
#include<typeinfo> 
int main()
{
	int a=9,b=3;
	auto sum=[a,b]{return a+b;};
	cout<<sum();
	return 0;
	
 } 
