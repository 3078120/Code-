#include <iostream> // connects to the iostream library imports the c++ library and deals with input and output //
using namespace std; 
int main()
{
	system("cls");
	double wage1, LowTax, tax1, tax2, tax3, MediumTax, HighTax, total, total2 ; // states the variable of the wage earnt and tax
	cout << "please input how much you earn a year "<< endl; // is asking for the user to put how much they earn a year
	cin >> wage1; // gets them to input the wage
	
	if (wage1 <= 11000){ // the if statement triggers if you only earn 11000 pounds or under and then prints out you dont have to pay any income tax.
		cout << "You don't have any income tax \n"; // prints out that you don't have to pay income tax //
	} 
	else if (wage1 >= 11001 && wage1 <= 43000) { /* the else if statement is suppose to trigger if you earn 11001 pounds or up to 43000 pounds */ 
		LowTax = (wage1 - 11000); // It takes off the 11000 pounds of tax free money away from your wage//
		tax1 = LowTax / 100 * 20; // this takes the LowTax total and divides it by 100 and multiples it by 20 to get 20 percent tax of your wage//
		total = wage1 - tax1; // The total equals the wage - tax1 which gives you the total
		cout << "You pay 20 percent tax this how much you pay:  \n " << tax1 << endl;
		cout << "This is how much you make in a year after tax: \n" << total << endl;// prints out that you pay 20 percent tax
	}
	else if (wage1 >= 43001 && wage1 <= 150000) { // statement triggers if you earn between 43001 and 150000 
		MediumTax = (wage1 - 43000);// the top of the band amount of the 40 percent tax - your wage //
		tax1 = MediumTax / 100 * 40;//Medium tax divide by 100 multiply by 40//
		tax2 = 32000 / 100 * 20; // the second tax goes from 32000 and divides by 100 and multiples by 20 
		tax3 = tax1 + tax2; // adds together tax1 and tax2 so you get the total tax
		total = wage1 - tax3; // the wage taking away the tax to get total amount you keep after tax
		cout << " You pay 40 percent tax this how much you pay: \n" << tax3 << endl;
		cout << "This is how much you make in a year after tax:  \n" << total << endl;
	}
	else if (wage1 >= 150001) { // this statement only triggers if you earn over 150001 and the wage > 150000 means trigger if wage is over this amount or is this amount
		HighTax = (wage1 - 150000);// 
		tax1 = HighTax / 100 * 45;
		tax2 = 118000 / 100 *40;
		tax3 = 32000 / 100 * 20;
		total = tax1 + tax2 + tax3;
		total2 = wage1 - total;
		cout << "You pay 45 percent tax this how much you pay: \n" << total << endl;
		cout << "This is how much you make in a year after tax:  \n" << total2 << endl;
	}
	return 0; // It terminates the program.
}
