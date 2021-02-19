#include "std_lib_facilities.h"

int max (int num1,int num2)
{
	if(num1>num2) return num1;
	else return num2;
}

int main()
{
	int size = 100;
	vector <int> last(size);
	vector <int> current(size);
	current = {};



	string file = "67.txt";
	ifstream inp {file};
	
	inp >> last[0];


	for (int row = 2; row <= size; ++row)
	{
		
		for (int col = 0; col < row; ++col)
		{
			int x;

			inp >> x;
			//current.push_back(x+last);

					if(col==0) 	current.push_back(x+last[0]); // ha nincs bal szülő
			else if(col==row-1) current.push_back(x+last[row-2]); // ha nincs jobb szülő
			else current.push_back(x+ max(last[col-1],last[col]));
	
		}
		last = current;

		for (int i = 0; i <= row-2; ++i)
	{
		//cout << last[i] << " " ;
	}
	//cout << endl;


		current = {}; 
			

	}

int max;
for (int i = 0; i < size; ++i)
{
	//cout << last[i] << " " ;
	if(max<last[i]) max = last[i];
}
//cout << endl;

cout << "result :" << max << endl ;

	return 0;
		
}