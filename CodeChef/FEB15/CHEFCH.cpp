#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int main() {
  int T;
  string S;
  cin >> T;
    for(int j=0; j<T; ++j) {
    cin >> S;
    int corrections1 = 0,
        corrections2 = 0,
        corrections,
        len = S.length();
    string ideal1, ideal2;
    for(int i=0; i<len; ++i) {
    ideal1.append("-+");
    ideal2.append("+-");
    }
    if(len == 1) corrections = corrections1 = 0;
    else {
      for(int i=0; i<len; ++i) {
        if(S[i] != ideal1[i]) ++corrections1;
        if(S[i] != ideal2[i]) ++corrections2;
      }
      if (corrections1 < corrections2) corrections = corrections1;
      else corrections = corrections2;
    }
    cout << corrections << "\n";
  }
	return 0;
}
