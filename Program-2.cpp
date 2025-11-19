#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<(2*i-1);
        if(i<n) cout<<", ";
    }



    return 0;
}