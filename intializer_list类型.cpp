#include"header.cpp"
#include<initializer_list>//��������ʵ������δ֪����ȫ��ʵ�ε����Ͷ���ͬʱʹ��initializer_list���͵��β�
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
