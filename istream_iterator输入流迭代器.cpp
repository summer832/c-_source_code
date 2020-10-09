#include"header.cpp"
int main()
{
	istream_iterator<string> is_iter(cin),eof;
	vector<string> vec;
	while(is_iter!=eof){
		vec.push_back(*is_iter++);
	}
	for(auto c:vec){
		cout<<c<<endl;
	}
	return 0;
}
