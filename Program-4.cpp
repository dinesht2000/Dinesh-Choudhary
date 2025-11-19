#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of Dictionary: ";
    cin>>n;

    vector<int> arr(n);

    cout << "Enter " << n << " numbers: \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<int,int> res;

    for(int i=1;i<=9;i++){
        res[i]=0;
    }
    for(int num:arr){
        for(int i=1;i<=9;i++){
            if(num%i==0){
                res[i]++;
            }
        }
    }

    cout<<"{";
    for(int i=1;i<=9;i++){
        cout<<i<<":"<<res[i];
        if(i<9) cout<<", ";
    }
    cout<<"}"<<endl;

    return 0;
}