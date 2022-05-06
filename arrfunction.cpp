
#include "arrfunction.h"

void mass(Array* arr, int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i].Get() << " ";
    }
}

int Arrsum(Array* arr, int n)
{
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += arr[i].x;
    }
    return s;
}

void equalityfirst(Array* arr, int n)
{
    for (int i = 0, j = n - 1 ; i < j; ++i, --j) {
        Array t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
}

void morefirst(Array* arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (arr[i].x > arr[j].x) {
                swap(arr[i].x, arr[j].x);
            }
        }
    }
}

void lessfirst (Array* arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (arr[i].x < arr[j].x) {
                swap(arr[i].x, arr[j].x);
            }
        }
    }
}

void(*select(int sum, Array* arr))(Array*, int) {

    void (*action[])(Array *arr, int n) = {equalityfirst, morefirst, lessfirst};
    if (sum == arr[0].x) {
        return action[0];
    }
    if (sum > arr[0].x) {
        return action[1];
    }
    if (sum < arr[0].x) {
        return action[2];
    }
}