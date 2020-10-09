#include"header.cpp"
int main()
{
	vector<int> a;
	int c;
	while(cin>>c){
		a.push_back(c);
	}
	vector<int>::iterator it;
	int arr[10];
	int i=0;
	for(auto b:a){
		arr[i]=b;
		i++;
	} 
	for(auto b:arr){
		cout<<b<<endl;
	}
	return 0;
}
