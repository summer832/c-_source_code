#include"header.cpp"
vector<string> shorter(vector<string> words);
bool isShorter(const string &s1,const string & s2);
int main()
{
	vector<string> words={"hello","world","hello","mydear"};
	sort(words.begin(),words.end());//sort排序算法
	auto end_unique=unique(words.begin(),words.end());//unique重排算法，把重复出现的元素放到末尾,返回第一个重复位置的迭代器
	words.erase(end_unique,words.end());//删除重复元素
	words=shorter(words);
	for(auto c:words){
		cout<<c<<endl; 
	}	
	return 0;
 } 
 vector<string> shorter(vector<string> words)
 {
 	stable_sort(words.begin(),words.end(),isShorter);//stable_sort按长度排序，相同长度按字典序
	return words; 
 }
 bool isShorter(const string & s1,const string & s2)
 {
 	return s1.size()<s2.size();
 }
