#include <stdio.h>
#include <stdint.h>
#include "espl_lib.h"

int main() {

    int exit = 0;
    do
    {
        uint32_t num; 
        char *return_str;
        printf("Please enter a number: ");
        scanf("%d", &num);

        return_str = num_to_words(num);
        printf("The return string is %s\n", return_str);
        

        printf("Enter 0 for exit, 1 for continue: ");
        scanf("%d", &exit);


    } while (exit);
    return 0;
   
}
