#include"../header.cpp"
using line_no=vector<string>::size_type;
class QueryResult;
class TextQuery{
	public:
		TextQuery(ifstream&);//���캯�������������ı� 
		QueryResult query (const string&) const;//���ز�ѯ�����Ĳ�ѯ����������ı��ı�ֵ��������const
	 
	private:
		shared_ptr<vector<string>> file;//�����ļ�
		map<string,shared_ptr<set<line_no>>> wm;

};
TextQuery::TextQuery(ifstream &is):file(new vector<string>)//��ʼ���б� 
{
	string text;
	while(getline(is,text)){
		file->push_back(text);//��������ı�����vector�� 
		int n=file->size()-1;//���浱ǰ�����к� 
		istringstream line(text);//��text����istingstream���У��Ա��ֳ�����
		string word;
		while(line>>word){
			auto &lines=wm[word];//�����ļ����Ƿ��Ѿ�����������ʣ���������ڻ���vector������������ 
			if(!lines){//���δ�ҵ�������ʣ���linesΪ�� 
				lines.reset(new set<line_no>);//��lines.second�����һ���µ��к� 
			} 
			lines->insert(n); //�����Ƿ�鵽����Lines�н����ڵ��кŲ����ȥ�����������иõ����򲻻��ظ����� 
		} 
	}
}
class QueryResult{
	private:
		string sought;//Ҫ���ҵĵ���
		shared_ptr<set<line_no>> lines;
		shared_ptr<vector<string>> file;
	public:
		void print();
		QueryResult(string s,shared_ptr<set<line_no>> p,shared_ptr<vector<string>> v):sought(s),lines(p),file(v){
		} 
};
QueryResult TextQuery::query(const string &sought) const
{
	static shared_ptr<set<line_no>> nodata(new set<line_no>);//����һ����̬�ֲ��������ڸú������н����󲻻ᱻ���٣������δ�ҵ��õ��ʾͷ��ظö����һ������
	auto loc=wm.find(sought);//��ʹ���±��������Ϊ�˱����Ҫ���ҵĵ�����ӵ��ı���
	if(loc==wm.end()){
		return QueryResult(sought,nodata,file);
	} 
	else{
		return QueryResult(sought,loc->second,file);
	}
}
void QueryResult::print()
{
	cout<<this->sought<<"����"<<(this->file)->size()<<"��";
	for(auto num: *this->lines){
		cout<<"lines "<<num+1<<*((*this->file).begin()+num)<<endl;
	}
}

int main()
{
	ifstream fcin("original_text.txt");
	TextQuery text1(fcin);
	string search_word;
	cout<<"������Ҫ��ѯ�ĵ���"<<endl;
	cin>>search_word;
	auto res=text1.query(search_word);
	res.print();
	return 0;	
	
}
