#ifndef THUESDAY_H
#define THUESDAY_H

#include <iostream>
#include <cstring>
#include <map>
#include "command.hpp"

class thuesdayDiscount: public command {
    private:

    public:
        thuesdayDiscount(){};
        ~thuesdayDiscount(){};

        virtual float get_total_price() {
            float total_price = command::get_total_price();
            cout << "Total price with tuesday discount: " << (total_price * 0.9) << endl;
            return total_price;
        }
    };


#endif