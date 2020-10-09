#include"header.cpp"
int main()
{
	vector<int> vec={1,2,3,4,5,6,7,8,9};
	list<int> lis;
	ostream_iterator<int> out(cout," ");
	copy(vec.begin(),vec.end(),out);
	cout<<"vec中的元素为"<<endl;
	auto en=vec.rbegin()-2;
	auto be=vec.rend()+3;
	while(en!=be){
		lis.push_back(*en);
		++en; 
	}
	copy(lis.begin(),lis.end(),out);
	cout<<"lis中的元素有"<<endl;
	
//	auto c=vec.rbegin();
//	copy(vec.begin(),vec.end(),lis.begin());
//	for(auto a:lis){
//		cout<<a<<endl;
//	}
	return 0;
}
