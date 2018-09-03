#include <stdio.h>
#include <math.h>

long long getK(long long dist) {
	long long retval;
	double tmp = ((-1 + (sqrt(1 + 4 * dist))) / 2);
	retval = (long long)tmp;
	if(tmp - retval == 0)
		return retval;
	else
		return ++retval;
}

long long
func(long long dist) {
	long long k;
	switch(dist) {
		case 1:
			return 1;
		case 2:
			return 2;
		default:
			k = getK(dist);
			return (dist - (k - 1) * k > k) ? (2 * k) : (2 * k) - 1;
	}
}

int main() {
	int iter;
	long long x, y;
	scanf("%d", &iter);
	for(int i = 0; i < iter; i++) {
		scanf("%lld %lld", &x, &y);
		printf("%lld\n", func(y - x));
	}
}