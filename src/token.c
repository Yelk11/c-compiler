#include "include/token.h"


token_T* make_token(int token_id, char* value){
    token_T* token;
    token->value = value;
    token->type = token_id;
    return token;
}

token_T* add_token(token_T* token){
    return token;
}