#include<iostream>

using namespace std;

int main(){
  long long int sum1= 0,sum2=0,sum3=0;
  int n1,n2,n3;
  n1 = 999/3;
  n2 = 999/5;
  n3 = 999/15;

  sum1 = (n1*(n1+1)*3)/2;
  sum2 = (n2*(n2+1)*5)/2;
  sum3 = (n3*(n3+1)*15)/2;

  cout<<sum1+sum2-sum3<<endl;
  return 0;
}
