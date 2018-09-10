#include <iostream>
#include <queue>
using namespace std;

int N;

int main() {
	cin >> N;
	queue<int> q;
	string str;
	int tmp;
	for(int i = 0; i < N; i++) {
		cin >> str;
		if(str.compare("push") == 0) {
			cin >> tmp;
			q.push(tmp);
		} else if(str.compare("pop") == 0) {
			if(q.size()) {
				cout << q.front() << endl;
				q.pop();
			} else
				cout << "-1" << endl;
		} else if(str.compare("size") == 0) {
			cout << q.size() << endl;
		} else if(str.compare("front") == 0) {
			if(q.size())
				cout << q.front() << endl;
			else
				cout << "-1" << endl;
		} else if(str.compare("empty") == 0) {
			if(q.size()) {
				cout << "0" << endl;
			} else {
				cout << "1" << endl;
			}
		} else if(str.compare("back") == 0) {
			if(q.size()) {
				cout << q.back() << endl;
			} else
				cout << "-1" << endl;
		}
	}

	return 0;
}