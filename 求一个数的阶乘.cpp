#include"header.cpp"
int factorial(int a);
int main()
{
	cout<<"������һ��Ҫ��׳˵���"<<endl;
	int a=0;
	cin>>a;
	cout<<"�����Ľ׳���"<<factorial(a)<<endl;
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
