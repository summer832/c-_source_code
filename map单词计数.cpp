#include"header.cpp"
int main()
{
	map<string,size_t> word_count;
	string word;
	while(cin>>word){
		++word_count[word];//��ȡword�ļ���������һ 
	}
	for(const auto &w:word_count){
		cout<<w.first<<"����"<<w.second<<((w.second>1)? " times":" time");
		cout<<endl;
	}
	return 0;
 } 
