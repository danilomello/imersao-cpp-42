#include <iostream>
#include <vector>

#ifndef GRAPH_H
#define GRAPH_H

using namespace std;

struct Vector2 {
    // private:
    float x;
    float y;

    // public:
    Vector2(){
        
    }
    Vector2(float x, float y) {
        this->x = x;
        this->y = y;    
    }
};

class Graph 
{
    private:
    Vector2 map_size;
    vector<Vector2> points;
    vector<vector<int> > matrix;
    void create_matrix();

    public:
    Graph();
    void resize_matrix();
    void draw();
    vector<vector<int> > get_matrix();
    void user_insert();
    Vector2 get_user_x_y();
};

#endif