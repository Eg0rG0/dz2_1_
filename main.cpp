#include <iostream>
#include "arrfunction.h"
using namespace std;

int main() {
    int n, sum;
    cin >> n;
    Array *arr = new Array[n];
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        arr[i] = Array(k);
    }

    sum = Arrsum(arr, n);
    select(sum, arr)(arr,n);
    for (int i = 0; i < n; ++i) {
        cout << arr[i].Get() << " ";
    }
    delete []arr;
    return 0;
}