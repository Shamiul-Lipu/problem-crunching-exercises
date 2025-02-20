#include <iostream>
using namespace std;

int main() {
    int T, n, i = 1;

    cin >> T ;

    // for(i ; i <=T; i++){
    //     cin >> n;
    //     if (n % 2 == 0) {
    //         cout << "even" << endl;
    //     } else {
    //         cout << "odd" << endl;
    //     }
    // }

    while( i <= T ){
        cin >> n;
        if(n % 2 == 0) cout << "even" << endl;
        else cout << "odd" << endl; 
        i++;
    }

    return 0;
}
