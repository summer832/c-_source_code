#include"header.cpp"
int main()
{
	const vector<string> grade={"E","D","C","B","A","A++"};
	unsigned int score=0;
	cin>>score;
	string letter_grade;
//	if(score<60){
//		letter_grade=grade[0];
//	}
//	else{
//		letter_grade=grade[(score-50)/10];
//	}
	letter_grade=score<60?grade[0]:grade[(score-50)/10];
	if(score%10<=3){
		letter_grade+="-";
	}
	if(score%10>=7){
		letter_grade+="+";
	} 
	cout<<letter_grade<<endl;
	return 0;
}
