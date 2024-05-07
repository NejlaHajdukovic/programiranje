#include<iostream>

using namespace std;

int NZD (int a, int b, int c ){
    int minimum = a;
    if (b < minimum) {
        minimum = b;
    }
    if (c < minimum) {
        minimum = c;
    }
    int najvecidjelioc = 1;
    for (int i = 2; i <= minimum; i++) {
        if (a % i == 0 && b % i == 0 && c % i == 0) {
            najvecidjelioc = i;
        }
    }
    return najvecidjelioc;
}

int main () {
    int a, b, c;
    cout << "Unesite a, b, c:";
    cin >> a >> b >> c;

    cout << "NZD je: " << NZD (a, b, c) << endl;



return 0;
}
