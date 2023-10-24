#include "rectangle.hpp"
#include "triangle.hpp"
#include "circle.hpp"
#include <typeinfo>

using namespace std;


void use_shape(shape* shape) {

    cout << "\n --- using shape ---" << endl;
    cout << "shape type is: " << typeid(shape).name() << endl;
    shape->area();
    shape->perimeter();
    cout << "------ \n" << endl;
}

int main() {

    cout << "\n--- start ---" << endl;

    rectangle rec = rectangle(15, 10);
    cout << "rec type is: " << typeid(rec).name() << endl;
    rec.area();
    rec.perimeter();
    use_shape(&rec);

    triangle tri = triangle(15, 10, 4, 4, 4);
    cout << "tri type is: " << typeid(rec).name() << endl;
    tri.area();
    tri.perimeter();
    use_shape(&tri);

    circle ci = circle(5);
    cout << "circle type is: " << typeid(ci).name() << endl;
    ci.area();
    ci.perimeter();
    use_shape(&ci);
    
    return 0;
}