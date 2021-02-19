#include "std_lib_facilities.h"

bool leak_year(int year)
{
	if(year%4==0 && (year%100!=0 || year%400==0)) { return true; }
	else return false;
}


int main()
{
	int year = 1901;
	int monht = 1;
	int day = 1;
	int weak = 2;

	int sum_of_sundays =0;

	while(!(year==2001 && monht==1 && day==1)) // 2000.12.31 ig
	{
		if(day==1 && weak==7) { sum_of_sundays++; }

		//cout << year << " " << monht << " " << day << " " << weak << endl;
		
		day++;
		weak++;


		if (weak==8) { weak = 1; }

	if(day == 31 && (monht==9 || monht==4 || monht==6 || monht==11)) { day =1;monht++; }
	

	if(day == 32 && (monht==1 || monht==3 || monht==5 || monht==7 || monht==8 || monht==10 || monht==12)){ day =1;monht++;}
	
	if(day==29 && monht ==2 && leak_year(year)==false) {day =1; monht++; }
	if(day==30 && monht ==2 && leak_year(year)==true) { day =1; monht++; }

	if(monht==13){ monht=1; year++; }
	
	
	}

	cout << "result :" << sum_of_sundays << endl;

	return 0;
}