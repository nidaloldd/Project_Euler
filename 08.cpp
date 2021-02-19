#include "std_lib_facilities.h"

struct Token
{
	char symbol;
	int value;
};

vector<Token> big_number;

int char_to_int(char symbol)
{
	int value;
	switch(symbol)
	{
		case '0': return value=0;
		case '1': return value=1;
		case '2': return value=2;
		case '3': return value=3;
		case '4': return value=4;
		case '5': return value=5;
		case '6': return value=6;
		case '7': return value=7;
		case '8': return value=8;
		case '9': return value=9;
		default : error("bad input");return -1;
	}	
}

int main()
{
	string input_file="08.txt";
	ifstream in {input_file};
	int digit_number = 13;

	char ch;
	while(in >> ch) big_number.push_back(Token{ch,char_to_int(ch)});

	int max=0;
	vector<int> solution(digit_number);
	vector<int> solution2(digit_number);

	for (int i = 0; i < big_number.size()-(digit_number-1); ++i)
	{
		int k=0;
		long int d=1;
		for (int j = 0; j < digit_number; ++j)
		{
			solution[j] = big_number[i+k].value; 
			k++;
			d = d*solution[j];
			//cout << d << endl;
		}
		
		for (int j = 0; j < digit_number; ++j) cout << solution[j] << ' ' ;

			cout << endl;
		
		if(max<d)
		{
			max=d; 
			solution2=solution;
		} 
	}

	cout << solution2[0];
	
	for (int i = 1; i < digit_number; ++i) cout <<" * "<< solution2[i];
	
	cout << endl;
	cout << max<< endl;

	return 0;
}