#include"header.cpp"
int main()
{
	int a=0;
	cin>>a;
	auto flag=[a]()->bool{//mutable让拷贝值能在函数中修改其原对象值 
		if(a==0){
			return true;
		}
		else{
			while(a!=0){
				--a;
			}
			return false;
		}
	};
	cout<<a<<endl;
	cout<<flag();
	return 0;
 } 
