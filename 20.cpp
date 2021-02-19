#include "std_lib_facilities.h"

int main()
{

	int factorial = 100;

	vector <int> digits ;


	digits.push_back(1);
	for (int i = 1; i <= factorial; ++i)
	{
		
		for (int j = 0; j < digits.size(); ++j)
		{
			digits[j]*=i;
		}


		for (int i = 0; i < digits.size(); ++i)
		{
			

			if(digits[i]>=10)
			{
				 int maradek = digits[i]%10;
				 
				 if(i+1>=digits.size())
				 {
				 	digits.push_back((digits[i]-maradek)/10);
				 	digits[i] = maradek;
				 }
				 else
				 {
					digits[i+1]+= (digits[i]-maradek)/10;
					digits[i] = maradek;
				 }
				 


				digits[i+1]+= (digits[i]-maradek)/10;
				digits[i] = maradek;
			} 
		}


		
/*
		for (int j = 0; j < digits.size(); ++j)
		{
			cout << digits[j] << " " ;
		}
		cout << endl;
		
*/

	}

	int sum = 0;
	
		for (int j = 0; j < digits.size(); ++j)
		{
			sum += digits[j];
		}

		cout << "result :" << sum << endl;


	return 0;
}