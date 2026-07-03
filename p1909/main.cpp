#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *total=new int[3];
    for(int i=0;i<3;i++)
    {
        int count,price;
        cin>>count>>price;

        total[i]=ceil(n*1.0/count)*price;
    }

    sort(total,total+3);

    cout<<total[0]<<endl;

    return 0;
}