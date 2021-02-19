#include"std_lib_facilities.h"

// 145  = 1!+4!+5!

vector <int> separete(int number)
{
	vector <int> vec;
	while(number/10>=1)
	{
		vec.push_back(number%10);
		number = (number-number%10)/10;
	}
	vec.push_back(number%10);

	return vec;
}

long int factor(long int number)
{
	int j = number;
	for (int i = 1; i < j; ++i)
	{
		number *= i;
	}
	return number;
}

int main()
{
	/*
	for (int i = 0; i < 1000; ++i)
	{
		cout << i << " ";
		vector <int> vec = separete(i);
		for (int j = 0; j < vec.size(); ++j)
		{
			cout << vec[j] << " ";
		}
		cout << endl;
	}
	*/

	vector <long int> solution;
	for (long int i = 10; i < 100000000000; ++i)
	{
		vector <int> digits = separete(i);
		
		long int A=0;

		for (int j = 0; j < digits.size(); ++j)
		{
			A += factor(digits[j]);
		}
		cout << i << endl;
		
		if(A==i)
		{
			solution.push_back(i);
		}
	}

	cout << "solution: "<< endl;
	long int sum = 0;
	for (int i = 0; i < solution.size(); ++i)
	{
		cout << solution[i] << endl;
		sum+= solution[i];
	}
	cout << "final solution: "<< sum << endl;  

	return 0;
}