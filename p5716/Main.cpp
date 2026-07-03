#include<iostream>
#include<set>

using namespace std;

namespace util
{
    bool JudgeYear(int year)
    {   
        if(year%4==0&&year%100!=0)
        {
            return 1;//闰年
        }
        if(year%400==0)
        {
            return 1;//闰年
        }
        return 0;
    }
}

int main()
{
    int year,month;
    cin>>year>>month;

    set<int>long_month{1,3,5,7,8,10,12};
    set<int>short_month{4,6,9,11};
    set<int>special_month{2};

    auto s=long_month.find(month);
    
    if (auto search = long_month.find(month); search != long_month.end())
        cout<<31;
    else if(auto search = short_month.find(month); search != short_month.end())
        cout<<30;
    else if(auto search = special_month.find(month); search != special_month.end())
    {
        if(util::JudgeYear(year))
        {
            cout<<29;
        }
        else
        {
            cout<<28;
        }
    }
    return 0;
}