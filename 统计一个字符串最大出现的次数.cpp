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
	cout<<"出现次数最多的字符串是"<<max_str<<endl;
	cout<<"出现的次数是"<<max_count<<endl;
	return 0;
}
