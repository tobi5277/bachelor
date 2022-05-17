#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "graph.h"


int *parseLine(char *str){
    /* First characater of the line which represents the "type" of the line
    as per the data set's structure */
    char *token = strtok(str, " ");
    if (token == "p"){
        int sizes[2];
        int i = 0;
        while (token != NULL) { 
            printf("%s\n", token); 
            token = strtok(NULL, " "); 
            if(token != NULL){
                sizes[i]=atoi(token);
                printf("%d --", sizes[i]);
                i=i+1;
            }
        } 
    }
    else if (token == "a"){
        // We need to set get the data in integers so we have (to, from, weight)
    }
}

int count_lines(char* filename){
    FILE *file = fopen(filename, "r");
    char ch;
    int lines;

    if (file == NULL){
        printf("Error, filename does not exit");
        return 0;
    }
    for (ch = getc(file); ch != EOF; ch = getc(file))
        if (ch == '\n'){
            lines++;
        }
    fclose(file);
    return lines;
}



int import_data(char* filename){
    FILE *file = fopen(filename, "r");
    if (file == NULL){
        printf("Error, filename does not exit");
        return 0;
    }

    int max_len = 256;
    char buffer[max_len];
    int line = 0;
    while (fgets(buffer, max_len, file)){
        char* ptr = strtok(buffer, " ");
        for (int i = 0; ptr != NULL; i++){
            split[line][i] = ptr;
            printf("%s\n", ptr);
            ptr = strtok(NULL, " ");
        }
        line++;

    }
    fclose(file);
    return 1;
}

int main(){
    import_data("../USA-road-d.NY.gr");
}