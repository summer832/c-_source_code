#include"header.cpp"
#include<forward_list>
void fun1(forward_list<string>,string,string);
int main()
{
	forward_list<string> fl={"hello","world","future","hope"};
	string str1="world",str2="ajd";
	fun1(fl,str1,str2);
	for(auto i=fl.begin();i!=fl.end();++i){
		cout<<*i<<endl;
	}
	return 0;
	
}
void fun1(forward_list<string> fl,string str1,string str2)
{	bool flag=false;
	auto iter=fl.begin();
	while(iter!=fl.end()){
		if(*iter==str1){
			fl.insert_after(iter,str2);
			flag=true;
			break;
		}
		++iter;
	}
	if(!flag){
		
		fl.push_back(str2);
	}
}
