#include <math.h>
#include <iostream>
using namespace std;
double integrand(double x) {
	double function = pow(x,3)+1; //you have to change the function here!!!!
	return function;
}

int main()
{
	double leftb, rightb, integralL = 0, integralR = 0, integralM = 0, integralTrap = 0, integralSimp = 0, delX = 0;
	int n = 0, precision;
	cout << "What is the left boundary?\n";
	cin >> leftb;
	cout << "What is the right boundary?\n";
	cin >> rightb;
	cout << "How many subintervals (n) do you want?\n";
	cin >> n;
	cout << "How many digits do you want?\n";
	cin >> precision;
	delX = (rightb - leftb) / n;
	cout.precision(precision);
	cout << "Number of slices: " << n;
	for (int i = 0; i < n; i++) {
		integralL += integrand(leftb + i * delX) * delX;
	}
	cout << "\nIntegration using left endpoint: " << integralL;
	for (int i = 1; i <= n; i++) {
		integralR += integrand(leftb + i * delX) * delX;
	}
	cout << "\nIntegration using right endpoint: " << integralR;
	for (int i = 0; i < n; i++) {
		integralM += integrand(leftb + delX / 2 + i * delX) * delX;
	}
	cout << "\nIntegration using midpoint: " << integralM;
	for (int i = 0; i < n; i++) {
		integralTrap += (integrand(leftb + i * delX) + integrand(leftb + (i + 1) * delX)) * delX / 2;
	}
	cout << "\nIntegration using Trapazoidal Rule: " << integralTrap;
	if (n % 2 == 1) {
		cout << "\nWe need an even number for the number of subinterval with the Simpson's Rule";
	}
	else {
		for (int i = 0; i < n - 1; i = i + 2) {
			integralSimp += (integrand(leftb + i * delX) + 4 * integrand(leftb + (i + 1) * delX) + integrand(leftb + (i + 2) * delX)) * delX / 3;
		}
		cout << "\nIntegration using Simpson's Rule: " << integralSimp;
	}

}