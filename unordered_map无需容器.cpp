#include"header.cpp"
int main()
{
	unordered_map<string,int> myword;
	string word;
	while(cin>>word){
		++myword[word];
	}
	for(auto c:myword){
		cout<<c.first<<" "<<c.second<<endl;
	}
	return 0;
 } 
