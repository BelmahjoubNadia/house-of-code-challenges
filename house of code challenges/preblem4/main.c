#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isValid(const char *str){
    int parentheses = 0;    // counter for '()'
    int braces = 0;     //counter for '{}'
    int brackets = 0;   //counter for '[]'

    for(int i = 0; str[i] != '\0';i++){
        //once for find an opening bracket we increase the counters
        if(str[i] == '(') parentheses++;
        else if(str[i] == '{') braces++;
        else if(str[i] == '[') brackets++;
        //decrement the counters for closing brackets
        else if(str[i] == ')'){
            if(parentheses == 0) return false; //mismatched closing parenthesis
            parentheses--;
        }
        else if (str[i] == '}'){
            if(braces == 0) return false;   //mismatched closing brace
            braces--;
        }
        else if (str[i] == ']'){
            if(brackets == 0) return false; //mismatched closing brackets
            brackets--;
        }

    }
    return parentheses == 0 && braces == 0 && brackets == 0;
}

int main()
{
    const char * test1 = "()";
    const char * test2 = " [{() }]";
    const char * test3 = "{[(a+b) * x}";
    const char * test4 = "{[a+b]*(x/y)}";

    printf (" Test 1: %s\n", test1 );
    printf ("Is valid : %s\n\n", isValid ( test1 ) ? "true" : "false");

    printf (" Test 2: %s\n", test2 );
    printf ("Is valid : %s\n\n", isValid ( test2 ) ? "true" : "false");

    printf (" Test 3: %s\n", test3 );
    printf ("Is valid : %s\n\n", isValid ( test3 ) ? "true" : "false");

    printf (" Test 4: %s\n", test4 );
    printf ("Is valid : %s\n", isValid ( test4 ) ? "true" : "false");
    return 0;
}
