#include "std_lib_facilities.h"

int main()
{
	int number=2;
	int mod=0;
	bool match=true;

	while(match)
	{
		for (int i = 1; i <= 20; ++i)
		{
			if (number%i==0) mod++;

			if (mod==20) match = false;
			
		}

		number++;
		mod=0;
	}

	cout << number-1 << endl;

	return 0;
}