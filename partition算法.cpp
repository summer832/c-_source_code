#include"header.cpp"
bool fun(const string);//判断一个字符串是否大于5个字符 
int main()
{
	vector<string> words={"ejfjoa","ioref","if","iew","fji2o"};
	auto true_val=partition(words.begin(),words.end(),fun);
	auto be=words.begin();
	while(be!=true_val){
		cout<<*be<<endl;
		++be;
	}
	return 0;
 } 
 bool fun(const string s1)
 {
 	return s1.size()>5;
 }
