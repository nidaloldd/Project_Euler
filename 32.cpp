#include"std_lib_facilities.h"

int digits(int number)
{
	int digit=0;
	
	while(number/10>0)
	{
		digit++;
		number/=10;
	}
	digit++;

	return digit;
}

bool pandigital_number(int number1,int number2,int number3)
{
	vector <int> digits;
	int number;

for (int i = 0; i < 3; ++i)
{
	if(i==0){number=number1;}
	if(i==1){number=number2;}
	if(i==2){number=number3;
	}
	while(number/10>0)
	{	
		digits.push_back(number%10);
		number = (number-number%10)/10;
	}
	digits.push_back(number%10);
}	

	for (int a = 0; a < digits.size(); ++a)
	{
		for (int b = 0; b < digits.size(); ++b)
		{
			if(digits[a]==digits[b]&& a!=b || digits[a]==0 || digits[b]==0)
			{
				return false;
			}
		}
	}
	return true;

}

int main()
{
	long int sum = 0;
	vector <long int> vec;
	for (int a = 1; a < 10000; ++a)
	{
		for (int b = 1; b < 10000; ++b)
		{
			if(digits(a)+digits(b)+digits(a*b)==9 && pandigital_number(a,b,a*b))
			{
				if(!count(vec.begin(),vec.end(),a*b))
				{
					vec.push_back(a*b);
					sum+= a*b;
					cout << a << " " << b << " " << a*b << endl;
				}	
				
			}	
		}
	}
	
	cout << "result : " << sum << endl;


}