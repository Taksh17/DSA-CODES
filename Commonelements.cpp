#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr;
    int arr1[] = {3, 4, 2, 2, 4};
    int arr2[] = {3, 2, 2, 7};

    int n1 = 5;
    int n2 = 4;

    sort(arr1, arr1 + n1);
    sort(arr2, arr2 + n2);

    int i = 0, j = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] == arr2[j]) {
            arr.push_back(arr1[i]);
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }

    for (int k = 0; k < arr.size(); k++) {
        cout << arr[k] << " ";
    }
}
