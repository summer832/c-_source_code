#include"header.cpp"
int main()
{
	char ca1[]={'c','+','+',' '};
	char ca2[]={'i','s', ' ','s','o',' ','e','a','s','y'};
	char ca3[30];
	cout<<ca1<<endl;
	strcpy(ca3,ca1);
	string str1{"hello world"}; 
	cout<<strcat(ca3,ca2)<<endl;
	const char *str=str1.c_str();
	for(auto c:*str){
		cout<<c;
	}
	return 0;
}
