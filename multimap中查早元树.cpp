#include"header.cpp"
int main()
{
	multimap<string,string> author_book={{"wangxiaobo","hjsd"},{"yuhua","huozhe"}};
	string search_iterm("yuhua");
	auto number=author_book.count(search_iterm);
	auto iter=author_book.find(search_iterm); 
	while(number){
		cout<<iter->first<<" "<<iter->second<<endl;
		++iter;
		--number;
	}
	return 0;
}
