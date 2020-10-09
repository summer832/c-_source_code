#include"header.cpp"
int main()
{
	vector<int> a;
	int c;
	while(cin>>c){
		a.push_back(c);
		
	}
	for(auto it=a.begin();it!=a.end();++it){
		*it=2*(*it);
	}
	for(auto d:a){
		cout<<d<<endl;
	}
//	int n=1;
//	cout<<a.begin()+n;
	return 0;
}
