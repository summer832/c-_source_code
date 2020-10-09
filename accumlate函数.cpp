#include"header.cpp"
int main()
{
	vector<double> vec={2,3,9,3,4,5,8,2};
	double sum=accumulate(vec.cbegin(),vec.cend(),0);
	cout<<sum<<endl;
	return 0;
 } 
