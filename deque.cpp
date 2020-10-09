#include"header.cpp"
int main()
{
	string a;
	cout<<"ÇëÊäÈëÒ»¸ö×Ö·û´®"<<endl;
	cin>>a;
	deque<char> de;
	for(auto cha:a){
		de.push_back(cha);
	} 
	for(auto cha=de.begin();cha!=de.end();++cha){
		cout<<*cha<<endl;
	} 
	return 0;
}
