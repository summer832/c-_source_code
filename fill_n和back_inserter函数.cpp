#include"header.cpp"
int main()
{
	vector<int> vec;//fill_n(dest,n,val)dest指向一个元素，之后至少包含n个元素，被赋值为val，若对空容器那么这么使用是错误的 
	fill_n(back_inserter(vec),10,0); //back_inserter函数创建一个插入迭代器，向容器中添加元素 
 } 
