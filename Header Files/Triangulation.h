#pragma once
#include <vector>
#include "Triangle.h"

using namespace std;

class Triangulation {
public:
    Triangulation() {}
    void addTriangle(const Triangle& triangle);
    vector<Triangle> getTriangles() const;
    ~Triangulation() {}

private:
    vector<Triangle> triangles;
};
