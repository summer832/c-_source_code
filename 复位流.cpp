#include"header.cpp"
istream & read(istream &);
int main()
{	read(cin);
	read(cin);
 }
 istream & read(istream & is)
 {	int a;
 	while(cin>>a){
 		cout<<a;
	 }
	 cin.clear();
	 return is;
  } 
