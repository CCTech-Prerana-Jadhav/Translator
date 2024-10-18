#pragma once
#include "Reader.h"
#include "Writer.h"
#include "Triangulation.h"
#include "Triangle.h"

class Driver {
public:
    Driver() {}
    void convertSTLToDAT(const std::string& inputFile, const std::string& outputFile);
    ~Driver() {}
};
