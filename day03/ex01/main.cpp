#include "command.hpp"

using namespace std;

int main() {

    command c = command();
    c.add_article("peixe", 2, 3.5f);
    c.add_article("frutas", 10, 1.25f);

    c.get_total_price();

    return 0;
}