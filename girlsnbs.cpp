// GIRLSNBS problem of spoj. Minimise consecutive girls and boys
#include <cstdio>
using namespace std;

int main() {
	int a, b;
	while(scanf("%d%d", &a, &b) == 2 && (a > -1 && b > -1)) {
		if(a < b) a ^= b ^= a ^= b;
		printf("%d\n", (a + b) / (b + 1)); // take the lower one as b, sum both and divide by b + 1
	}
	return 0;
}
