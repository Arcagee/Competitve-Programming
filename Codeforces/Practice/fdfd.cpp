#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    char v[n + 1], u[n + 1];
    memset(v, 'a', sizeof(v));
    memset(u, 'a', sizeof(u));
    int a = 0, b = 0;
   
    for(int i = 0; i < n; i++) {
        char c;
        cin >> c;
        if(c == 'A') v[a++] = c;
        else u[b++] = c;
    }

    for(int i = 0; i < n; i++) {
        if(v[i] != 'A') break;
        cout << v[i];
    }

    for(int i = 0; i < n; i++) {
        if(u[i] == 'a') break;
        cout << u[i];
    }
}