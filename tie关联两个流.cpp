#include"header.cpp"
int main()
{
	cin.tie(&cout);//��cin��cout����������������cin��cout���ǹ�����һ��ģ� 
	ostream *old_tie=cin.tie(nullptr);//cin���������������� ��old_tieָ��ǰ������cin����
	cin.tie(&cerr) ;//����cin��ceer
	return 0; 
	 
}
