#include"header.cpp"
int factorial(int a);
int main()
{
	cout<<"请输入一个要求阶乘的数"<<endl;
	int a=0;
	cin>>a;
	cout<<"该数的阶乘是"<<factorial(a)<<endl;
	return 0;
	
}
int factorial(int a)
{
	int res=1;
	while(a>1){
		res*=a;
		a--;
	}
	return res;
}
