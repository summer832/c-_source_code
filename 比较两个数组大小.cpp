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
			cout<<"�������鲻���"<<endl;
			return 0;
		}
	}
	cout<<"�����������"<<endl;
	return 0;
}
