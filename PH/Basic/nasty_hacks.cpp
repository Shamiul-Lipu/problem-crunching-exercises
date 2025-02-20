#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, r, e, c;
    cin >> n;

    while (n--){
        cin >> r >> e >> c;

        int profitWithAd = e - c;

        if (profitWithAd > r) {
            cout << "advertise" << endl;
        } else if (profitWithAd < r) {
            cout << "do not advertise" << endl;
        } else {
            cout << "does not matter" << endl;
        }        
    }
    

    return 0;
}

// https://open.kattis.com/problems/nastyhacks