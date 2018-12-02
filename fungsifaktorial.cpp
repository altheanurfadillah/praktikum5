#include <iostream>
using namespace std;

int faktorial(int n) {
    if (n==0 || n==1){
        cout << "1\n";
        return 1;
    }
        else {
            cout << n << "*";
            return n * faktorial(n-1);
        }
    }

int main () {
    int n;
    cout << "\n Masukan Nilai N! ";
    cin >> n;
    cout << n << "! = ";
    cout << "Maka Nilai " << n << "Faktorial dengan Rekursif: " << faktorial(n) << endl << endl;
}
