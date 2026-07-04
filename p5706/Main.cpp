#include<iostream>
#include <format>

using namespace std;

int main()
{
	double t;int n;
	cin >> t >> n;
	cout << format("{:.3f}", t / n) << endl;
	cout << n * 2;
	return 0;
}