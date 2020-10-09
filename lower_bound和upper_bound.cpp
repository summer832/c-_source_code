#include"header.cpp"
int main()
{
	multimap<string,string> author_book={{"余华","活着"},{"余华","许三观卖血记"},{"王小波","黄金时代"}};
	auto search_item="余华";
	for(auto beg=author_book.lower_bound(search_item),end=author_book.upper_bound(search_item);beg!=end;++beg){
		cout<<beg->second<<endl;
		
	}
	return 0;
}
