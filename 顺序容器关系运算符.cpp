#include"header.cpp"
bool compare(vector<int>,list<int>);
int main()
{
	list<int> a{1,23,4};
	vector<int> b{1,23,4};
	cout<<compare(b,a);
	return 0;
	//cout<<(b<((vector<int>)a);��ϵ���������������������ͬ���͵�������Ԫ��������ͬ 
}
bool compare(vector<int> b,list<int> a)
{
	if(b.size()!=a.size()){
		return false;
	}
	vector<int>::iterator bit1=b.begin();
	vector<int>::iterator bit2=b.end();
	list<int>::iterator lit1=a.begin();
	list<int>::iterator lit2=a.end();
	while(*bit1!=*lit1){
		if(bit1==bit2||lit1==lit2){
			return false;
		}
		else{
			++bit1;
			++bit2;
		}
	} 
	return true;
}
