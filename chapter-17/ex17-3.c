#include <stdio.h>

int main() {
    FILE *fp;
    int c;

    if( ( fp = fopen("oldname.txt", "rb" ) ) == NULL )  // the first argument to fopen() was wrong
        return -1;

    while (( c = fgetc(fp)) != EOF)
        fprintf( stdout, "%c", c);

    puts("");  // this show it better
    fclose(fp);
}
