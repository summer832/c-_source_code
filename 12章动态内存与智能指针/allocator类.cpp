#include"../header.cpp" 
int main()
{	string s;
	allocator<string> alloc;
	size_t t=8;
	auto p=alloc.allocate(t);//����n��δ��ʼ����string���Զ�ȷ��ǡ�����ڴ��С�Ͷ���λ�ã�
	auto q=p;
	while(q!=p+t&&cin>>s){
		alloc.construct(q++,s);
	}	 
	while(q!=p){	
		alloc.destroy(--q);//ִ����������
	}

	alloc.deallocate(q,t);//�ͷŴ�p��ʼ��n����ַ��
	return 0; 
 } 
