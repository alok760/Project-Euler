#include<iostream>

using namespace std;

long long int numberOfPath(int x){
  long long int count[x][x];

  for(int i=0;i<x;i++){
    count[i][0] = 1;
  }

  for(int j=0;j<x;j++){
    count[0][j] = 1;
  }

  for(int i=1;i<x;i++){
    for(int j=1;j<x;j++){
      count[i][j] = count[i-1][j] + count[i][j-1];
    }
  }
  return count[x-1][x-1];
}

int main(){
  int n = 20;

  cout<<numberOfPath(n+1)<<endl;
  return 0;
}
