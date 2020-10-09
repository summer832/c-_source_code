#include"header.cpp"
int main()
{
	vector<int> a={1,2,3,4,5,6,7,8,9,10};
	vector<int>::iterator b;
	for(auto b=a.begin();b!=a.end();++b){
		*b%2==1?*b=2**b:*b; 
	}
	for(auto b=a.begin();b!=a.end();++b){
		cout<<*b<<endl;
		
	}
	return 0;
 } 
