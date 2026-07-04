#include <iostream>

using namespace std;



namespace util
{
    int A(int t1, int t2)
    {
        int f=(t1+t2==2)?1:0;//两种性质都成立
    
        return f;
    }

    int Uim(int t1, int t2)
    {
        int f=(t1+t2>=1) ? 1 : 0;//至少一种性质成立

        return f;
    }

    int B(int t1,int t2)
    {
        int f = (t1 + t2 == 1) ? 1 : 0;//一种性质成立

        return f;
    }
    
    int Z(int t1, int t2)
    {
        int f = (!(t1 + t2)) ? 1 : 0;//不符合任一性质

        return f;
    }
};

int main()
{
    int x;
    cin >> x;

    int t1=(x%2==0);//性质1是否成立
    int t2=(x>4&&x<=12);//性质2是否成立

    cout<<util::A(t1, t2)<<" "<<util::Uim(t1,t2)<< " " << util::B(t1, t2)<<" " << util::Z(t1, t2);

    return 0;
}
