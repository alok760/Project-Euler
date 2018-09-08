#include <bits/stdc++.h>
using namespace std;

int normalSieve(int n)
{
    bool prime[n/2];
    memset(prime, false, sizeof(prime));

    for (int i=3 ; i*i < n; i+=2)
    {
        if (prime[i/2] == false)
            for (int j=i*i; j<n; j+=i*2)
                prime[j/2] = true;
    }
    int result = 1;
    if(n>=2)
      result*=pow(2,int(log(n)/log(2)));

    for (int i=1; i<=n ; i+=2)
        if (prime[i/2] == false)
          result*=pow(i,int(log(n)/log(i)));
    return result;
}

int main()
{
    int k,inp;
    cin>>k;
    while(k--)
    {
      cin>>inp;
      cout<<normalSieve(inp)<<endl;
    }
    return 0;
}
