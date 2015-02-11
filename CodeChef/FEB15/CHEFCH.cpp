#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;

int main() {
    int T, N;
    long long A;
    cin >> T;
    while(T--) {
        map<int, int> mymap;
        cin >> N;
        for(int i=0; i<N; ++i) {
            cin >> A;
            mymap[A]++;
        }
        for(map<int, int>::iterator it = mymap.begin(); it != mymap.end(); ++it) cout << it->first << " " << it->second << "\n";
        cout << "--------\n";
    }
}
