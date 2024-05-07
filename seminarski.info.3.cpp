#include<iostream>

using namespace std;

int Fibonacci (int n) {
    int prethodni_clan = 1;
    int sljedeci_clan = 1;

    if (n <= 2){
        return prethodni_clan;
    }

    int temp;
    for (int i = 3; i <= n; i ++){
         temp = sljedeci_clan;
         sljedeci_clan += prethodni_clan;
         sljedeci_clan = temp;
    }
    return sljedeci_clan;
}
int main () {
    int n;
    cout << "Unesite n: ";
    cin >> n;

    cout << Fibonacci(n) << endl;


return 0;
}
