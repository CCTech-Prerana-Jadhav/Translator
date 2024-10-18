#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>
#include "Point.h"

using namespace std;

class Reader {
public:
    Reader() {}
    vector<Point> readSTLFile(const string& inputFile);
    vector<double> getUniqueCoordinates() const;
    ~Reader() {}
private:
    vector<double> unique_points;
};
