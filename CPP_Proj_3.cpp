//THIS PROJECT CONTAINS FUNCTION PROTOTYPE AND RECURSION

#include <iostream>

using namespace std;

void TemperatureConverter(); //function prototype

int main()
{
	TemperatureConverter();
}

void TemperatureConverter() 
{
	double fahrenheit_Temperature{};
	double celsius_Temperature{};
	double kelvin_Temperature{};
	double degree_ConversionResult;
	int choice{};

	cout << "TEMPERATURE CONVERTER!" << endl;
	cout << "[1] FAHRENHEIT TO CELSIUS" << endl;
	cout << "[2] FAHRENHEIT  TO KELVIN" << endl;
	cout << "[3] CELSIUS  TO FAHRENHEIT" << endl;
	cout << "[4] CELSIUS  TO KELVIN" << endl;
	cout << "[5] KELVIN  TO FAHRENHEIT" << endl;
	cout << "[6] KELVIN  TO CELSIUS" << endl;
	cin >> choice;

	cout << endl;

	switch (choice)
	{
	case 1:
		cout << "Fahrenheit to Celsius converter\n";
		cout << "Enter Fahrenheit Temperature: ";
		cin >> fahrenheit_Temperature;

		//Formula
		degree_ConversionResult = (fahrenheit_Temperature - 32) * 5 / 9;

		cout << "Degree Celsius: " << degree_ConversionResult << "°C" << endl << endl;
		break;

	case 2:
		cout << "Fahrenheit to Kelvin converter\n";
		cout << "Enter Fahrenheit Temperature: ";
		cin >> fahrenheit_Temperature;

		//Formula
		degree_ConversionResult = (fahrenheit_Temperature - 32) * 5 / 9 + 273.15;

		cout << "Kelvin: " << degree_ConversionResult << "K" << endl << endl;
		break;

	case 3:
		cout << "Celsius to Fahrenheit converter\n";
		cout << "Enter Degree Celcius: ";
		cin >> celsius_Temperature;

		//Formula
		degree_ConversionResult = (celsius_Temperature * 9 / 5) + 32;

		cout << "Fahrenheit: " << degree_ConversionResult << "°F" << endl << endl;
		break;

	case 4:
		cout << "Celsius to Kelvin converter\n";
		cout << "Enter Degree Celcius: ";
		cin >> celsius_Temperature;

		//Formula
		degree_ConversionResult = celsius_Temperature + 273.15;

		cout << "Kelvin: " << degree_ConversionResult << "K" << endl << endl;
		break;

	case 5:
		cout << "Kelvin to Fahrenheit converter\n";
		cout << "Enter Kelvin: ";
		cin >> kelvin_Temperature;

		//Formula
		degree_ConversionResult = (kelvin_Temperature - 273.15) * 9 / 5 + 32;

		cout << "Fahrenheit: " << degree_ConversionResult << "°F" << endl << endl;
		break;

	case 6:
		cout << "Kelvin to Degree Celsius converter\n";
		cout << "Enter Kelvin: ";
		cin >> kelvin_Temperature;

		//Formula
		degree_ConversionResult = kelvin_Temperature - 273.15;

		cout << "Degree Celsius: " << degree_ConversionResult << "°C" << endl << endl;
		break;

	default:
		cout << "ENTER A VALUE BETWEEN 1-6 ONLY!" << endl << endl;
		TemperatureConverter();  //RECURSION, repeats the function
		break;
	}
}