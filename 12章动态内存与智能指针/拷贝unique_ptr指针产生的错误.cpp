#include"../header.cpp"
int main()
{
	unique_ptr<int> c(new int(2));
	unique_ptr<int> b=c;
	//auto d=c.release();
	return 0;
}
