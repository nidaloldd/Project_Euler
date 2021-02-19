#include "std_lib_facilities.h"

int Sum_of_the_sqares(int a)
{
	int x=0;

	for (int i = 1; i <= a; ++i)
	{
		x+=i*i;
	}

 return x;
}

int sqare_of_the_sum(int a)
{
	int x=0;
	for (int i = 1; i <= a; ++i)
	{
		x+=i;
	}

	return x*x;
}

int main()
{
	//cout << Sum_of_the_sqares(100)<< '\t' << sqare_of_the_sum(100)<< endl;

	cout <<sqare_of_the_sum(100)-Sum_of_the_sqares(100)<< endl;


	return 0;
}