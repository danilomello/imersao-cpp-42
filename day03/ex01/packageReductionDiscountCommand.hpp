#include "command.hpp"

class packageReductionDiscountCommand: public command {

    private:
        /* data */
    public:

        virtual void get_total_price() {
            if (articles.empty()) {
                cout << "Empty command" << endl;
            } else {
                float total_price = 0.0;
                cout << "Item - qty - total price" << endl;
                for (map<string, pair<int, float> >::iterator it = articles.begin(); 
                    it != articles.end(); it++) {
                    float item_total = it->second.first * it->second.second;
                    cout << it->first << " - " << 
                        it->second.first << " - " << item_total << endl;
                        total_price += item_total;
                }

                if (total_price > 150.0) {
                    cout << "Total: " << total_price << endl;
                    cout << "10 euro discount applied" << endl;
                    total_price-=10.0;
                }

                cout << "Total with discount: " << total_price << endl;
            }
        }

        packageReductionDiscountCommand(){};
        ~packageReductionDiscountCommand(){};
};