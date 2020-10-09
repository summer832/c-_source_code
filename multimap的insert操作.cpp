#include"header.cpp"
int main()
{
	multimap<string,string> name;
	string first_name,last_name;
	while(cin>>first_name&&cin>>last_name){
		name.insert({first_name,last_name});
	}
	for(auto c:name){
		cout<<c.first<<" "<<c.second<<endl;
	}
	return 0;
}
