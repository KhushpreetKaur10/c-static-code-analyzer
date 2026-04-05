#ifndef VALIDATOR_H
#define VALIDATOR_H

#include "../models/fileline.h"

int printcheck(char arr[], int size);
int scancheck(char arr[], int size);
int fprintfcheck(char arr[], int size);
int fscanfcheck(char arr[], int size);
int getscheck(char arr[], int size);
int putscheck(char arr[], int size);

void printscan(fileLine arr[], int size);

#endif