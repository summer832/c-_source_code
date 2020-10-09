#include"header.cpp"
int main()
{
	list<int> lis={0,3,2,4,2,3,4,0,4,29};
	auto last=find(lis.rbegin(),lis.rend(),0);
	*last=199;
	for(auto c:lis){
		cout<<c<<endl;
	} 
	return 0;
}
