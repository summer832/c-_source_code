#include"header.cpp"
int main()
{
	vector<int> a{1,2,4};
	vector<int> b{1,2,3};
	vector<int>::iterator av,bv;
	av=a.begin();
	bv=b.begin();
	while(av!=a.end()&&bv!=b.end()){
			++av;
			++bv;
		if(*av!=*bv){
			cout<<"���������������"<<endl;
			return 0;
		}
	}
	cout<<"���������������"<<endl;
	return 0;
	
 } 
