#include "std_lib_facilities.h"

int main()
{
   long int mat[20][20];


  for (int j = 0; j < 20; ++j)
  {
  	for (int i = 0; i < 20; ++i)
  	{
  		mat[i][j] =0;
  	}	
  }


  
  for (int i = 0; i < 20; ++i)
  {
  		mat[0][i] = 2+i;
  }
  

  for (int i = 0; i < 20; ++i)
  {
  		mat[i][0] = 2+i;		
  }



  for (int j = 1; j < 20; ++j)
  {
  	for (int i = 1; i < 20; ++i)
  	{
  		
  		mat[i][j] = mat[i-1][j]+mat[i][j-1];
  	}
  }







  for (int j = 0; j < 20; ++j)
  {
  	for (int i = 0; i < 20; ++i)
  	{
  		cout << mat [i][j] << '\t';	
  	}
  	cout << endl;
  }

cout << "the answer is :" << mat[19][19] << endl;
   

	return 0;
}
