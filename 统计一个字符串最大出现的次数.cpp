#include"header.cpp"
int main()
{
	string c1,c2;
	getline(cin,c1,' ');
	int count=1;
	int max_count=1;
	string max_str;
	while(getline(cin,c2,' ')){
		if(c1==c2){
			++count;
		}
		else{
			if(max_count<count){
				max_count=count;
				max_str=c1;
			}
			c1=c2;
			count=1;
		}
	}
	cout<<"���ִ��������ַ�����"<<max_str<<endl;
	cout<<"���ֵĴ�����"<<max_count<<endl;
	return 0;
}
