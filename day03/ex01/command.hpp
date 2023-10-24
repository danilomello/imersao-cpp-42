#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include <cstring>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

class command {

    protected:
        struct Article {
            string article;
            float price;
        };
        int id;
        string date;
        string client;
        map<string, pair<int, float> > articles;


    public:
        command() {

        };

        ~command(){};

        virtual void get_total_price(){
            if (articles.empty()) {
                cout << "Empty command" << endl;
            } else {
                cout << "Item \t qty \t total price" << endl;
                float total_price = 0.0;
                for (map<string, pair<int, float> >::iterator it = articles.begin(); 
                    it != articles.end(); it++) {
                    float item_price = it->second.first * it->second.second;
                    cout << it->first << " \t " << 
                        it->second.first << " \t " << item_price << endl;
                    total_price+=item_price;
                }

                cout << "Total: " << total_price << endl;
            }
        };

        void add_article(string item, int quantity, float price){
            articles[item] = make_pair(quantity, price); 
        };

        map<string, pair<int, float> > get_articles(){
            return this->articles;
        };

        /*
            Método para realizar o sort por valor
        */
        template <typename A, typename B>
        multimap<B, A> flip_map(map<A,B> & src) {

            multimap<B,A> dst;

            for(typename map<A, B>::const_iterator it = src.begin(); it != src.end(); ++it)
                dst.insert(pair<B, A>(it -> second, it -> first));

            return dst;
        }
};

#endif