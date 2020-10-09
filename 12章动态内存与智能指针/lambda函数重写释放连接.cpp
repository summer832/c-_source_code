#include"../header.cpp"
struct destination{
	
};
struct connection{
	
};
connection connect(destination*){
	
}
void disconnect(connection){
}
void end_connection(connection *p);
void f(destination &d)
{
	connection c=connect(&d);
	shared_ptr<connection> p(&c,[](){disconnect(&c);
	});//lanmbdaº¯ÊýÖØÐ´end_connectionº¯Êý 
 } 
// void end_connection(connection *p)
// {
// 	disconnect(*p);
// }
 int main()
 {
 	destination d;
 	f(d);
 	return 0;
 }
