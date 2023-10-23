#include "Workshop.hpp"

Workshop::Workshop() {
}

void Workshop::subscribeWorker(Worker* worker) {
    this->workers.push_back(worker);
    cout << "[Workshop] Worker " << worker->getName() << " registered" << endl;
};

void Workshop::unsubscribeWorker(Worker* worker) {
    workers.remove(worker);
    cout << "Worker " << worker->getName() << " removed from workshop" << endl;
}

void Workshop::executeworkDay() {
    int i = 1;
    for (list<Worker*>::iterator it = workers.begin(); it != workers.end(); ++it)
	{
        cout << "[Workshop] Worker " << (*it)->getName() << " going to work." << endl;
		(*it)->work();
        i++;
	}
}