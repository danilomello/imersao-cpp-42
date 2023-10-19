#include <iostream>
#include <vector>
#include "Graph.hpp"


void write_header() {
    cout << endl;
    cout << "=========================" << endl;
    cout << "options: " << endl;
    cout << "1 - insert point " << endl;
    cout << "2 - draw chart" << endl;
    cout << "3 - resize chart" << endl;
    cout << "0 - exit" << endl;
    cout << "=========================" << endl;
    cout << endl;
    cout << "Select an option: ";
}

int main() {

    Graph g = Graph();
    bool exit = false;

    while (!exit)
    {
        write_header();
        int input;
        cin >> input;
        cout << endl;
        switch (input)
        {
        case 1:
            g.user_insert();
            break;
        case 2:
            g.draw();
            break;
        case 3:
            g.resize_matrix();
            break;
        case 0:
            exit = true;
            break;
        default:
            break;
        }

    }
    

    return 1;
}