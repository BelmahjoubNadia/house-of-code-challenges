#include <stdio.h>
#include <stdlib.h>

int my_strlen(const char *str){
    int c = 0;

    /*loop through the string till the \0*/
    while(str[c] != '\0'){
        c++;
    }
    //sub the spaces at the start and the end if they exist
    int start = 0;
    int end = c - 1;

    //skip the leading spaces
    while(str[start] == ' '){
        start++;
    }

    //skep the trailing spaces
    while(end >= 0 && str[end] == ' '){
        end--;
    }

    //if the str is empty or contains only spaces, it return 0
    if(start > end){
        return 0;
    }

    int len = end - start + 1;
    return len;
}

int main()
{
    const char * test1 = " IAE CLUB " ;
    const char * test2 = " House Of Code " ;
    const char * test3 = " G " ;
    const char * test4 = " " ;

    printf ( "Test 1: %s \n " , test1 ) ;
    printf ( "Length : %d \n " , my_strlen ( test1 ) ) ;

    printf ( "Test 2: %s \n " , test2 ) ;
    printf ( "Length : %d \n " , my_strlen ( test2 ) ) ;
    printf ( "Test 3: %s \n " , test3 ) ;
    printf ( "Length : %d \n " , my_strlen ( test3 ) ) ;
    printf ( "Test 4: %s \n " , test4 ) ;
    printf ( "Length : %d \n " , my_strlen ( test4 ) ) ;
    return 0;
}
