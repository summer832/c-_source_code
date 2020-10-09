#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> vec;
	int a;
	while(cin>>a){
		vec.push_back(a);
	}
	for(decltype(a) i=0;i<vec.size();i++){
		//cout<<vec[i]+vec[i+1]<<endl;
		cout<<vec[i]+vec[vec.size()-1-i]<<endl;
	}
	return 0;
}
