#include"header.cpp"
bool fun(const string);//�ж�һ���ַ����Ƿ����5���ַ� 
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
