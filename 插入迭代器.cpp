#include"header.cpp"
int main()
{
	vector<int> vec={1,2,3,4,5,6,7,8,9};
	vector<int> cvec1(vec.size()),cvec2(vec.size()),cvec3(vec.size());
	copy(vec.begin(),vec.end(),front_inserter(cvec1));//back_inserter����һ��ʹ��push_back�ĵ����� 
	copy(vec.begin(),vec.end(),back_inserter(cvec2));//front_inserter����һ��ʹ��push_front�ĵ����� 
	copy(vec.begin(),vec.end(),inserter(cvec3,cvec3.begin()));//inserterԪ�ؽ������뵽��������������ʾ��Ԫ��֮ǰ
	for(auto c:cvec1){
		cout<<c<<'\t';	}
	cout<<endl;
	for(auto c:cvec2){
		cout<<c<<'\t';
	} 
	cout<<endl;
	for(auto c:cvec3){
		cout<<c<<'\t';
	} 
	cout<<endl;
	return 0;
}
