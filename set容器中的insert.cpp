#include"header.cpp"
int main()
{
	vector<int> vec={1,2,3,4,1,2,3,4};
	set<int> myset;
	myset.insert(vec.cbegin(),vec.cend());
	myset.insert({5,6,7,8,5,6,7,8});
	for(auto c:myset){
		cout<<c<<endl;
	}
	return 0;
 } 
