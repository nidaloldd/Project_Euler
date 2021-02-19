#include "std_lib_facilities.h"

vector <int> separate(int origainal)
{
	vector <int> vec;
	//pl 315

	while(origainal/10>0)
	{

	   int b =origainal;
	   b %=10; //5
	   origainal = (origainal-b)/10;

	   vec.push_back(b);

	} 
	 if(origainal<10){vec.push_back(origainal);}
	
	return vec;
}

string hatvany(vector <int> alap,int alap2,int hatvany)
{
	string number;
	vector <int>vec = alap;

for (int a = 0; a < hatvany-1; ++a)
{

	for (int i = 0; i < vec.size(); ++i)
	{
		vec[i]*=alap2;
	}

	for (int i = 0; i < vec.size(); ++i)
	{

		if(vec[i]>9)
		{
			int a=vec[i];
			vec[i] = a%10;

			if(i+1<vec.size())
			{
				a = (a-a%10)/10;
				vec[i+1] += a;
			}
			else
			{
				a = (a-a%10)/10; //32
				vec.push_back(a);
				alap.push_back(1);
			}	
		}	
	}
}	

for (int i = vec.size()-1; i >= 0; --i)
{
	switch(vec[i])
	{
		case 0 : number+="0";break;
		case 1 : number+="1";break;
		case 2 : number+="2";break;
		case 3 : number+="3";break;
		case 4 : number+="4";break;
		case 5 : number+="5";break;
		case 6 : number+="6";break;
		case 7 : number+="7";break;
		case 8 : number+="8";break;
		case 9 : number+="9";break;
	}
}	

	return number;
	//return vec;
}


int main()
{
	vector <string> numbers;

	for (int a = 2; a <= 100; ++a)
	{
		for (int b = 2; b <= 100; ++b)
		{
			//vector <int> vec = hatvany(separate(a),b);
			string num = hatvany(separate(a),a,b);
			cout << "a ="<<a << "| b ="<< b<< "| " << num << endl;

			if(!count(numbers.begin(),numbers.end(),num))
			{
				numbers.push_back(num);
			}	
		}
	}

	cout << "result: " << numbers.size() << endl;
}