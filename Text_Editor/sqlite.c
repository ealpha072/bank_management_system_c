//start with REPL (READ-EVAL-PRINT-LOOP)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void print_prompt(){printf("alphadb>> ");}

int main(){
    while (1){
        char input[256];
        print_prompt();

        fgets(input, sizeof(input), stdin);

        if(strcmp(input, "exit\n") == 0){
            printf("Exiting alphadb>> \n");
            break;
        }else{
			input[strcspn(input, "\n")] = 0;
			printf("Unrecognized command '%s'.\n", input);
        }
    }
    return 0;
}
