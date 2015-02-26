#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
using namespace std;

int main() {
    int T;
    long long N, S;
    cin >> T;
    while(T--) {
        int corrections = 0;
        vector<long long> ranklist, ideal;
        cin >> N >> S;
        int sum = S;
        //for(int i=1;i<=N;++i) ideal.push_back(i);
        //for(int i=0;i<N;++i) {cout << ranklist[i] << " ";}
        //cout << "\n";
        for(int i=0;i<N;++i) {
            S-=i+1;
            ranklist.push_back(S);
            //cout << S/N-i << " ";
            //if(S==0 or S<0) corrections++;
        }
        cout << "\n\nN: " << N << " S: " << sum;
        for(int i=0;i<N;++i) {
            if(sum==N) {cout<<"here";corrections+=(N-1); break;}
            if((ranklist[i]/(N-i)) <= 0) {corrections+=(N-i);}// break;}
            cout << "\n";
            cout << "S: " << ranklist[i] << "\tN-i: " << N-i << " ";
            cout << " Div: " << ranklist[i]/(N-i);// << " ";
        }
        //for(int i:ranklist) cout << i << " ";
        cout << "\tCorrections: " << corrections << "\n";
    }
}
