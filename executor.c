#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <signal.h>
#include <dirent.h>

int main() {
    /*int random;
    scanf("Prompt: %d", &random);
    printf("thing: %d", random);
    */
    char input[100];
    printf("Enter your commands: ");
    fgets(input, sizeof(input), stdin);
    //printf("Testing print: %s\n", input);
    char fixedinp[100];
    strncpy(fixedinp, input, strlen(input) - 1);
    char * commands[50];
    char * s = fixedinp;
    int i = 0;
    while (s) {
        commands[i] = strsep(&s, " ");
        //printf("Priting Command Piece: %s\n", commands[i]);
        i++;
    }
    commands[i] = NULL;
    execvp( commands[0], commands );
    return 0;
}
