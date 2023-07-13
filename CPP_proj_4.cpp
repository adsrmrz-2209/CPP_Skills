#include <iostream>

using namespace std;

int main()
{
	const int dollar{ 100 };
	int dollar_Quantity{};

	const int quarter{ 25 };
	int quarter_Quantity{};

	const int dime{ 10 };
	int dime_Quantity{};

	const int nickel{ 5 };
	int nickel_Quantity{};

	const int penny{ 1 };
	int penny_Quantity{};

	int cent{};

	cout << "Enter the amount in cents: ";
	cin >> cent;


	dollar_Quantity = cent / dollar;
	//cent = cent - (dollar_Quantity * dollar); // works too (alternative solution)
	cent -= dollar_Quantity * dollar;

	quarter_Quantity = cent / quarter;
	//cent = cent - (quarter_Quantity * quarter); // works too (alternative solution)
	cent -= quarter_Quantity * quarter;

	dime_Quantity = cent / dime;
	//cent = cent - (dime_Quantity * dime); // works too (alternative solution)
	cent -= dime_Quantity * dime;

	nickel_Quantity = cent / nickel;
	//cent = cent - (nickel_Quantity * nickel); // works too (alternative solution)
	cent -= nickel_Quantity * nickel;

	penny_Quantity = cent;

	cout << "\ndollar quantity: " << dollar_Quantity << endl;
	cout << "quarter quantity: " << quarter_Quantity << endl;
	cout << "dime quantity: " << dime_Quantity << endl;
	cout << "nickel quantity: " << nickel_Quantity << endl;
	cout << "penny quantity: " << penny_Quantity << endl << endl;
}

