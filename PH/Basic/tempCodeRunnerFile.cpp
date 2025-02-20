#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0;
    cin >> n;
    int arr[n];
    int minimum_element = arr[0];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];

        minimum_element == arr[i] ? count+=1 : count+=0 ;

        if(arr[i] < minimum_element){
            minimum_element = arr[i];
            count = 0;
            count++;
        } 
    }

    cout << minimum_element << count;
    
    if(minimum_element % 2 == 0){
        cout << "Unlucky";
    } else{
        cout << "Lucky";
    }
    
    
    return 0;
}