#include"header.cpp"
int main()
{
	int ia[3][4]={0};
	int i=0;
	for(auto p=begin(ia);p!=end(ia);++p){
		for(auto q=begin(*p);q!=end(*p);++q){
			*q=i;
			++i;
		}
	}
	for(auto p=begin(ia);p!=end(ia);++p){
		for(auto q=begin(*p);q!=end(*p);++q){
			cout<<*q<<'\t';
		}
		cout<<endl;
	}
	
	
 } 
