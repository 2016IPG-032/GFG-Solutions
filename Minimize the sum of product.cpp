/*input
2
3 
3 1 1
6 5 4
5
6 1 9 5 4
3 4 8 2 4
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
	int t, n, a[55], b[55], ans;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		for (int i = 0; i < n; i++) scanf("%d", &b[i]);
		std::sort(a, a+n); std::sort(b, b+n, std::greater<int>());
		ans = 0;
		for (int i = 0; i < n; i++)
			ans += a[i]*b[i];
		printf("%d\n", ans);
	}
	return 0;
}