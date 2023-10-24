#include "thuesdayDiscount.hpp"
#include "packageReductionDiscountCommand.hpp"

using namespace std;

int main() {

    command c = command();
    c.add_article("peixe", 2, 3.5f);
    c.add_article("frutas", 10, 1.25f);
    c.get_total_price();

    cout << "--- comanda com desconto de quinta ---" << endl;
    thuesdayDiscount c1 = thuesdayDiscount();
    c1.add_article("pera", 2, 3.5f);
    c1.add_article("maça", 10, 1.25f);
    c1.get_total_price();

    cout << "--- comanda com desconto de 10 euro ---" << endl;
    packageReductionDiscountCommand c2 = packageReductionDiscountCommand();
    c2.add_article("pera", 100, 3.5f);
    c2.add_article("maça", 100, 1.25f);
    c2.get_total_price();

    return 0;
}