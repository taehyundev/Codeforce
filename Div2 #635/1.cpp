#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <cstdio>
#include <cstring>

// a<=x<=b
// b<=y<=c
// c<=z<=d


// ������ ���̴� x, y, z  �ﰢ�� 


// t: test case

// testcase ��� : a,b,c,d

/*
EX)
4
a b c d
1 3 5 7
1 5 5 7

*/


using namespace std;


int a, b, c, d;
int x, y, z;

int Getx =0, Gety=0, Getz=0;
/*

int solve() {

	for (x = a; x <= b; x++) {
		for (y = b; y <= c; y++) {
			for (z = c; z <= d; z++) {
				if (x + y > z) {
					cout << x <<" "<< y <<" "<< z << "\n";
					return 0;
				}
			}
		}
	}
}
*/
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t; 
	// �׽�Ʈ ���̽�
	cin >> t;
	while (t--) {
		cin >> a >> b >> c >> d;
		//solve();
		cout << b <<" "<< c <<" "<< c<<"\n";
		//cout << x << y << z;
	}
}