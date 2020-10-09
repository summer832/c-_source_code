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
			cout<<"两个向量对象不相等"<<endl;
			return 0;
		}
	}
	cout<<"两个向量对象相等"<<endl;
	return 0;
	
 } 
