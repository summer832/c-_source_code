#include"header.cpp"
int main()
{
	vector<char> str1{'0','1','1'};
	vector<char> str2{'0','1','1','2'};
	cout<<strlen(str1)<<endl;
	for(auto a=str1.begin(),b=str2.begin();*a==*b&&*a!=*(str1.end()-1);++a,++b){
		cout<<"第一个对象不是第二个对象的前缀"<<endl;
		return 0; 
	} 
	cout<<"第一个对象是第二个对象的前缀"<<endl;
	return 0;
 } 
