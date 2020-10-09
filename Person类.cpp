#include"header.cpp"
string nu;
class Person{
	private:
		string name;
		string address;
	public:
		string rename() const{return name;}//紧跟参数列表的const表示this是一个指向常量的指针（默认情况this是一个指向类类型非常量的常量指针
		string readdress() const{return address;}
		istream &read(istream &is,Person &person);
		ostream &print(ostream &os );
		Person(istream &is);
		Person(string & cname,string & caddress):name(cname),address(caddress){}
		Person(string & cname):Person(cname,nu){}//委托构造函数，委托所属类的其他构造函数执行自己的初始化过程 
//		Person(string & caddress):Person(nu,caddress){
//		}
}; 
istream &Person::read(istream &is,Person &person)
{
	is>>person.name>>person.address;
	return is;
 } 
 ostream &Person::print(ostream &os)
 {
 	os<<name<<address;
 	return os;
  } 
  Person::Person(istream &is)
  {
  	read(is,*this);
  }
int main()
{	string a("小明");

	Person person1(a);
	person1.print(cout);
}
