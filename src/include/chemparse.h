#include <iostream>
#include <vector>
#include <string>

using namespace std;

namespace chemparse {
    class Element {
    public:
        string symbol;
        string name;
        long amount;
    };

    vector<Element> parseFormulaToElements(string chemFormula);
} // namespace chemparse