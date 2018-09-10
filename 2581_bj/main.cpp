#include <iostream>
using namespace std;

int N, M;
bool array[10001];

int main() {
	array[0] = array[1] = true;
	for(int i = 2; i <= 10000; i++) {
		if(!array[i]) {
			for(int j = 2; j <= 10000; j++) {
				if(i * j > 10000)
					break;
				array[i * j] = true;
			}
		}
	}

	cin >> N >> M;
	int sum = 0;
	int minV = 0;
	for(int i = N; i <= M; i++) {
		if(!array[i]) {
			if(!minV)
				minV = i;
			sum += i;
		}
	}
	if(minV == 0) {
		cout << "-1" << endl;
	} else {
		cout << sum << endl;
		cout << minV << endl;
	}
	return 0;
}