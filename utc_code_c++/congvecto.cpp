#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n ; cin >> n ;
    vector<int> a(n) ;
    vector<int> b(n) ;
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for ( int i = 0 ; i < n ; i++){
        cin >> b[i];
    }
    for (int i = 0 ; i < n ; i++){
        cout << a[i]+b[i] << endl ;
    }
    return 0;
}