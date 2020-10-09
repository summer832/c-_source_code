#include"header.cpp"
string test();
int main(int a,char** b)
{
	int ia[10]={0};
	string b={"hello world"};
	cout<<test(b);//无法正常输出，因为test函数内返回对象为局部变量的引用，在函数运行结束后局部变量被销毁所以无法返回 
	//print(ia);
}
string &test(stirng &a)
{
	//string s;
	if(!a.empty()){
		return a; 
	}
	return a;
}
