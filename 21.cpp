#include "std_lib_facilities.h"

int d(int number)
{
	int sum=0;

	for (int i = 1; i < number; ++i)
	{
		if(number%i==0) sum+=i;
	}

	return sum;
}


int main()
{
	//under 10000   hány pár van
	// d(a)=b && d(b)=a
	// d(d(a))=a

	//cout <<"284 " << d(220) << endl;
	//cout <<"220 " << d(284) << endl;

	int sum=0;
	for (int i = 1; i <= 10000; ++i)
	{
		if(d(d(i))==i && d(d(i)) != d(i) )
		{
			sum+=i; 
			cout << d(i) <<" " << d(d(i)) << endl;
		}
		
	}


	cout << "result :" << sum << endl;

	return 0;
}