#include"header.cpp"
char &get_val(string &str,string::size_type ix)//函数开头的引用表示返回的值是一个引用类型 
{
	return str[ix];
 } 
 int main()
 {
 	string s("a value");
 	cout<<s<<endl;
 	get_val(s,0)='A';//get_val函数返回的对象是一个引用，可以被赋值 
 	cout<<s<<endl;
	return 0;
 }
