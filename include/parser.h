#ifndef PARSER_H
#define PARSER_H

void extractSpecifiers(char format[], char specs[][5], int *count);
int extractFormat(char arr[], char format[]);
void extractVariables(char arr[], char vars[][50], int *count);
void trim(char *str);

#endif