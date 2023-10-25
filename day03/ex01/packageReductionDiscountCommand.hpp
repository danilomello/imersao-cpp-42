#ifndef PACKAGE_REDUCTION_H
#define PACKAGE_REDUCTION_H

#include "command.hpp"

class packageReductionDiscountCommand: public command {

    private:
        /* data */
    public:

        virtual float get_total_price() {
            
            float total_price = command::get_total_price();
            if (total_price > 150) {
                cout << "10 euro discount applied" << endl;
                cout << "total w/ discount: " << (command::total_price - 10.0) << endl;
            } else {
                cout << "no discount =(" << endl;
            }

            return total_price;
        }

        packageReductionDiscountCommand(){};
        ~packageReductionDiscountCommand(){};
};

#endif