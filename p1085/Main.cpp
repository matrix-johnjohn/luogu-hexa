#include<iostream>
#include<array>
#include<algorithm>

#define week 7

using namespace std;

namespace util
{
    int find_max(array<int,week>a)
    {
        int max_index=0,max_value=0;
        for(size_t i=0;i<week;i++)
        {
            if(a[i]>max_value&&a[i]>8)
            {
                max_value=a[i];
                max_index=i;
            }
        }
        return max_index;
    }

};

int main()
{
    array<int,week>a;

    for(size_t i=0;i<week;i++)
    {
        int e1,e2;
        cin>>e1>>e2;
        a[i]=e1+e2;
    };
    int m=util::find_max(a);
    cout<<(m?m+1:m);

    return 0;
}