#include"header.cpp"
int main()
{
	multimap<string,string> author_book={{"�໪","����"},{"�໪","��������Ѫ��"},{"��С��","�ƽ�ʱ��"}};
	auto search_item="�໪";
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
