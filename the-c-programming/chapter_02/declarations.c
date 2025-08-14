# include <stdio.h>
# include <limits.h>

/* A list of one or more variables */
int lower, upper, step;
char c, line[1000];

/* Distributed declarations */

int lower;
int upper;
int step;
char c;
char line[1000];

/* Variable name followed by an equals sign and expression */

char esc = '\\';
int i = 0;
// int limit = MAXLINE+1;
float eps = 1.0e-5;

/* Qualifier const declaration*/

const double e = 2.71828182845905;
const char msg[] = "warning: ";
int strlen(const char[]);