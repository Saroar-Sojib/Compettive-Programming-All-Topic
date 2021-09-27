/*
Given T test cases and in each test case a
Number N. Print its factorial for each
test case module %M.
where M=10^9+7

Constraints
1<=T<=10^5
1<=N<=10^5
*/

#include<bits/stdc++.h>
using namespace std;
const int m=1e9+7;
const int n=1e5+10;
long long fact[n];
int main()
{
  fact[0]=fact[1]=1;
  for(int i=2;i<n;i++)
  {
      fact[i]=(fact[i-1]*i)%m;
  }
  int t;
  cin>>t;
  while(t--)
  {
      int k;
      cin>>k;
      cout<<fact[k]<<endl;
  }
  return 0;
}
