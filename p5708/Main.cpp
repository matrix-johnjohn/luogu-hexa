#include <iostream>
#include <cmath>
#include <format>

using namespace std;

int main()
{
	double a, b, c;

	cin>>a>>b>>c;

	double p=(a+b+c)/2;

	double sum=sqrt(p*(p-a)*(p-b)*(p-c));
	
	cout << format("{:.1f}",sum);


	return 0;
}
