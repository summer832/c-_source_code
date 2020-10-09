#include"header.cpp"
vector<int>::iterator fun1(vector<int>::iterator b,vector<int>::iterator e,int a);
int main()
{
	vector<int> a={13,32,34,2,3};
	int v=2;
	vector<int>::iterator b=a.begin();
	vector<int>::iterator e=a.end();
	if(fun1(b,e,v)!=e){
		cout<<*b<<endl;
	}
	else{
		cout<<"Î´ÕÒµ½¸ÃÊý"<<endl; 
	}
	return 0;
}
vector<int>::iterator fun1(vector<int>::iterator b,vector<int>::iterator e,int a)
{
	while(b!=e){
		if(a==*b){
			return b;
		}
		++b;
	}
	return e;
}
