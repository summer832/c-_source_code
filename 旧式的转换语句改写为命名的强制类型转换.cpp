#include"header.cpp"
int main()
{	char a;
	int i;
	double d;
	const string *ps;
	char *pc=&a;
	void *pv;
	pv=static_cast<void*>(const_cast<string*>(ps));
	i=static_cast<int>(*pc);
	pv=static_cast<void*>(&d);
	pc=static_cast<char*>(pv); 
		return 0;
}

