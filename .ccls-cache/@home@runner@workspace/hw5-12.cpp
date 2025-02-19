//hw5-12.cpp - displays the total owed
//Created/revised by <Luke> on <2/18/25>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	double price_1 = 00.00;
	double price_2 = 00.00;
	//declare variables
	
	cout << "Price of Item 1";
	cin >> price_1;
	cout << "Price of Item 2";
	cin >> price_2;
	
	//enter input data
	
	if (price_1 > price_2)
		cout << "Total Owed: " << price_1 + (price_2 * 0.5) <<endl;
	
	else if  (price_2 >= price_1)
		cout << "Total Owed: " << price_2 + (price_1 * 0.5) << endl;
	
	return 0;
}	//end of main function