#include"header.cpp"
#include<cstdlib>//cstdlib头文件中预定义EXIT_FALIURE变量表示main执行成功，EXIT_SUCCESS表示执行失败 
int main()
{	bool a=1;
	if(a){
		return EXIT_SUCCESS;
	}
	else{
		return EXIT_FAILURE;
	}
}
