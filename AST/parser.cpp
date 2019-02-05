/*
Project 2
Abstract Syntax Tree and Implementation
2/5/19

e ::= true
      false
      not e1
      e1 and e2
      e1 or e2

Parser for AST Nodes
*/

#include "AST_Node.cpp"

class parser() {
  private:
    class expr(){
          astNode* e1 = expr();
    };
      
    class boolExpr(e1){
    };
    class NotExpr(e1){
    };
    class AndExpr(e1){
    };
    class OrExpr(e1){
    };
    
};
