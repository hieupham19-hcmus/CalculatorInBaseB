#ifndef Lib_H
#define Lib_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string toBaseB(int number, int base);

int fromBaseB(const string& digits, int base);

void calculateSumDifference(int x, int y, int base);

int main();

#endif

