#include<iostream>
#include<cmath>
using namespace std;

namespace util
{
	void parse(double BMI)
	{
		if (BMI < 18.5)
		{
			cout << "Underweight";
		}
		else if (BMI >= 18.5 && BMI < 24)
		{
			cout << "Normal";
		}
		else
		{
			cout << BMI << "\n" << "Overweight";
		}
	}
};

int main()
{
	double m,h;
	cin >> m >> h;

	double BMI = m / (pow(h,2));

	util::parse(BMI);

	return 0;
}