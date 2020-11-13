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

int main(int argc, char *argv[], char *envp[])
{
	double number;
	unsigned int degree;
	cout << "insert the number. ";
	cin >> number;
	cout << "enter degree. ";
	cin >> degree;
	cout << my_pow(number, degree);

	system("pause");
	return 0;
}

