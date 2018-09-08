#include <bits/stdc++.h>
using namespace std;

void normalSieve(int n)
{
    // prime[i] is going to store true if
    // if i*2 + 1 is composite.
    bool prime[n/2];
    memset(prime, false, sizeof(prime));

    // 2 is the only even prime so we can
    // ignore that. Loop starts from 3.
    for (int i=3 ; i*i < n; i+=2)
    {
        // If i is prime, mark all its
        // multiples as composite
        if (prime[i/2] == false)
            for (int j=i*i; j<n; j+=i*2)
                prime[j/2] = true;
    }

    // writing 2 separately

    int result = 1;
    if(n>=2)
      result*=pow(2,int(log(n)/log(2)));
    cout<<result<<endl;
    // Printing other primes
    for (int i=3; i<=n ; i+=2)
        if (prime[i/2] == false)
        {
          int k = log(n)/log(i);
          result*=pow(i,int(log(n)/log(i)));
          cout<<"i : "<<i<<" k:"<<k<<" pow:"<<pow(i,k)<<" res: "<<result<<endl;
        }
}

// Driver code
int main()
{
  int k,inp;
  cin>>k;
  while(k--)
  {
    cin>>inp;
    normalSieve(inp);
  }
  return 0;
}
