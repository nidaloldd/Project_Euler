#include "std_lib_facilities.h"

bool isprime(int p)
{
	for (int i = 2; i < p; ++i)
	{	
		if(p%i==0) return false;
	}

	return true;
}

int main()
{
	const long int number = 600851475143;
	int d=20;
	int sol=0;

	for (int i = 1; i <= number; ++i)
	{
		if(isprime(i)&& number%i==0)
		{
			cout << i << endl;
			sol=i;
		}
	}

	cout << sol << endl;

    



	return 0;
}