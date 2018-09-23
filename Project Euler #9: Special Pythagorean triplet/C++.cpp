//Needs improvement
#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int flag=1;
        for(int a=1;a<n;a++)
            for(int b=1;b<n-a;b++)
            {
                int c = n-a-b;
                if(a*a + b*b == c*c)
                {
                    cout<<a*b*c<<endl;
                    flag=0;
                    break;
                }
                if(!flag)
                    break;
            }
        if(flag)
            cout<<-1<<endl;

    }
    return 0;

}
