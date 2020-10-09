#include"header.cpp"
int main()
{
	int arr[]={1,2,3,4};
	vector<int> ivec(begin(arr),end(arr));
	for(auto b:arr){
		cout<<b<<endl;
	}
	for(auto c:ivec){
		cout<<c<<endl;
	}
	return 0;
}
