#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <QFile>
#include <string>
#include <cstdio>
#include <fstream>
#include <QDebug>
#include <cstdlib>
#include <algorithm>
using namespace std;

bool check(int plx, int ply, int plh, int plw, int obx, int oby, int obh, int obw);
void saveresult(int score, QString name, QString file_name);
QString loadresult();
void sorting();

#endif // FUNCTIONS_H
