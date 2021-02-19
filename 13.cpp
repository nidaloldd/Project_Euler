#include "std_lib_facilities.h"

int char_to_int (char ch)
{
	switch(ch)
	{
		case '0' : return 0;break;
		case '1' : return 1;break;
		case '2' : return 2;break;
		case '3' : return 3;break;
		case '4' : return 4;break;
		case '5' : return 5;break;
		case '6' : return 6;break;
		case '7' : return 7;break;
		case '8' : return 8;break;
		case '9' : return 9;break;
		default : error("bad data");
	}
}

int maradek (int number)
{
	
	for (int i = 0; i < 10; ++i)
	{
		if((number-i)%10==0) {return i ;break;}
	}

}

int main()
{

	const string file = "13.txt";

	ifstream inp {file};
	if(!inp) error("cant open the input file!",file);

	int mat [50][100];
	vector<int> sumvec ;
	vector<int> solvec ;

	char ch;

	for (int row = 0; row< 100; ++row)
	{
		for (int col = 0; col < 50; ++col)
		{
			inp >> ch;
			mat [col][row] = char_to_int(ch);

		}
	}

	for (int col = 0; col < 50; ++col)
	{
		

		int colsum=0;
		for (int row = 0; row< 100; ++row)
		{
		   colsum += mat [col][row];
		}
		 sumvec.push_back(colsum);
	}

	int last_maradek=0;
	for (int i = sumvec.size()-1; i >= 0; --i)
	{
		solvec.push_back(maradek(sumvec[i]));

		if(i>=1)
		{
			sumvec[i-1] += (sumvec[i]- maradek(sumvec[i]))/10;
		}
		else last_maradek += (sumvec[i]- maradek(sumvec[i]))/10;
		
	}

   solvec.push_back(last_maradek);

	/*

cout << solvec.size();
cout << endl;

	//55
	while(last_maradek!=0)
	{
		solvec.push_back(maradek(last_maradek));
		if((double)last_maradek/10 >= 1)
		{	
			last_maradek -= (maradek(last_maradek))/10;
		}
		else last_maradek = 0;
	}

	for (int i = 0; i < solvec.size(); ++i)
	{
		cout << solvec[i];
	}

cout << endl;
cout << solvec.size();
	
	return 0;

	*/

   for (int i = solvec.size()-1 ; i >= 0; --i)
	{
		cout << solvec[i];
	}
}