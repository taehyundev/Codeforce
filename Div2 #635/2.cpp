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
int x,n,m,t;
void solve(){
	scanf("%d%d%d",&x,&n,&m);
	while (x>0&&n&&x/2+10<x){n--;x=x/2+10;}
	if (x<=m*10)printf("YES\n");
	else printf("NO\n"); 
}
int main(){
	scanf("%d",&t);
	while(t--)solve();
	return 0;
}
