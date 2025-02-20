#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--){
        string n;
        cin >> n;
        
        int lastDigit = n[n.length() - 1];

        (lastDigit % 2 == 0) ? cout << "even\n" : cout << "odd\n";
    }
    return 0;
}
