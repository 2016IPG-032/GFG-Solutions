/*input
2
1124
1234567589333862
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

bool check4(string s) {
	if (s.size() == 1)
		return (s[s.size()-1] == '4' || s[s.size()-1] == '8');
	int n = (s[s.size()-2] - '0')*10 + (s[s.size()-1] - '0');
	return (n % 4 == 0);
}

int main() {
	int t;
	string s;
	cin >> t;
	while (t--) {
		cin >> s;
		printf("%d\n", check4(s));
	}
	return 0;
}