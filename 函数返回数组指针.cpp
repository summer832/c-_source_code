#include"header.cpp"
string (&p2())[10];//表示该函数返回数组的引用且该引用含有10个对象
typedef int arrT[10];//arrT是一个类型别名，表示的类型为含有10个整数的数组
arrT* funx(int i);//以arrT作为返回类型，表示该函数返回含有10跟整数的数组
auto func(int i)->int (*)[10];//位置返回类型，->表示函数真正的返回类型跟在形参列表之后
int arr[]={23,442,34};
decltype(arr) *arrPtr(int i);//decltype表示该函数的返回类型是含有3个整数的指针数组 
int main()
{
	
 } 
