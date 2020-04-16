#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>


using namespace std;



/* Ex

Void Absorption ⌊1002⌋+10=60.
Lightning Strike 60−10=50.
Void Absorption ⌊502⌋+10=35.
Void Absorption ⌊352⌋+10=27.
Lightning Strike 27−10=17.
Lightning Strike 17−10=7.
Lightning Strike 7−10=−3.

*/

//X is Dragon HP

//N is Void Absorption 
//M is Lightning Strike
int x, n, m;
//floor(hp/2)
//hp -10
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	int cache;
	cin >> t;
	while (t--) {
		cin >> x >> n >> m; 
		queue<int> q;
		q.push(x);
		while (!q.empty()) {
			int qSize = q.size();
			for (int i = 0; i <= q.size(); i++) {
				cache = q.front();
				q.pop();
				if (cache > round(cache / 2) + 10 && n !=0) {
					cache = round(cache / 2)+10;
					q.push(cache);
					n--;
				}
				else {
					if (m != 0) {
						cache = cache - 10;
						q.push(cache);
						m--;
					}
				}

			}
		}

		if (cache <= 0) {
			cout <<cache<< ", YES\n";
		
		}
		else {
			cout << "NO\n";
		}
	}
}