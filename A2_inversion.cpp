#include <bits/stdc++.h>
using namespace std;

int inversions(vector<int>&a, int n) {

    
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) count++;
        }
    }
    return count;
}