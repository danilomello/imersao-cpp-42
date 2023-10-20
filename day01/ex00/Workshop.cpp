#include "Workshop.hpp"

Workshop::Workshop() {
}

void Workshop::subscribeWorker(Worker* worker) {
    this->workers.push_back(worker);
    cout << "Worker inscribed" << endl;
};

void Workshop::unsubscribeWorker(Worker* worker) {
    workers.remove(worker);
    cout << "Worker removed" << endl;
}

void Workshop::executeWorkDay() {
    int i = 1;
    for (list<Worker*>::iterator it = workers.begin(); it != workers.end(); ++it)
	{
        cout << "Worker " << i << " going to work." << endl;
		(*it)->work();
        i++;
	}
}