#include"header.cpp"
#include<functional>//bind定义在此头文件中 
using namespace placeholders;//名字_n都定义在placeholders的命名空间内 
bool check_size(const string &s,string::size_type sz);
int main()
{
	string str="Hello,world";
	vector<int> lis={2,3,4,5,6,7,8,9,10,11,12,13,14};
	auto check10=bind(check_size,str,_1);
	for(auto iter=lis.begin();iter!=lis.end();++iter){
		if(check10(*iter)){
			cout<<"第一个大于string的数是"<<*iter<<endl;
			break; 
		}
	}
	return 0;
 } 
bool check_size(const string &s,string::size_type sz)
{
	return sz>s.size();
}
