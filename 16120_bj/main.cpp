#include <iostream>
#include <string>
#include <stack>
using namespace std;

#define NOTHING pair<int, int>(-1, -1)
#define A       0
#define P       1
#define $       2
#define GOTO    3
#define accept  100
#define shift   101
#define reduce  500

typedef struct e {
	//first -> action, second -> to
	pair<int, int> actionA;
	pair<int, int> actionP;
	pair<int, int> actionLast;
	int Goto;
}element;

element table[11];

void tableInit();

int parsing(string str) {
	int length = str.length();
	stack<int> s;

	s.push(0);

	char tmp;

	int temporalValue;
	int action;
	int to;
	int state;

	for(int i = 0; i < length; i++) {
		tmp = str.at(i);
		state = s.top();
		if(state > 9) {
			int temporal;
			temporal = s.top();
			s.pop();
			state = table[s.top()].Goto;
			s.push(temporal);
			s.push(state);
		}
		switch(tmp) {
			case 'P' :
				action = table[state].actionP.first;
				to = table[state].actionP.second;
				break;
			case 'A' :
				action = table[state].actionA.first;
				to = table[state].actionA.second;
				break;
			default:
				action = -1;
				to = -1;
		}
		switch(action) {
			case shift :
				s.push(tmp);
				s.push(to);
				break;
			case reduce :
				if(to == 1) {
					int sCount = 0;
					int aCount = 0;

					while(true) {
						if(s.top() < 10)
							s.pop();
						if(s.top() == 'A' && !aCount && sCount == 1) {
							aCount = 1;
							s.pop();
						} else if(s.top() == 'S' && sCount < 3) {
							sCount++;
							s.pop();
						}

						if(sCount == 3 && aCount == 1) {
							break;
						}
					}
				} else if(to == 2) {
					s.pop();
					s.pop();
				}
				temporalValue = table[s.top()].Goto;
				s.push('S');
				s.push(temporalValue);
				i--;
				break;
			case accept:
				return 1;
			default :
				return 0;
		}
	}
	while(1) {
		state = s.top();
		if(state > 9) {
			int tmp = s.top();
			s.pop();
			state = table[s.top()].Goto;
			s.push(tmp);
		}
		action = table[state].actionLast.first;
		to = table[state].actionLast.second;

		switch(action) {
			case shift :
				s.push(tmp);
				s.push(to);
				break;
			case reduce :
				if (to == 1) {
					int sCount = 0;
					int aCount = 0;

					while (true) {
						if (s.top() < 10)
							s.pop();
						if (s.top() == 'A' && !aCount && sCount == 1) {
							aCount = 1;
							s.pop();
						} else if (s.top() == 'S' && sCount < 3) {
							sCount++;
							s.pop();
						}

						if (sCount == 3 && aCount == 1) {
							break;
						}
					}
					s.push('S');
				} else if (to == 2) {
					s.pop();
					s.pop();
					s.push('S');
				}
				break;
			case accept :
				return 1;
			default :
				return 0;
		}
	}
}

int main() {
	tableInit();
	string str;
	cin >> str;
	if(parsing(str)) {
		cout << "PPAP" << endl;
	} else
		cout << "NP" << endl;
	return 0;
}

/**
 * MAKE RAW LR PARSER
 */
void tableInit() {

	for(int i = 0; i < 10; i++) {
		table[i].actionA = table[i].actionP = table[i].actionLast = NOTHING;
		table[i].Goto = -1;
	}

	table[5].actionP = table[0].actionP = pair<int, int>(shift, 2);

	table[1].actionLast = pair<int, int>(accept, 1);

	table[3].actionA = pair<int, int>(shift, 5);

	table[6].actionA = pair<int, int>(shift, 8);

	table[4].actionA = table[4].actionP = table[2].actionP = table[2].actionLast = pair<int, int>(reduce, 2);

	table[7].actionLast = table[9].actionLast = table[9].actionA = pair<int, int>(reduce, 1);

	table[1].actionP = table[3].actionP = table[6].actionP = table[7].actionP = table[8].actionP = table[9].actionP =
			pair<int, int>(shift, 4);

	table[0].Goto = 1;
	table[9].Goto = table[6].Goto = table[3].Goto = 6;
	table[5].Goto = 7;
	table[1].Goto = table[7].Goto = 3;
	table[8].Goto = 9;
}