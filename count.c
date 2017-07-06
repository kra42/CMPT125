#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) 
{
	unsigned long int charcount = 0;
	unsigned long int wordcount = 0;
	unsigned long int linecount = 0;
	FILE *fp;
	int c;
	if (argc != 2) {
		fprintf(stderr, "Usage: %s file.txt\n", argv[0]);
		exit(1);
    }
	if (!(fp = fopen(argv[1], "rt"))) {
 		perror(argv[1]);
		exit(1);
	}
	while ((c = fgetc(fp)) != EOF) {
		if ((c !=  ' ') && (c != '\n')) {
		        charcount++;
		}

		if ((c == ' ') || (c == '\n')) {
		        wordcount++;
		}

		if (c == '\n') {
			linecount++;
		}
	}
		        
	printf( "%lu %lu %lu\n", charcount, wordcount, linecount );
	fclose(fp);
	return 0;
}
