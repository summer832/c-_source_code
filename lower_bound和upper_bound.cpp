#include"header.cpp"
int main()
{
	multimap<string,string> author_book={{"�໪","����"},{"�໪","��������Ѫ��"},{"��С��","�ƽ�ʱ��"}};
	auto search_item="�໪";
	for(auto beg=author_book.lower_bound(search_item),end=author_book.upper_bound(search_item);beg!=end;++beg){
		cout<<beg->second<<endl;
		
	}
	return 0;
}
