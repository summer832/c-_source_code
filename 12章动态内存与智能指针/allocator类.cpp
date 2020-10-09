#include"../header.cpp" 
int main()
{	string s;
	allocator<string> alloc;
	size_t t=8;
	auto p=alloc.allocate(t);//分配n个未初始化的string（自动确定恰当的内存大小和对齐位置）
	auto q=p;
	while(q!=p+t&&cin>>s){
		alloc.construct(q++,s);
	}	 
	while(q!=p){	
		alloc.destroy(--q);//执行析构函数
	}

	alloc.deallocate(q,t);//释放从p开始的n个地址；
	return 0; 
 } 
