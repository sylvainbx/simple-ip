#include <stdio.h>
#include <stdlib.h> // for getenv

int main(int argc, char ** argv) {
	printf("%s%c%c\n", "Content-Type:text/html;charset=iso-8859-1",13,10);
	printf("<html><head>");
	printf("<title>IP address</title>");
	printf("</head><body>");
	printf("%s", getenv("REMOTE_ADDR"));
	printf("</body></html>");
}
