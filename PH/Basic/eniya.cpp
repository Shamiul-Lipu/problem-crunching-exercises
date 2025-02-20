#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;

    int result = 2 * n * a * b;

    cout << result;

    return 0;
}

// https://acm.timus.ru/problem.aspx?space=1&num=1293
// Surface Area Calculation:
// Each panel has an area of 𝐴×𝐵 
// Since both sides need processing, the effective area per panel is: 2 ×(𝐴 × 𝐵) 
// For 𝑁 such panels, the total area requiring processing is: 2×N×A×B
// Sulphide Requirement:
// Each square meter requires 1 nanogram of thorium sulfide.
// Hence, the total amount required is: 2×N×A×B nanograms
