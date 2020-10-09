#include"header.cpp"
int main()
{	
	vector<pair<int,string>> vec;
	int i;
	string str;
	while(cin>>i&&cin>>str){
		vec.push_back(make_pair(i,str));
	}
	for(auto c:vec){
		cout<<c.first<<endl;
		cout<<c.second<<endl;
	}
	return 0;
	
}
