#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void func1(string& s) {
    if (s.find('w') != string::npos || s.find('W') != string::npos) {
        s += "?";
    }
}

void func2(string* s) {
    *s = "[" + to_string((*s).size()) + "] " + *s;
}

void func3(string& s) {
    if (s.size() > 3)
        s.erase(0, 3);
    else
        s += "###";
}

void func4(string* s) {
    string v = "aeiouAEIOU";
    string out;
    for (char c : *s) {
        out.push_back(c);
        if (v.find(c) != string::npos) {
            out.push_back('-');
        }
    }
    *s = out;
}

void func5(string& s) {
    s.insert(s.size()/2, "***");
}

int main(int argc, char* argv[]) {
    string input_str = (argc > 1) ? argv[1] : "Hello, World!";

    cout << "Before: " << input_str << endl;

    // ADD THE 5 FUNCTION CALLS HERE IN THE CORRECT ORDER

    cout << "After: " << input_str << endl;

    return 0;
}
