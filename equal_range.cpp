#include"header.cpp"
int main()
{
	multimap<string,string> author_book={{"�໪","����"},{"�໪","��������Ѫ��"},{"��С��","�ƽ�ʱ��"}};
	auto search_item="�໪";
	for(auto pos=author_book.equal_range(search_item);pos.first!=pos.second;++pos.first){
		cout<<pos.first->second<<endl;
	}
	return 0;
}
