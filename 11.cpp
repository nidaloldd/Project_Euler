#include "std_lib_facilities.h"

int main ()
{
	int mat [20][20];

	const string file = "11.text";

	ifstream inp {file};
	if(!inp) error("cant open the input file!",file);

	
	for (int row = 0; row < 20; ++row)
	{
		for (int col = 0; col < 20; ++col)
		{
			inp >> mat[col][row];
		}
	}

	int max =0 ;
	int res;
	int a,b,c,d;
	
	int a1,b1,c1,d1;
	
	for (int row = 0; row < 17; ++row)
	{
		for (int col = 0; col < 17; ++col)
		{
				a = mat [col][row];
				b = mat [col+1][row+1];
				c = mat [col+2][row+2];
				d = mat [col+3][row+3];

			res = a*b*c*d;

			if(max < res) {
				max = res;
				
				a1 = a;
				b1 = b;
				c1 = c;
				d1 = d;
			}
		}
	}

	for (int row = 0; row < 20; ++row)
	{
		for (int col = 0; col < 17; ++col)
		{
				a = mat [col][row];
				b = mat [col+1][row];
				c = mat [col+2][row];
				d = mat [col+3][row];

			res = a*b*c*d;

			if(max < res) {
				max = res;
				a1 = a;
				b1 = b;
				c1 = c;
				d1 = d;
				
			}
		}
	}

	for (int row = 0; row < 17; ++row)
	{
		for (int col = 0; col < 20; ++col)
		{
				a = mat [col][row];
				b = mat [col][row+1];
				c = mat [col][row+2];
				d = mat [col][row+3];

			res = a*b*c*d;

			if(max < res) {
				max = res;
				a1 = a;
				b1 = b;
				c1 = c;
				d1 = d;
				
			}
		}
	}

	for (int row = 0; row < 17; ++row)
	{
		for (int col = 3; col < 20; ++col)
		{
				a = mat [col][row];
				b = mat [col-1][row+1];
				c = mat [col-2][row+2];
				d = mat [col-3][row+3];

			res = a*b*c*d;

			if(max < res) {
				max = res;
				
				a1 = a;
				b1 = b;
				c1 = c;
				d1 = d;
			}
		}
	}

	cout << "result: " << max << endl;

	cout << a1 << " " << b1 << " " << c1 << " " << d1 << endl;


	return 0;
}