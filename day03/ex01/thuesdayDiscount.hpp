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
                        it->second.first << " - " << (item_total * 0.9) << endl;
                        total_price += item_total;
                }

                cout << "Total: " << total_price << endl;
            }
        }
    };


#endif