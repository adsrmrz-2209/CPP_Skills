#include <iostream>

using namespace std;

int main()
{
	const double pricePerSmallRoom{ 25.0 };
	const double pricePerLargeRoom{ 35.0 };
	const double tax{ 0.06 };
	const int validDays{ 30 };
	int quantity_SmallRoom{ 0 };
	int quantity_LargeRoom{ 0 };

	cout << "Frank's Carpet Cleaning Service" << endl;
	cout << "Charges $25 per small room" << endl;
	cout << "Charges $35 per large room" << endl;
	cout << "Sales tax rate is 6%" << endl;
	cout << "Estimate valid for 30 days.\n" << endl;
	cout << "Estimate for carpet cleaning service\n" << endl;

	cout << "How many small rooms would you like to be cleaned? ";
	cin >> quantity_SmallRoom;

	cout << "\nHow many large rooms would you like to be cleaned? ";
	cin >> quantity_LargeRoom;

	double small_RoomCost{ pricePerSmallRoom * quantity_SmallRoom };
	double large_RoomCost{ pricePerLargeRoom * quantity_LargeRoom };

	double allRoom_Cost = small_RoomCost + large_RoomCost;

	double roomCostTax{ allRoom_Cost * tax };

	cout << "\nNumber of small rooms to clean:" << quantity_SmallRoom << endl;
	cout << "Price per room: " << pricePerSmallRoom << endl;
	cout << "Cost: $" << small_RoomCost << endl << endl;

	cout << "Number of large rooms to clean:" << quantity_LargeRoom << endl;
	cout << "Price per room: " << pricePerLargeRoom << endl;
	cout << "Cost: $" << large_RoomCost << endl << endl;

	cout << "Total Cost: $" << allRoom_Cost << endl;
	cout << "Tax: $" << roomCostTax << endl;
	cout << "====================================" << endl;
	cout << "Total Estimate: $" << allRoom_Cost + roomCostTax << endl;
	cout << "Valid for: " << validDays << " days" << endl;
}

