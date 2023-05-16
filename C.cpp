#include <iostream>

using namespace std;

//susah banget?????? masih lumayan bingung konsepnya, tp ngerti, tp bingung

int main() {
    int N, i, k;
    int x = 0;
    cin >> N;

    for(i=1; i<=N; i++) {
        for (k=0; k<i; k++) {
            cout << x;
            x = x+1;
            if (x == 10) {
                x = 0;
            }
        }
        cout << endl;
    }

}




