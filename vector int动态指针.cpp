#include"header.cpp"
void input(vector<int>* p);
void output(vector<int>* p);
int main()
{
	auto p=new vector<int>;
	input(p);
	output(p);
	delete p;
	return 0;	
}
void input(vector<int>* p)
{
	int c;
	while(cin>>c){
		(*p).push_back(c);
	}
	
}
void output(vector<int>* p)
{
	for(auto c:(*p)){
		cout<<c;
	}
 } 
