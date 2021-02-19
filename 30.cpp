#include "std_lib_facilities.h"


vector <int> separate(int origainal)
{
	vector <int> vec;
	//pl 315

	while(origainal/10>0)
	{
	   int b =origainal;
	   b %=10; //5
	   origainal = (origainal-b)/10;

	   vec.push_back(b);

	} 
	 if(origainal<10){vec.push_back(origainal);}
	
	return vec;
}

int main()
{
	vector <int> vec;
	long int solution=0;

	for (long int i = 11; i < 999999 ; ++i)
	{
		vec =separate(i);
		long int sum=0;
		for (int j = 0; j < vec.size(); ++j)
		{
			sum += pow(vec[j],5);
		}
		
		if(i == sum)
		{
			solution+=i;
		}	
	}

	cout << solution << endl;

	//cout << "result : " << solution.size() << end;

	return 0;
}