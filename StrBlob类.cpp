#include"header.cpp"
//class StrBlob;

class StrBlob{
	public:
		typedef vector<string>::size_type size_type;
		StrBlob();
		StrBlob(initializer_list<string> li);//initializer_list����ʹ�ô�����ֱ�ӳ�ʼ������list;
		size_type size() const{ return data->size();
		} 
		bool empty() const{return data->empty();}
		void push_back(const string & t){
			data->push_back(t);
		}
		void pop_back();
		const string & front();
		const string & back();
		friend class StrBlobPtr;
	private:
		shared_ptr<vector<string>> data;
		void check(size_type i,const string &msg) const;
};
StrBlob::StrBlob():data(make_shared<vector<string>>()){
	
}
StrBlob::StrBlob(initializer_list<string> li):data(make_shared<vector<string>>(li)){
}
void StrBlob::check(size_type i,const string & msg) const{
	if(i>=data->size()){
		throw out_of_range(msg);//��vectorΪ�գ����׳�һ���쳣 
	}
}
const string & StrBlob::front(){
	check(0,"error");
	return data->front();}
const string & StrBlob::back(){
	check(0,"error");
	return data->back();
}
void StrBlob::pop_back(){
	check(0,"error");
	data->pop_back();
}
//void StrBlob::push_back(){
//	check(0,"error"){
//		data->push_back();
//	}
//}
class StrBlobPtr{
	public:
		StrBlobPtr():curr(0){};//Ĭ�Ϲ��캯��,������λ�ü�Ϊ0
		StrBlobPtr(StrBlob &a,size_t sz=0):wptr(a.data),curr(sz){
		} ;
		string & deref() const;//���check�ɹ��ͽ�����ǰ��vectorλ�ò�����
		StrBlobPtr & incr();//���������� 
		shared_ptr<vector<string>> check(size_t,const string &) const;//��麯�� 
	private:
		
		weak_ptr<vector<string>> wptr;//��ָ�룬�������shared_ptrʱ�������shared_ptr�����ü��� 
		size_t curr;//��¼���鵱ǰ��λ�� 
}; 
StrBlobPtr::shared_ptr<vector<string>> check(size_t i,const string &msg)
{
	auto ret=wptr.lock();//w.lovk()���������w�����shared_ptr��Ϊ�ո��ͷ��ظö���Ϊ�վͷ���һ���յ�Shared_ptr
	if(!ret){
		throw runtime_error("�����Ѳ�����");
		
	} 
	if(i>=ret->size()){
		throw out_of_range(msg);
		
	}
	return ret;
 } 
StrBlobPtr::string & deref()
{
	auto p=check(curr,"dereference past end");
	return (*p)[curr]; 
}
StrBlobPtr::StrBlobPtr &incr(){
	check(curr,"dereference past end");
	++curr;
	return *this;
}
int main()
{
	
}
