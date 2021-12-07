
#include <iostream>
#include <iomanip>
#include <cmath>

#include "dob.h"
#include "sum.h"
#include "var.h"

using namespace std;

using namespace nsDob;
using namespace nsSum;
using namespace nsVar;

int main()
{
	
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-------------------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(20) << "exp(1 / x)" << " |"
		<< setw(7) << "S" << "              |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		sum();
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(20) << setprecision(5) << exp(1 / x) << " |"
			<< setw(20) << setprecision(5) << S << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-------------------------------------------------------------" << endl;

	return 0;
}
