#include"header.cpp"
int main()
{
	istream_iterator<int> is_iter(cin),eof;
	vector<int> vec;
	while(is_iter!=eof){
		vec.push_back(*is_iter++);
	} 
	sort(vec.begin(),vec.end());
	ostream_iterator<int> os_iter(cout,"\t");
	for(auto c=vec.begin();c!=vec.end();++c){
		os_iter=*c;
	}
	return 0;
	
 } 
