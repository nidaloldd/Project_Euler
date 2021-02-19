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
	int prim=0;
	int numbers =2;

	while(true)
	{
		if(isprime(numbers)) prim++;
		if(prim==10001) break;
		numbers++;
	}

	cout << numbers << endl;

	return 0;
}