#include"header.cpp"
//class StrBlob;

class StrBlob{
	public:
		typedef vector<string>::size_type size_type;
		StrBlob();
		StrBlob(initializer_list<string> li);//initializer_list可以使用大括号直接初始化阳光list;
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
		throw out_of_range(msg);//若vector为空，则抛出一个异常 
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
		StrBlobPtr():curr(0){};//默认构造函数,将出现位置记为0
		StrBlobPtr(StrBlob &a,size_t sz=0):wptr(a.data),curr(sz){
		} ;
		string & deref() const;//如果check成功就解析当前的vector位置并返回
		StrBlobPtr & incr();//递增迭代器 
		shared_ptr<vector<string>> check(size_t,const string &) const;//检查函数 
	private:
		
		weak_ptr<vector<string>> wptr;//弱指针，被腹语给shared_ptr时不会递增shared_ptr的引用计数 
		size_t curr;//记录数组当前的位置 
}; 
StrBlobPtr::shared_ptr<vector<string>> check(size_t i,const string &msg)
{
	auto ret=wptr.lock();//w.lovk()函数如果与w共享的shared_ptr不为空给就返回该对象，为空就返回一个空的Shared_ptr
	if(!ret){
		throw runtime_error("对象已不存在");
		
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
