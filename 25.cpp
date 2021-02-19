#include "std_lib_facilities.h"


int main()
{
 	vector <int> fibbo_numbers{1};
 	
 	vector <int> prev1{1};
 	vector <int> prev2{1};
 	int fx =2;

 	while(fibbo_numbers.size()!=1000)
 	{

 		prev2 = prev1;
 		prev1 = fibbo_numbers;

 		for (int i = 0; i < fibbo_numbers.size(); ++i)
 			{

 				fibbo_numbers[i] = prev1[i]+prev2[i];

 			}
 		

 		for (int i = 0; i < fibbo_numbers.size(); ++i)
 			{

	 			if(fibbo_numbers[i]>=10)
	 				{
	 					int maradek = fibbo_numbers[i]%10;

	 					if(i==fibbo_numbers.size()-1)
	 					{
		 					fibbo_numbers.push_back((fibbo_numbers[i]-maradek)/10);
		 					fibbo_numbers[i]=maradek;
		 					prev1.push_back(0);
		 					prev2.push_back(0);
	 					}
	 					else
	 					{
	 						fibbo_numbers[i+1] += (fibbo_numbers[i]-maradek)/10;
	 						fibbo_numbers[i]=maradek;

	 					}
	 					
	 				}
 			}

 			
 		for(int i = fibbo_numbers.size()-1; i >= 0 ; --i)
 		{
 			//cout << fibbo_numbers[i]<< " ";
 		}	
 		//cout << endl;

 		fx++;

 	}
 	
     cout << "result: " << fx << endl;
  

	return 0;
}