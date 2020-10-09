#include"header.cpp"
int main()
{
	vector<int> vec={1,2,3,4,5,6,7};
	for(auto c=vec.rbegin();c!=vec.rend();++c){
		cout<<*c<<'\t';
	}
	return 0;
}
