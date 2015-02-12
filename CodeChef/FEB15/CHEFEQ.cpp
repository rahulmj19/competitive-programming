#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
using namespace std;

int main() {
    int T, N;
    long long A;
    cin >> T;
    while(T--) {
        int corrections=0;
        map<int, int> mymap;
        vector<int> arr;
        cin >> N;
        for(int i=0; i<N; ++i) {
            cin >> A;
            mymap[A]++;
        }
        for(map<int, int>::iterator it = mymap.begin(); it != mymap.end(); ++it) arr.push_back(it->second);
        sort(arr.rbegin(), arr.rend());
        for(int i=1; i<arr.size(); ++i) corrections += arr[i];
        cout << corrections << "\n" ;
    }
}
