/***************************************************************
*      scanner routine for Mini C language                    *
*                                   2003. 3. 10               *
***************************************************************/

#pragma once


#define NO_KEYWORD 14
#define ID_LENGTH 30
#define  PS_SIZE    100              /* size of parsing stack */
struct tokenType {
	int number;
	union {
		char id[ID_LENGTH];
		int num;
	} value;
};

enum tsymbol { tnull=-1,
    tnot,       tnotequ,    tremainder, tremAssign, tident,     tnumber,
	/* 0          1            2         3            4          5     */
	tand,       tlparen,    trparen,    tmul,       tmulAssign, tplus,
	/* 6          7            8         9           10         11     */
    tinc,       taddAssign, tcomma,     tminus,     tdec,	    tsubAssign,
	/* 12         13          14        15           16         17     */
	tdiv,       tdivAssign,  tcolon,  tsemicolon,    tless,      tlesse,     
	/* 18         19          20        21           22         23     */
    tassign,    tequal,     tgreat,     tgreate,    tlbracket,  trbracket,  
	/* 24         25          26        27           28         29     */
	teof,
	/* 30
	//   ...........    word symbols ................................. //
	/* 31         32          33        34           35         36     */
    tbreak,     tcase,      tconst,    tcontinue,   tdefault ,  tdo,     
	/* 37         38          39        40           41         42     */
	telse,       tfor,        tif,      tint,       treturn,   tswitch, 
    /* 43         44          45        46           47                */
	tvoid,       twhile,     tlbrace,   tor,        trbrace
};


struct tokenType scanner();
void printToken(struct tokenType token);
void parser();