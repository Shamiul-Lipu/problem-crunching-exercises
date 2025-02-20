#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0;
    cin >> n;
    int arr[n];
    int minimum_element = INT_MAX;
    
    for(int i=0; i<n; i++){
        cin >> arr[i];

        minimum_element == arr[i] ? count++ : count+=0 ;

        if(arr[i] < minimum_element){
            minimum_element = arr[i];
            count = 0;
            count++;
        } 
    }

    if(count % 2 == 0){
        cout << "Unlucky";
    } else{
        cout << "Lucky";
    }
     
    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J