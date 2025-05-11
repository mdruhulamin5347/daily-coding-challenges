// https://vjudge.net/solution/60588588

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string number;
    cin >> number;

    string beforeDotPart = "";
    string afterDotPart = "";
    bool isDotFound = false;

    for (char c : number) {
        if (c == '.') {
            isDotFound = true;
        } 
        else if (!isDotFound) {
            beforeDotPart += c;
        } 
        else {
            afterDotPart += c;
        }
    }


    char lastDigit = beforeDotPart.back();

    if (lastDigit == '9') {
        cout << "GOTO Vasilisa." << endl;
    } 
    else {
        if (afterDotPart[0] >= '5') {
            beforeDotPart.back() = lastDigit + 1;
        }
        cout << beforeDotPart << endl;
    }

    return 0;
}
