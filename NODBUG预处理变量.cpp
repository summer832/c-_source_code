#include"header.cpp"
#include<cassert>//包含assert预处理宏和NDEBUG预处理变量 
//#define NDEBUG;定义NDEBUG用来关闭调试状态
int main() 
{
	#ifndef NDEBUG
		cerr<<"Error: "<< __FILE__<<"in "<< __func__<<"at "<< __LINE__<<endl;
		cerr<<"in "<< __DATE__<<endl;
		cerr<<"at "<< __TIME__<<endl;
	#endif
	return 0; 
}
 
