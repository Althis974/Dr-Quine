#include <stdio.h>
	/*
		This program will print its own source when run.
	*/
#define S	"#include <stdio.h>%c%c/*%c%c%cThis program will print its own source when run.%c%c*/%c#define S%c%c%s%c%c#define PRINT(x)%cfprintf(x,S,10,9,10,9,9,10,9,10,9,34,S,34,10,9,10,9,34,34,34,34,10)%c#define FT(x)%cint main(){FILE *f;if(!(f=fopen(%cGrace_kid.c%c,%cw%c))){return(1);}PRINT(f);return(0);}%cFT(xxxxxxxx)"
#define PRINT(x)	fprintf(x,S,10,9,10,9,9,10,9,10,9,34,S,34,10,9,10,9,34,34,34,34,10)
#define FT(x)	int main(){FILE *f;if(!(f=fopen("Grace_kid.c","w"))){return(1);}PRINT(f);return(0);}
FT(xxxxxxxx)