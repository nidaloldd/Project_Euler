#include "std_lib_facilities.h"

//   n-> n/2 (n is even)
//   n-> 3*n+1 (n is odd)

long int collatz(long int number)
{
	int long_of_chain=0;
	while(number!=1)
	{	
		
		if(number%2==0) // even
		{
			number = number/2;
			long_of_chain++;
		}
		else // odd
		{
			number = 3*number+1;
			long_of_chain++;
		}
	}

return long_of_chain+1;

}
int main()
{
	long int maxnumber =0;
	long int maxcol =0;
	for (int i = 1; i <= 1000000; ++i)
	{
		long int r = collatz(i);
		
		if (r>maxnumber) 
		{
			maxnumber = r;
			maxcol = i;
		}
	}

	cout << "THE longest chain is :" << maxnumber <<' '<< maxcol<< endl;

	return 0;
}