// array elements prime or not 

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define doura ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define sesh '\n';

bool isprime(int elem) {
    if (elem <= 1) {
        return false;
    }
    for (int i = 2; i < elem; i++) {
        if (elem % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    #ifndef TORI
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int e : arr) {
        cout << ((isprime(e)) ? "prime\n" : "not prime\n");
    }

    return 0;
}
