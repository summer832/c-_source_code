#include"header.cpp"
#include<stdexcept>//定义几种常用的异常类 
int main()
{
	int a,b;
	cin>>a>>b;
	try{
		if(b==0){
			throw(0);
		}
	}
	catch(int){//catch括号中一般写异常信息的类型名 
		cout<<"被除数不能为0"; 
	}
	cout<<a/b<<endl;
	return 0;
 } 
