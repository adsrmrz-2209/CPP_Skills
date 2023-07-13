#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int vector_toAdd{ 0 };
	vector <int> vector1;
	vector <int> vector2;
	vector <vector<int>> vector_2d;


	cout << "Add a number to add in vector 1: ";
	cin >> vector_toAdd;
	vector1.push_back(vector_toAdd);

	cout << "Add another number to add in vector 1: ";
	cin >> vector_toAdd;
	vector1.push_back(vector_toAdd);

	cout << "\nVector 1 contains " << vector1.size() << " elements:" << endl;
	cout << vector1.at(0) << endl << vector1.at(1) << endl;
	


	cout << "\nAdd a number to add in vector 2: ";
	cin >> vector_toAdd;
	vector2.push_back(vector_toAdd);


	cout << "Add another number to add in vector 2: ";
	cin >> vector_toAdd;
	vector2.push_back(vector_toAdd);

	cout << "\nVector 2 contains " << vector2.size() << " elements" << endl;
	cout << vector2.at(0) << endl << vector2.at(1) << endl << endl;
	


	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	cout << "Vector_2d contains " << vector_2d.size() << " elements" << endl;
	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
	
	cout << endl << endl;

	vector1.at(0) = 1000;
	vector_2d.at(0).at(0) = vector1.at(0);

	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

	//cout <<vector1.at(0) << endl << vector1.at(1) << endl;
	cout << endl << vector_2d.at(0).at(0) << endl << vector_2d.at(0).at(1);

	cout << endl;
}

