#include"header.cpp"
void biggers(vector<string> &words,vector<string>::size_type sz);
int main()
{
	vector<string> words={"hewo","world","i","am","gonna","to","change","this","world"};
	biggers(words,9);
	for(auto c:words){
		cout<<c<<endl;
	}
	return 0;
}
void biggers(vector<string> &words,vector<string>::size_type sz)
{
	sort(words.begin(),words.end());
	auto middle=unique(words.begin(),words.end());
	words.erase(middle,words.end());
	stable_sort(words.begin(),words.end(),[](const string &a,const string &b){return a.size()<b.size();
	});
	auto wc=find_if(words.begin(),words.end(),[sz](const string& a){return a.size()>=sz;
	});
	auto count=words.end()-wc;
	for_each(wc,words.end(),[](const string & s){cout<<s<<" ";
	});
	cout<<endl;
	
}
