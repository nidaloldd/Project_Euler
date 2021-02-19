#include "std_lib_facilities.h"

bool abundant(int number)
{
	int sum=0;

	for (int i = 1; i < number; ++i)
	{
		if(number%i==0) sum+=i;
	}

	if(sum>number){ return true;  }
		else{return false;}
	
}

int main()
{
	vector <long int> abundant_numbers;

	for (int i = 1; i <= 28123; ++i)
	{
		if(abundant(i)==true) 
		{
			abundant_numbers.push_back(i);
			//cout << i << endl;
		}
	}


	vector <long int> not_we_want;

	for (const auto& j : abundant_numbers)
	{
		for (const auto& i :abundant_numbers)
		{
			for (long int n = 1; n <= 28123; ++n)
			{
				if(n==j+i){not_we_want.push_back(n);}
				
			}
		}
		cout << j << endl;
	}
cout <<"---------";
	long int sum=0;
	for (int n = 1; n <= 28123; ++n)
	{

		 if(find(not_we_want.begin(),not_we_want.end(),n) == not_we_want.end())
		{
			sum+=n;
			cout << n << endl;
		}
	
	}



/*
	if(find(not_we_want.begin(),not_we_want.end(),key!!)!= not_we_want.end())
	{
		cout << "element found";
	}

	*/
	cout << "result: " << sum << endl;



	return 0;
}