#include<iostream>

using namespace std;

namespace util
{
	int Local(int n)
	{
		return n * 5;
	}

	int Luogu(int n)
	{
		return n * 3 + 11;
	}
};

int main()
{
	int n;
	cin >> n;

	int Local=util::Local(n);
	int Luogu=util::Luogu(n);

	cout << ((Local<Luogu)?"Local":"Luogu");

	return 0;
};