#include"header.cpp"
class Sale_data{//聚合类，所有成员为public，没有构造函数、类内初始值、基类、virtual函数 
	public:
		double price;
		int amount;
		std::string isbn;
};
int main()
{	
	Sale_data book1;
	book1={23.2,2,"ana"};
 } 
