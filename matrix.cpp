#include "std_lib_facilities.h"

int main()
{

	int a [100][100] , row ,column;

	cout << "enter number of row" << endl;
	cin >> row;

	cout << "enter number of column" << endl;
	cin >> column;


	for (int i = 0; i < column; ++i)
	{
		for (int j = 0; j < row; ++j)
		{
			cout << i+1 <<" column and " << j+1 << " row ";

			cin >> a[i][j];
		}
	}
	cout << endl;

	for (int i = 0; i < column; ++i)
	{
		for (int j = 0; j < row; ++j)
		{
			cout << a[i][j];
		}
		cout << endl;
	}
	


	return 0;
}