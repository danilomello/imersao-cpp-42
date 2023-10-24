#include "command.hpp"

using namespace std;

int main() {

    command c = command();
    c.add_article("peixe", 10);
    c.add_article("frutas", 20);
    c.add_article("ovos", 5);

    // cout << "Contents of original map:\n" << endl;
    // for(map<string, int>::const_iterator it = c.get_articles().begin(); it != c.get_articles().end(); ++it)
    //     cout << it -> first << " " << it -> second << endl; 

    // multimap<int, string> reverseTest = c.flip_map(c.get_articles());

    // cout << "\nContents of flipped map in descending order:\n" << endl;
    // for(multimap<int, string>::const_reverse_iterator it = reverseTest.rbegin(); it != reverseTest.rend(); ++it)
    //     cout << it -> first << " " << it -> second << endl; 

    // cout << endl;

    return 0;
}