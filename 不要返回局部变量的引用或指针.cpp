#include"header.cpp"
string test();
int main(int a,char** b)
{
	int ia[10]={0};
	string b={"hello world"};
	cout<<test(b);//�޷������������Ϊtest�����ڷ��ض���Ϊ�ֲ����������ã��ں������н�����ֲ����������������޷����� 
	//print(ia);
}
string &test(stirng &a)
{
	//string s;
	if(!a.empty()){
		return a; 
	}
	return a;
}
