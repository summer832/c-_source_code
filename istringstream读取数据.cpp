#include<string>
#include<vector>
#include<iostream>
#include<fstream>
#include <sstream>//����istringstream��ostringstream���ֱ����ڶ�string����Ķ���д����
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
