#include"header.cpp"
//void pocess(shared_ptr<int> ptr)
//{
//	
//}
int main()
{
//	shared_ptr<int> o=0;
//	auto p=new int(0);
//	pocess(shared_ptr<int>(p));//��λ��ʹ��shared_ptr<int>��ת����ʹp���ͷţ��ٴ�����p������δ������� 
//	cout<<*p;
	int *pi2=new int(2034);
	typedef unique_ptr<int> Intp;
	Intp p2(pi2);
	Intp p5(p2.get());
	return 0;
	
 } 
