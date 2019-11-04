#include "pch.h"
#include "BraceChecker.h"
#include <iostream>
#include <stack>
#include <map>
#include <string>

using namespace std;

bool BraceChecker::isBalanced(const std::string& bracestr) {
	map <char, char> mp = { { '[',']' }, { '{','}' }, { '(',')' } };
	stack <char> steck;
	for (int i = 0; i < bracestr.length(); i++) {
		if ((bracestr[i] == '[') || (bracestr[i] == '{') || (bracestr[i] == '(')) {
			steck.push(bracestr[i]);
		}
		else if ((bracestr[i] == ']') || (bracestr[i] == '}') || (bracestr[i] == ')')) {
			if ((steck.empty()) || !(mp.find('[')-> second) || !(mp.find('{')-> second) || !(mp.find('(')-> second)) return false;
			else steck.pop();
		}
	}
	return steck.empty() ? true : false;
}
