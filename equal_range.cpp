#include"header.cpp"
int main()
{
	multimap<string,string> author_book={{"余华","活着"},{"余华","许三观卖血记"},{"王小波","黄金时代"}};
	auto search_item="余华";
	for(auto pos=author_book.equal_range(search_item);pos.first!=pos.second;++pos.first){
		cout<<pos.first->second<<endl;
	}
	return 0;
}
