#include "std_lib_facilities.h"

string file = "22.txt";
ifstream in {file};

string Read_name()
{
	char ch;
	string name = "";

	while(true)
	{

		in >> ch;

		if(ch ==',' || !in) { break;}
		else if(ch!='"')
		{
			name+= ch;
		}	
	}	

	return name;
}

int value_of_name(string name)
{
	vector <char> ABC {'0','A','B','C','D','E','F','G',
					       'H','I','J','K','L','M','N',
					       'O','P','Q','R', 'S','T','U',
					       'V','W','X','Y','Z'};
	
	char ch;				       
	int result=0;
	
	for (int j = 0; j < name.size(); ++j)
	{
		for (int i = 1; i <= 26; ++i)
		{
			if(ABC[i]==name[j])
			{
				result+=i;break;
			}
		}
	}	
					   
	return result;
}

struct A
{
	string nev;
	int value;
	int sorszam;
};
vector <A> vec;

bool compare(A a,A b)
{
	return(a.nev<b.nev);
}

int main()
{

	while(in.peek()!=EOF)
	{
		string name = Read_name();
		vec.push_back({name,value_of_name(name)});
	}	

	sort(vec.begin(),vec.end(),compare);

	long int result =0;

	for (int i = 0; i < vec.size(); ++i)
	{
		vec[i].sorszam = i+1;

		cout << vec[i].sorszam << ' ' << vec[i].nev << ' '<< vec[i].value << endl;
		result+= vec[i].sorszam*vec[i].value;
	}
	cout << result << endl;


	return 0;
}