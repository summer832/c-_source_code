#include"header.cpp"
string nu;
class Person{
	private:
		string name;
		string address;
	public:
		string rename() const{return name;}//���������б��const��ʾthis��һ��ָ������ָ�루Ĭ�����this��һ��ָ�������ͷǳ����ĳ���ָ��
		string readdress() const{return address;}
		istream &read(istream &is,Person &person);
		ostream &print(ostream &os );
		Person(istream &is);
		Person(string & cname,string & caddress):name(cname),address(caddress){}
		Person(string & cname):Person(cname,nu){}//ί�й��캯����ί����������������캯��ִ���Լ��ĳ�ʼ������ 
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
{	string a("С��");

	Person person1(a);
	person1.print(cout);
}
