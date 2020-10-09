#include"header.cpp"
#include<initializer_list>//当函数的实参数量未知但是全部实参的类型都相同时使用initializer_list类型的形参
int sum(initializer_list<int> a);
int main()
{
	initializer_list<int> a{1,23,4,5,2};
	cout<<sum(a); 
 } 
 int sum(initializer_list<int> a)
 {	int summary=0;
 	for(const auto b:a){
 		summary+=b;
	 }
	 return summary;
 }
