#include <bits/stdc++.h>

using namespace std;

int BirthdayCakeCandles (vector<int> candles, int Number_Of_Candles);

int main()
{
    int Number_Of_Candles;
    cin >> Number_Of_Candles;

    vector<int> candles(Number_Of_Candles);

    for(int i = 0; i< Number_Of_Candles; i++)
    {
        cin >> candles[i];
    }

    sort(candles.rbegin(),candles.rend());

    int Results = BirthdayCakeCandles(candles, Number_Of_Candles);

    cout << Results;

    return 0;
}


int BirthdayCakeCandles (vector<int> candles, int Number_Of_Candles)
{
    int flag = candles[0];
    int i = 0;
    int temp_num = 0;
    while(candles[i] >= flag)
    {
        temp_num+=1;
        i++;
    }

    return temp_num;
}
