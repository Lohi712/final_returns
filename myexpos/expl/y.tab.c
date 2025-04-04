/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "abstree.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    #include "abstree.h"
    #include "symboltable.h"
    #include "symboltable.c"
    #include "aa.c"
    #include "codegen.c"
    #include "userdtype.c"
    #include "typecheck.h"
    #include "typecheck.c"

    int yylex();
    void yyerror(char const *s);
    struct ASTNode *head1, *head;
    int result;
    FILE *fp;
    extern FILE *yyin;
    extern int yylineno, lineno;
    struct Fieldlist *ftemp;
    struct Typetable *declarationType, *FdeclarationType, *functype, *temp1, *temp2;
    struct Gsymbol *Gtemp;
    struct Lsymbol *Ltemp;
    struct Paramstruct *Argtemp1, *Argtemp2;
    int indicator = 0; //for no.of arguments passed
    int declcount = 0, defcount = 0, exprcount = 0;
    int init_counter = 0, f_counter = 0;	//to check whether initialize is called or not.
    int wr = 0;


    struct Fieldlist *Fhead, *Ftail;
    struct Typetable *Thead, *Ttail;
    struct Paramstruct *Phead = NULL, *Ptail = NULL;

    int totalCount = 4096;
    int fbind = 0;


#line 112 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUM = 258,                     /* NUM  */
    ID = 259,                      /* ID  */
    PLUS = 260,                    /* PLUS  */
    MUL = 261,                     /* MUL  */
    DIV = 262,                     /* DIV  */
    MOD = 263,                     /* MOD  */
    ASGN = 264,                    /* ASGN  */
    READ = 265,                    /* READ  */
    WRITE = 266,                   /* WRITE  */
    MINUS = 267,                   /* MINUS  */
    NEWLINE = 268,                 /* NEWLINE  */
    LT = 269,                      /* LT  */
    GT = 270,                      /* GT  */
    DEQ = 271,                     /* DEQ  */
    NEQ = 272,                     /* NEQ  */
    ELSE = 273,                    /* ELSE  */
    IF = 274,                      /* IF  */
    THEN = 275,                    /* THEN  */
    ENDIF = 276,                   /* ENDIF  */
    ENDWHILE = 277,                /* ENDWHILE  */
    WHILE = 278,                   /* WHILE  */
    DO = 279,                      /* DO  */
    START = 280,                   /* START  */
    END = 281,                     /* END  */
    DECL = 282,                    /* DECL  */
    ENDDECL = 283,                 /* ENDDECL  */
    INT = 284,                     /* INT  */
    STR = 285,                     /* STR  */
    LE = 286,                      /* LE  */
    GE = 287,                      /* GE  */
    NOT = 288,                     /* NOT  */
    AND = 289,                     /* AND  */
    OR = 290,                      /* OR  */
    MAIN = 291,                    /* MAIN  */
    RETURN = 292,                  /* RETURN  */
    ALLOC = 293,                   /* ALLOC  */
    FREE = 294,                    /* FREE  */
    INIT = 295,                    /* INIT  */
    BRK = 296,                     /* BRK  */
    CONTINUE = 297,                /* CONTINUE  */
    BRKP = 298,                    /* BRKP  */
    TYPE = 299,                    /* TYPE  */
    ENDTYPE = 300,                 /* ENDTYPE  */
    NILL = 301,                    /* NILL  */
    DEQNILL = 302,                 /* DEQNILL  */
    NEQNILL = 303,                 /* NEQNILL  */
    STRVAL = 304,                  /* STRVAL  */
    EXPOSCALL = 305                /* EXPOSCALL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUM 258
#define ID 259
#define PLUS 260
#define MUL 261
#define DIV 262
#define MOD 263
#define ASGN 264
#define READ 265
#define WRITE 266
#define MINUS 267
#define NEWLINE 268
#define LT 269
#define GT 270
#define DEQ 271
#define NEQ 272
#define ELSE 273
#define IF 274
#define THEN 275
#define ENDIF 276
#define ENDWHILE 277
#define WHILE 278
#define DO 279
#define START 280
#define END 281
#define DECL 282
#define ENDDECL 283
#define INT 284
#define STR 285
#define LE 286
#define GE 287
#define NOT 288
#define AND 289
#define OR 290
#define MAIN 291
#define RETURN 292
#define ALLOC 293
#define FREE 294
#define INIT 295
#define BRK 296
#define CONTINUE 297
#define BRKP 298
#define TYPE 299
#define ENDTYPE 300
#define NILL 301
#define DEQNILL 302
#define NEQNILL 303
#define STRVAL 304
#define EXPOSCALL 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 43 "abstree.y"

    struct ASTNode *nptr;

#line 269 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUM = 3,                        /* NUM  */
  YYSYMBOL_ID = 4,                         /* ID  */
  YYSYMBOL_PLUS = 5,                       /* PLUS  */
  YYSYMBOL_MUL = 6,                        /* MUL  */
  YYSYMBOL_DIV = 7,                        /* DIV  */
  YYSYMBOL_MOD = 8,                        /* MOD  */
  YYSYMBOL_ASGN = 9,                       /* ASGN  */
  YYSYMBOL_READ = 10,                      /* READ  */
  YYSYMBOL_WRITE = 11,                     /* WRITE  */
  YYSYMBOL_MINUS = 12,                     /* MINUS  */
  YYSYMBOL_NEWLINE = 13,                   /* NEWLINE  */
  YYSYMBOL_LT = 14,                        /* LT  */
  YYSYMBOL_GT = 15,                        /* GT  */
  YYSYMBOL_DEQ = 16,                       /* DEQ  */
  YYSYMBOL_NEQ = 17,                       /* NEQ  */
  YYSYMBOL_ELSE = 18,                      /* ELSE  */
  YYSYMBOL_IF = 19,                        /* IF  */
  YYSYMBOL_THEN = 20,                      /* THEN  */
  YYSYMBOL_ENDIF = 21,                     /* ENDIF  */
  YYSYMBOL_ENDWHILE = 22,                  /* ENDWHILE  */
  YYSYMBOL_WHILE = 23,                     /* WHILE  */
  YYSYMBOL_DO = 24,                        /* DO  */
  YYSYMBOL_START = 25,                     /* START  */
  YYSYMBOL_END = 26,                       /* END  */
  YYSYMBOL_DECL = 27,                      /* DECL  */
  YYSYMBOL_ENDDECL = 28,                   /* ENDDECL  */
  YYSYMBOL_INT = 29,                       /* INT  */
  YYSYMBOL_STR = 30,                       /* STR  */
  YYSYMBOL_LE = 31,                        /* LE  */
  YYSYMBOL_GE = 32,                        /* GE  */
  YYSYMBOL_NOT = 33,                       /* NOT  */
  YYSYMBOL_AND = 34,                       /* AND  */
  YYSYMBOL_OR = 35,                        /* OR  */
  YYSYMBOL_MAIN = 36,                      /* MAIN  */
  YYSYMBOL_RETURN = 37,                    /* RETURN  */
  YYSYMBOL_ALLOC = 38,                     /* ALLOC  */
  YYSYMBOL_FREE = 39,                      /* FREE  */
  YYSYMBOL_INIT = 40,                      /* INIT  */
  YYSYMBOL_BRK = 41,                       /* BRK  */
  YYSYMBOL_CONTINUE = 42,                  /* CONTINUE  */
  YYSYMBOL_BRKP = 43,                      /* BRKP  */
  YYSYMBOL_TYPE = 44,                      /* TYPE  */
  YYSYMBOL_ENDTYPE = 45,                   /* ENDTYPE  */
  YYSYMBOL_NILL = 46,                      /* NILL  */
  YYSYMBOL_DEQNILL = 47,                   /* DEQNILL  */
  YYSYMBOL_NEQNILL = 48,                   /* NEQNILL  */
  YYSYMBOL_STRVAL = 49,                    /* STRVAL  */
  YYSYMBOL_EXPOSCALL = 50,                 /* EXPOSCALL  */
  YYSYMBOL_51_ = 51,                       /* '{'  */
  YYSYMBOL_52_ = 52,                       /* '}'  */
  YYSYMBOL_53_ = 53,                       /* ';'  */
  YYSYMBOL_54_ = 54,                       /* '['  */
  YYSYMBOL_55_ = 55,                       /* ']'  */
  YYSYMBOL_56_ = 56,                       /* '('  */
  YYSYMBOL_57_ = 57,                       /* ')'  */
  YYSYMBOL_58_ = 58,                       /* ','  */
  YYSYMBOL_59_ = 59,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 60,                  /* $accept  */
  YYSYMBOL_program = 61,                   /* program  */
  YYSYMBOL_TypeDefBlock = 62,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 63,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 64,                   /* TypeDef  */
  YYSYMBOL_FieldDeclList = 65,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 66,                 /* FieldDecl  */
  YYSYMBOL_gdeclaration = 67,              /* gdeclaration  */
  YYSYMBOL_GDeclList = 68,                 /* GDeclList  */
  YYSYMBOL_GDecl = 69,                     /* GDecl  */
  YYSYMBOL_Gidlist = 70,                   /* Gidlist  */
  YYSYMBOL_FieldType = 71,                 /* FieldType  */
  YYSYMBOL_TypeName = 72,                  /* TypeName  */
  YYSYMBOL_FType = 73,                     /* FType  */
  YYSYMBOL_ParamList = 74,                 /* ParamList  */
  YYSYMBOL_Param = 75,                     /* Param  */
  YYSYMBOL_fvlist = 76,                    /* fvlist  */
  YYSYMBOL_fdeflist = 77,                  /* fdeflist  */
  YYSYMBOL_fdef = 78,                      /* fdef  */
  YYSYMBOL_LdeclBlock = 79,                /* LdeclBlock  */
  YYSYMBOL_ldlist = 80,                    /* ldlist  */
  YYSYMBOL_ldec = 81,                      /* ldec  */
  YYSYMBOL_lvlist = 82,                    /* lvlist  */
  YYSYMBOL_mainblock = 83,                 /* mainblock  */
  YYSYMBOL_Body = 84,                      /* Body  */
  YYSYMBOL_Retstmt = 85,                   /* Retstmt  */
  YYSYMBOL_Slist = 86,                     /* Slist  */
  YYSYMBOL_Stmt = 87,                      /* Stmt  */
  YYSYMBOL_FIELD = 88,                     /* FIELD  */
  YYSYMBOL_exprlist = 89,                  /* exprlist  */
  YYSYMBOL_exprlist_exposcall = 90,        /* exprlist_exposcall  */
  YYSYMBOL_Expr = 91                       /* Expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   540

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  247

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      56,    57,     2,     2,    58,     2,    59,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    53,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   106,   106,   109,   114,   115,   118,   119,   122,   127,
     128,   131,   140,   143,   148,   149,   152,   155,   159,   163,
     170,   174,   178,   187,   188,   189,   196,   197,   198,   208,
     209,   210,   220,   221,   222,   225,   228,   234,   235,   238,
     303,   304,   307,   308,   311,   314,   318,   324,   356,   359,
     364,   375,   382,   387,   399,   404,   408,   412,   432,   437,
     442,   447,   452,   465,   476,   486,   490,   499,   509,   513,
     525,   540,   545,   549,   552,   557,   562,   590,   594,   605,
     609,   621,   625,   629,   633,   637,   641,   645,   649,   653,
     657,   661,   665,   669,   673,   677,   680,   683,   687,   692,
     696,   700,   704,   730,   734,   738,   742,   746
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUM", "ID", "PLUS",
  "MUL", "DIV", "MOD", "ASGN", "READ", "WRITE", "MINUS", "NEWLINE", "LT",
  "GT", "DEQ", "NEQ", "ELSE", "IF", "THEN", "ENDIF", "ENDWHILE", "WHILE",
  "DO", "START", "END", "DECL", "ENDDECL", "INT", "STR", "LE", "GE", "NOT",
  "AND", "OR", "MAIN", "RETURN", "ALLOC", "FREE", "INIT", "BRK",
  "CONTINUE", "BRKP", "TYPE", "ENDTYPE", "NILL", "DEQNILL", "NEQNILL",
  "STRVAL", "EXPOSCALL", "'{'", "'}'", "';'", "'['", "']'", "'('", "')'",
  "','", "'.'", "$accept", "program", "TypeDefBlock", "TypeDefList",
  "TypeDef", "FieldDeclList", "FieldDecl", "gdeclaration", "GDeclList",
  "GDecl", "Gidlist", "FieldType", "TypeName", "FType", "ParamList",
  "Param", "fvlist", "fdeflist", "fdef", "LdeclBlock", "ldlist", "ldec",
  "lvlist", "mainblock", "Body", "Retstmt", "Slist", "Stmt", "FIELD",
  "exprlist", "exprlist_exposcall", "Expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-196)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -39,    16,    92,    -4,    33,    23,  -196,  -196,    67,    67,
      75,  -196,  -196,  -196,  -196,  -196,     5,  -196,    99,     0,
      67,  -196,  -196,  -196,  -196,  -196,    15,  -196,   111,  -196,
    -196,    45,    32,    65,    68,  -196,  -196,  -196,  -196,   121,
     134,    84,  -196,   180,    84,   120,  -196,   142,  -196,  -196,
    -196,   202,   -26,  -196,    71,    93,   166,  -196,  -196,  -196,
    -196,    84,   215,    84,   168,   201,  -196,   176,    97,   201,
      84,   207,  -196,  -196,   207,   229,     9,  -196,   411,   182,
     183,  -196,    88,  -196,  -196,    21,   181,   185,   192,   193,
      74,   194,   209,   210,   219,   212,   411,  -196,     2,  -196,
    -196,  -196,   232,    62,    74,   257,   271,    74,    74,    74,
    -196,    35,   273,    74,  -196,    74,    81,   296,   274,  -196,
    -196,  -196,  -196,   251,  -196,    60,   275,  -196,   224,   225,
     240,   226,   327,   239,  -196,    63,    85,   151,   164,   195,
    -196,  -196,    74,    13,  -196,   117,   208,  -196,  -196,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,  -196,    86,   116,  -196,   236,   243,   351,   340,
    -196,   228,   248,  -196,    74,  -196,   297,    74,   256,   263,
     266,   300,   298,   252,  -196,   104,   496,  -196,   508,   173,
     173,   173,   508,   117,   117,   175,   304,   117,   117,   508,
     508,   270,   272,   267,  -196,  -196,  -196,   276,   284,   136,
     496,    74,   283,  -196,  -196,  -196,   457,   457,  -196,  -196,
      74,  -196,  -196,   287,  -196,  -196,   307,    74,   371,   269,
     390,   416,   496,  -196,  -196,   496,  -196,   310,   457,   311,
     312,  -196,   452,  -196,  -196,   313,  -196
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     0,     0,    13,     0,     0,     7,     1,     0,     0,
       0,     4,     6,    28,    26,    27,     0,    14,     0,     0,
       0,    37,     3,    25,    23,    24,     0,    10,     0,    12,
      15,    17,     0,     0,     0,    38,     2,     8,     9,     0,
       0,    34,    16,     0,    34,     0,    11,     0,    31,    29,
      30,     0,     0,    32,    20,     0,     0,    18,    36,    35,
      19,     0,     0,    34,     0,    41,    33,     0,     0,    41,
       0,     0,    21,    22,     0,     0,     0,    42,     0,     0,
       0,    45,     0,    40,    43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,     0,    47,
      39,    44,     0,     0,     0,     0,     0,     0,     0,     0,
      97,   100,     0,     0,    99,     0,    96,     0,     0,    72,
      73,    74,    49,     0,    51,     0,     0,    46,     0,     0,
       0,     0,     0,     0,    75,     0,     0,     0,     0,     0,
     104,   105,     0,     0,    98,    94,     0,   106,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,    48,     0,     0,    96,     0,
      76,     0,     0,    68,     0,    53,     0,     0,     0,     0,
       0,     0,     0,     0,   103,     0,    77,    95,    81,    83,
      84,    85,    82,    86,    88,    90,    91,    87,    89,    92,
      93,     0,     0,     0,    69,    63,    64,     0,     0,     0,
      79,     0,     0,    55,    67,    57,     0,     0,   101,   102,
       0,    65,    66,     0,    61,    71,     0,     0,     0,     0,
       0,     0,    78,    62,    70,    80,    54,     0,     0,     0,
       0,    56,     0,    58,    60,     0,    59
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -196,  -196,  -196,  -196,   331,  -196,   324,  -196,  -196,   335,
    -196,  -196,     6,    11,   -34,   292,  -196,  -196,   347,   299,
    -196,   293,  -196,   350,   308,   277,  -195,   -95,   -78,  -196,
    -196,  -101
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     5,     6,    26,    27,     9,    16,    17,
      32,    28,    18,    51,    52,    53,    59,    20,    21,    71,
      76,    77,    82,    22,    79,    95,    96,    97,   116,   185,
     209,   117
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      98,   124,   132,   133,    33,     1,   137,   138,   139,    13,
      55,   125,   145,    48,   146,    19,   110,   111,    98,    23,
       4,   230,   231,     8,   169,   112,    19,     4,   136,    68,
     103,    60,    61,    29,    14,    15,    34,    83,    49,    50,
     164,   183,   186,   242,    24,    25,   113,   168,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   126,   114,   110,   111,   110,   111,    37,    11,   115,
     184,    13,   112,   210,   112,   104,   212,   110,   111,    23,
     105,    75,   140,   141,    10,    42,   112,    75,    48,   142,
      43,   143,     7,   113,   105,   113,    14,    15,   166,    40,
     128,    41,   129,    31,    24,    25,   167,   113,   130,   114,
     228,   114,   131,    49,    50,    39,   115,   177,   115,   232,
     178,    44,   105,   114,    45,    62,   235,    63,   147,   148,
     115,    -1,    -1,   156,   157,   124,   124,    47,    98,    98,
     126,   101,   179,   201,   126,   105,   102,   124,    -1,    -1,
      64,    61,    98,    98,    73,    61,   149,   150,   151,   152,
      98,   219,   220,   153,    98,   154,   155,   156,   157,   149,
     150,   151,   152,   202,    46,   126,   153,    56,   154,   155,
     156,   157,   158,   159,    54,   160,   161,   154,   155,   156,
     157,   156,   157,   226,   227,   158,   159,    57,   160,   161,
     149,   150,   151,   152,   158,   159,    58,   153,   180,   154,
     155,   156,   157,   149,   150,   151,   152,    65,    67,    69,
     153,   181,   154,   155,   156,   157,   158,   159,    70,   160,
     161,    72,    78,    81,    99,   100,   127,   106,   122,   158,
     159,   107,   160,   161,   149,   150,   151,   152,   108,   109,
     118,   153,   182,   154,   155,   156,   157,   149,   150,   151,
     152,   134,   119,   120,   153,   187,   154,   155,   156,   157,
     158,   159,   121,   160,   161,   135,   144,   165,   163,   170,
     171,   172,   174,   158,   159,   207,   160,   161,   149,   150,
     151,   152,   203,   173,   176,   153,   204,   154,   155,   156,
     157,   149,   150,   151,   152,   208,   211,   218,   153,   213,
     154,   155,   156,   157,   158,   159,   214,   160,   161,   215,
     216,   157,   217,   221,   223,   222,   237,   158,   159,   224,
     160,   161,   149,   150,   151,   152,    12,   225,   229,   153,
     233,   154,   155,   156,   157,   149,   150,   151,   152,   162,
      38,    30,   153,    66,   154,   155,   156,   157,   158,   159,
     234,   160,   161,   241,   243,   244,   246,    35,    74,    84,
      36,   158,   159,   123,   160,   161,   149,   150,   151,   152,
     175,     0,    80,   153,     0,   154,   155,   156,   157,     0,
       0,     0,     0,   206,    85,     0,     0,     0,   147,   148,
      86,    87,   158,   159,   205,   160,   161,     0,   238,    88,
     126,   239,     0,    89,     0,    85,     0,     0,     0,     0,
      85,    86,    87,     0,   236,     0,    86,    87,     0,    91,
      88,    92,    93,    94,    89,    88,     0,     0,   240,    89,
       0,     0,     0,     0,     0,     0,     0,     0,    90,     0,
      91,     0,    92,    93,    94,    91,    85,    92,    93,    94,
       0,    85,    86,    87,     0,     0,     0,    86,    87,     0,
       0,    88,     0,   245,     0,    89,    88,     0,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    91,     0,    92,    93,    94,    91,     0,    92,    93,
      94,   149,   150,   151,   152,     0,     0,     0,   153,     0,
     154,   155,   156,   157,   150,   151,   152,     0,     0,     0,
       0,     0,   154,   155,   156,   157,     0,   158,   159,     0,
     160,   161,     0,     0,     0,     0,     0,     0,     0,   158,
     159
};

static const yytype_int16 yycheck[] =
{
      78,    96,   103,   104,     4,    44,   107,   108,   109,     4,
      44,     9,   113,     4,   115,     9,     3,     4,    96,     4,
       4,   216,   217,    27,   125,    12,    20,     4,   106,    63,
       9,    57,    58,    28,    29,    30,    36,    28,    29,    30,
     118,   142,   143,   238,    29,    30,    33,   125,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,    59,    49,     3,     4,     3,     4,    52,    45,    56,
      57,     4,    12,   174,    12,    54,   177,     3,     4,     4,
      59,    70,    47,    48,    51,    53,    12,    76,     4,    54,
      58,    56,     0,    33,    59,    33,    29,    30,    38,    54,
      38,    56,    40,     4,    29,    30,    46,    33,    46,    49,
     211,    49,    50,    29,    30,     4,    56,    54,    56,   220,
      57,    56,    59,    49,    56,    54,   227,    56,    47,    48,
      56,    14,    15,    16,    17,   230,   231,     3,   216,   217,
      59,    53,    57,    57,    59,    59,    58,   242,    31,    32,
      57,    58,   230,   231,    57,    58,     5,     6,     7,     8,
     238,    57,    58,    12,   242,    14,    15,    16,    17,     5,
       6,     7,     8,    57,    53,    59,    12,    57,    14,    15,
      16,    17,    31,    32,     4,    34,    35,    14,    15,    16,
      17,    16,    17,    57,    58,    31,    32,    55,    34,    35,
       5,     6,     7,     8,    31,    32,     4,    12,    57,    14,
      15,    16,    17,     5,     6,     7,     8,    51,     3,    51,
      12,    57,    14,    15,    16,    17,    31,    32,    27,    34,
      35,    55,    25,     4,    52,    52,     4,    56,    26,    31,
      32,    56,    34,    35,     5,     6,     7,     8,    56,    56,
      56,    12,    57,    14,    15,    16,    17,     5,     6,     7,
       8,     4,    53,    53,    12,    57,    14,    15,    16,    17,
      31,    32,    53,    34,    35,     4,     3,    26,     4,     4,
      56,    56,    56,    31,    32,    57,    34,    35,     5,     6,
       7,     8,    56,    53,    55,    12,    53,    14,    15,    16,
      17,     5,     6,     7,     8,    57,     9,    55,    12,    53,
      14,    15,    16,    17,    31,    32,    53,    34,    35,    53,
      20,    17,    24,    53,    57,    53,    57,    31,    32,    53,
      34,    35,     5,     6,     7,     8,     5,    53,    55,    12,
      53,    14,    15,    16,    17,     5,     6,     7,     8,    53,
      26,    16,    12,    61,    14,    15,    16,    17,    31,    32,
      53,    34,    35,    53,    53,    53,    53,    20,    69,    76,
      20,    31,    32,    96,    34,    35,     5,     6,     7,     8,
      53,    -1,    74,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    53,     4,    -1,    -1,    -1,    47,    48,
      10,    11,    31,    32,    53,    34,    35,    -1,    18,    19,
      59,    21,    -1,    23,    -1,     4,    -1,    -1,    -1,    -1,
       4,    10,    11,    -1,    53,    -1,    10,    11,    -1,    39,
      19,    41,    42,    43,    23,    19,    -1,    -1,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      39,    -1,    41,    42,    43,    39,     4,    41,    42,    43,
      -1,     4,    10,    11,    -1,    -1,    -1,    10,    11,    -1,
      -1,    19,    -1,    21,    -1,    23,    19,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    41,    42,    43,    39,    -1,    41,    42,
      43,     5,     6,     7,     8,    -1,    -1,    -1,    12,    -1,
      14,    15,    16,    17,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    -1,    31,    32,    -1,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    44,    61,    62,     4,    63,    64,     0,    27,    67,
      51,    45,    64,     4,    29,    30,    68,    69,    72,    72,
      77,    78,    83,     4,    29,    30,    65,    66,    71,    28,
      69,     4,    70,     4,    36,    78,    83,    52,    66,     4,
      54,    56,    53,    58,    56,    56,    53,     3,     4,    29,
      30,    73,    74,    75,     4,    74,    57,    55,     4,    76,
      57,    58,    54,    56,    57,    51,    75,     3,    74,    51,
      27,    79,    55,    57,    79,    73,    80,    81,    25,    84,
      84,     4,    82,    28,    81,     4,    10,    11,    19,    23,
      37,    39,    41,    42,    43,    85,    86,    87,    88,    52,
      52,    53,    58,     9,    54,    59,    56,    56,    56,    56,
       3,     4,    12,    33,    49,    56,    88,    91,    56,    53,
      53,    53,    26,    85,    87,     9,    59,     4,    38,    40,
      46,    50,    91,    91,     4,     4,    88,    91,    91,    91,
      47,    48,    54,    56,     3,    91,    91,    47,    48,     5,
       6,     7,     8,    12,    14,    15,    16,    17,    31,    32,
      34,    35,    53,     4,    88,    26,    38,    46,    88,    91,
       4,    56,    56,    53,    56,    53,    55,    54,    57,    57,
      57,    57,    57,    91,    57,    89,    91,    57,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    57,    57,    56,    53,    53,    53,    57,    57,    90,
      91,     9,    91,    53,    53,    53,    20,    24,    55,    57,
      58,    53,    53,    57,    53,    53,    57,    58,    91,    55,
      86,    86,    91,    53,    53,    91,    53,    57,    18,    21,
      22,    53,    86,    53,    53,    21,    53
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    61,    62,    62,    63,    63,    64,    65,
      65,    66,    67,    67,    68,    68,    69,    70,    70,    70,
      70,    70,    70,    71,    71,    71,    72,    72,    72,    73,
      73,    73,    74,    74,    74,    75,    76,    77,    77,    78,
      79,    79,    80,    80,    81,    82,    82,    83,    84,    84,
      85,    86,    86,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    88,    88,    89,    89,    90,
      90,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     3,     0,     2,     1,     4,     2,
       1,     3,     3,     0,     1,     2,     3,     1,     4,     4,
       3,     6,     6,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     0,     2,     1,     1,     2,     9,
       3,     0,     1,     2,     3,     1,     3,     8,     4,     3,
       3,     2,     1,     4,     7,     5,     8,     5,     8,    10,
       8,     6,     6,     4,     4,     5,     5,     5,     4,     4,
       7,     6,     2,     2,     2,     3,     3,     1,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     1,     1,     2,     1,
       1,     4,     4,     3,     2,     2,     2,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: TypeDefBlock gdeclaration fdeflist mainblock  */
#line 106 "abstree.y"
                                                       {
			                                            fclose(intermediate);
                        								}
#line 1559 "y.tab.c"
    break;

  case 3: /* program: TypeDefBlock gdeclaration mainblock  */
#line 109 "abstree.y"
                                                 {
		                                            fclose(intermediate);
                                    			 }
#line 1567 "y.tab.c"
    break;

  case 4: /* TypeDefBlock: TYPE TypeDefList ENDTYPE  */
#line 114 "abstree.y"
                                            {}
#line 1573 "y.tab.c"
    break;

  case 5: /* TypeDefBlock: %empty  */
#line 115 "abstree.y"
                                            {}
#line 1579 "y.tab.c"
    break;

  case 8: /* TypeDef: ID '{' FieldDeclList '}'  */
#line 122 "abstree.y"
                                     {
	                                    TInstall((yyvsp[-3].nptr)->name, 0, Fhead); //size is initialized to 0. actual size is calculated in TInstall
                               		}
#line 1587 "y.tab.c"
    break;

  case 11: /* FieldDecl: FieldType ID ';'  */
#line 131 "abstree.y"
                                {
	                                if(FLookup ((yyvsp[-1].nptr)->name, Fhead) != NULL)
	                                {
	                                    yyerror("Re-declaration of field element\n");
	                                    exit(1);
	                                }
						            FInstall(declarationType, (yyvsp[-1].nptr)->name);
								}
#line 1600 "y.tab.c"
    break;

  case 12: /* gdeclaration: DECL GDeclList ENDDECL  */
#line 140 "abstree.y"
                                        {
                                            start();
                                        }
#line 1608 "y.tab.c"
    break;

  case 13: /* gdeclaration: %empty  */
#line 143 "abstree.y"
                                        {
                                            start();
                                        }
#line 1616 "y.tab.c"
    break;

  case 14: /* GDeclList: GDecl  */
#line 148 "abstree.y"
                              {}
#line 1622 "y.tab.c"
    break;

  case 15: /* GDeclList: GDeclList GDecl  */
#line 149 "abstree.y"
                              {}
#line 1628 "y.tab.c"
    break;

  case 16: /* GDecl: TypeName Gidlist ';'  */
#line 152 "abstree.y"
                                {}
#line 1634 "y.tab.c"
    break;

  case 17: /* Gidlist: ID  */
#line 155 "abstree.y"
                        {
                            verify((yyvsp[0].nptr), 1, 0, 0, NULL);
                            GInstall((yyvsp[0].nptr)->name, declarationType, 1, NULL);
                        }
#line 1643 "y.tab.c"
    break;

  case 18: /* Gidlist: ID '[' NUM ']'  */
#line 159 "abstree.y"
                       {
                            verify((yyvsp[-3].nptr), 1, 0, 0, NULL);
                            install_id((yyvsp[-3].nptr), (yyvsp[-1].nptr), declarationType);
                        }
#line 1652 "y.tab.c"
    break;

  case 19: /* Gidlist: ID '(' ParamList ')'  */
#line 163 "abstree.y"
                              {
                                declcount++; //  to keep track of number of functions declared
                                verify((yyvsp[-3].nptr), 1, 0, 0, NULL);
                                GInstall((yyvsp[-3].nptr)->name, declarationType, -1, Phead);
                                Phead = NULL;
                                Ptail = NULL;
                            }
#line 1664 "y.tab.c"
    break;

  case 20: /* Gidlist: Gidlist ',' ID  */
#line 170 "abstree.y"
                            {
                                verify((yyvsp[0].nptr), 1, 0, 0, NULL);
                                GInstall((yyvsp[0].nptr)->name,declarationType,1,NULL);
                            }
#line 1673 "y.tab.c"
    break;

  case 21: /* Gidlist: Gidlist ',' ID '[' NUM ']'  */
#line 174 "abstree.y"
                                  {
                                    verify((yyvsp[-3].nptr), 1, 0, 0, NULL);
                                    install_id((yyvsp[-3].nptr), (yyvsp[-1].nptr), declarationType);
                                }
#line 1682 "y.tab.c"
    break;

  case 22: /* Gidlist: Gidlist ',' ID '(' ParamList ')'  */
#line 178 "abstree.y"
                                         {
                                            declcount++; //  to keep track of number of functions declared
                                            verify((yyvsp[-3].nptr), 1, 0, 0, NULL);
                                            GInstall((yyvsp[-3].nptr)->name, declarationType, -1, Phead);
                                            Phead = NULL;
                                            Ptail = NULL;
                                        }
#line 1694 "y.tab.c"
    break;

  case 23: /* FieldType: INT  */
#line 187 "abstree.y"
                    {declarationType = TLookup("integer");}
#line 1700 "y.tab.c"
    break;

  case 24: /* FieldType: STR  */
#line 188 "abstree.y"
                    {declarationType = TLookup("string");}
#line 1706 "y.tab.c"
    break;

  case 25: /* FieldType: ID  */
#line 189 "abstree.y"
                    {
                        declarationType = TLookup((yyvsp[0].nptr)->name);
                        if (declarationType == NULL)
                            declarationType = TLookup("dummy");
                    }
#line 1716 "y.tab.c"
    break;

  case 26: /* TypeName: INT  */
#line 196 "abstree.y"
                    {declarationType = TLookup("integer");}
#line 1722 "y.tab.c"
    break;

  case 27: /* TypeName: STR  */
#line 197 "abstree.y"
                    {declarationType = TLookup("string");}
#line 1728 "y.tab.c"
    break;

  case 28: /* TypeName: ID  */
#line 198 "abstree.y"
                    {
                        declarationType = TLookup((yyvsp[0].nptr)->name);
                        if (declarationType == NULL)
                        {
                            yyerror("Unknown user-defined type\n");
                            exit(1);
                        }
                    }
#line 1741 "y.tab.c"
    break;

  case 29: /* FType: INT  */
#line 208 "abstree.y"
                {FdeclarationType = TLookup("integer");}
#line 1747 "y.tab.c"
    break;

  case 30: /* FType: STR  */
#line 209 "abstree.y"
                {FdeclarationType = TLookup("string");}
#line 1753 "y.tab.c"
    break;

  case 31: /* FType: ID  */
#line 210 "abstree.y"
                {
                   FdeclarationType = TLookup((yyvsp[0].nptr)->name);
                    if (FdeclarationType == NULL)
                    {
                        yyerror("Unknown user-defined type\n");
                        exit(1);
                    }
                }
#line 1766 "y.tab.c"
    break;

  case 32: /* ParamList: Param  */
#line 220 "abstree.y"
                                    {}
#line 1772 "y.tab.c"
    break;

  case 33: /* ParamList: ParamList ',' Param  */
#line 221 "abstree.y"
                                    {}
#line 1778 "y.tab.c"
    break;

  case 34: /* ParamList: %empty  */
#line 222 "abstree.y"
                                    {}
#line 1784 "y.tab.c"
    break;

  case 35: /* Param: FType fvlist  */
#line 225 "abstree.y"
                                {}
#line 1790 "y.tab.c"
    break;

  case 36: /* fvlist: ID  */
#line 228 "abstree.y"
                                   {
                                        verify((yyvsp[0].nptr), 0, 0, 1, NULL);
                                        PInstall((yyvsp[0].nptr)->name, FdeclarationType);
                                    }
#line 1799 "y.tab.c"
    break;

  case 37: /* fdeflist: fdef  */
#line 234 "abstree.y"
                                {}
#line 1805 "y.tab.c"
    break;

  case 38: /* fdeflist: fdeflist fdef  */
#line 235 "abstree.y"
                                {}
#line 1811 "y.tab.c"
    break;

  case 39: /* fdef: TypeName ID '(' ParamList ')' '{' LdeclBlock Body '}'  */
#line 238 "abstree.y"
                                                                {
                                                                defcount++; //  to keep track of number of functions defined

                                                                Gtemp = GLookup((yyvsp[-7].nptr)->name);

                                                                if (Gtemp == NULL)
                                                                {
                                                                    printf("Function not declared in GST\n");
                                                                    exit(1);
                                                                }

                                                                //storing arguments in LST

                                                                Argtemp1 = Phead;
                                                                Argtemp2 = Gtemp->paramlist;

                                                                while ((Argtemp1 != NULL) && (Argtemp2 != NULL))
                                                                {
                                                                    if (strcmp(Argtemp1->name, Argtemp2->name) == 0)
                                                                    {
                                                                        if (Argtemp1->type != Argtemp2->type)
                                                                        {
                                                                            printf("Conflict in argument types \n");
                                                                            exit(1);
                                                                        }
                                                                    }
                                                                    else
                                                                    {
                                                                        printf("Conflict in argument names \n");
                                                                        exit(1);
                                                                    }

                                                                    Argtemp1 = Argtemp1->next;
                                                                    Argtemp2 = Argtemp2->next;
                                                                }

                                                                if ((Argtemp1 != NULL) || (Argtemp2 != NULL))
                                                                {
                                                                    printf("Unequal number of arguments \n");
                                                                    exit(1);
                                                                }

                                                                (yyvsp[-7].nptr)->Lentry = Lhead;

                                                                fprintf(intermediate, "F%d:\n",Gtemp->binding);
                                                                fprintf(intermediate, "PUSH BP\n");
                                                                fprintf(intermediate, "MOV BP,SP\n");

                                                                Ltemp = Lhead;

                                                                while(Ltemp != NULL)
                                                                {
                                                                    fprintf(intermediate, "PUSH R0\n");
                                                                    Ltemp = Ltemp->next;
                                                                }

                                                                codegen((yyvsp[-1].nptr));

                                                                Phead = NULL;
                                                                Ptail = NULL;
                                                                Lhead = NULL;
                                                                Ltail = NULL;
                                                            }
#line 1879 "y.tab.c"
    break;

  case 40: /* LdeclBlock: DECL ldlist ENDDECL  */
#line 303 "abstree.y"
                                    {}
#line 1885 "y.tab.c"
    break;

  case 41: /* LdeclBlock: %empty  */
#line 304 "abstree.y"
                                    {}
#line 1891 "y.tab.c"
    break;

  case 42: /* ldlist: ldec  */
#line 307 "abstree.y"
                          {}
#line 1897 "y.tab.c"
    break;

  case 43: /* ldlist: ldlist ldec  */
#line 308 "abstree.y"
                          {}
#line 1903 "y.tab.c"
    break;

  case 44: /* ldec: FType lvlist ';'  */
#line 311 "abstree.y"
                           {}
#line 1909 "y.tab.c"
    break;

  case 45: /* lvlist: ID  */
#line 314 "abstree.y"
                         {
                            verify((yyvsp[0].nptr), 0, 1, 0, NULL);
                            LInstall((yyvsp[0].nptr)->name, FdeclarationType);
                         }
#line 1918 "y.tab.c"
    break;

  case 46: /* lvlist: lvlist ',' ID  */
#line 318 "abstree.y"
                         {
                            verify((yyvsp[0].nptr), 0, 1, 0, NULL);
                            LInstall((yyvsp[0].nptr)->name, FdeclarationType);
                        }
#line 1927 "y.tab.c"
    break;

  case 47: /* mainblock: TypeName MAIN '(' ')' '{' LdeclBlock Body '}'  */
#line 325 "abstree.y"
                            {
                                if (declcount != defcount)
                                {
                                    yyerror("All functions declared need to be defined\n");
                                    exit(1);
                                }
                                if (declarationType != TLookup("integer"))
                                {
                                    yyerror("Main return type should be of integer type\n");
                                    exit(1);
                                }

                                fprintf(intermediate, "MAIN:\n");
                                fprintf(intermediate, "PUSH BP\n");
                                fprintf(intermediate, "MOV BP,SP\n");

                                Ltemp = Lhead;

                                while (Ltemp != NULL)
                                {
                                    fprintf(intermediate, "PUSH R0\n");
                                    Ltemp = Ltemp->next;
                                }

                                codegen((yyvsp[-1].nptr));

                                Lhead = NULL;
                                Ltail = NULL;
                            }
#line 1961 "y.tab.c"
    break;

  case 48: /* Body: START Slist Retstmt END  */
#line 356 "abstree.y"
                                {
                                    (yyval.nptr) = TreeCreate(TLookup("void"), DEFAULT, NULL, NULL, NULL, (yyvsp[-2].nptr), (yyvsp[-1].nptr), NULL);
                                }
#line 1969 "y.tab.c"
    break;

  case 49: /* Body: START Retstmt END  */
#line 359 "abstree.y"
                                {
                                    (yyval.nptr) = TreeCreate(TLookup("void"), DEFAULT, NULL, NULL, NULL, NULL, (yyvsp[-1].nptr), NULL);
                                }
#line 1977 "y.tab.c"
    break;

  case 50: /* Retstmt: RETURN Expr ';'  */
#line 364 "abstree.y"
                            {
                                if (declarationType == (yyvsp[-1].nptr)->type)
                                    (yyval.nptr) = TreeCreate((yyvsp[-1].nptr)->type, NODE_RET, NULL, NULL, NULL, NULL, (yyvsp[-1].nptr), NULL);
                                else
                                {
                                    yyerror("return type do not match with the function return type\n");
                                    exit(1);
                                }
                            }
#line 1991 "y.tab.c"
    break;

  case 51: /* Slist: Slist Stmt  */
#line 375 "abstree.y"
                        {
                            head = (struct ASTNode *)malloc(sizeof(struct ASTNode));
                            head->nodetype = DEFAULT;
                            head->ptr1 = (yyvsp[-1].nptr);
                            head->ptr2 = (yyvsp[0].nptr);
                            (yyval.nptr) = head;
                        }
#line 2003 "y.tab.c"
    break;

  case 52: /* Slist: Stmt  */
#line 382 "abstree.y"
                        {
                            (yyval.nptr) = (yyvsp[0].nptr);
                        }
#line 2011 "y.tab.c"
    break;

  case 53: /* Stmt: ID ASGN Expr ';'  */
#line 387 "abstree.y"
                                 {
                                    type_assign((yyvsp[-3].nptr), NULL, 0, 0, 0, 0, 0);
                                    if (((yyvsp[-3].nptr)->nodetype == NODE_FIELD) || ((yyvsp[-1].nptr)->nodetype == NODE_FIELD))
                                    {
                                    	head = get_last((yyvsp[-3].nptr));
                                    	head1 = get_last((yyvsp[-1].nptr));
                                    	type_comp(head->type, head1->type, 'a');
                                    }
                                    else
                                    	type_comp((yyvsp[-3].nptr)->type, (yyvsp[-1].nptr)->type, 'a');
                                    (yyval.nptr) = TreeCreate(TLookup("void"), NODE_ASGN, NULL, NULL, NULL, (yyvsp[-3].nptr), (yyvsp[-1].nptr), NULL);
                                }
#line 2028 "y.tab.c"
    break;

  case 54: /* Stmt: ID '[' Expr ']' ASGN Expr ';'  */
#line 399 "abstree.y"
                                          {
                                            type_assign_arr((yyvsp[-6].nptr), (yyvsp[-4].nptr), 0);
                                            type_comp((yyvsp[-6].nptr)->type, (yyvsp[-1].nptr)->type, 'a');
                                            (yyval.nptr) = TreeCreate(TLookup("void"), NODE_ARRAY_ASGN, NULL, NULL, NULL, (yyvsp[-6].nptr), (yyvsp[-4].nptr), (yyvsp[-1].nptr));
                                        }
#line 2038 "y.tab.c"
    break;

  case 55: /* Stmt: READ '(' ID ')' ';'  */
#line 404 "abstree.y"
                                {
                                    type_assign((yyvsp[-2].nptr), NULL, 0, 0, 0, 0, 1);
                                    (yyval.nptr) = TreeCreate(TLookup("void"), NODE_READ, NULL, NULL, NULL, NULL, (yyvsp[-2].nptr), NULL);
                                }
#line 2047 "y.tab.c"
    break;

  case 56: /* Stmt: READ '(' ID '[' Expr ']' ')' ';'  */
#line 408 "abstree.y"
                                             {
                                                type_assign_arr((yyvsp[-5].nptr), (yyvsp[-3].nptr), 0);
                                                (yyval.nptr) = TreeCreate(TLookup("void"), NODE_ARRAY_READ, NULL, NULL, NULL, NULL, (yyvsp[-5].nptr), (yyvsp[-3].nptr));
                                            }
#line 2056 "y.tab.c"
    break;

  case 57: /* Stmt: WRITE '(' Expr ')' ';'  */
#line 412 "abstree.y"
                                  {
                                    if ((yyvsp[-2].nptr)->type == TLookup("integer") || (yyvsp[-2].nptr)->type == TLookup("string"))
                                    {
                                        (yyval.nptr) = TreeCreate(TLookup("void"), NODE_WRITE, NULL, NULL, NULL, NULL, (yyvsp[-2].nptr), NULL);
                                    }
                                    else
                                    {
                                        head = get_last((yyvsp[-2].nptr));
                                        if (head->type == TLookup("integer") || head->type == TLookup("string"))
                                        {
                                            (yyval.nptr) = TreeCreate(TLookup("void"), NODE_WRITE, NULL, NULL, NULL, NULL, (yyvsp[-2].nptr), NULL);
                                        }
                                        else
                                        {
                                            yyerror("Cannot write a udt type\n");
                                            exit(1);
                                        }
                                    }

                                }
#line 2081 "y.tab.c"
    break;

  case 58: /* Stmt: IF '(' Expr ')' THEN Slist ENDIF ';'  */
#line 433 "abstree.y"
                               {
                               		type_comp((yyvsp[-5].nptr)->type, TLookup("boolean"), 'i');
                                    (yyval.nptr) = TreeCreate(TLookup("void"), NODE_IF, NULL, NULL, NULL, (yyvsp[-5].nptr), (yyvsp[-2].nptr), NULL);
                               }
#line 2090 "y.tab.c"
    break;

  case 59: /* Stmt: IF '(' Expr ')' THEN Slist ELSE Slist ENDIF ';'  */
#line 438 "abstree.y"
                                {
                               		type_comp((yyvsp[-7].nptr)->type, TLookup("boolean"), 'e');
                                    (yyval.nptr) = TreeCreate(TLookup("void"), NODE_IF_ELSE, NULL, NULL, NULL, (yyvsp[-7].nptr), (yyvsp[-4].nptr), (yyvsp[-2].nptr));
                                }
#line 2099 "y.tab.c"
    break;

  case 60: /* Stmt: WHILE '(' Expr ')' DO Slist ENDWHILE ';'  */
#line 443 "abstree.y"
                                {
                               		type_comp((yyvsp[-5].nptr)->type, TLookup("boolean"), 'w');
                                    (yyval.nptr) = TreeCreate(TLookup("void"), NODE_WHILE, NULL, NULL, NULL, (yyvsp[-5].nptr), (yyvsp[-2].nptr), NULL);
                                }
#line 2108 "y.tab.c"
    break;

  case 61: /* Stmt: ID ASGN ALLOC '(' ')' ';'  */
#line 447 "abstree.y"
                                    {
        								type_assign((yyvsp[-5].nptr), NULL, 1, 0, 1, 0, 0);
                                        head = TreeCreate(TLookup("integer"), NODE_ALLOC, NULL, NULL, NULL, NULL, NULL, NULL);
                                        (yyval.nptr) = TreeCreate(TLookup("void"), NODE_ASGN, NULL, NULL, NULL, (yyvsp[-5].nptr), head, NULL);
                                    }
#line 2118 "y.tab.c"
    break;

  case 62: /* Stmt: FIELD ASGN ALLOC '(' ')' ';'  */
#line 452 "abstree.y"
                                       {
                                            head = get_last((yyvsp[-5].nptr));
                                            if ((head->type == TLookup("integer")) || (head->type == TLookup("string")))
                                            {
                                                yyerror("Cannot ALLOC to string or integer variable\n");
                                                exit(1);
                                            }
                                            else
                                            {
                                                head = TreeCreate(TLookup("integer"), NODE_ALLOC, NULL, NULL, NULL, NULL, NULL, NULL);
                                                (yyval.nptr) = TreeCreate(TLookup("void"), NODE_ASGN, NULL, NULL, NULL, (yyvsp[-5].nptr), head, NULL);
                                            }
                                        }
#line 2136 "y.tab.c"
    break;

  case 63: /* Stmt: FIELD ASGN FIELD ';'  */
#line 465 "abstree.y"
                                        {
                                            head = get_last((yyvsp[-3].nptr));
                                            head1 = get_last((yyvsp[-1].nptr));
                                            if (head1->type == head->type)
                                                (yyval.nptr) = TreeCreate(TLookup("void"), NODE_ASGN, NULL, NULL, NULL, (yyvsp[-3].nptr), (yyvsp[-1].nptr), NULL);
                                            else
                                            {
                                                yyerror("conflicting assignment types in field1\n");
                                                exit(1);
                                            }
                                        }
#line 2152 "y.tab.c"
    break;

  case 64: /* Stmt: FIELD ASGN Expr ';'  */
#line 476 "abstree.y"
                                                        {
                                            head = get_last((yyvsp[-3].nptr));
                                            if ((yyvsp[-1].nptr)->type == head->type)
                                                (yyval.nptr) = TreeCreate(TLookup("void"), NODE_ASGN, NULL, NULL, NULL, (yyvsp[-3].nptr), (yyvsp[-1].nptr), NULL);
                                            else
                                            {
                                                yyerror("conflicting assignment types in field2\n");
                                                exit(1);
                                            }
                                        }
#line 2167 "y.tab.c"
    break;

  case 65: /* Stmt: FREE '(' ID ')' ';'  */
#line 486 "abstree.y"
                                        {
                                            type_assign((yyvsp[-2].nptr), NULL, 1, 1, 0, 0, 0);
                                            (yyval.nptr) = TreeCreate(TLookup("void"), NODE_FREE, NULL, NULL, NULL, NULL, (yyvsp[-2].nptr), NULL);
                                        }
#line 2176 "y.tab.c"
    break;

  case 66: /* Stmt: FREE '(' FIELD ')' ';'  */
#line 490 "abstree.y"
                                            {
                                            head = get_last((yyvsp[-2].nptr));
                                            if ((head->type == TLookup("integer")) || (head->type == TLookup("string")))
                                            {
                                                yyerror("cannot FREE non-udt\n");
                                                exit(1);
                                            }
                                            (yyval.nptr) = TreeCreate(TLookup("void"), NODE_FREE, NULL, NULL, NULL, NULL, (yyvsp[-2].nptr), NULL);
	                                    }
#line 2190 "y.tab.c"
    break;

  case 67: /* Stmt: READ '(' FIELD ')' ';'  */
#line 499 "abstree.y"
                                        {
                                            head = get_last((yyvsp[-2].nptr));

                                            if ((head->type != TLookup("integer")) && (head->type != TLookup("string")))
                                            {
                                                yyerror("cannot READ a udt type\n");
                                                exit(1);
                                            }
                                            (yyval.nptr) = TreeCreate(TLookup("void"), NODE_READ, NULL, NULL, NULL, NULL, (yyvsp[-2].nptr), NULL);
	                                    }
#line 2205 "y.tab.c"
    break;

  case 68: /* Stmt: ID ASGN NILL ';'  */
#line 509 "abstree.y"
                                                                {
			                                type_assign((yyvsp[-3].nptr), NULL, 1, 0, 0, 0, 0);
			                                (yyval.nptr) = TreeCreate(TLookup("void"), NODE_ASGN, NULL, NULL, NULL, (yyvsp[-3].nptr), (yyvsp[-1].nptr), NULL);
			        					}
#line 2214 "y.tab.c"
    break;

  case 69: /* Stmt: FIELD ASGN NILL ';'  */
#line 513 "abstree.y"
                             {
                                head = get_last((yyvsp[-3].nptr));

                                if (head->type == TLookup("integer") || head->type == TLookup("string")
                                    || head->type == TLookup("array_integer") || head->type == TLookup("array_string"))
                                {
                                    yyerror("cannot assign null to a non-udt\n");
                                    exit(1);
                                }
								(yyval.nptr) = TreeCreate(TLookup("void"), NODE_ASGN, NULL, NULL, NULL, (yyvsp[-3].nptr), (yyvsp[-1].nptr), NULL);
						    }
#line 2230 "y.tab.c"
    break;

  case 70: /* Stmt: ID ASGN EXPOSCALL '(' exprlist_exposcall ')' ';'  */
#line 525 "abstree.y"
                                                                        {
                                                        if ((exprcount < 1) || (exprcount > 4))
                                                        {
                                                           yyerror("Incorrect number of arguments to exposcall function\n");
                                                           exit(1);
                                                        }

                                                        type_comp(NULL, (yyvsp[-2].nptr)->type, 'x');
                                                        type_assign((yyvsp[-6].nptr), NULL, 0, 0, 0, 0, 0);
                                                        type_comp((yyvsp[-6].nptr) -> type, NULL, 'x');

                                                        head1 = TreeCreate(TLookup("void"), NODE_EXPOSCALL, "exposcall", NULL, NULL, NULL, NULL, (yyvsp[-2].nptr));
                                                        (yyval.nptr) = TreeCreate(TLookup("void"), NODE_ASGN, NULL, NULL, NULL, (yyvsp[-6].nptr), head1, NULL);

													}
#line 2250 "y.tab.c"
    break;

  case 71: /* Stmt: ID ASGN INIT '(' ')' ';'  */
#line 540 "abstree.y"
                                                {
                                        head = TreeCreate(TLookup("void"), NODE_INIT, NULL, NULL, NULL, NULL, NULL, NULL);
        								(yyval.nptr) = TreeCreate(TLookup("void"), NODE_ASGN, NULL, NULL, NULL, (yyvsp[-5].nptr), head, NULL);
							        }
#line 2259 "y.tab.c"
    break;

  case 72: /* Stmt: BRK ';'  */
#line 545 "abstree.y"
                        {
                            (yyval.nptr) = TreeCreate(TLookup("void"), NODE_BRK, NULL, NULL, NULL, NULL, NULL, NULL);
                        }
#line 2267 "y.tab.c"
    break;

  case 73: /* Stmt: CONTINUE ';'  */
#line 549 "abstree.y"
                        {
                            (yyval.nptr) = TreeCreate(TLookup("void"), NODE_CONTINUE, NULL, NULL, NULL, NULL, NULL, NULL);
                        }
#line 2275 "y.tab.c"
    break;

  case 74: /* Stmt: BRKP ';'  */
#line 552 "abstree.y"
                    {
                        (yyval.nptr) = TreeCreate(TLookup("void"), NODE_BRKP, NULL, NULL, NULL, NULL, NULL, NULL);
                    }
#line 2283 "y.tab.c"
    break;

  case 75: /* FIELD: ID '.' ID  */
#line 557 "abstree.y"
                        {
                            (yyvsp[-2].nptr)->nodetype = NODE_FIELD;
                            type_assign((yyvsp[-2].nptr), (yyvsp[0].nptr), 1, 0, 0, 1, 0);
                            (yyval.nptr) = (yyvsp[-2].nptr);
                        }
#line 2293 "y.tab.c"
    break;

  case 76: /* FIELD: FIELD '.' ID  */
#line 562 "abstree.y"
                         {
                            head1 = head = get_last((yyvsp[-2].nptr));

                            temp1 = head->type;
                            if(temp1 != TLookup("string") && temp1 != TLookup("integer")
                                && temp1 != TLookup("array_integer") && temp1 != TLookup("array_string"))
                            {
                                ftemp = FLookup((yyvsp[0].nptr)->name, temp1->fields);
                                if(ftemp != NULL)
                                {
                                    (yyvsp[0].nptr)->type = ftemp->type;
                                    head->ptr2 = (yyvsp[0].nptr);
                                    (yyval.nptr) = (yyvsp[-2].nptr);
                                }
                                else
                                {
                                    yyerror("Un-declared field variable\n");
                                    exit(1);
                                }
                            }
                            else
                            {
                                yyerror("Illegal access of identifier\n");
                                exit(1);
                            }
                        }
#line 2324 "y.tab.c"
    break;

  case 77: /* exprlist: Expr  */
#line 590 "abstree.y"
                                {
                                    exprcount = 1;
                                    (yyval.nptr) = (yyvsp[0].nptr);
                                }
#line 2333 "y.tab.c"
    break;

  case 78: /* exprlist: exprlist ',' Expr  */
#line 594 "abstree.y"
                                {
                                    indicator = 1;
                                    exprcount++;
                                    head = (struct ASTNode *)malloc(sizeof(struct ASTNode));
                                    head->nodetype = NODE_EXPR;
                                    head->ptr1 = (yyvsp[0].nptr);
                                    head->ptr2 = (yyvsp[-2].nptr);
                                    (yyval.nptr) = head;
                                }
#line 2347 "y.tab.c"
    break;

  case 79: /* exprlist_exposcall: Expr  */
#line 605 "abstree.y"
                          {
                                exprcount = 1;
                                (yyval.nptr) = (yyvsp[0].nptr);
                            }
#line 2356 "y.tab.c"
    break;

  case 80: /* exprlist_exposcall: exprlist_exposcall ',' Expr  */
#line 609 "abstree.y"
                                                  {
                                                    exprcount++;
                                                    head = (yyvsp[-2].nptr);

                                                    while (head->ptr1 != NULL)
                                                        head = head->ptr1;

                                                    head->ptr1 = (yyvsp[0].nptr);
                                                    (yyval.nptr) = (yyvsp[-2].nptr);
                                                }
#line 2371 "y.tab.c"
    break;

  case 81: /* Expr: Expr PLUS Expr  */
#line 621 "abstree.y"
                            {
                                type_comp((yyvsp[-2].nptr)->type, (yyvsp[0].nptr)->type, '+');
                                (yyval.nptr) = TreeCreate(TLookup("integer"), NODE_PLUS , NULL, NULL, NULL, (yyvsp[-2].nptr), (yyvsp[0].nptr), NULL);
                            }
#line 2380 "y.tab.c"
    break;

  case 82: /* Expr: Expr MINUS Expr  */
#line 625 "abstree.y"
                            {
                                type_comp((yyvsp[-2].nptr)->type, (yyvsp[0].nptr)->type, '-');
                                (yyval.nptr) = TreeCreate(TLookup("integer"), NODE_MINUS , NULL, NULL , NULL, (yyvsp[-2].nptr), (yyvsp[0].nptr), NULL);
                            }
#line 2389 "y.tab.c"
    break;

  case 83: /* Expr: Expr MUL Expr  */
#line 629 "abstree.y"
                            {
                                type_comp((yyvsp[-2].nptr)->type, (yyvsp[0].nptr)->type, '*');
                                (yyval.nptr) = TreeCreate(TLookup("integer"), NODE_MUL , NULL, NULL , NULL, (yyvsp[-2].nptr), (yyvsp[0].nptr), NULL);
                            }
#line 2398 "y.tab.c"
    break;

  case 84: /* Expr: Expr DIV Expr  */
#line 633 "abstree.y"
                            {
                                type_comp((yyvsp[-2].nptr)->type, (yyvsp[0].nptr)->type, '/');
                                (yyval.nptr) = TreeCreate(TLookup("integer"), NODE_DIV , NULL, NULL , NULL, (yyvsp[-2].nptr), (yyvsp[0].nptr), NULL);
                            }
#line 2407 "y.tab.c"
    break;

  case 85: /* Expr: Expr MOD Expr  */
#line 637 "abstree.y"
                            {
                                type_comp((yyvsp[-2].nptr)->type, (yyvsp[0].nptr)->type, '%');
                                (yyval.nptr) = TreeCreate(TLookup("integer"), NODE_MOD , NULL, NULL , NULL, (yyvsp[-2].nptr), (yyvsp[0].nptr), NULL);
                            }
#line 2416 "y.tab.c"
    break;

  case 86: /* Expr: Expr LT Expr  */
#line 641 "abstree.y"
                            {
                                type_comp((yyvsp[-2].nptr)->type, (yyvsp[0].nptr)->type, '<');
                                (yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_LT , NULL, NULL, NULL, (yyvsp[-2].nptr), (yyvsp[0].nptr), NULL);
                            }
#line 2425 "y.tab.c"
    break;

  case 87: /* Expr: Expr LE Expr  */
#line 645 "abstree.y"
                            {
                                type_comp((yyvsp[-2].nptr)->type, (yyvsp[0].nptr)->type, '#');
                                (yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_LE , NULL, NULL, NULL, (yyvsp[-2].nptr), (yyvsp[0].nptr), NULL);
                            }
#line 2434 "y.tab.c"
    break;

  case 88: /* Expr: Expr GT Expr  */
#line 649 "abstree.y"
                            {
                                type_comp((yyvsp[-2].nptr)->type, (yyvsp[0].nptr)->type, '>');
                                (yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_GT , NULL, NULL, NULL, (yyvsp[-2].nptr), (yyvsp[0].nptr), NULL);
                            }
#line 2443 "y.tab.c"
    break;

  case 89: /* Expr: Expr GE Expr  */
#line 653 "abstree.y"
                            {
                                type_comp((yyvsp[-2].nptr)->type, (yyvsp[0].nptr)->type, '$');
                                (yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_GE , NULL, NULL, NULL, (yyvsp[-2].nptr), (yyvsp[0].nptr), NULL);
                            }
#line 2452 "y.tab.c"
    break;

  case 90: /* Expr: Expr DEQ Expr  */
#line 657 "abstree.y"
                            {
                                type_comp((yyvsp[-2].nptr)->type, (yyvsp[0].nptr)->type, 'd');
                                (yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_DEQ, NULL, NULL, NULL, (yyvsp[-2].nptr), (yyvsp[0].nptr), NULL);
                            }
#line 2461 "y.tab.c"
    break;

  case 91: /* Expr: Expr NEQ Expr  */
#line 661 "abstree.y"
                            {
                                type_comp((yyvsp[-2].nptr)->type, (yyvsp[0].nptr)->type, 'n');
                                (yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_NEQ, NULL, NULL, NULL, (yyvsp[-2].nptr), (yyvsp[0].nptr), NULL);
                            }
#line 2470 "y.tab.c"
    break;

  case 92: /* Expr: Expr AND Expr  */
#line 665 "abstree.y"
                            {
                                type_comp((yyvsp[-2].nptr)->type, (yyvsp[0].nptr)->type, '&');
                                (yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_AND, NULL, NULL, NULL, (yyvsp[-2].nptr), (yyvsp[0].nptr), NULL);
                            }
#line 2479 "y.tab.c"
    break;

  case 93: /* Expr: Expr OR Expr  */
#line 669 "abstree.y"
                            {
                                type_comp((yyvsp[-2].nptr)->type, (yyvsp[0].nptr)->type, '|');
                                (yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_OR, NULL, NULL, NULL, (yyvsp[-2].nptr), (yyvsp[0].nptr), NULL);
                            }
#line 2488 "y.tab.c"
    break;

  case 94: /* Expr: NOT Expr  */
#line 673 "abstree.y"
                            {
                                type_comp((yyvsp[0].nptr)->type, NULL, '!');
                                (yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_NOT, NULL, NULL, NULL, NULL, (yyvsp[0].nptr), NULL);
                            }
#line 2497 "y.tab.c"
    break;

  case 95: /* Expr: '(' Expr ')'  */
#line 677 "abstree.y"
                            {
                                (yyval.nptr) = (yyvsp[-1].nptr);
                            }
#line 2505 "y.tab.c"
    break;

  case 96: /* Expr: FIELD  */
#line 680 "abstree.y"
                            {
                                (yyval.nptr) = (yyvsp[0].nptr);
                            }
#line 2513 "y.tab.c"
    break;

  case 97: /* Expr: NUM  */
#line 683 "abstree.y"
                            {
                                (yyval.nptr) = (yyvsp[0].nptr);
				                (yyval.nptr)->type = TLookup("integer");
                            }
#line 2522 "y.tab.c"
    break;

  case 98: /* Expr: MINUS NUM  */
#line 687 "abstree.y"
                            {
                                (yyvsp[0].nptr)->value.intval = ((yyvsp[0].nptr)->value.intval) * -1;   //negating the value
                                (yyval.nptr) = (yyvsp[0].nptr);
				                (yyval.nptr)->type = TLookup("integer");
                            }
#line 2532 "y.tab.c"
    break;

  case 99: /* Expr: STRVAL  */
#line 692 "abstree.y"
                                        {
        						(yyval.nptr) = (yyvsp[0].nptr);
							    (yyval.nptr)->type = TLookup("string");
        					}
#line 2541 "y.tab.c"
    break;

  case 100: /* Expr: ID  */
#line 696 "abstree.y"
                                                {
				    			type_assign((yyvsp[0].nptr), NULL, 0, 0, 0, 0, 0);
				    			(yyval.nptr) = (yyvsp[0].nptr);
				            }
#line 2550 "y.tab.c"
    break;

  case 101: /* Expr: ID '[' Expr ']'  */
#line 700 "abstree.y"
                            {
								type_assign_arr((yyvsp[-3].nptr), (yyvsp[-1].nptr), 0);
								(yyval.nptr) = TreeCreate((yyvsp[-3].nptr)->type, NODE_ARRAY, NULL, NULL, NULL, (yyvsp[-3].nptr), (yyvsp[-1].nptr), NULL);
                            }
#line 2559 "y.tab.c"
    break;

  case 102: /* Expr: ID '(' exprlist ')'  */
#line 704 "abstree.y"
                            {
        						type_assign_arr((yyvsp[-3].nptr), (yyvsp[-1].nptr), 1);

                                (yyvsp[-1].nptr)->ptr3 = (struct ASTNode*)Gtemp->paramlist;
                                Arg_callee = Gtemp->paramlist;
                                while (Arg_callee != NULL)
                                {
                                    exprcount--;
                                    Arg_callee = Arg_callee->next;
                                }
                                if (exprcount)
                                {
                                    yyerror("Unequal number of arguments\n");
                                    exit(1);
                                }
                                
                                //differentiating b/w one and more than one arguments
                                if (indicator == 1)
                                {
                                    (yyval.nptr) = TreeCreate((yyvsp[-3].nptr)->type, NODE_FUNC, (yyvsp[-3].nptr)->name, NULL, (struct ASTNode*)Gtemp->paramlist, NULL, (yyvsp[-1].nptr), NULL);
                                    indicator = 0;
                                }

                                else
                                    (yyval.nptr) = TreeCreate((yyvsp[-3].nptr)->type, NODE_FUNC, (yyvsp[-3].nptr)->name, NULL, (struct ASTNode*)Gtemp->paramlist, NULL, NULL, (yyvsp[-1].nptr));
                            }
#line 2590 "y.tab.c"
    break;

  case 103: /* Expr: ID '(' ')'  */
#line 730 "abstree.y"
                                {
    							type_assign_arr((yyvsp[-2].nptr), NULL, 1);
                                (yyval.nptr) = TreeCreate((yyvsp[-2].nptr)->type, NODE_FUNC, (yyvsp[-2].nptr)->name, NULL, (struct ASTNode*)Gtemp->paramlist, NULL, NULL, NULL);
                            }
#line 2599 "y.tab.c"
    break;

  case 104: /* Expr: ID DEQNILL  */
#line 734 "abstree.y"
                                        {
	   						    type_assign((yyvsp[-1].nptr), NULL, 1, 0, 0, 0, 0);
		                    	(yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_DEQ, NULL, NULL, NULL, (yyvsp[-1].nptr), (yyvsp[0].nptr), NULL);
			    			}
#line 2608 "y.tab.c"
    break;

  case 105: /* Expr: ID NEQNILL  */
#line 738 "abstree.y"
                                {
	   						    type_assign((yyvsp[-1].nptr), NULL, 1, 0, 0, 0, 0);
	                        	(yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_NEQ, NULL, NULL, NULL, (yyvsp[-1].nptr), (yyvsp[0].nptr), NULL);
	        				}
#line 2617 "y.tab.c"
    break;

  case 106: /* Expr: FIELD DEQNILL  */
#line 742 "abstree.y"
                                {
	                            type_comp((struct Typetable*)(yyvsp[-1].nptr), NULL, '=');
	                            (yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_DEQ, NULL, NULL, NULL, (yyvsp[-1].nptr), (yyvsp[0].nptr), NULL);
	        				}
#line 2626 "y.tab.c"
    break;

  case 107: /* Expr: FIELD NEQNILL  */
#line 746 "abstree.y"
                                {
	                            type_comp((struct Typetable*)(yyvsp[-1].nptr), NULL, '^');
	                            (yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_NEQ, NULL, NULL, NULL, (yyvsp[-1].nptr), (yyvsp[0].nptr), NULL);
	        				}
#line 2635 "y.tab.c"
    break;


#line 2639 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 752 "abstree.y"


void yyerror(char const *s)
{
    printf("%d: %s\n", lineno, s);
    return ;
}

int main(int argc, char *argv[])
{
    TInstall("integer", 1, NULL);
    TInstall("string", 1, NULL);
    TInstall("boolean", 1, NULL);
    TInstall("array_integer", 1, NULL);
    TInstall("array_string", 1, NULL);
    TInstall("void", 0, NULL);
    TInstall("dummy", 0, NULL); // This is for creating the fieldlist in case of udt

    if (argc < 2)
    {
        printf("Please provide an input filename\n");
        exit(1);
    }
    else
    {
        fp = fopen(argv[1], "r");
        if (!fp)
        {
            printf("Invalid input file specified\n");
            exit(1);
        }
        else
            yyin = fp;
    }
    yyparse();
    return 0;
}
