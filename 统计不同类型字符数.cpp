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
	while(cin.get(c)){//cin.get()���Խ��ܿո��Ʊ���������ַ���Ĭ�Ͻ�����Ϊ�ո񣬵���Ҳ����տո� 
		switch(toupper(c)){//toupper()��Сд��ĸת��Ϊ��д��ĸ 
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
	cout<<"Ԫ���ַ�����"<<vowel<<endl;
		cout<<"�ո��ַ�����"<<space<<endl;
		cout<<"�Ʊ������"<<table<<endl;
		cout<<"���з�����"<<br<<endl;
		cout<<"�����ַ���"<<other_char<<endl;
		return 0;
 } 
