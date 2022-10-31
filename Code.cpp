#include <iostream>
#include <cmath>
#include <algorithm>
#define ll long long
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int* arr = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int min = arr[0], max = arr[0];
    int awesome = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            awesome++;
            max = arr[i];
        }
        else if(arr[i] < min) {
            awesome++;
            min = arr[i];
        }
    }
    cout << awesome;
    delete []arr;
    return 0;
}
