#include"header.cpp"
int main()
{
	list<int> li={1,2,3,4,5,6,7,8,9,10};
	deque<int> uneven;//uneven������ 
	deque<int> even;//evenż����
	list<int>::iterator iter;
	for(auto i:li){
		if(i%2==0){
			even.push_back(i);
		}
		else{
			uneven.push_back(i);
		}
	} 
	for(auto i:uneven){
		cout<<i<<endl;
	} 
	return 0;
}
