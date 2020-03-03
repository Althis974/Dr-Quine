#include <stdio.h>
	/*
		This program will print its own source when run.
	*/
void foo(char *s){printf(s,10,9,10,9,9,10,9,10,10,10,9,10,9,9,10,9,10,34,s,34);}
int main(){
	/*
		Awesome comment.
	*/
char *s="#include <stdio.h>%c%c/*%c%c%cThis program will print its own source when run.%c%c*/%cvoid foo(char *s){printf(s,10,9,10,9,9,10,9,10,10,10,9,10,9,9,10,9,10,34,s,34);}%cint main(){%c%c/*%c%c%cAwesome comment.%c%c*/%cchar *s=%c%s%c;foo(s);return(0);}";foo(s);return(0);}