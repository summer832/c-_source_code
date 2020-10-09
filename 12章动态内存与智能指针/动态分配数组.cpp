#include"../header.cpp"
int main()
{
	string str;
	cin>>str;
	char *cp=new char[str.size()+1];
	strcpy(cp,str.c_str());
	cout<<cp;
	delete [] cp;
	return 0;
}
