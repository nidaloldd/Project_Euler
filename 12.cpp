#include "std_lib_facilities.h"

int div(long int number)
{
	int db=0;
	for (long int i = 1; i <= number; ++i)
	{
		if(number%i==0) db++;
	}

	return db;
}

int main()
{
	long int trinumber=0;
	long int i =1;
	while(true)
	{
		
		trinumber+=i;
		cout << trinumber<<" "<< div(trinumber)<< endl;
		if(div(trinumber)>500)
		{
			cout << "the first triangle number with 500 divisor is :" << trinumber << endl;
			break;
		}

		i++;
	}


	return 0;
}