#include "std_lib_facilities.h"

int main()
{
	// 2^15    2*2*2*2*2*2*2*2*2*2*2*2*2*2*2
	// 2^x     x=0

	int base = 2;
	int exponent = 15;
	vector <int> digits ;


	digits.push_back(1);
	for (int i = 0; i < exponent; ++i)
	{
		
		for (int i = 0; i < digits.size(); ++i)
		{
			digits[i]*=base;
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