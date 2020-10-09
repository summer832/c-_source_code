#include"header.cpp"
int myplus( void);
int main()
{
	for(int i=0;i<10;i++){
		cout<<myplus( )<<endl;
	}
	return 0;
 } 
 int myplus(void)
 {
 	static int digit=-1;
 	++digit;
 	return digit;
 	
 }
