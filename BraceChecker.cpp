#include "pch.h"
#include "BraceChecker.h"
#include <iostream>
#include <stack>
#include <map>
#include <string>

using namespace std;
bool check(char brace, char top) {
	map <char, char> mp = { { '[',']' }, { '{','}' }, { '(',')' } };
	if ((brace == mp.find('{')->second) && (top == '{')) return true;
	else {
		if ((brace == mp.find('[')->second) && (top == '['))return true;
		else {
			if ((brace == mp.find('(')->second) && (top == '(')) {
				return true;
			}
			else return false;
		}
	}
}
bool BraceChecker::isBalanced(const std::string& bracestr) {
	stack <char> steck;
	for (int i = 0; i < bracestr.length(); i++) {
		if ((bracestr[i] == '[') || (bracestr[i] == '{') || (bracestr[i] == '(')) steck.push(bracestr[i]);
		else {
			if ((bracestr[i] == ']') || (bracestr[i] == '}') || (bracestr[i] == ')')) {
				if (steck.empty() || (check(bracestr[i], steck.top()) == false)) return false;
				else steck.pop();
			}
		}
	}
	return steck.empty() ? true : false;
}