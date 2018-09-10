#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int> A;
int B, C;

int main() {
	int tmp;
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> tmp;
		A.push_back(tmp);
	}
	cin >> B >> C;

	unsigned long long remain, result, tmpResult;
	result = N;

	for(int i = 0; i < N; i++) {
		remain = A.at(i) - B;
		if(remain > 0) {
			tmpResult = remain / C;
			if(remain - (tmpResult * C) > 0)
				tmpResult++;
			result += tmpResult;
		}
	}

	cout << result << endl;
	return 0;
}