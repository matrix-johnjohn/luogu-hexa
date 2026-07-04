#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

namespace utils
{
	//判断是否三角形的函数
	bool isTriangle(int* lines)
	{
		int con1=((lines[0]+lines[1])>lines[2]);
		int con2=((lines[0]+lines[2])>lines[1]);
		int con3=((lines[1]+lines[2])>lines[0]);
		return con1 && con2 && con3;
	};

	//判断是否直角三角形的函数
	bool isRightTriangle(int* lines)
	{
		int L[3];
		for (int i = 0;i < 3;i++) L[i] = lines[i];
		sort(L, L + 3);
		return (L[0] * L[0] + L[1] * L[1]) == (L[2] * L[2]);
	}

	//判断是否锐角三角形的函数
	bool isAcuteTriangle(int* lines)
	{
		int con1=((lines[0]*lines[0]+lines[1]*lines[1])>lines[2]*lines[2]);
		int con2=((lines[0]*lines[0]+lines[2]*lines[2])>lines[1]*lines[1]);
		int con3=((lines[1]*lines[1]+lines[2]*lines[2])>lines[0]*lines[0]);
		return con1 && con2 && con3;
	}

	//判断是否钝角三角形的函数
	bool isObtuseTriangle(int* lines)
	{
		int L[3];
		memset(L,0,sizeof(L));
		for(size_t i=0;i<3;i++)
		{
			L[i]=lines[i];
		}
		
		sort(L,L+3);
		
		return ((L[0] * L[0] + L[1] * L[1]) < (L[2] * L[2]));
	}

	//判断是否等腰三角形的函数
	bool isIsoscelestTriangle(int* lines)
	{
		return lines[0] == lines[1] || lines[0] == lines[2] || lines[1] == lines[2];
	}

	//判断是否等边三角形的函数
	bool isEquilateralTriangle(int* lines)
	{
		return lines[0] == lines[1] && lines[0] == lines[2] && lines[1] == lines[2];
	}
};

int main(int argc,char* argv)
{
	/**
		线段数据初始化
	*/
	int* lines = new int[3];
	memset(lines, 0, sizeof(lines));
	for (size_t i = 0;i < 3;i++)
	{
		cin >> lines[i];
	};

	//判断是否三角形
	if (!utils::isTriangle(lines))
	{
		cout << "Not triangle" << endl;
		return 0;
	}

	//判断是否直角三角形
	if (utils::isRightTriangle(lines))
	{
		cout<<"Right triangle"<<endl;
	}

	//判断是否锐角三角形
	if (utils::isAcuteTriangle(lines))
	{
		cout << "Acute triangle" << endl;
	}

	//判断是否钝角三角形
	if (utils::isObtuseTriangle(lines))
	{
		cout << "Obtuse triangle" << endl;
	}

	//判断是否等腰三角形
	if (utils::isIsoscelestTriangle(lines))
	{
		cout << "Isosceles triangle" << endl;
	}

	//判断是否等边三角形
	if (utils::isEquilateralTriangle(lines))
	{
		cout << "Equilateral triangle" << endl;
	}

	delete lines;
	lines = nullptr;
	return 0;
}