#include"header.cpp"
int main()
{
	istream_iterator<int> is_iter(cin),eof;
	ofstream fcout("file/b.txt");
	ofstream ffcout("file/c.txt");
	ostream_iterator<int> of_iter(fcout,"\t");
	ostream_iterator<int> off_iter(ffcout,"\t");
	while(is_iter!=eof){
		if(*is_iter%2==0){
			fcout<<*is_iter++;
		}
		else{
			ffcout<<*is_iter++;
		}
	}
 } 
