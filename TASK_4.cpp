#include "pch.h"
#include <iostream>
#include "BraceChecker.h"
#include <stack>

using namespace std;

int main()
{
	string str;
	BraceChecker bracestr;
	cout << "write your brace string " << endl;
	cin >> str;
	if (bracestr.isBalanced(str)) cout << "Is balanced" << endl;
	else cout << " No balanced" << endl;

	return 0;
}
