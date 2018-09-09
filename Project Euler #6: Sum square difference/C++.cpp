#include <bits/stdc++.h>
using namespace std;
int main()
{
  long int t,inp;
  cin>>t;
  while(t--){
    cin>>inp;
    long int sum = pow((inp*(inp+1))/2,2);
    long int sum1 = (inp*(inp+1)*(2*inp+1))/6;
    cout<<sum-sum1<<endl;
  }
  return 0;
}
