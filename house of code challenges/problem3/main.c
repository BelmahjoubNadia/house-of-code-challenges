#include <stdio.h>
#include <stdlib.h>

int my_strlen(const char *str);
void reverse_string(char *str, int start, int end);
void reverse_words(char *str);

int main()
{
    char test1 [] = "The dragons are coming ";
    char test2 [] = " code love I";
    char test3 [] = "G";

    printf (" Before : %s\n", test1 );
    reverse_words ( test1 );
    printf (" After : %s\n\n", test1 );

    printf (" Before : %s\n", test2 );
    reverse_words ( test2 );
    printf (" After : %s\n\n", test2 );

    printf (" Before : %s\n", test3 );
    reverse_words ( test3 );
    printf (" After : %s\n\n", test3 );
    return 0;
}

int my_strlen(const char *str){
    int c = 0;

    /*loop through the string till the \0*/
    while(str[c] != '\0'){
        c++;
    }
    //sub the spaces at the start and the end if they exist
   return c;

}

void reverse_string(char *str, int start, int end){

    if(str == NULL) return; // handle NULL pointer case!!


    while(start < end){
        //swap characters
        char str_temp = str[start];
        str[start] = str[end];
        str[end] = str_temp;

        start++;
        end--;
    }
}

void reverse_words(char *str){
    // first of all ladies and gentlewomen, we reverse the esntire string!!
    int length = my_strlen(str);
    reverse_string(str, 0, length-1);

    //now we reverse each word Lesgouu !!
    int start = 0, end = 0;

    while(end <= length){
        //ugh looking for the space or null terminator to find the end of each word
        if(str[end] == ' ' || str[end] == '\0'){
            //reverse the current word
            reverse_string(str, start, end-1);
            //moving to the next word
            start = end + 1;
        }
        end++;
    }
}
