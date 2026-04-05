#ifndef CLEANER_H
#define CLEANER_H

#include <stdio.h>
#include "../models/fileline.h"

void removeCommentsAndStore(FILE *input, fileLine lines[], int *totalLen);

#endif