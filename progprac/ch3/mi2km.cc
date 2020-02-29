#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double input_miles = 0.0;
	const double kMilesToKm = 1.61;
	cout << "Enter the number of miles: ";
	cin >> input_miles;
	cout << "Number of kilometers is " << setprecision(4) << input_miles * kMilesToKm << "\n";
}

