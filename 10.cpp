#include "std_lib_facilities.h"

bool isprime(int p)
{
	for (int i = 2; i < p; ++i)
	{	
		if(p%i==0) return false;
	}

	return true;
}

int main ()
{
	long int sum =0;
	for (int i = 2; i < 2000000; ++i)
	{
		if(isprime(i)) 
		{
			sum +=i;
			cout << i << endl;
		}
	}
	cout << sum << endl;
	return 0;
}