#include"header.cpp"
void pocess(shared_ptr<int> ptr)
{
	
}
int main()
{
	shared_ptr<int> o=0;
	auto p=new int(0);
	pocess(shared_ptr<int>(p));//��λ��ʹ��shared_ptr<int>��ת����ʹp���ͷţ��ٴ�����p������δ������� 
	cout<<*p;
	return 0;
	
 } 
