#include <iostream>
#include <chrono>

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
 cout << endl;
        
        
    
            auto start = std::chrono::high_resolution_clock::now(); // get the start time
        
            // code to be timed goes here
            for (int i = 0; i < 1000000; i++) {
                // do some work
            }
        
            auto end = std::chrono::high_resolution_clock::now(); // get the end time
            auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start); // calculate the duration in microseconds
        
            cout << "Execution time: " << duration.count() << " microseconds" << std::endl; // output the duration
            return 0;
        
}




