#include <bits/stdc++.h>
using namespace std;

void plusMinus(vector<int> Array) {
    int n = Array.size();
    double positive = 0, negative = 0, zero = 0;

    for (int num : Array) {
        if (num > 0) {
            positive++;
        } else if (num < 0) {
            negative++;
        } else {
            zero++;
        }
    }

    cout << positive/n << endl;
    cout << negative/n << endl;
    cout << zero/n << endl;
}

int main()
{
    int Number_Of_Index;
    cin >> Number_Of_Index;
    vector<int> Array(Number_Of_Index);

    for (int i = 0; i < Number_Of_Index; i++) {
        cin >> Array[i];
    }

    plusMinus(Array);
    return 0;
}
