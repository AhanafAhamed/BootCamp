#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    string line;
    getline(cin, line);

    stringstream ss(line);
    long long int sum = 0;
    long int num;
    for (int i = 0; i < n; i++) {
        ss >> num;
        sum += num;
    }
    cout << sum;
    return 0;
}
