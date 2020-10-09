#include"header.cpp"
int main()
{
	map<string,size_t> word_count;
	string word;
	while(cin>>word){
		auto ret=word_count.insert({word,1});
		if(!ret.second){
			++ret.first->second;
		}
	} 
	for(auto c:word_count){
		cout<<c.first<<" "<<c.second<<endl;
	}
	return 0;
}
