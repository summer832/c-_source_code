#include"header.cpp"
vector<string> read(vector<string> str); 
int main()
{
	vector<string> str1,str2;
	cout<<"请输入两个字符串"<<endl;
//	getline(cin,str1);
//	getline(cin,str2);
	//cout<<sizeof(str1)<<'\t'<<sizeof(str2);
	//float str_size=0;
	str1=read(str1);
	str2=read(str2);
	do{
		int nstr1=0,nstr2=0;
		for(auto c=str1.begin();c!=str1.end();++c){
			++nstr1;
		}
		for(auto c=str2.begin();c!=str2.end();++c){
			++nstr2;
		}
		
		
		if(nstr1>nstr2){
			cout<<"较短的字符串是"<<str2;
		}
		else if(nstr1==nstr2){
			cout<<"两个字符串一样长"<<endl;
		}
		else if(nstr1<nstr2){
			cout<<"较短的字符串是"<<str1<<endl; 
		}
		else{
			cout<<"错误"<<endl;
		}
		
	}while((read(str1))&&read(str2));
	return 0;
}
vector<string> read(vector<string> str)
{	int flag=0;
	char c;
	while(cin>>c){
		str.push_back(c);
		flag=1;
	}
	if(!flag){
		return 0;
	}
	return str;
}
