#pragma once
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <io.h>
#include<vector>
#include <fstream>

using namespace std;

class Reservoir {
private:
    string name;
    double width;
    double length;
    double maxDepth;
public:
    explicit Reservoir(const string& n = "", double w = 0, double l = 0, double d = 0) : name(n), width(w), length(l), maxDepth(d) {}

    double volume() const { return width * length * maxDepth; }

    double surface() const { return width * length; }

    static double arena(const Reservoir& r1, const Reservoir& r2) { return r1.surface() - r2.surface(); }

    friend ostream& operator<<(ostream& os, const Reservoir& r) {
        os << "Имя: " << r.name << "\nШирина: " << r.width << "\nДлинна: " << r.length << "\nМаксимальная глубина: " << r.maxDepth;
        return os;
    }
};
