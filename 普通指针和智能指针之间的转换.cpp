#include"header.cpp"
void pocess(shared_ptr<int> ptr)
{
	
}
int main()
{
	shared_ptr<int> o=0;
	auto p=new int(0);
	pocess(shared_ptr<int>(p));//该位置使用shared_ptr<int>来转换会使p被释放，再次引用p会引发未定义错误 
	cout<<*p;
	return 0;
	
 } 
