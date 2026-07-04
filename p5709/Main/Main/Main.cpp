#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double m,t,s;
    cin>>m>>t>>s;

    if (t == 0 || m - ceil(s / t)<0)
    {
        cout << 0;
        return 0;
    };

    cout << m - ceil(s/t);

    

    return 0;
}