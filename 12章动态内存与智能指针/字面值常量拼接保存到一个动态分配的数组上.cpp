#include"../header.cpp" 
int main()
{
//	char a[10]="hello";
//	char b[10]="world";
//	char *cp=new char[20];
//	cp=strcat(a,b);
//	cout<<cp;
	string a("hello");
	string b("world");
	string *cp=new string(a+b);
	cout<<*cp;
	delete cp;
	return 0;
}
