#include "std_lib_facilities.h"

// 4 számjegyig müködök

int number_of_digits(int number)
{
	//12
	int digits=0;
	while(number/10>=1)
	{
		number/=10;
		digits++;
	}
	digits++;

	return digits;
}

 vector <int> separate(int number)
{

	vector <int> digits;
	
	for (int i = 0; i < 4; ++i)
	{
		digits.push_back(number%10);
		number = (number-number%10)/10;
	}

	return digits;
}


string numbers_to_words(vector <int> digits)
{
	int thousend = digits[3];
	int hundred= digits[2];
	int ten= digits[1];
	int one = digits[0];
	

	string word = "" ;

	if(thousend==1) word+= "onethousand";

	if(hundred!=0)
	{
		switch(hundred)
			{
				case 1 : word+= "one";break;
				case 2 : word+= "two";break;
				case 3 : word+= "three";break;
				case 4 : word+= "four";break;
				case 5 : word+= "five";break;
				case 6 : word+= "six";break;
				case 7 : word+= "seven";break;
				case 8 : word+= "eight";break;
				case 9 : word+= "nine";break;
			}
			word+= "hundred";
	}
		
	if(ten==1)	
	{
		if(hundred!=0) word+= "and";
		switch(one)
		{
			case 0 : word+= "ten";break;
			case 1 : word+= "eleven";break;
			case 2 : word+= "twelve";break;
			case 3 : word+= "thirteen";break;
			case 4 : word+= "fourteen";break;
			case 5 : word+= "fifteen";break;
			case 6 : word+= "sixteen";break;
			case 7 : word+= "seventeen";break;
			case 8 : word+= "eighteen";break;
			case 9 : word+= "nineteen";break;
		}
	}
	else
	{
		if(hundred!=0 && ten>1 && one!= 0 ) word+= "and";
		switch(ten)
		{
			case 0 : word+= "";break;
			case 2 : word+= "twenty";break;
			case 3 : word+= "thirty";break;
			case 4 : word+= "forty";break;
			case 5 : word+= "fifty";break;
			case 6 : word+= "sixty";break;
			case 7 : word+= "seventy";break;
			case 8 : word+= "eighty";break;
			case 9 : word+= "ninety";break;
		}	
		if(hundred!=0 && ten<=1 && one!=0) word+= "and";
		switch(one)
		{
			case 1 : word+= "one";break;
			case 2 : word+= "two";break;
			case 3 : word+= "three";break;
			case 4 : word+= "four";break;
			case 5 : word+= "five";break;
			case 6 : word+= "six";break;
			case 7 : word+= "seven";break;
			case 8 : word+= "eight";break;
			case 9 : word+= "nine";break;
		}
	
	}

	return word;

}
int main()
{
	/*
	for (int i = 1; i <= 1000; ++i)
	{
		cout << i << " " ;
	 	vector <int> vec =separate(i);
	 	for (int j = 0; j < vec.size(); ++j)
	 	{
	 		cout << vec[j];
	 	}
		cout << endl;
	}
	*/

	string word ="";
	int sum=0;
	
	for (int i = 1; i <= 1000; ++i)
	{
		word = numbers_to_words(separate(i));
		cout << i << " " << numbers_to_words(separate(i)) <<" "<< word.size() << endl;
		sum+= word.size();
	
	}

	cout << "solution: " << sum << endl;

	

	return 0;
}