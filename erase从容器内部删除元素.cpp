#include"header.cpp"
int main()
{
	int ia[]={0,1,1,2,3,5,8,13,21,55,89};
	vector<int> vec(ia,ia+11);
	list<int> li(ia,ia+11);
	auto cvec=vec.begin();
	//cout<<*cvec<<endl;
	while(cvec!=vec.end()){
		
		if(*cvec%2==0){
			cvec=vec.erase(cvec);
		}
		++cvec;
		
	}
	auto cli=li.begin();
	while(cli!=li.end()){
		if(*cli%2!=0){
			li.erase(cli);
		}
		++cli;
	}
	for(auto a=vec.begin();a!=vec.end();++a){
		cout<<*a<<endl;
	}
//	cout<<*vec.begin();
//	for(auto c:vec){
//		cout<<c<<endl;
//	}
//	for(auto c:li){
//		cout<<c<<endl;
//	}
	return 0;
}
