#include <bits/stdc++.h>
using namespace std;

int main(){
    int harry_shots , larry_shots;
    cin >> harry_shots >> larry_shots;

    int total_fired = (harry_shots + larry_shots - 1 );

    int harry_missed = total_fired - harry_shots; 
    int larry_missed = total_fired - larry_shots; 


    cout << harry_missed << " " << larry_missed;

    return 0;
}

// https://acm.timus.ru/problem.aspx?space=1&num=1409 