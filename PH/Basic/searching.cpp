#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x_position = -1;
    long long a, x;
    cin >> n;

    long long arr[n];

    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    cin >> x;


    for (int i=0; i<n; i++){
        if(x == arr[i]){
            x_position = i;
            break;
        }
    }

    cout << x_position ;
     
    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B