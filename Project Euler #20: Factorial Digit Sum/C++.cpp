#include<iostream>
#include<boost/multiprecision/cpp_int.hpp>

using namespace std;
using boost::multiprecision::cpp_int;

cpp_int fib(cpp_int x){

  cpp_int res=1,i;
  for(i=2;i<=x;i++){
    res *= i;
  }
  return res;
}

int main(){
  cpp_int n=100,sum=0;
  cpp_int y = fib(n);

  while(y>0){
    sum += (y%10);
    y /= 10;
  }
  cout<<sum<<endl;
  return 0;
}
