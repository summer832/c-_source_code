#include"header.cpp"
int main()
{
	char c;
	int vowel=0;
	int space=0;
	int table=0;
	int br=0;
	int other_char=0;
	const char cspace=' ';
	const char ctable='\t';
	const char cbr='\n';
	while(cin.get(c)){//cin.get()可以接受空格、制表符、换行字符。默认结束符为空格，但是也会接收空格 
		switch(toupper(c)){//toupper()将小写字母转换为大写字母 
			case 'I':
				++vowel;
				break;
			case 'E':
				++vowel;
				break;
			case 'A':
				++vowel;
				break;
			case 'O':
				++vowel;
				break;
			case 'U':
				++vowel;
				break;
			case cspace:
				++space;
				break;
			case ctable:
				++table;
				break;
			case cbr:
				++br;
			default:
				++other_char;
				break;
			 
		}
		
	}
	cout<<"元音字符个数"<<vowel<<endl;
		cout<<"空格字符个数"<<space<<endl;
		cout<<"制表符个数"<<table<<endl;
		cout<<"换行符个数"<<br<<endl;
		cout<<"其他字符有"<<other_char<<endl;
		return 0;
 } 
