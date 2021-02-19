#include"std_lib_facilities.h"

/*
 a < b < c

 a^2 + b^2 = c^2

 a+b+c = 1000

 */

int main()
{
	int a,b;
	double c;
	
	for (int j = 3; j < 1000; j++)
	{

		for (int i = 1; i < j; i++)
		{
			a=i;b=j;
			c = sqrt(a*a+b*b);
			if(a+b+c==1000 && c>a && c>b)
			{
				cout << "a= " << a << endl
		 << "b= " << b << endl
		 << "c= " << c << endl;

		 cout << "result: " << a*b*c << endl;
		 break;
			}
		
			
		}
		
	}





	return 0;
}