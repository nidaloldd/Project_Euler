#include"std_lib_facilities.h"

int main()
{
	int a =1;
	int b = 2;
	int c ;
	long int sum =2;


	while(true)
	{
		c = a+b;
		if(c>=4000000)break;
		if(c%2==0) 
		{
			cout << c << endl;
			sum+=c;
		}
		a=b;
		b=c;
	}

	cout << sum << endl;

	return 0;
}