
#include <iostream>

using namespace std;

double my_pow(double number, unsigned int degree)
{
	double pow = 1;
	for (int i = 0; i < degree; i++)
	{
		pow *= number;
	}
	return pow;
}

double my_pow_fast(double num, unsigned int deg) {
	double result = 1;
	while (deg) {
		if (deg % 2 == 0) {
			deg /= 2;
			num *= num;
		}
		else {
			deg--;
			result *= num;
		}
	}

	return result;
}

int main(int argc, char *argv[], char *envp[])
{
	double number;
	unsigned int degree;
	cout << "insert the number. ";
	cin >> number;
	cout << "enter degree. ";
	cin >> degree;
	cout << my_pow_fast(number, degree);

	system("pause");
	return 0;
}

