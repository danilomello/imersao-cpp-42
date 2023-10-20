#include "Worker.hpp"

Worker::Worker() {
    this->coordonnee.x = 0;
    this->coordonnee.y = 0;
    this->coordonnee.z = 0;
    this->stat.level = 0;
    this->stat.exp = 0;

}

void Worker::getTool(Tool* t) {

    this->tool = t;
}

void Worker::dropTool(){

}

Tool* Worker::getToolInUse() {
    return this->tool;
}

void Worker::work() {
    tool->use();    
}