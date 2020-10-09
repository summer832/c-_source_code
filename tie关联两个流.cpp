#include"header.cpp"
int main()
{
	cin.tie(&cout);//将cin与cout关联起来，（本来cin和cout就是关联在一起的） 
	ostream *old_tie=cin.tie(nullptr);//cin不在与其他流关联 ，old_tie指向当前关联到cin的流
	cin.tie(&cerr) ;//关联cin和ceer
	return 0; 
	 
}
