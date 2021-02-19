#include "std_lib_facilities.h"

int main()
{

	string per = "0123456789";
	sort(per.begin(),per.end());



	for (int i = 0; i < 1000000-1; ++i)
	{
		next_permutation(per.begin(),per.end());
		cout << per << endl;
		
	}
	
	cout << per << endl;

	return 0;
}