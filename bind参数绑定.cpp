#include"header.cpp"
#include<functional>//bind�����ڴ�ͷ�ļ��� 
using namespace placeholders;//����_n��������placeholders�������ռ��� 
bool check_size(const string &s,string::size_type sz);
int main()
{
	string str="Hello,world";
	vector<int> lis={2,3,4,5,6,7,8,9,10,11,12,13,14};
	auto check10=bind(check_size,str,_1);
	for(auto iter=lis.begin();iter!=lis.end();++iter){
		if(check10(*iter)){
			cout<<"��һ������string������"<<*iter<<endl;
			break; 
		}
	}
	return 0;
 } 
bool check_size(const string &s,string::size_type sz)
{
	return sz>s.size();
}
