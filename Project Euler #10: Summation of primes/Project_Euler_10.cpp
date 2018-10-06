#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n;
    cin>>t;

    bool primes[1000001];

    memset(primes, true, sizeof(primes));

    primes[0] = primes[1] = false;

    for(ll i = 2; i <= 1000; i++) {
        if(primes[i]) {
            for(ll j = 2; i * j <= 1000000; j++)
                primes[i * j] = false;
        }
    }

    std::vector<ll> v;

    for(ll i = 1; i <= 1000000; i++)
        if(primes[i])
            v.push_back(i);

    while(t--) {
        cin>>n;
        ll sum = 0;
        for(ll i = 0; v[i] <= n && i < v.size(); i++) {
            sum += v[i];
        }
        cout<<sum<<endl;
    }

    return 0;
}
