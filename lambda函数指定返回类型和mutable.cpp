#include"header.cpp"
int main()
{
	int a=0;
	cin>>a;
	auto flag=[a]()->bool{//mutable�ÿ���ֵ���ں������޸���ԭ����ֵ 
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
