/*input
2
5 2
1 2 3 4 5 
10 3
2 4 6 8 10 12 14 16 18 20
*/

/*~~~~~~~~~~~~~~~~~~~~dwij28 == Abhinav Jha~~~~~~~~~~~~~~~~~~~~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX(a, b) ((a > b) ? a : b)
#define MIN(a, b) ((a < b) ? a : b)
#define set_bit(n, x, i) (n ^ ((-x ^ n) & (1 << i)))
#define get_bit(n, i) ((n >> i) & 1) 
using namespace std;
 
template<typename T>void scan(T&x){bool n=false;register T c=getchar();x=0;if(c=='-'){n=true;c=getchar();}for(;(c>47&&c<58);c=getchar()){x=(x<<1)+(x<<3)+c-48;}if(n){x*=-1;}}
template<typename T>void allocate(T **x,T n){*x=(T*)malloc(sizeof(T)*n);}

int main() {
	int t, n, k, a[110], b[110];
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &k);
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		for (int i = 0; i < n; i++) {
			b[i] = a[(i+k) % n];
		}
		for (int i = 0; i < n; i++) {
			printf("%d ", b[i]);
		}
		printf("\n");
	}
	return 0;
}