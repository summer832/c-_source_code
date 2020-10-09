#include"header.cpp"
int main()
{
	int ia[3][4]={0,2,3,1,4,2};
	for(int (*p)[4]=ia;p!=ia+3;++p){
		for(int *q=*p;q!=*p+4;++q){
			cout<<*q<<'\t';
		}
		cout<<endl;
	}
	return 0;
}
