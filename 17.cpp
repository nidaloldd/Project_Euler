#include "std_lib_facilities.h"

/*
	 one 3
	 two 3
	 three  5 
	 four 4
	 five 4
	 six 3
	 seven  5
	 eight  5
	 nine 4
	 ten   3
	 eleven  6
	 twelve  6
	 thirteen 8
	 fourteen 8
	 fifteen 7
	 sixteen  7
	 seventeen  9
	 eighteen  8
	 nineteen  8
	 twenty  6
	 thirty  6
	 forty  5   !!!
	 fifty    5
	 sixty    5
	 seventy  7
	 eighty  6
	 ninety   6
	 hundred  7
	 thousend 8

*/


int count_number(vector <int> vec)
{
	int count =0;
	 int a,b,c,d;

	 a = vec[3];
	 b = vec[2];
	 c = vec[1];
	 d = vec[0];

	//cout << a <<' ' << b <<' ' << c <<' ' << d <<' '; 

	switch(vec[3])
	{
		//+thousand +8
		case 1 : count+= 3+8;break;
		case 2 : count+= 3+8;break; 
		case 3 : count+= 5+8;break; 
		case 4 : count+= 4+8;break; 
		case 5 : count+= 4+8;break; 
		case 6 : count+= 3+8;break; 
		case 7 : count+= 5+8;break; 
		case 8 : count+= 5+8;break; 
		case 9 : count+= 4+8;break;
		default : count+= 0;
	}
	
	switch(vec[2])
	 { 
	 	//+hundred +7
		case 1 : count+= 3+7;break; 
		case 2 : count+= 3+7;break; 
		case 3 : count+= 5+7;break; 
		case 4 : count+= 4+7;break; 
		case 5 : count+= 4+7;break; 
		case 6 : count+= 3+7;break; 
		case 7 : count+= 5+7;break; 
		case 8 : count+= 5+7;break; 
		case 9 : count+= 4+7;break;
		default : count+= 0;
	  }	
	
	switch(vec[1])
	{ 
		//+ten +7
		case 2 : count+= 6;break; 
		case 3 : count+= 6;break; 
		case 4 : count+= 5;break; 
		case 5 : count+= 5;break; 
		case 6 : count+= 5;break; 
		case 7 : count+= 7;break; 
		case 8 : count+= 6;break; 
		case 9 : count+= 6;break;
		default : count+= 0;
	}

	if(vec[1]==1)
 {	
	switch(vec[0])
	{
		case 0 : count+= 3;break;
		case 1 : count+= 6;break;
		case 2 : count+= 6;break;
		case 3 : count+= 8;break; 
		case 4 : count+= 8;break; 
		case 5 : count+= 7;break; 
		case 6 : count+= 7;break; 
		case 7 : count+= 9;break; 
		case 8 : count+= 8;break;
		case 9 : count+= 8;break; 
		default : count+= 0;
	}
}
else
{
	switch(vec[0])
	{
		case 1 : count+= 3;break; 
		case 2 : count+= 3;break; 
		case 3 : count+= 5;break; 
		case 4 : count+= 4;break; 
		case 5 : count+= 4;break; 
		case 6 : count+= 3;break; 
		case 7 : count+= 5;break; 
		case 8 : count+= 5;break; 
		case 9 : count+= 4;break;
		default : count+= 0;
	}	
}

//330 130
		
	if((vec[3]!=0 || vec[2]!=0) && (vec[1]==1 || vec[1]==0) && vec[0]!=0)
	{
		count += 3;  // and	
	}
	else if(((vec[3]!=0 || vec[2]!=0) && vec[0]!=0 && vec[1]!=0 ))
	{
		count += 3;  // and
	}
	else if((vec[3]!=0 || vec[2]!=0) && vec[0]==0 && vec[1]==1)
	{
		count += 3;
	}
	

	return count;

}	

 vector<int> separete (int number)
{
	vector <int> vec(4);

	int tausend = 0;
	int hundred= 0;
	int ten= 0;
	int one = 0;

	if (number/1000>=1)
	{
		for (int i = 9; i > 0; --i) 
			if(number/(i*1000) >=1){tausend=i;break;}
	}
	number = number-(tausend*1000);
	vec[3] = tausend;
	
	if (number/100>=1)
	{
		for (int i = 9; i > 0; --i) 
			if(number/(i*100) >=1){hundred=i;break;}
	}
	number = number-(hundred*100);
	vec[2] = hundred;

	if (number/10>=1)
	{
		for (int i = 9; i > 0; --i) 
			if(number/(i*10) >=1){ten=i;break;}
	}
	number = number-(ten*10);
	vec[1] = ten;

	if (number/1>=1)
	{
		for (int i = 9; i > 0; --i) 
			if(number/(i*1) >=1){one=i;break;}
	}
	vec[0] = one;
	

   return(vec);

}

int main()
{

  
   int count=0;
 // /*
   for (int i = 1; i <= 1000; ++i)
   {
   		cout << i << ' ' << count_number(separete(i)) << endl;
   		count += count_number(separete(i));
   }
  // */

//cout << 115 << ' ' << count_number(separete(115)) << endl;

cout << "sum :" << count << endl;


	return 0;
}