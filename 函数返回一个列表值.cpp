#include"header.cpp"
vector<string> process(const string &expected,const string & actual);
int main()
{
	vector<string> result=process("j;ads","afk");
	vector<string>::iterator a;
	cout<<result[0];
//	for(auto &b=result.begin();b!=result.end();++b){
//		cout<<b; 
//	} 
 } 
 vector<string> process(const string &expected,const string &actual)
 {
 	if(expected.empty()){
 		return {};
	 }
	else if(expected==actual){
		return {"functionX","okay"};
	}
	else{
		return {"functionX",expected,actual};
	}
 }
