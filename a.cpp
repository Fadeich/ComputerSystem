#include <iostream>
using namespace std;

int findmax(int *a, int n) {
    int ind = 0;
    for (int y = 0; y < n; y++)
        if (a[y] > a[ind])
            ind = y;
    return ind;
}

int main() {
     int a[5] = {1, 2, 3, 4, 5};
     cout << findmax(a, 5) << "Hey";
     return 0;
}
