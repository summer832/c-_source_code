#include"header.cpp"
char &get_val(string &str,string::size_type ix)//������ͷ�����ñ�ʾ���ص�ֵ��һ���������� 
{
	return str[ix];
 } 
 int main()
 {
 	string s("a value");
 	cout<<s<<endl;
 	get_val(s,0)='A';//get_val�������صĶ�����һ�����ã����Ա���ֵ 
 	cout<<s<<endl;
	return 0;
 }
