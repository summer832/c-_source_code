#include"header.cpp"
#include<stdexcept>//���弸�ֳ��õ��쳣�� 
int main()
{
	int a,b;
	cin>>a>>b;
	try{
		if(b==0){
			throw(0);
		}
	}
	catch(int){//catch������һ��д�쳣��Ϣ�������� 
		cout<<"����������Ϊ0"; 
	}
	cout<<a/b<<endl;
	return 0;
 } 
