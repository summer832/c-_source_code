#include"header.cpp"
int main()
{
	vector<int> a(10);
	for(auto c:a){
		cin>>c;
		a.push_back(c);
	}
	int sought;
	cout<<"������Ҫ���ҵ���"<<endl;
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
		cout<<"δ�ҵ�����"<<endl;
	}
	if(*mid==sought){
		cout<<"���ҵ�����"<<endl; 
	}
	return 0;
}

