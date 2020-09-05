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
 *\msc
 *  T,"Iberian Dance Task";
 *
 *  T>>"Iberian Dance Task" [label="IbFandangoReq", URL="\ref IbFandangoReq"];
 *  T<<"Iberian Dance Task" [label="IbFandangoCnf", URL="\ref IbFandangoCnf", ID="1"];
 *\endmsc
*/
int main(){
	printf("Hello World \n");
	task1();
	return 0;
}
