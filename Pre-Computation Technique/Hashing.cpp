/*
Given array of N integers.given Q queries
and each query given a number x. print
count of the number in array.

constraints
1<=N<=10^5
arr[i]<=10^7
1<=Q<=10^5

*/
#include<bits/stdc++.h>
using namespace std;
const int n=1e7+10;
int hsh[n];

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    hsh[arr[i]]++;
  }
  int t;
  cin>>t;
  while(t--)
  {
    int x;
    cin>>x;
    cout<<hsh[x]<<endl;
  }
  return 0;

}
