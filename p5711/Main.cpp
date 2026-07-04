#include<iostream>

using namespace std;

namespace util
{
	int condition1(int n)
	{
		return n % 4 == 0 && n%100!=0;
	}

	int condition2(int n)
	{
		return n % 400==0;
	}
}

int main()
{
	int n;cin>>n;

	int f1=util::condition1(n);

	int f2 = util::condition2(n);

	if (f1 || f2)
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}

	return 0;
}