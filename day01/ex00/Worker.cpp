#include "Worker.hpp"

Worker::Worker() {
    this->coordonnee.x = 0;
    this->coordonnee.y = 0;
    this->coordonnee.z = 0;
    this->stat.level = 0;
    this->stat.exp = 0;

}

void Worker::getTool(Tool* t) {
    this->tools.push_back(t);
}

void Worker::dropTool(Tool* t){
    this->tools.remove(t);
}

void Worker::work() {
    if (tools.empty()) {
        cout << "To sem ferramenta!" << endl;
    } else {
        for (list<Tool*>::iterator it = tools.begin(); it != tools.end(); ++it)
        {
            (*it)->use();
        };
    }
    
}