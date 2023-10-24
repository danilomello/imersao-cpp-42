#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;

class command {

    protected:
        int id;
        string date;
        string client;
        map<string, int> articles;

    public:
        command(/* args */) {

        };

        ~command(){};

        void get_total_price(){
            cout << "total" << endl;
        };

        void add_article(string article, int quantity){
            this->articles[article] = quantity;
        };

        map<string, int> get_articles(){
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