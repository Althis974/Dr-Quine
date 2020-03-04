#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int i=5;
	char *path=getenv("_");if(!strstr(path,"./Sully_")){++i;}if(i-1<0){return(0);}
	char *s="#include <stdio.h>%5$c#include <stdlib.h>%5$c#include <string.h>%5$cint main(){%5$c%4$cint i=%3$d;%5$c%4$cchar *path=getenv(%2$c_%2$c);if(!strstr(path,%2$c./Sully_%2$c)){++i;}if(i-1<0){return(0);}%5$c%4$cchar *s=%2$c%6$s%2$c;%5$c%4$cchar *filename;char *compile;char *exe;FILE *f;%5$c%4$casprintf(&filename,%2$cSully_%1$cd.c%2$c,i-1);asprintf(&compile,%2$cgcc -Wall -Werror -Wextra Sully_%1$c1$d.c -o Sully_%1$c1$d; %2$c,i-1);asprintf(&exe,%2$c./Sully_%1$cd%2$c,i-1);%5$c%4$cf=fopen(filename,%2$cw%2$c);fprintf(f,s,37,34,i-1,9,10,s);fclose(f);system(compile);if(i>1){system(exe);}return(0);}";
	char *filename;char *compile;char *exe;FILE *f;
	asprintf(&filename,"Sully_%d.c",i-1);asprintf(&compile,"gcc -Wall -Werror -Wextra Sully_%1$d.c -o Sully_%1$d; ",i-1);asprintf(&exe,"./Sully_%d",i-1);
	f=fopen(filename,"w");fprintf(f,s,37,34,i-1,9,10,s);fclose(f);system(compile);if(i>1){system(exe);}return(0);}