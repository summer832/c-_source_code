#include"header.cpp"
int main()
{
	multimap<string,string> author_book={{"余华","活着"},{"余华","许三观卖血记"},{"王小波","黄金时代"}};
	auto search_item="余华";
	auto number=author_book.count(search_item);
//	auto iter=author_book.find(search_item);
	while(number){
		auto iter=author_book.find(search_item);
		author_book.erase(iter);
		--number;
	
	}
	for(auto c:author_book){
		cout<<c.first<<" "<<c.second<<endl;
	}
	return 0;
 } 
