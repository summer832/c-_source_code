#include"header.cpp"
#include<cassert>//����assertԤ������NDEBUGԤ������� 
//#define NDEBUG;����NDEBUG�����رյ���״̬
int main() 
{
	#ifndef NDEBUG
		cerr<<"Error: "<< __FILE__<<"in "<< __func__<<"at "<< __LINE__<<endl;
		cerr<<"in "<< __DATE__<<endl;
		cerr<<"at "<< __TIME__<<endl;
	#endif
	return 0; 
}
 
