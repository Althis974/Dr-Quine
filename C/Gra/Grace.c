#include <stdio.h>
	/*
		This program will print its own source when run.
	*/
#define S	"#include <stdio.h>%c%c/*%c%c%cThis program will print its own source when run.%c%c*/%c#define S%c%c%s%c%c#define PRINT(x)%cfprintf(x,S,10,9,10,9,9,10,9,10,9,34,S,34,10,9,10,9,34,34,34,34,10)%c#define M%cint main(){FILE *f;f=fopen(%cGrace_kid.c%c,%cw%c);PRINT(f);return(0);}%cM"
#define PRINT(x)	fprintf(x,S,10,9,10,9,9,10,9,10,9,34,S,34,10,9,10,9,34,34,34,34,10)
#define M	int main(){FILE *f;f=fopen("Grace_kid.c","w");PRINT(f);return(0);}
M