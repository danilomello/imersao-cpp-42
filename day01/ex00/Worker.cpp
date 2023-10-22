#include "Worker.hpp"

Worker::Worker() {
    initWorker();
}

Worker::Worker(string name) {
    this->name = name;
    initWorker();
}

void Worker::initWorker() {
    this->coordonnee.x = 0;
    this->coordonnee.y = 0;
    this->coordonnee.z = 0;
    this->stat.level = 0;
    this->stat.exp = 0;
}

void Worker::takeTool(Tool* t, Worker* w) {
    w->dropTool(t);
    this->tools.push_back(t);
}

void Worker::dropTool(Tool* t){
    this->tools.remove(t);
}

void Worker::work() {
    for (list<Tool*>::iterator it = tools.begin(); it != tools.end(); ++it)
	{
		cout << this->getName() << " esta ";
        (*it)->use();
	};
}

string Worker::getName() {
    return this->name;
}

Worker::Statistic Worker::getStats() {
    return this->stat;
}

Worker::Position Worker::getPosition() {
    return this->coordonnee;
}

void Worker::subscribeWorkshops(list<Workshop*> ws) {
    int i = 0;
    for (list<Workshop*>::iterator it = ws.begin(); it != ws.end(); ++it)
	{
        (*it)->subscribeWorker(this);
        i++;
        cout << this->getName() << " se inscreveu no workshop: " << i << endl;
	};
}

void Worker::subscribeWorkshops(Workshop* ws) {
    ws->subscribeWorker(this);
}

std::ostream& operator << (std::ostream& p_os, Worker p_worker)
	{
        p_os << endl;
		p_os << "---- Worker informations ----" << std::endl;
		p_os << "Name: " << p_worker.getName() << std::endl;
		p_os << "Level: " << p_worker.getStats().level << " - Exp: " << p_worker.getStats().exp << std::endl;
        p_os << "Coordennee: X=" << p_worker.getPosition().x << 
            " Y=" << p_worker.getPosition().y << " Z=" << p_worker.getPosition().z << std::endl;
		return (p_os);
	}