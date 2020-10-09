#include"header.cpp"
int main()
{
	vector<int> vec={1,2,3,4,5,6,7,8,9};
	vector<int> cvec1(vec.size()),cvec2(vec.size()),cvec3(vec.size());
	copy(vec.begin(),vec.end(),front_inserter(cvec1));//back_inserter创建一个使用push_back的迭代器 
	copy(vec.begin(),vec.end(),back_inserter(cvec2));//front_inserter创建一个使用push_front的迭代器 
	copy(vec.begin(),vec.end(),inserter(cvec3,cvec3.begin()));//inserter元素将被插入到给定迭代器所表示的元素之前
	for(auto c:cvec1){
		cout<<c<<'\t';	}
	cout<<endl;
	for(auto c:cvec2){
		cout<<c<<'\t';
	} 
	cout<<endl;
	for(auto c:cvec3){
		cout<<c<<'\t';
	} 
	cout<<endl;
	return 0;
}
