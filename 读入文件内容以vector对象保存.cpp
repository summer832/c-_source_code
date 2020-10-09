#include"header.cpp"
#include<fstream>
int main()
{
	ifstream fcin("file/a.txt");
	vector<string> contents;
	string c;
	while(fcin>>c){
		contents.push_back(c);
	}
	fcin.close();
	ofstream fcout("file/a.txt",ofstream::app);//app文件模式，每次写操作前定位到文件末尾 
	for(auto c:contents){
		fcout<<c<<endl;
		cout<<c<<endl;
	}
	return 0;
	
}
