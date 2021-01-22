/*input
2
30
60
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

int solve(int n) {
	int c = 0;
	if (n % 2 == 0) { c += 1; n /= 2; }
	if (n % 2 == 0 || n < 2) return 0;
	for (int i = 3; i <= sqrt(n); i += 2) {
		if (n % i == 0) { c += 1; n /= i; }
		if (n % i == 0 || c > 3) return 0;
	}
	if (n > 1) c += 1;
	return (c == 3);
}

int main() {
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%d\n", solve(n));
	}
	return 0;
}