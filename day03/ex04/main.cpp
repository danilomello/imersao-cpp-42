#include "FileLogger.hpp"

int main() {

    FileLogger fl = FileLogger();
    fl.write("oia o texto");
    fl.write("oia o texto de novo");


    return 0;
}