#include<bits/stdc++.h>
using namespace std;
const long long MAX_SIZE = 1000001;
vector<long long >isprime(MAX_SIZE , true);
vector<long long >prime;
vector<long long >SPF(MAX_SIZE);

void manipulated_seive(int N)
{
    isprime[0] = isprime[1] = false ;
    for (long long int i=2; i<N ; i++)
    {
        if (isprime[i])
        {
            prime.push_back(i);
            SPF[i] = i;
        }
        for (long long int j=0;
             j < (int)prime.size() &&
             i*prime[j] < N && prime[j] <= SPF[i];
             j++)
        {
            isprime[i*prime[j]]=false;
            SPF[i*prime[j]] = prime[j] ;
        }
    }
}


int main()
{
    int N = 5 ; // Must be less than MAX_SIZE
    int sum=0;
    manipulated_seive(N);

    // pint all prime number less then N
    for (int i=0; i<prime.size() && prime[i] <= N+1 ; i++)
        cout << prime[i] << " ";

    return 0;
}
