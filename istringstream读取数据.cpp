#include<string>
#include<vector>
#include<iostream>
#include<fstream>
#include <sstream>//包含istringstream和ostringstream，分别用于对string对象的读和写操作
using namespace std;
int main()s
	ifstream fcin("file/a.txt");
	vector<string> str;
	string line,word;
	while(getline(cin,line)){
		str.push_back(line);
		istringstream record(line);
//		record>>word;
		while(record>>word){
			cout<<word<<endl; 
		}
	}
	return 0; 
	
}
