#include "Stack.h"



int main()
{
	Stack st;
	string str;

	while (cin >> str && !st.full())
	{
		st.push(str);
	}
	if (st.empty())
	{
		cout << "Oops: no strings were readed -- bailing out";
		return 0;
	}
	st.peek(str);
	if (st.size() == 1 && str.empty())
	{
		cout << "Oops :no string were read -- bailing out";
		return 0;
	}
	cout << "Read in" << st.size() << "strings!";

	cin.clear();
	cout << "what word to search for?";
	cin >> str;
	bool found = st.find(str);
	int count = found ? st.count(str) : 0;
	cout << str << (found ? "is" : "isn`t") << "in the stack.";
	if (found)
		cout << "It occurs" << count << "times";

	system("pause");
	return EXIT_SUCCESS;
}