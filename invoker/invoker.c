#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	char finalString[200]="";
	snprintf(finalString, sizeof(finalString), "cd %s;%s", argv[1], argv[2]);
	printf("%s\n",finalString);
	int ret = system(finalString);
	if (argc ==0 || ret==-1) {

	}
	execlp("./simplemenu.elf","simplemenu.elf",NULL);
}