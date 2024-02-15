#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of 1st array :";
    cin >> n;
    
    int k;
    cout << "Enter the size of 2nd array :";
    cin >> k;
    
    int nums1[n];
    int nums2[k];
    
    cout << "Enter the elements of 1st array :";
    for(int i = 0; i < n; i++) {
        cin >> nums1[i];
    }
    
    cout << "Enter the elements of 2nd array :";
    for(int i = 0; i < k; i++) {
        cin >> nums2[i];
    }
    
    int x = n + k;
    int temp[x];
    
    for (int i = 0; i < n; i++) {
        temp[i] = nums1[i];
    }

    int a = n;
    for (int j = 0; j < k; j++) {
        temp[a] = nums2[j];
        a++;
    }

    sort(temp, temp + x);

    double median;
    if (x % 2 == 0) {
        median = (temp[x / 2 - 1] + temp[x / 2]) / 2.0;
    } else {
        median = temp[x / 2];
    }
    
    cout << "The median of given two array after sorting is :" << median;
    
    return 0;
}


