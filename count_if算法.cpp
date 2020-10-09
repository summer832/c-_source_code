#include"header.cpp"
int main()
{
	vector<string> words={"i","want","to","create","a","world","in","the","Internet","which","belongs","to","myself"};
	auto count=count_if(words.begin(),words.end(),[](const string & a)->bool{
		if(a.size()>=6){
			return true;
		}
		else{
			return false;
		}
		});
	cout<<count<<endl;
	return 0;
}
