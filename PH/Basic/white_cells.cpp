#include <bits/stdc++.h>
using namespace std;

int main(){
    int H, W, h, w;
    cin >> H >> W >> h >> w;

    int result = (H - h) * (W - w);
    // int result = (H * W) - ((h * W) + (H * w) - (h * w));

    cout <<  result;

    return 0;
}

// https://atcoder.jp/contests/abc121/tasks/abc121_a?lang=en

// 1. cell remained = (White row - Colored row) * (white column - colored column) 

// 2. cell remained = ( total cell ) - Rows + Columns - overlap cell
