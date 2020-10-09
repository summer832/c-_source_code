#include"../header.cpp"
using line_no=vector<string>::size_type;
class QueryResult;
class TextQuery{
	public:
		TextQuery(ifstream&);//构造函数，保存输入文本 
		QueryResult query (const string&) const;//返回查询结果类的查询函数，不会改变文本值，所有用const
	 
	private:
		shared_ptr<vector<string>> file;//输入文件
		map<string,shared_ptr<set<line_no>>> wm;

};
TextQuery::TextQuery(ifstream &is):file(new vector<string>)//初始化列表 
{
	string text;
	while(getline(is,text)){
		file->push_back(text);//将读入的文本存入vector中 
		int n=file->size()-1;//保存当前所在行号 
		istringstream line(text);//将text存入istingstream流中，以便拆分出单词
		string word;
		while(line>>word){
			auto &lines=wm[word];//查找文件中是否已经存在这个单词，如果不存在会向vector中添加这个单词 
			if(!lines){//如果未找到这个单词，那lines为空 
				lines.reset(new set<line_no>);//向lines.second中添加一个新的行号 
			} 
			lines->insert(n); //无论是否查到都向Lines中将现在的行号插入进去，若该行已有该单词则不会重复插入 
		} 
	}
}
class QueryResult{
	private:
		string sought;//要查找的单词
		shared_ptr<set<line_no>> lines;
		shared_ptr<vector<string>> file;
	public:
		void print();
		QueryResult(string s,shared_ptr<set<line_no>> p,shared_ptr<vector<string>> v):sought(s),lines(p),file(v){
		} 
};
QueryResult TextQuery::query(const string &sought) const
{
	static shared_ptr<set<line_no>> nodata(new set<line_no>);//定义一个静态局部变量（在该函数运行结束后不会被销毁），如果未找到该单词就返回该对象的一个拷贝
	auto loc=wm.find(sought);//不使用下标运算符是为了避免把要查找的单词添加到文本中
	if(loc==wm.end()){
		return QueryResult(sought,nodata,file);
	} 
	else{
		return QueryResult(sought,loc->second,file);
	}
}
void QueryResult::print()
{
	cout<<this->sought<<"出现"<<(this->file)->size()<<"次";
	for(auto num: *this->lines){
		cout<<"lines "<<num+1<<*((*this->file).begin()+num)<<endl;
	}
}

int main()
{
	ifstream fcin("original_text.txt");
	TextQuery text1(fcin);
	string search_word;
	cout<<"请输入要查询的单词"<<endl;
	cin>>search_word;
	auto res=text1.query(search_word);
	res.print();
	return 0;	
	
}
