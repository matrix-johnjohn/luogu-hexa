#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int>v;

	for (int i = 0;i < 3;i++)
	{
		int e;
		cin>>e;

		v.push_back(e);
	}

	sort(v.begin(), v.end());

	for (int i = 0;i < 3;i++)
	{
		cout << v[i] << " ";
	}

	return 0;
}
