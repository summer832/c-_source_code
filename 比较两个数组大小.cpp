#include"header.cpp"
int main()
{
	int a[3]={1,2,3}; 
	int b[3]={1,2,3};
	int i=0;
	for(auto c:a){
		if(c==b[i]){
			i++;	
		}
		else{
			cout<<"两个数组不相等"<<endl;
			return 0;
		}
	}
	cout<<"两个数组相等"<<endl;
	return 0;
}
