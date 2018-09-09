
#include <bits/stdc++.h>
using namespace std;

void SieveOfAtkin(int limit,int inp)
{

    bool sieve[limit];
    for (int i = 0; i < limit; i++)
        sieve[i] = false;

    for (int x = 1; x * x < limit; x++) {
        for (int y = 1; y * y < limit; y++) {

            // Main part of Sieve of Atkin
            int n = (4 * x * x) + (y * y);
            if (n <= limit && (n % 12 == 1 || n % 12 == 5))
                sieve[n] ^= true;

            n = (3 * x * x) + (y * y);
            if (n <= limit && n % 12 == 7)
                sieve[n] ^= true;

            n = (3 * x * x) - (y * y);
            if (x > y && n <= limit && n % 12 == 11)
                sieve[n] ^= true;
        }
    }

    // Mark all multiples of squares as non-prime
    for (int r = 5; r * r < limit; r++) {
        if (sieve[r]) {
            for (int i = r * r; i < limit; i += r * r)
                sieve[i] = false;
        }
    }
    int i=2;
    // Print primes using sieve[]
    for (int a = 5; a < limit; a++)
        if (sieve[a])
        {
            i++;
            if(i==inp)
            {
              cout<<a<<endl;
              break;
            }
        }
}

// Driver program
int main(void)
{
    int limit = 200000;
    long int inp,t;
    cin>>t;
    while(t--)
    {
      cin>>inp;
      if(inp==1)
        cout<<2<<endl;
      else if(inp==2)
        cout<<3<<endl;
      else
        SieveOfAtkin(limit,inp);
    }
    return 0;
}
