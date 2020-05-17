#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
long long a1;
long long dp[100];
long long temp;
long long minDigit(long long n) {
   string m = to_string(n);
   int r = m[0] - '0';
   for (int i = 1; i < m.length(); i++) {
      int temp = m[i] - '0';
      if (r> temp) {
         r = temp;
      }
   }
   return r;
}
 
long long maxDigit(long long n) {
   string m = to_string(n);
   int r = m[0] - '0';
   for (int i = 1; i < m.length(); i++) {
      int temp = m[i] - '0';
      if (r < temp) {
         r = temp;
      }
   }
   return r;
}
 
void init() {
   cin.tie(NULL);
   cout.tie(NULL);
   ios::sync_with_stdio(false);
}
int main() {
   init();
   int t;
   long long result;
   cin >> t;
   for (int i = 0; i < t; i++) {
      int k;
      cin >> a1 >> k;;
      temp= a1;
      bool sw = true;
      for (int i = 2; i <= k; i++) {
         result = temp + (minDigit(temp) * maxDigit(temp));
         temp = result;
      }
      cout << result << '\n';
   }
}
