#include <stdio.h>
#include "module1.h"

/**
\dot
digraph G {
main -> parse -> execute;
main -> init;
main -> cleanup;
execute -> make_string;
execute -> printf
init -> make_string;
main -> printf;
execute -> compare;
}
\enddot
*/
int main(){
	printf("Hello World \n");
	task1();
	return 0;
}
