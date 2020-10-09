#include"header.cpp"
int main()
{
	list<string> words={"hello","a y","world"};
	words.sort();
	words.unique();
	for(auto c:words){
		cout<<c<<endl;
	}
	return 0;
}
