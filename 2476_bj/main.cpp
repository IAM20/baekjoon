#include <iostream>
using namespace std;

int maxTriple(const int arr[3]) {
    int maxEye = (arr[0] < arr[1]) ? arr[1] : arr[0];
    return (arr[2] < maxEye) ? maxEye : arr[2];
}

int getResult(const int arr[3]) {
    int sameNumber = 0;
    int eyes = 0;
    if(arr[0] == arr[1]) {
        sameNumber++;
        eyes = arr[0];
        if (arr[0] == arr[2]) {
            sameNumber++;
        }
    } else if (arr[0] == arr[2]) {
        sameNumber++;
        eyes = arr[0];
    } else {
        if(arr[1] == arr[2]) {
            sameNumber++;
            eyes = arr[1];
        } else {
            eyes = maxTriple(arr);
        }
    }

    switch (sameNumber) {
        case 2:
            return 10000 + eyes * 1000;
        case 1:
            return 1000 + eyes * 100;
        case 0:
            return eyes * 100;
        default:
            return -1;
    }
}

int main() {
    int maxResult = 0;
    int n;
    int pool[3];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> pool[j];
        }
        int result = getResult(pool);
        maxResult = (maxResult < result) ? result : maxResult;
    }
    cout << maxResult << endl;
}