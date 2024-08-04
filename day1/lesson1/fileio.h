// fileio.h
#ifndef FILEIO_H
#define FILEIO_H

#include <string>
using namespace std;

void readArrayFromFile(const string &filename, int *&arr, int &n);
void writeArrayToFile(const string &filename, int *arr, int n);

#endif
