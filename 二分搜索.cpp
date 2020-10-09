#include"header.cpp"
int main()
{
	vector<int> a(10);
	for(auto c:a){
		cin>>c;
		a.push_back(c);
	}
	int sought;
	cout<<"请输入要查找的数"<<endl;
	cin>>sought;
	auto beg=a.begin();
	//cout<<a.begin();
	auto end=a.end();
	auto mid=a.begin()+(end-beg)/2;
	while(mid!=end&&*mid!=sought){
		if(sought<*mid){
			end=mid;
		}
		else{
			beg=mid+1; 
		}
		mid=beg+(end-beg)/2;
	}
	if(mid!=end){
		cout<<"未找到该数"<<endl;
	}
	if(*mid==sought){
		cout<<"能找到该数"<<endl; 
	}
	return 0;
}

