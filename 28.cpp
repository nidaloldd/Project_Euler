#include "std_lib_facilities.h"

int main()
{
	int size_of_spiral = 1001;
	long int jump =2;
	int number =1;
	long int sum =0;

while(number!=size_of_spiral*size_of_spiral)
{	

	for (int i = 0; i < 4; ++i)
	{
		sum+=number;
		number+=jump;
		cout << number << endl;
	}
	jump +=2;

}	
sum+=number;

cout <<"result: " << sum << endl;

	return 0;
}