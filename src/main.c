#include <stdio.h>
#include <string.h>
#include "include/lexer.h"
//#include "include/parser.h"
//#include "include/visitor.h"
//#include "include/io.h"


int main(int argc, char* argv[])
{
    
    
    lexer_T* lexer = init_lexer(
        "var name = \"john doe\";"

        "print(name);"
    );

    token_T* token = (void*)0;

    while ((token = lexer_get_next_token(lexer)) != (void*)0){
        
        printf("TOKEN(%d, %s)\n", token->type, token->value);
    }
    
    return 0;
}
