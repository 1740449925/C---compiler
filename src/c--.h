#ifndef C_H
#define C_H



//tokens and classes

enum{Num=128,Fun,Sys,Glo,Loc,Id,Char,Else,Enum,If,Int,Return,Sizeof,While,
Assign,Cond,Lor,Lan,Or,Xor,And,Eq,Ne,Lt,Gt,Le,Ge,Shl,Shr,Add,Sub,Mul,Div,Mod,Inc,Dec,Brak};
//identifiers
enum{Token,Hash,Name,Type,Class,Value,BClass,BType,BValue,IdSize};
//VMop
enum { LEA ,IMM ,JMP ,CALL,JZ  ,JNZ ,ENT ,ADJ ,LEV ,LI  ,LC  ,SI  ,SC  ,PUSH,
       OR  ,XOR ,AND ,EQ  ,NE  ,LT  ,GT  ,LE  ,GE  ,SHL ,SHR ,ADD ,SUB ,MUL ,DIV ,MOD ,
       OPEN,READ,CLOS,PRTF,MALC,MSET,MCMP,EXIT };

//variable/function types
enum{CHAR,INT,PTR};


//全局变量

int basetype;
int expr_type;
int assembly;
int debug;
int index_of_bp;//index of bp pointer on stack
#endif