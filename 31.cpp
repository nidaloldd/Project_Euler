#include "std_lib_facilities.h"

int main()
{
	int result=0;
	for (int peny1 = 0;  peny1 <= 200;   peny1+=1)   {
	for (int peny2 = 0;  peny2 <= 200;   peny2+=2)   {
	for (int peny5 = 0;  peny5 <= 200;   peny5+=5)   {
	for (int peny10 =0;  peny10 <= 200;  peny10+=10) {
	for (int peny20 =0;  peny20 <= 200;  peny20+=20) {
	for (int peny50 =0;  peny50 <= 200;  peny50+=50) {
	for (int font1 = 0;  font1 <= 200;   font1+=100) {
	for (int font2 = 0;  font2 <= 200;   font2+=200)
	{
		if(peny1+peny2+peny5+peny10+peny20+peny50+font1+font2==200){result++;}	
	}
	}}}}}}}

	cout << "result :" << result<< endl;

	return 0;
}