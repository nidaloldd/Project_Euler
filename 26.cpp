#include "std_lib_facilities.h"

int mintazat(vector <int> vec)
{	//1-25 ismétlődés

	for (int i = 1; i < vec.size(); ++i)
	{

	}

}

vector <int> tizedesjegy(int A)
{
	//a=7
 	vector <int> hatvany;
	int maradek =1;

	while(!(maradek==0 || hatvany.size()==1000))
	{	
		maradek*=10;
		hatvany.push_back(maradek / A);
		maradek = maradek%A;
	}	

	return hatvany;
}

int main()
{
	double a=1;
	double b=7;

for (int i = 2; i <= 1000; ++i)
{
	

	cout << i << " | 0." ;

	vector <int> vec = tizedesjegy(i);

	for (int j = 0; j < vec.size() ; ++j)
	{
		cout  << vec[j] << " ";
	}
	cout << endl;

}	

	return 0;
}