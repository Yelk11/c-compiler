#include <stdio.h>
#include <stddef.h>

#include "include/main.h"
#include "include/lexer.h"
#include "include/token.h"


int main(int argc, char *argv[]){
    
    token_T* HEAD;
    token_T* child1;
    token_T* child2;
    
    child1->value = "p";

    HEAD->child=child1;
    child1->child=child2;

    print_list(HEAD);
}


void add_child(token_T* token){

}

void print_list(token_T* head){
    if (head->child == NULL){
        return;
    }
    printf("Value is %d\n", head->value);
    print_list(head->child);
}
