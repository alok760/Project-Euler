#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
    long int f,s,m=0,sum=0;
    long int n;
    cin>>n;
    f = 1;
    s = 1;
    while(1)
    {

        m=f+s;
        if(m>n)
            break;
        if(m%2==0)
            sum+=m;
        s=f;
        f=m;

    }
    cout<<sum<<endl;
    }

    return 0;

}
