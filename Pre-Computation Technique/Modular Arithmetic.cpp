/*
Given a number N. Print it's factorial.
constraints
1<=N<=100

Print answer module M
where M=47
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=47;
    long long fact=1;
    for(int i=2;i<=n;i++)
    {
        fact=(fact*i)%m;
    }
    cout<<fact<<endl;
    return 0;
}

