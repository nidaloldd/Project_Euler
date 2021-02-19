#include "std_lib_facilities.h"

int number_of_digit(int number)
{
	int digits; //müködjon csak 2db 2 jegyü illetve 3 jegyi számok szorzatára 
		//min 3 jegyü max 6 jegyű

		if(number<1000) digits=3;
		else if(number<10000) digits=4;
		else if(number<100000) digits=5;
		else if(number<1000000) digits=6;
		else error("wrong value");

		return digits;
}


bool is_Palidrome(int number)
{
	// 9977 =  9*1000 + 9*100 + 7*10 + 77

    int t1,t2,t3,t4,t5,t6;
    int val1,val2,val3,val4,val5,val6;
    int digit = number_of_digit(number);
    int i;

    	i =900000;

	    	while(i!=0)
	    	{
	    		if(number/i >=1 ) {t1=i/100000; val1=i; break;}
	    		else
	    		 {t1=0; val1=0;}
	    		
	    		i-=100000;
	    	}
    	i =90000;

	    	while(i!=0)
	    	{
	    		if((number-val1)/i >=1 ) {t2=i/10000; val2=i; break;}
	    		else t2=0; val2=0;
	    		
	    		i-=10000;
	    	}
    	i =9000;

	    	while(i!=0)
	    	{
	    		if((number-val1-val2)/i >=1 ) {t3=i/1000; val3=i; break;}
	    		else t3=0; val3=0;
	    		
	    		i-=1000;
	    	}
    	i =900;

	    	while(i!=0)
	    	{
	    		if((number-val1-val2-val3)/i >=1 ) { t4=i/100; val4=i; break;}
	    		 else {t4=0; val4=0;}
	    		
	    		i-=100;
	    	}
    	i =90;

	    	while(i!=0)
	    	{
	    		if((number-val1-val2-val3-val4)/i >=1 ) {t5=i/10; val5=i; break;}
	    		else {t5=0; val5=0;}
	    		
	    		i-=10;
	    	}
    	i =9;
    	
	    	while(i!=0)
	    	{
	    		if((number-val1-val2-val3-val4-val5)/i >=1 ) {t6=i/1; val6=i; break;}
	    		else { t6=0; val6=0;}
	    		
	    		i-=1;
	    	}
    	    	
     	//cout << val6 <<"\t"<< val5 <<" \t"<< val4 <<" \t"<< val3<<" \t"<< val2 <<" \t"<< val1 << endl;
     	//cout << t6 <<"\t"<< t5 <<" \t"<< t4 << " \t"<< t3<<" \t"<< t2 <<" \t"<< t1 << endl;
    	//return val6+val5+val4+val3+val2+val1;

    	switch(digit)
    	{
    		case 3: if(number==t6*100+t5*10+t4*1) {return true;} else return false;
    		case 4: if(number==t6*1000+t5*100+t4*10+t3*1) {return true;} else return false;
    		case 5: if(number==t6*10000+t5*1000+t4*100+t3*10+t2*1) {return true;} else return false;
    		case 6: if(number==t6*100000+t5*10000+t4*1000+t3*100+t2*10+t1*1) {return true;} else return false;
    		default : return false;
    	}

}

int main()
{

/*      Test is_Palidrome
while(true)
{
	int k;
	cin >> k;
	if(is_Palidrome(k)) cout << "true" << endl;	
	else cout << "false" << endl;
}
*/
	int max=0;
	int first;
	int sekund;

for (int i = 111; i <= 999; ++i)
{
	for (int j = 111; j <= 999; ++j)
	{
		int produckt = i*j;
		if(is_Palidrome(produckt) && produckt>max)
		{
			first=i; sekund=j;
			max = produckt; 
			cout << max<< endl;
		}
	
	}
}

cout << first << '*' << sekund << " =" << endl;
cout << max << endl;

	return 0;
}