#include"header.cpp"
int main()
{
	map<string,size_t> word_count;
	string word;
	while(cin>>word){
		++word_count[word];//提取word的计数器并加一 
	}
	for(const auto &w:word_count){
		cout<<w.first<<"出现"<<w.second<<((w.second>1)? " times":" time");
		cout<<endl;
	}
	return 0;
 } 
