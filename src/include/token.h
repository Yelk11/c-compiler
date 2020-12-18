#ifndef TOKEN_H
#define TOKEN_H


// typedef struct Node Node;
// struct Node {
//     int value;
//     Node* next;
// };


typedef Token Token;
struct Token
{
    
    enum
    {
        TOKEN_ID,
        TOKEN_CONSTANT,
        TOKEN_EQUALS,
        TOKEN_STRING,
        TOKEN_SEMI,
        TOKEN_LPAREN,
        TOKEN_RPAREN,
        TOKEN_RBRACE,
        TOKEN_LBRACE,
        TOKEN_COMMA,
        TOKEN_EOF
    } type;

    char* value;
    struct Token* child;
}token_T;

Token* add_token(Token* token);

Token* pop_token(Token* token);

void print_tokens(Token* token);

#endif