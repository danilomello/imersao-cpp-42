#include <iostream>
#include <vector>
#include "Graph.hpp"

using namespace std;

Graph::Graph() {
    this->map_size.x = 6.0f;
    this->map_size.y = 6.0f;
}

Vector2 Graph::get_user_x_y() {
    float x = 0.0f;
    float y = 0.0f;
    cout << "Insert value for X axis: ";
    cin >> x;
    cout << endl;
    cout << "Insert value for Y axis: ";
    cin >> y;
    cout << endl;
    return Vector2(x, y);
}

void Graph::resize_matrix() {
    Vector2 new_size = get_user_x_y();
    map_size.x = new_size.x;
    map_size.y = new_size.y;
}

void Graph::user_insert() {
    float x = 0.0f;
    float y = 0.0f;
    cout << "Insert value for X axis: ";
    cin >> x;
    cout << endl;
    cout << "Insert value for Y axis: ";
    cin >> y;
    cout << endl;

    if (x < 0.0f || y < 0.0f)
    {
        cout << "The values must be greater than zero." << endl;
    } else if (static_cast<int>(x) > map_size.x || static_cast<int>(y) > map_size.y)
    {
        cout << "The value must be lesser than " << map_size.x << " for X and " << map_size.y << " for Y."<< endl;
    } else {
        Vector2 v = Vector2(x, y);
        this->points.push_back(v);
    }
}

void Graph::draw() {
    int linha = 0;
    for (int i = map_size.y -1; i >= 0 ; i--)
    {
        cout << (map_size.y-1)-linha << " ";
        for (int j = 0; j <= static_cast<int>(map_size.x-1); j++)
        {
            bool found = false;
            for(vector<Vector2>::iterator it = points.begin(); it != points.end(); ++it) {
                if (it->y == i && it->x == j) {
                    cout << " X ";
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << " . ";
            }
        }
        linha+=1;
        cout << endl;        
    }
    cout << "   ";
    for (int i = 0; i <= static_cast<int>(map_size.x-1); i++)
    {
        cout << i << "  ";
    }
    cout << endl;    
    
}