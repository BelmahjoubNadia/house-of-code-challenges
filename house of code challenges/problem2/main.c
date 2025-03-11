#include <stdio.h>
#include <stdlib.h>

int my_strlen(const char *str);
void reverse_string(char *str);

int main()
{
    char test1 [] = " edoc fo esuoH oT emocleW " ;
    char test2 [] = " uoy pleh lliw ti ;3 melborp ni noitcnuf siht esU " ;
    char test3 [] = " Hello World " ;
    char test4 [] = " G " ;

    printf ( " Before : %s \n " , test1 ) ;
    reverse_string ( test1 ) ;
    printf ( " After : %s \n \n " , test1 ) ;

    printf ( " Before : %s \n " , test2 ) ;
    reverse_string ( test2 ) ;
    printf ( " After : %s \n \n " , test2 ) ;

    printf ( " Before : %s \n " , test3 ) ;
    reverse_string ( test3 ) ;
    printf ( " After : %s \n \n " , test3 ) ;

    printf ( " Before : %s \n " , test4 ) ;
    reverse_string ( test4 ) ;
    printf ( " After : %s \n \n " , test4 ) ;
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

void reverse_string(char *str){

    if(str == NULL) return; // handle NULL pointer case!!

    int length = my_strlen(str); // used the fct of the last problem the find the length of the string

    int start = 0;
    int end = length - 1;

    while(start < end){
        //swap characters
        char k = str[start];
        str[start] = str[end];
        str[end] = k;

        start++;
        end--;
    }
}
