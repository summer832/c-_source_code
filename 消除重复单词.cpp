#include"header.cpp"
vector<string> shorter(vector<string> words);
bool isShorter(const string &s1,const string & s2);
int main()
{
	vector<string> words={"hello","world","hello","mydear"};
	sort(words.begin(),words.end());//sort�����㷨
	auto end_unique=unique(words.begin(),words.end());//unique�����㷨�����ظ����ֵ�Ԫ�طŵ�ĩβ,���ص�һ���ظ�λ�õĵ�����
	words.erase(end_unique,words.end());//ɾ���ظ�Ԫ��
	words=shorter(words);
	for(auto c:words){
		cout<<c<<endl; 
	}	
	return 0;
 } 
 vector<string> shorter(vector<string> words)
 {
 	stable_sort(words.begin(),words.end(),isShorter);//stable_sort������������ͬ���Ȱ��ֵ���
	return words; 
 }
 bool isShorter(const string & s1,const string & s2)
 {
 	return s1.size()<s2.size();
 }
