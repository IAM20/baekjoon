#include <stdio.h>
#pragma warning(disable : 4996)

int arr[1000001];

void
func(int digit) {
	int cnt = 0;
	for (int i = digit; i >= 1; i--) {
		if ((arr[i - 1] && (arr[i - 1] > arr[i])) || arr[i - 1] == 0) {
			arr[i - 1] = 1 + arr[i];
		}

		if (!(i % 2)) {
			if ((arr[i / 2] && (arr[i / 2] > arr[i])) || arr[i / 2] == 0) {
				arr[i / 2] = 1 + arr[i];
			}
		}

		if (!(i % 3)) {
			if ((arr[i / 3] && (arr[i/3] > arr[i])) || arr[i / 3] == 0) {
				arr[i / 3] = 1 + arr[i];
			}
		}
	}
}

int
main(int argc, char * argv)
{
	int digit, result = 0;
	scanf("%d", &digit);
	func(digit);
	printf("%d\n", arr[1]);

	return 0;
}