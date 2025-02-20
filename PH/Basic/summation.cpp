#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long sum = 0;
    cin >> n;
    int arr[n];


    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    
    if(sum < 0){
        sum = sum * -1;
    }

    cout << sum;
    
    
    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A