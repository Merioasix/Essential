#include <iostream>
#include <vector>
#include <string>
using namespace std;
using std::vector;
using std::string;

//pop和peek会将字符串内容置于elem内
class Stack
{
public:
    bool push(const string&);
    bool pop(string& elem);
    bool peek(string& elem);
    bool empty() const { return _stack.empty(); }
    bool full() const { return _stack.size() == _stack.max_size(); }
    int size() const { return _stack.size(); }
    bool find(const string& elem) const;
    int count(const string& elem) const;
private:
    vector<string> _stack;
};
