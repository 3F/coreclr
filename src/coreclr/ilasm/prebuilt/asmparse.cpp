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
#line 1 "asmparse.y"


// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.

//
// File asmparse.y
//
#include "ilasmpch.h"

#include "grammar_before.cpp"


#line 85 "prebuilt\\asmparse.cpp"

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
    BAD_COMMENT_ = 258,            /* BAD_COMMENT_  */
    BAD_LITERAL_ = 259,            /* BAD_LITERAL_  */
    ID = 260,                      /* ID  */
    DOTTEDNAME = 261,              /* DOTTEDNAME  */
    QSTRING = 262,                 /* QSTRING  */
    SQSTRING = 263,                /* SQSTRING  */
    INT32_V = 264,                 /* INT32_V  */
    INT64_V = 265,                 /* INT64_V  */
    FLOAT64 = 266,                 /* FLOAT64  */
    HEXBYTE = 267,                 /* HEXBYTE  */
    TYPEDEF_T = 268,               /* TYPEDEF_T  */
    TYPEDEF_M = 269,               /* TYPEDEF_M  */
    TYPEDEF_F = 270,               /* TYPEDEF_F  */
    TYPEDEF_TS = 271,              /* TYPEDEF_TS  */
    TYPEDEF_MR = 272,              /* TYPEDEF_MR  */
    TYPEDEF_CA = 273,              /* TYPEDEF_CA  */
    DCOLON = 274,                  /* DCOLON  */
    ELLIPSIS = 275,                /* ELLIPSIS  */
    VOID_ = 276,                   /* VOID_  */
    BOOL_ = 277,                   /* BOOL_  */
    CHAR_ = 278,                   /* CHAR_  */
    UNSIGNED_ = 279,               /* UNSIGNED_  */
    INT_ = 280,                    /* INT_  */
    INT8_ = 281,                   /* INT8_  */
    INT16_ = 282,                  /* INT16_  */
    INT32_ = 283,                  /* INT32_  */
    INT64_ = 284,                  /* INT64_  */
    FLOAT_ = 285,                  /* FLOAT_  */
    FLOAT32_ = 286,                /* FLOAT32_  */
    FLOAT64_ = 287,                /* FLOAT64_  */
    BYTEARRAY_ = 288,              /* BYTEARRAY_  */
    UINT_ = 289,                   /* UINT_  */
    UINT8_ = 290,                  /* UINT8_  */
    UINT16_ = 291,                 /* UINT16_  */
    UINT32_ = 292,                 /* UINT32_  */
    UINT64_ = 293,                 /* UINT64_  */
    FLAGS_ = 294,                  /* FLAGS_  */
    CALLCONV_ = 295,               /* CALLCONV_  */
    MDTOKEN_ = 296,                /* MDTOKEN_  */
    OBJECT_ = 297,                 /* OBJECT_  */
    STRING_ = 298,                 /* STRING_  */
    NULLREF_ = 299,                /* NULLREF_  */
    DEFAULT_ = 300,                /* DEFAULT_  */
    CDECL_ = 301,                  /* CDECL_  */
    VARARG_ = 302,                 /* VARARG_  */
    STDCALL_ = 303,                /* STDCALL_  */
    THISCALL_ = 304,               /* THISCALL_  */
    FASTCALL_ = 305,               /* FASTCALL_  */
    CLASS_ = 306,                  /* CLASS_  */
    BYREFLIKE_ = 307,              /* BYREFLIKE_  */
    TYPEDREF_ = 308,               /* TYPEDREF_  */
    UNMANAGED_ = 309,              /* UNMANAGED_  */
    FINALLY_ = 310,                /* FINALLY_  */
    HANDLER_ = 311,                /* HANDLER_  */
    CATCH_ = 312,                  /* CATCH_  */
    FILTER_ = 313,                 /* FILTER_  */
    FAULT_ = 314,                  /* FAULT_  */
    EXTENDS_ = 315,                /* EXTENDS_  */
    IMPLEMENTS_ = 316,             /* IMPLEMENTS_  */
    TO_ = 317,                     /* TO_  */
    AT_ = 318,                     /* AT_  */
    TLS_ = 319,                    /* TLS_  */
    TRUE_ = 320,                   /* TRUE_  */
    FALSE_ = 321,                  /* FALSE_  */
    _INTERFACEIMPL = 322,          /* _INTERFACEIMPL  */
    VALUE_ = 323,                  /* VALUE_  */
    VALUETYPE_ = 324,              /* VALUETYPE_  */
    NATIVE_ = 325,                 /* NATIVE_  */
    INSTANCE_ = 326,               /* INSTANCE_  */
    SPECIALNAME_ = 327,            /* SPECIALNAME_  */
    FORWARDER_ = 328,              /* FORWARDER_  */
    STATIC_ = 329,                 /* STATIC_  */
    PUBLIC_ = 330,                 /* PUBLIC_  */
    PRIVATE_ = 331,                /* PRIVATE_  */
    FAMILY_ = 332,                 /* FAMILY_  */
    FINAL_ = 333,                  /* FINAL_  */
    SYNCHRONIZED_ = 334,           /* SYNCHRONIZED_  */
    INTERFACE_ = 335,              /* INTERFACE_  */
    SEALED_ = 336,                 /* SEALED_  */
    NESTED_ = 337,                 /* NESTED_  */
    ABSTRACT_ = 338,               /* ABSTRACT_  */
    AUTO_ = 339,                   /* AUTO_  */
    SEQUENTIAL_ = 340,             /* SEQUENTIAL_  */
    EXPLICIT_ = 341,               /* EXPLICIT_  */
    ANSI_ = 342,                   /* ANSI_  */
    UNICODE_ = 343,                /* UNICODE_  */
    AUTOCHAR_ = 344,               /* AUTOCHAR_  */
    IMPORT_ = 345,                 /* IMPORT_  */
    ENUM_ = 346,                   /* ENUM_  */
    VIRTUAL_ = 347,                /* VIRTUAL_  */
    NOINLINING_ = 348,             /* NOINLINING_  */
    AGGRESSIVEINLINING_ = 349,     /* AGGRESSIVEINLINING_  */
    NOOPTIMIZATION_ = 350,         /* NOOPTIMIZATION_  */
    AGGRESSIVEOPTIMIZATION_ = 351, /* AGGRESSIVEOPTIMIZATION_  */
    UNMANAGEDEXP_ = 352,           /* UNMANAGEDEXP_  */
    BEFOREFIELDINIT_ = 353,        /* BEFOREFIELDINIT_  */
    STRICT_ = 354,                 /* STRICT_  */
    RETARGETABLE_ = 355,           /* RETARGETABLE_  */
    WINDOWSRUNTIME_ = 356,         /* WINDOWSRUNTIME_  */
    NOPLATFORM_ = 357,             /* NOPLATFORM_  */
    METHOD_ = 358,                 /* METHOD_  */
    FIELD_ = 359,                  /* FIELD_  */
    PINNED_ = 360,                 /* PINNED_  */
    MODREQ_ = 361,                 /* MODREQ_  */
    MODOPT_ = 362,                 /* MODOPT_  */
    SERIALIZABLE_ = 363,           /* SERIALIZABLE_  */
    PROPERTY_ = 364,               /* PROPERTY_  */
    TYPE_ = 365,                   /* TYPE_  */
    ASSEMBLY_ = 366,               /* ASSEMBLY_  */
    FAMANDASSEM_ = 367,            /* FAMANDASSEM_  */
    FAMORASSEM_ = 368,             /* FAMORASSEM_  */
    PRIVATESCOPE_ = 369,           /* PRIVATESCOPE_  */
    HIDEBYSIG_ = 370,              /* HIDEBYSIG_  */
    NEWSLOT_ = 371,                /* NEWSLOT_  */
    RTSPECIALNAME_ = 372,          /* RTSPECIALNAME_  */
    PINVOKEIMPL_ = 373,            /* PINVOKEIMPL_  */
    _CTOR = 374,                   /* _CTOR  */
    _CCTOR = 375,                  /* _CCTOR  */
    LITERAL_ = 376,                /* LITERAL_  */
    NOTSERIALIZED_ = 377,          /* NOTSERIALIZED_  */
    INITONLY_ = 378,               /* INITONLY_  */
    REQSECOBJ_ = 379,              /* REQSECOBJ_  */
    CIL_ = 380,                    /* CIL_  */
    OPTIL_ = 381,                  /* OPTIL_  */
    MANAGED_ = 382,                /* MANAGED_  */
    FORWARDREF_ = 383,             /* FORWARDREF_  */
    PRESERVESIG_ = 384,            /* PRESERVESIG_  */
    RUNTIME_ = 385,                /* RUNTIME_  */
    INTERNALCALL_ = 386,           /* INTERNALCALL_  */
    _IMPORT = 387,                 /* _IMPORT  */
    NOMANGLE_ = 388,               /* NOMANGLE_  */
    LASTERR_ = 389,                /* LASTERR_  */
    WINAPI_ = 390,                 /* WINAPI_  */
    AS_ = 391,                     /* AS_  */
    BESTFIT_ = 392,                /* BESTFIT_  */
    ON_ = 393,                     /* ON_  */
    OFF_ = 394,                    /* OFF_  */
    CHARMAPERROR_ = 395,           /* CHARMAPERROR_  */
    INSTR_NONE = 396,              /* INSTR_NONE  */
    INSTR_VAR = 397,               /* INSTR_VAR  */
    INSTR_I = 398,                 /* INSTR_I  */
    INSTR_I8 = 399,                /* INSTR_I8  */
    INSTR_R = 400,                 /* INSTR_R  */
    INSTR_BRTARGET = 401,          /* INSTR_BRTARGET  */
    INSTR_METHOD = 402,            /* INSTR_METHOD  */
    INSTR_FIELD = 403,             /* INSTR_FIELD  */
    INSTR_TYPE = 404,              /* INSTR_TYPE  */
    INSTR_STRING = 405,            /* INSTR_STRING  */
    INSTR_SIG = 406,               /* INSTR_SIG  */
    INSTR_TOK = 407,               /* INSTR_TOK  */
    INSTR_SWITCH = 408,            /* INSTR_SWITCH  */
    _CLASS = 409,                  /* _CLASS  */
    _NAMESPACE = 410,              /* _NAMESPACE  */
    _METHOD = 411,                 /* _METHOD  */
    _FIELD = 412,                  /* _FIELD  */
    _DATA = 413,                   /* _DATA  */
    _THIS = 414,                   /* _THIS  */
    _BASE = 415,                   /* _BASE  */
    _NESTER = 416,                 /* _NESTER  */
    _EMITBYTE = 417,               /* _EMITBYTE  */
    _TRY = 418,                    /* _TRY  */
    _MAXSTACK = 419,               /* _MAXSTACK  */
    _LOCALS = 420,                 /* _LOCALS  */
    _ENTRYPOINT = 421,             /* _ENTRYPOINT  */
    _ZEROINIT = 422,               /* _ZEROINIT  */
    _EVENT = 423,                  /* _EVENT  */
    _ADDON = 424,                  /* _ADDON  */
    _REMOVEON = 425,               /* _REMOVEON  */
    _FIRE = 426,                   /* _FIRE  */
    _OTHER = 427,                  /* _OTHER  */
    _PROPERTY = 428,               /* _PROPERTY  */
    _SET = 429,                    /* _SET  */
    _GET = 430,                    /* _GET  */
    _PERMISSION = 431,             /* _PERMISSION  */
    _PERMISSIONSET = 432,          /* _PERMISSIONSET  */
    REQUEST_ = 433,                /* REQUEST_  */
    DEMAND_ = 434,                 /* DEMAND_  */
    ASSERT_ = 435,                 /* ASSERT_  */
    DENY_ = 436,                   /* DENY_  */
    PERMITONLY_ = 437,             /* PERMITONLY_  */
    LINKCHECK_ = 438,              /* LINKCHECK_  */
    INHERITCHECK_ = 439,           /* INHERITCHECK_  */
    REQMIN_ = 440,                 /* REQMIN_  */
    REQOPT_ = 441,                 /* REQOPT_  */
    REQREFUSE_ = 442,              /* REQREFUSE_  */
    PREJITGRANT_ = 443,            /* PREJITGRANT_  */
    PREJITDENY_ = 444,             /* PREJITDENY_  */
    NONCASDEMAND_ = 445,           /* NONCASDEMAND_  */
    NONCASLINKDEMAND_ = 446,       /* NONCASLINKDEMAND_  */
    NONCASINHERITANCE_ = 447,      /* NONCASINHERITANCE_  */
    _LINE = 448,                   /* _LINE  */
    P_LINE = 449,                  /* P_LINE  */
    _LANGUAGE = 450,               /* _LANGUAGE  */
    _CUSTOM = 451,                 /* _CUSTOM  */
    INIT_ = 452,                   /* INIT_  */
    _SIZE = 453,                   /* _SIZE  */
    _PACK = 454,                   /* _PACK  */
    _VTABLE = 455,                 /* _VTABLE  */
    _VTFIXUP = 456,                /* _VTFIXUP  */
    FROMUNMANAGED_ = 457,          /* FROMUNMANAGED_  */
    CALLMOSTDERIVED_ = 458,        /* CALLMOSTDERIVED_  */
    _VTENTRY = 459,                /* _VTENTRY  */
    RETAINAPPDOMAIN_ = 460,        /* RETAINAPPDOMAIN_  */
    _FILE = 461,                   /* _FILE  */
    NOMETADATA_ = 462,             /* NOMETADATA_  */
    _TYPEREF = 463,                /* _TYPEREF  */
    _HASH = 464,                   /* _HASH  */
    _ASSEMBLY = 465,               /* _ASSEMBLY  */
    _PUBLICKEY = 466,              /* _PUBLICKEY  */
    _PUBLICKEYTOKEN = 467,         /* _PUBLICKEYTOKEN  */
    ALGORITHM_ = 468,              /* ALGORITHM_  */
    _VER = 469,                    /* _VER  */
    _LOCALE = 470,                 /* _LOCALE  */
    EXTERN_ = 471,                 /* EXTERN_  */
    _MRESOURCE = 472,              /* _MRESOURCE  */
    _MODULE = 473,                 /* _MODULE  */
    _EXPORT = 474,                 /* _EXPORT  */
    LEGACY_ = 475,                 /* LEGACY_  */
    LIBRARY_ = 476,                /* LIBRARY_  */
    X86_ = 477,                    /* X86_  */
    AMD64_ = 478,                  /* AMD64_  */
    ARM_ = 479,                    /* ARM_  */
    ARM64_ = 480,                  /* ARM64_  */
    MARSHAL_ = 481,                /* MARSHAL_  */
    CUSTOM_ = 482,                 /* CUSTOM_  */
    SYSSTRING_ = 483,              /* SYSSTRING_  */
    FIXED_ = 484,                  /* FIXED_  */
    VARIANT_ = 485,                /* VARIANT_  */
    CURRENCY_ = 486,               /* CURRENCY_  */
    SYSCHAR_ = 487,                /* SYSCHAR_  */
    DECIMAL_ = 488,                /* DECIMAL_  */
    DATE_ = 489,                   /* DATE_  */
    BSTR_ = 490,                   /* BSTR_  */
    TBSTR_ = 491,                  /* TBSTR_  */
    LPSTR_ = 492,                  /* LPSTR_  */
    LPWSTR_ = 493,                 /* LPWSTR_  */
    LPTSTR_ = 494,                 /* LPTSTR_  */
    OBJECTREF_ = 495,              /* OBJECTREF_  */
    IUNKNOWN_ = 496,               /* IUNKNOWN_  */
    IDISPATCH_ = 497,              /* IDISPATCH_  */
    STRUCT_ = 498,                 /* STRUCT_  */
    SAFEARRAY_ = 499,              /* SAFEARRAY_  */
    BYVALSTR_ = 500,               /* BYVALSTR_  */
    LPVOID_ = 501,                 /* LPVOID_  */
    ANY_ = 502,                    /* ANY_  */
    ARRAY_ = 503,                  /* ARRAY_  */
    LPSTRUCT_ = 504,               /* LPSTRUCT_  */
    IIDPARAM_ = 505,               /* IIDPARAM_  */
    IN_ = 506,                     /* IN_  */
    OUT_ = 507,                    /* OUT_  */
    OPT_ = 508,                    /* OPT_  */
    _PARAM = 509,                  /* _PARAM  */
    _OVERRIDE = 510,               /* _OVERRIDE  */
    WITH_ = 511,                   /* WITH_  */
    NULL_ = 512,                   /* NULL_  */
    ERROR_ = 513,                  /* ERROR_  */
    HRESULT_ = 514,                /* HRESULT_  */
    CARRAY_ = 515,                 /* CARRAY_  */
    USERDEFINED_ = 516,            /* USERDEFINED_  */
    RECORD_ = 517,                 /* RECORD_  */
    FILETIME_ = 518,               /* FILETIME_  */
    BLOB_ = 519,                   /* BLOB_  */
    STREAM_ = 520,                 /* STREAM_  */
    STORAGE_ = 521,                /* STORAGE_  */
    STREAMED_OBJECT_ = 522,        /* STREAMED_OBJECT_  */
    STORED_OBJECT_ = 523,          /* STORED_OBJECT_  */
    BLOB_OBJECT_ = 524,            /* BLOB_OBJECT_  */
    CF_ = 525,                     /* CF_  */
    CLSID_ = 526,                  /* CLSID_  */
    VECTOR_ = 527,                 /* VECTOR_  */
    _SUBSYSTEM = 528,              /* _SUBSYSTEM  */
    _CORFLAGS = 529,               /* _CORFLAGS  */
    ALIGNMENT_ = 530,              /* ALIGNMENT_  */
    _IMAGEBASE = 531,              /* _IMAGEBASE  */
    _STACKRESERVE = 532,           /* _STACKRESERVE  */
    _TYPEDEF = 533,                /* _TYPEDEF  */
    _TEMPLATE = 534,               /* _TEMPLATE  */
    _TYPELIST = 535,               /* _TYPELIST  */
    _MSCORLIB = 536,               /* _MSCORLIB  */
    P_DEFINE = 537,                /* P_DEFINE  */
    P_UNDEF = 538,                 /* P_UNDEF  */
    P_IFDEF = 539,                 /* P_IFDEF  */
    P_IFNDEF = 540,                /* P_IFNDEF  */
    P_ELSE = 541,                  /* P_ELSE  */
    P_ENDIF = 542,                 /* P_ENDIF  */
    P_INCLUDE = 543,               /* P_INCLUDE  */
    CONSTRAINT_ = 544              /* CONSTRAINT_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "asmparse.y"

        CorRegTypeAttr classAttr;
        CorMethodAttr methAttr;
        CorFieldAttr fieldAttr;
        CorMethodImpl implAttr;
        CorEventAttr  eventAttr;
        CorPropertyAttr propAttr;
        CorPinvokeMap pinvAttr;
        CorDeclSecurity secAct;
        CorFileFlags fileAttr;
        CorAssemblyFlags asmAttr;
        CorAssemblyFlags asmRefAttr;
        CorTypeAttr exptAttr;
        CorManifestResourceFlags manresAttr;
        double*  float64;
        int64_t* int64;
        int32_t  int32;
        char*    string;
        BinStr*  binstr;
        Labels*  labels;
        Instr*   instr;         // instruction opcode
        NVPair*  pair;
        pTyParList typarlist;
        mdToken token;
        TypeDefDescr* tdd;
        CustomDescr*  cad;
        unsigned short opcode;

#line 450 "prebuilt\\asmparse.cpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BAD_COMMENT_ = 3,               /* BAD_COMMENT_  */
  YYSYMBOL_BAD_LITERAL_ = 4,               /* BAD_LITERAL_  */
  YYSYMBOL_ID = 5,                         /* ID  */
  YYSYMBOL_DOTTEDNAME = 6,                 /* DOTTEDNAME  */
  YYSYMBOL_QSTRING = 7,                    /* QSTRING  */
  YYSYMBOL_SQSTRING = 8,                   /* SQSTRING  */
  YYSYMBOL_INT32_V = 9,                    /* INT32_V  */
  YYSYMBOL_INT64_V = 10,                   /* INT64_V  */
  YYSYMBOL_FLOAT64 = 11,                   /* FLOAT64  */
  YYSYMBOL_HEXBYTE = 12,                   /* HEXBYTE  */
  YYSYMBOL_TYPEDEF_T = 13,                 /* TYPEDEF_T  */
  YYSYMBOL_TYPEDEF_M = 14,                 /* TYPEDEF_M  */
  YYSYMBOL_TYPEDEF_F = 15,                 /* TYPEDEF_F  */
  YYSYMBOL_TYPEDEF_TS = 16,                /* TYPEDEF_TS  */
  YYSYMBOL_TYPEDEF_MR = 17,                /* TYPEDEF_MR  */
  YYSYMBOL_TYPEDEF_CA = 18,                /* TYPEDEF_CA  */
  YYSYMBOL_DCOLON = 19,                    /* DCOLON  */
  YYSYMBOL_ELLIPSIS = 20,                  /* ELLIPSIS  */
  YYSYMBOL_VOID_ = 21,                     /* VOID_  */
  YYSYMBOL_BOOL_ = 22,                     /* BOOL_  */
  YYSYMBOL_CHAR_ = 23,                     /* CHAR_  */
  YYSYMBOL_UNSIGNED_ = 24,                 /* UNSIGNED_  */
  YYSYMBOL_INT_ = 25,                      /* INT_  */
  YYSYMBOL_INT8_ = 26,                     /* INT8_  */
  YYSYMBOL_INT16_ = 27,                    /* INT16_  */
  YYSYMBOL_INT32_ = 28,                    /* INT32_  */
  YYSYMBOL_INT64_ = 29,                    /* INT64_  */
  YYSYMBOL_FLOAT_ = 30,                    /* FLOAT_  */
  YYSYMBOL_FLOAT32_ = 31,                  /* FLOAT32_  */
  YYSYMBOL_FLOAT64_ = 32,                  /* FLOAT64_  */
  YYSYMBOL_BYTEARRAY_ = 33,                /* BYTEARRAY_  */
  YYSYMBOL_UINT_ = 34,                     /* UINT_  */
  YYSYMBOL_UINT8_ = 35,                    /* UINT8_  */
  YYSYMBOL_UINT16_ = 36,                   /* UINT16_  */
  YYSYMBOL_UINT32_ = 37,                   /* UINT32_  */
  YYSYMBOL_UINT64_ = 38,                   /* UINT64_  */
  YYSYMBOL_FLAGS_ = 39,                    /* FLAGS_  */
  YYSYMBOL_CALLCONV_ = 40,                 /* CALLCONV_  */
  YYSYMBOL_MDTOKEN_ = 41,                  /* MDTOKEN_  */
  YYSYMBOL_OBJECT_ = 42,                   /* OBJECT_  */
  YYSYMBOL_STRING_ = 43,                   /* STRING_  */
  YYSYMBOL_NULLREF_ = 44,                  /* NULLREF_  */
  YYSYMBOL_DEFAULT_ = 45,                  /* DEFAULT_  */
  YYSYMBOL_CDECL_ = 46,                    /* CDECL_  */
  YYSYMBOL_VARARG_ = 47,                   /* VARARG_  */
  YYSYMBOL_STDCALL_ = 48,                  /* STDCALL_  */
  YYSYMBOL_THISCALL_ = 49,                 /* THISCALL_  */
  YYSYMBOL_FASTCALL_ = 50,                 /* FASTCALL_  */
  YYSYMBOL_CLASS_ = 51,                    /* CLASS_  */
  YYSYMBOL_BYREFLIKE_ = 52,                /* BYREFLIKE_  */
  YYSYMBOL_TYPEDREF_ = 53,                 /* TYPEDREF_  */
  YYSYMBOL_UNMANAGED_ = 54,                /* UNMANAGED_  */
  YYSYMBOL_FINALLY_ = 55,                  /* FINALLY_  */
  YYSYMBOL_HANDLER_ = 56,                  /* HANDLER_  */
  YYSYMBOL_CATCH_ = 57,                    /* CATCH_  */
  YYSYMBOL_FILTER_ = 58,                   /* FILTER_  */
  YYSYMBOL_FAULT_ = 59,                    /* FAULT_  */
  YYSYMBOL_EXTENDS_ = 60,                  /* EXTENDS_  */
  YYSYMBOL_IMPLEMENTS_ = 61,               /* IMPLEMENTS_  */
  YYSYMBOL_TO_ = 62,                       /* TO_  */
  YYSYMBOL_AT_ = 63,                       /* AT_  */
  YYSYMBOL_TLS_ = 64,                      /* TLS_  */
  YYSYMBOL_TRUE_ = 65,                     /* TRUE_  */
  YYSYMBOL_FALSE_ = 66,                    /* FALSE_  */
  YYSYMBOL__INTERFACEIMPL = 67,            /* _INTERFACEIMPL  */
  YYSYMBOL_VALUE_ = 68,                    /* VALUE_  */
  YYSYMBOL_VALUETYPE_ = 69,                /* VALUETYPE_  */
  YYSYMBOL_NATIVE_ = 70,                   /* NATIVE_  */
  YYSYMBOL_INSTANCE_ = 71,                 /* INSTANCE_  */
  YYSYMBOL_SPECIALNAME_ = 72,              /* SPECIALNAME_  */
  YYSYMBOL_FORWARDER_ = 73,                /* FORWARDER_  */
  YYSYMBOL_STATIC_ = 74,                   /* STATIC_  */
  YYSYMBOL_PUBLIC_ = 75,                   /* PUBLIC_  */
  YYSYMBOL_PRIVATE_ = 76,                  /* PRIVATE_  */
  YYSYMBOL_FAMILY_ = 77,                   /* FAMILY_  */
  YYSYMBOL_FINAL_ = 78,                    /* FINAL_  */
  YYSYMBOL_SYNCHRONIZED_ = 79,             /* SYNCHRONIZED_  */
  YYSYMBOL_INTERFACE_ = 80,                /* INTERFACE_  */
  YYSYMBOL_SEALED_ = 81,                   /* SEALED_  */
  YYSYMBOL_NESTED_ = 82,                   /* NESTED_  */
  YYSYMBOL_ABSTRACT_ = 83,                 /* ABSTRACT_  */
  YYSYMBOL_AUTO_ = 84,                     /* AUTO_  */
  YYSYMBOL_SEQUENTIAL_ = 85,               /* SEQUENTIAL_  */
  YYSYMBOL_EXPLICIT_ = 86,                 /* EXPLICIT_  */
  YYSYMBOL_ANSI_ = 87,                     /* ANSI_  */
  YYSYMBOL_UNICODE_ = 88,                  /* UNICODE_  */
  YYSYMBOL_AUTOCHAR_ = 89,                 /* AUTOCHAR_  */
  YYSYMBOL_IMPORT_ = 90,                   /* IMPORT_  */
  YYSYMBOL_ENUM_ = 91,                     /* ENUM_  */
  YYSYMBOL_VIRTUAL_ = 92,                  /* VIRTUAL_  */
  YYSYMBOL_NOINLINING_ = 93,               /* NOINLINING_  */
  YYSYMBOL_AGGRESSIVEINLINING_ = 94,       /* AGGRESSIVEINLINING_  */
  YYSYMBOL_NOOPTIMIZATION_ = 95,           /* NOOPTIMIZATION_  */
  YYSYMBOL_AGGRESSIVEOPTIMIZATION_ = 96,   /* AGGRESSIVEOPTIMIZATION_  */
  YYSYMBOL_UNMANAGEDEXP_ = 97,             /* UNMANAGEDEXP_  */
  YYSYMBOL_BEFOREFIELDINIT_ = 98,          /* BEFOREFIELDINIT_  */
  YYSYMBOL_STRICT_ = 99,                   /* STRICT_  */
  YYSYMBOL_RETARGETABLE_ = 100,            /* RETARGETABLE_  */
  YYSYMBOL_WINDOWSRUNTIME_ = 101,          /* WINDOWSRUNTIME_  */
  YYSYMBOL_NOPLATFORM_ = 102,              /* NOPLATFORM_  */
  YYSYMBOL_METHOD_ = 103,                  /* METHOD_  */
  YYSYMBOL_FIELD_ = 104,                   /* FIELD_  */
  YYSYMBOL_PINNED_ = 105,                  /* PINNED_  */
  YYSYMBOL_MODREQ_ = 106,                  /* MODREQ_  */
  YYSYMBOL_MODOPT_ = 107,                  /* MODOPT_  */
  YYSYMBOL_SERIALIZABLE_ = 108,            /* SERIALIZABLE_  */
  YYSYMBOL_PROPERTY_ = 109,                /* PROPERTY_  */
  YYSYMBOL_TYPE_ = 110,                    /* TYPE_  */
  YYSYMBOL_ASSEMBLY_ = 111,                /* ASSEMBLY_  */
  YYSYMBOL_FAMANDASSEM_ = 112,             /* FAMANDASSEM_  */
  YYSYMBOL_FAMORASSEM_ = 113,              /* FAMORASSEM_  */
  YYSYMBOL_PRIVATESCOPE_ = 114,            /* PRIVATESCOPE_  */
  YYSYMBOL_HIDEBYSIG_ = 115,               /* HIDEBYSIG_  */
  YYSYMBOL_NEWSLOT_ = 116,                 /* NEWSLOT_  */
  YYSYMBOL_RTSPECIALNAME_ = 117,           /* RTSPECIALNAME_  */
  YYSYMBOL_PINVOKEIMPL_ = 118,             /* PINVOKEIMPL_  */
  YYSYMBOL__CTOR = 119,                    /* _CTOR  */
  YYSYMBOL__CCTOR = 120,                   /* _CCTOR  */
  YYSYMBOL_LITERAL_ = 121,                 /* LITERAL_  */
  YYSYMBOL_NOTSERIALIZED_ = 122,           /* NOTSERIALIZED_  */
  YYSYMBOL_INITONLY_ = 123,                /* INITONLY_  */
  YYSYMBOL_REQSECOBJ_ = 124,               /* REQSECOBJ_  */
  YYSYMBOL_CIL_ = 125,                     /* CIL_  */
  YYSYMBOL_OPTIL_ = 126,                   /* OPTIL_  */
  YYSYMBOL_MANAGED_ = 127,                 /* MANAGED_  */
  YYSYMBOL_FORWARDREF_ = 128,              /* FORWARDREF_  */
  YYSYMBOL_PRESERVESIG_ = 129,             /* PRESERVESIG_  */
  YYSYMBOL_RUNTIME_ = 130,                 /* RUNTIME_  */
  YYSYMBOL_INTERNALCALL_ = 131,            /* INTERNALCALL_  */
  YYSYMBOL__IMPORT = 132,                  /* _IMPORT  */
  YYSYMBOL_NOMANGLE_ = 133,                /* NOMANGLE_  */
  YYSYMBOL_LASTERR_ = 134,                 /* LASTERR_  */
  YYSYMBOL_WINAPI_ = 135,                  /* WINAPI_  */
  YYSYMBOL_AS_ = 136,                      /* AS_  */
  YYSYMBOL_BESTFIT_ = 137,                 /* BESTFIT_  */
  YYSYMBOL_ON_ = 138,                      /* ON_  */
  YYSYMBOL_OFF_ = 139,                     /* OFF_  */
  YYSYMBOL_CHARMAPERROR_ = 140,            /* CHARMAPERROR_  */
  YYSYMBOL_INSTR_NONE = 141,               /* INSTR_NONE  */
  YYSYMBOL_INSTR_VAR = 142,                /* INSTR_VAR  */
  YYSYMBOL_INSTR_I = 143,                  /* INSTR_I  */
  YYSYMBOL_INSTR_I8 = 144,                 /* INSTR_I8  */
  YYSYMBOL_INSTR_R = 145,                  /* INSTR_R  */
  YYSYMBOL_INSTR_BRTARGET = 146,           /* INSTR_BRTARGET  */
  YYSYMBOL_INSTR_METHOD = 147,             /* INSTR_METHOD  */
  YYSYMBOL_INSTR_FIELD = 148,              /* INSTR_FIELD  */
  YYSYMBOL_INSTR_TYPE = 149,               /* INSTR_TYPE  */
  YYSYMBOL_INSTR_STRING = 150,             /* INSTR_STRING  */
  YYSYMBOL_INSTR_SIG = 151,                /* INSTR_SIG  */
  YYSYMBOL_INSTR_TOK = 152,                /* INSTR_TOK  */
  YYSYMBOL_INSTR_SWITCH = 153,             /* INSTR_SWITCH  */
  YYSYMBOL__CLASS = 154,                   /* _CLASS  */
  YYSYMBOL__NAMESPACE = 155,               /* _NAMESPACE  */
  YYSYMBOL__METHOD = 156,                  /* _METHOD  */
  YYSYMBOL__FIELD = 157,                   /* _FIELD  */
  YYSYMBOL__DATA = 158,                    /* _DATA  */
  YYSYMBOL__THIS = 159,                    /* _THIS  */
  YYSYMBOL__BASE = 160,                    /* _BASE  */
  YYSYMBOL__NESTER = 161,                  /* _NESTER  */
  YYSYMBOL__EMITBYTE = 162,                /* _EMITBYTE  */
  YYSYMBOL__TRY = 163,                     /* _TRY  */
  YYSYMBOL__MAXSTACK = 164,                /* _MAXSTACK  */
  YYSYMBOL__LOCALS = 165,                  /* _LOCALS  */
  YYSYMBOL__ENTRYPOINT = 166,              /* _ENTRYPOINT  */
  YYSYMBOL__ZEROINIT = 167,                /* _ZEROINIT  */
  YYSYMBOL__EVENT = 168,                   /* _EVENT  */
  YYSYMBOL__ADDON = 169,                   /* _ADDON  */
  YYSYMBOL__REMOVEON = 170,                /* _REMOVEON  */
  YYSYMBOL__FIRE = 171,                    /* _FIRE  */
  YYSYMBOL__OTHER = 172,                   /* _OTHER  */
  YYSYMBOL__PROPERTY = 173,                /* _PROPERTY  */
  YYSYMBOL__SET = 174,                     /* _SET  */
  YYSYMBOL__GET = 175,                     /* _GET  */
  YYSYMBOL__PERMISSION = 176,              /* _PERMISSION  */
  YYSYMBOL__PERMISSIONSET = 177,           /* _PERMISSIONSET  */
  YYSYMBOL_REQUEST_ = 178,                 /* REQUEST_  */
  YYSYMBOL_DEMAND_ = 179,                  /* DEMAND_  */
  YYSYMBOL_ASSERT_ = 180,                  /* ASSERT_  */
  YYSYMBOL_DENY_ = 181,                    /* DENY_  */
  YYSYMBOL_PERMITONLY_ = 182,              /* PERMITONLY_  */
  YYSYMBOL_LINKCHECK_ = 183,               /* LINKCHECK_  */
  YYSYMBOL_INHERITCHECK_ = 184,            /* INHERITCHECK_  */
  YYSYMBOL_REQMIN_ = 185,                  /* REQMIN_  */
  YYSYMBOL_REQOPT_ = 186,                  /* REQOPT_  */
  YYSYMBOL_REQREFUSE_ = 187,               /* REQREFUSE_  */
  YYSYMBOL_PREJITGRANT_ = 188,             /* PREJITGRANT_  */
  YYSYMBOL_PREJITDENY_ = 189,              /* PREJITDENY_  */
  YYSYMBOL_NONCASDEMAND_ = 190,            /* NONCASDEMAND_  */
  YYSYMBOL_NONCASLINKDEMAND_ = 191,        /* NONCASLINKDEMAND_  */
  YYSYMBOL_NONCASINHERITANCE_ = 192,       /* NONCASINHERITANCE_  */
  YYSYMBOL__LINE = 193,                    /* _LINE  */
  YYSYMBOL_P_LINE = 194,                   /* P_LINE  */
  YYSYMBOL__LANGUAGE = 195,                /* _LANGUAGE  */
  YYSYMBOL__CUSTOM = 196,                  /* _CUSTOM  */
  YYSYMBOL_INIT_ = 197,                    /* INIT_  */
  YYSYMBOL__SIZE = 198,                    /* _SIZE  */
  YYSYMBOL__PACK = 199,                    /* _PACK  */
  YYSYMBOL__VTABLE = 200,                  /* _VTABLE  */
  YYSYMBOL__VTFIXUP = 201,                 /* _VTFIXUP  */
  YYSYMBOL_FROMUNMANAGED_ = 202,           /* FROMUNMANAGED_  */
  YYSYMBOL_CALLMOSTDERIVED_ = 203,         /* CALLMOSTDERIVED_  */
  YYSYMBOL__VTENTRY = 204,                 /* _VTENTRY  */
  YYSYMBOL_RETAINAPPDOMAIN_ = 205,         /* RETAINAPPDOMAIN_  */
  YYSYMBOL__FILE = 206,                    /* _FILE  */
  YYSYMBOL_NOMETADATA_ = 207,              /* NOMETADATA_  */
  YYSYMBOL__TYPEREF = 208,                 /* _TYPEREF  */
  YYSYMBOL__HASH = 209,                    /* _HASH  */
  YYSYMBOL__ASSEMBLY = 210,                /* _ASSEMBLY  */
  YYSYMBOL__PUBLICKEY = 211,               /* _PUBLICKEY  */
  YYSYMBOL__PUBLICKEYTOKEN = 212,          /* _PUBLICKEYTOKEN  */
  YYSYMBOL_ALGORITHM_ = 213,               /* ALGORITHM_  */
  YYSYMBOL__VER = 214,                     /* _VER  */
  YYSYMBOL__LOCALE = 215,                  /* _LOCALE  */
  YYSYMBOL_EXTERN_ = 216,                  /* EXTERN_  */
  YYSYMBOL__MRESOURCE = 217,               /* _MRESOURCE  */
  YYSYMBOL__MODULE = 218,                  /* _MODULE  */
  YYSYMBOL__EXPORT = 219,                  /* _EXPORT  */
  YYSYMBOL_LEGACY_ = 220,                  /* LEGACY_  */
  YYSYMBOL_LIBRARY_ = 221,                 /* LIBRARY_  */
  YYSYMBOL_X86_ = 222,                     /* X86_  */
  YYSYMBOL_AMD64_ = 223,                   /* AMD64_  */
  YYSYMBOL_ARM_ = 224,                     /* ARM_  */
  YYSYMBOL_ARM64_ = 225,                   /* ARM64_  */
  YYSYMBOL_MARSHAL_ = 226,                 /* MARSHAL_  */
  YYSYMBOL_CUSTOM_ = 227,                  /* CUSTOM_  */
  YYSYMBOL_SYSSTRING_ = 228,               /* SYSSTRING_  */
  YYSYMBOL_FIXED_ = 229,                   /* FIXED_  */
  YYSYMBOL_VARIANT_ = 230,                 /* VARIANT_  */
  YYSYMBOL_CURRENCY_ = 231,                /* CURRENCY_  */
  YYSYMBOL_SYSCHAR_ = 232,                 /* SYSCHAR_  */
  YYSYMBOL_DECIMAL_ = 233,                 /* DECIMAL_  */
  YYSYMBOL_DATE_ = 234,                    /* DATE_  */
  YYSYMBOL_BSTR_ = 235,                    /* BSTR_  */
  YYSYMBOL_TBSTR_ = 236,                   /* TBSTR_  */
  YYSYMBOL_LPSTR_ = 237,                   /* LPSTR_  */
  YYSYMBOL_LPWSTR_ = 238,                  /* LPWSTR_  */
  YYSYMBOL_LPTSTR_ = 239,                  /* LPTSTR_  */
  YYSYMBOL_OBJECTREF_ = 240,               /* OBJECTREF_  */
  YYSYMBOL_IUNKNOWN_ = 241,                /* IUNKNOWN_  */
  YYSYMBOL_IDISPATCH_ = 242,               /* IDISPATCH_  */
  YYSYMBOL_STRUCT_ = 243,                  /* STRUCT_  */
  YYSYMBOL_SAFEARRAY_ = 244,               /* SAFEARRAY_  */
  YYSYMBOL_BYVALSTR_ = 245,                /* BYVALSTR_  */
  YYSYMBOL_LPVOID_ = 246,                  /* LPVOID_  */
  YYSYMBOL_ANY_ = 247,                     /* ANY_  */
  YYSYMBOL_ARRAY_ = 248,                   /* ARRAY_  */
  YYSYMBOL_LPSTRUCT_ = 249,                /* LPSTRUCT_  */
  YYSYMBOL_IIDPARAM_ = 250,                /* IIDPARAM_  */
  YYSYMBOL_IN_ = 251,                      /* IN_  */
  YYSYMBOL_OUT_ = 252,                     /* OUT_  */
  YYSYMBOL_OPT_ = 253,                     /* OPT_  */
  YYSYMBOL__PARAM = 254,                   /* _PARAM  */
  YYSYMBOL__OVERRIDE = 255,                /* _OVERRIDE  */
  YYSYMBOL_WITH_ = 256,                    /* WITH_  */
  YYSYMBOL_NULL_ = 257,                    /* NULL_  */
  YYSYMBOL_ERROR_ = 258,                   /* ERROR_  */
  YYSYMBOL_HRESULT_ = 259,                 /* HRESULT_  */
  YYSYMBOL_CARRAY_ = 260,                  /* CARRAY_  */
  YYSYMBOL_USERDEFINED_ = 261,             /* USERDEFINED_  */
  YYSYMBOL_RECORD_ = 262,                  /* RECORD_  */
  YYSYMBOL_FILETIME_ = 263,                /* FILETIME_  */
  YYSYMBOL_BLOB_ = 264,                    /* BLOB_  */
  YYSYMBOL_STREAM_ = 265,                  /* STREAM_  */
  YYSYMBOL_STORAGE_ = 266,                 /* STORAGE_  */
  YYSYMBOL_STREAMED_OBJECT_ = 267,         /* STREAMED_OBJECT_  */
  YYSYMBOL_STORED_OBJECT_ = 268,           /* STORED_OBJECT_  */
  YYSYMBOL_BLOB_OBJECT_ = 269,             /* BLOB_OBJECT_  */
  YYSYMBOL_CF_ = 270,                      /* CF_  */
  YYSYMBOL_CLSID_ = 271,                   /* CLSID_  */
  YYSYMBOL_VECTOR_ = 272,                  /* VECTOR_  */
  YYSYMBOL__SUBSYSTEM = 273,               /* _SUBSYSTEM  */
  YYSYMBOL__CORFLAGS = 274,                /* _CORFLAGS  */
  YYSYMBOL_ALIGNMENT_ = 275,               /* ALIGNMENT_  */
  YYSYMBOL__IMAGEBASE = 276,               /* _IMAGEBASE  */
  YYSYMBOL__STACKRESERVE = 277,            /* _STACKRESERVE  */
  YYSYMBOL__TYPEDEF = 278,                 /* _TYPEDEF  */
  YYSYMBOL__TEMPLATE = 279,                /* _TEMPLATE  */
  YYSYMBOL__TYPELIST = 280,                /* _TYPELIST  */
  YYSYMBOL__MSCORLIB = 281,                /* _MSCORLIB  */
  YYSYMBOL_P_DEFINE = 282,                 /* P_DEFINE  */
  YYSYMBOL_P_UNDEF = 283,                  /* P_UNDEF  */
  YYSYMBOL_P_IFDEF = 284,                  /* P_IFDEF  */
  YYSYMBOL_P_IFNDEF = 285,                 /* P_IFNDEF  */
  YYSYMBOL_P_ELSE = 286,                   /* P_ELSE  */
  YYSYMBOL_P_ENDIF = 287,                  /* P_ENDIF  */
  YYSYMBOL_P_INCLUDE = 288,                /* P_INCLUDE  */
  YYSYMBOL_CONSTRAINT_ = 289,              /* CONSTRAINT_  */
  YYSYMBOL_290_ = 290,                     /* '{'  */
  YYSYMBOL_291_ = 291,                     /* '}'  */
  YYSYMBOL_292_ = 292,                     /* '+'  */
  YYSYMBOL_293_ = 293,                     /* ','  */
  YYSYMBOL_294_ = 294,                     /* '.'  */
  YYSYMBOL_295_ = 295,                     /* '('  */
  YYSYMBOL_296_ = 296,                     /* ')'  */
  YYSYMBOL_297_ = 297,                     /* ';'  */
  YYSYMBOL_298_ = 298,                     /* '='  */
  YYSYMBOL_299_ = 299,                     /* '['  */
  YYSYMBOL_300_ = 300,                     /* ']'  */
  YYSYMBOL_301_ = 301,                     /* '<'  */
  YYSYMBOL_302_ = 302,                     /* '>'  */
  YYSYMBOL_303_ = 303,                     /* '-'  */
  YYSYMBOL_304_ = 304,                     /* ':'  */
  YYSYMBOL_305_ = 305,                     /* '*'  */
  YYSYMBOL_306_ = 306,                     /* '&'  */
  YYSYMBOL_307_ = 307,                     /* '/'  */
  YYSYMBOL_308_ = 308,                     /* '!'  */
  YYSYMBOL_YYACCEPT = 309,                 /* $accept  */
  YYSYMBOL_decls = 310,                    /* decls  */
  YYSYMBOL_decl = 311,                     /* decl  */
  YYSYMBOL_classNameSeq = 312,             /* classNameSeq  */
  YYSYMBOL_compQstring = 313,              /* compQstring  */
  YYSYMBOL_languageDecl = 314,             /* languageDecl  */
  YYSYMBOL_id = 315,                       /* id  */
  YYSYMBOL_dottedName = 316,               /* dottedName  */
  YYSYMBOL_int32 = 317,                    /* int32  */
  YYSYMBOL_int64 = 318,                    /* int64  */
  YYSYMBOL_float64 = 319,                  /* float64  */
  YYSYMBOL_typedefDecl = 320,              /* typedefDecl  */
  YYSYMBOL_compControl = 321,              /* compControl  */
  YYSYMBOL_customDescr = 322,              /* customDescr  */
  YYSYMBOL_customDescrWithOwner = 323,     /* customDescrWithOwner  */
  YYSYMBOL_customHead = 324,               /* customHead  */
  YYSYMBOL_customHeadWithOwner = 325,      /* customHeadWithOwner  */
  YYSYMBOL_customType = 326,               /* customType  */
  YYSYMBOL_ownerType = 327,                /* ownerType  */
  YYSYMBOL_customBlobDescr = 328,          /* customBlobDescr  */
  YYSYMBOL_customBlobArgs = 329,           /* customBlobArgs  */
  YYSYMBOL_customBlobNVPairs = 330,        /* customBlobNVPairs  */
  YYSYMBOL_fieldOrProp = 331,              /* fieldOrProp  */
  YYSYMBOL_customAttrDecl = 332,           /* customAttrDecl  */
  YYSYMBOL_serializType = 333,             /* serializType  */
  YYSYMBOL_moduleHead = 334,               /* moduleHead  */
  YYSYMBOL_vtfixupDecl = 335,              /* vtfixupDecl  */
  YYSYMBOL_vtfixupAttr = 336,              /* vtfixupAttr  */
  YYSYMBOL_vtableDecl = 337,               /* vtableDecl  */
  YYSYMBOL_vtableHead = 338,               /* vtableHead  */
  YYSYMBOL_nameSpaceHead = 339,            /* nameSpaceHead  */
  YYSYMBOL__class = 340,                   /* _class  */
  YYSYMBOL_classHeadBegin = 341,           /* classHeadBegin  */
  YYSYMBOL_classHead = 342,                /* classHead  */
  YYSYMBOL_classAttr = 343,                /* classAttr  */
  YYSYMBOL_extendsClause = 344,            /* extendsClause  */
  YYSYMBOL_implClause = 345,               /* implClause  */
  YYSYMBOL_classDecls = 346,               /* classDecls  */
  YYSYMBOL_implList = 347,                 /* implList  */
  YYSYMBOL_typeList = 348,                 /* typeList  */
  YYSYMBOL_typeListNotEmpty = 349,         /* typeListNotEmpty  */
  YYSYMBOL_typarsClause = 350,             /* typarsClause  */
  YYSYMBOL_typarAttrib = 351,              /* typarAttrib  */
  YYSYMBOL_typarAttribs = 352,             /* typarAttribs  */
  YYSYMBOL_typars = 353,                   /* typars  */
  YYSYMBOL_typarsRest = 354,               /* typarsRest  */
  YYSYMBOL_tyBound = 355,                  /* tyBound  */
  YYSYMBOL_genArity = 356,                 /* genArity  */
  YYSYMBOL_genArityNotEmpty = 357,         /* genArityNotEmpty  */
  YYSYMBOL_classDecl = 358,                /* classDecl  */
  YYSYMBOL_fieldDecl = 359,                /* fieldDecl  */
  YYSYMBOL_fieldAttr = 360,                /* fieldAttr  */
  YYSYMBOL_atOpt = 361,                    /* atOpt  */
  YYSYMBOL_initOpt = 362,                  /* initOpt  */
  YYSYMBOL_repeatOpt = 363,                /* repeatOpt  */
  YYSYMBOL_methodRef = 364,                /* methodRef  */
  YYSYMBOL_callConv = 365,                 /* callConv  */
  YYSYMBOL_callKind = 366,                 /* callKind  */
  YYSYMBOL_mdtoken = 367,                  /* mdtoken  */
  YYSYMBOL_memberRef = 368,                /* memberRef  */
  YYSYMBOL_eventHead = 369,                /* eventHead  */
  YYSYMBOL_eventAttr = 370,                /* eventAttr  */
  YYSYMBOL_eventDecls = 371,               /* eventDecls  */
  YYSYMBOL_eventDecl = 372,                /* eventDecl  */
  YYSYMBOL_propHead = 373,                 /* propHead  */
  YYSYMBOL_propAttr = 374,                 /* propAttr  */
  YYSYMBOL_propDecls = 375,                /* propDecls  */
  YYSYMBOL_propDecl = 376,                 /* propDecl  */
  YYSYMBOL_methodHeadPart1 = 377,          /* methodHeadPart1  */
  YYSYMBOL_marshalClause = 378,            /* marshalClause  */
  YYSYMBOL_marshalBlob = 379,              /* marshalBlob  */
  YYSYMBOL_marshalBlobHead = 380,          /* marshalBlobHead  */
  YYSYMBOL_methodHead = 381,               /* methodHead  */
  YYSYMBOL_methAttr = 382,                 /* methAttr  */
  YYSYMBOL_pinvAttr = 383,                 /* pinvAttr  */
  YYSYMBOL_methodName = 384,               /* methodName  */
  YYSYMBOL_paramAttr = 385,                /* paramAttr  */
  YYSYMBOL_implAttr = 386,                 /* implAttr  */
  YYSYMBOL_localsHead = 387,               /* localsHead  */
  YYSYMBOL_methodDecls = 388,              /* methodDecls  */
  YYSYMBOL_methodDecl = 389,               /* methodDecl  */
  YYSYMBOL_scopeBlock = 390,               /* scopeBlock  */
  YYSYMBOL_scopeOpen = 391,                /* scopeOpen  */
  YYSYMBOL_sehBlock = 392,                 /* sehBlock  */
  YYSYMBOL_sehClauses = 393,               /* sehClauses  */
  YYSYMBOL_tryBlock = 394,                 /* tryBlock  */
  YYSYMBOL_tryHead = 395,                  /* tryHead  */
  YYSYMBOL_sehClause = 396,                /* sehClause  */
  YYSYMBOL_filterClause = 397,             /* filterClause  */
  YYSYMBOL_filterHead = 398,               /* filterHead  */
  YYSYMBOL_catchClause = 399,              /* catchClause  */
  YYSYMBOL_finallyClause = 400,            /* finallyClause  */
  YYSYMBOL_faultClause = 401,              /* faultClause  */
  YYSYMBOL_handlerBlock = 402,             /* handlerBlock  */
  YYSYMBOL_dataDecl = 403,                 /* dataDecl  */
  YYSYMBOL_ddHead = 404,                   /* ddHead  */
  YYSYMBOL_tls = 405,                      /* tls  */
  YYSYMBOL_ddBody = 406,                   /* ddBody  */
  YYSYMBOL_ddItemList = 407,               /* ddItemList  */
  YYSYMBOL_ddItemCount = 408,              /* ddItemCount  */
  YYSYMBOL_ddItem = 409,                   /* ddItem  */
  YYSYMBOL_fieldSerInit = 410,             /* fieldSerInit  */
  YYSYMBOL_bytearrayhead = 411,            /* bytearrayhead  */
  YYSYMBOL_bytes = 412,                    /* bytes  */
  YYSYMBOL_hexbytes = 413,                 /* hexbytes  */
  YYSYMBOL_fieldInit = 414,                /* fieldInit  */
  YYSYMBOL_serInit = 415,                  /* serInit  */
  YYSYMBOL_f32seq = 416,                   /* f32seq  */
  YYSYMBOL_f64seq = 417,                   /* f64seq  */
  YYSYMBOL_i64seq = 418,                   /* i64seq  */
  YYSYMBOL_i32seq = 419,                   /* i32seq  */
  YYSYMBOL_i16seq = 420,                   /* i16seq  */
  YYSYMBOL_i8seq = 421,                    /* i8seq  */
  YYSYMBOL_boolSeq = 422,                  /* boolSeq  */
  YYSYMBOL_sqstringSeq = 423,              /* sqstringSeq  */
  YYSYMBOL_classSeq = 424,                 /* classSeq  */
  YYSYMBOL_objSeq = 425,                   /* objSeq  */
  YYSYMBOL_methodSpec = 426,               /* methodSpec  */
  YYSYMBOL_instr_none = 427,               /* instr_none  */
  YYSYMBOL_instr_var = 428,                /* instr_var  */
  YYSYMBOL_instr_i = 429,                  /* instr_i  */
  YYSYMBOL_instr_i8 = 430,                 /* instr_i8  */
  YYSYMBOL_instr_r = 431,                  /* instr_r  */
  YYSYMBOL_instr_brtarget = 432,           /* instr_brtarget  */
  YYSYMBOL_instr_method = 433,             /* instr_method  */
  YYSYMBOL_instr_field = 434,              /* instr_field  */
  YYSYMBOL_instr_type = 435,               /* instr_type  */
  YYSYMBOL_instr_string = 436,             /* instr_string  */
  YYSYMBOL_instr_sig = 437,                /* instr_sig  */
  YYSYMBOL_instr_tok = 438,                /* instr_tok  */
  YYSYMBOL_instr_switch = 439,             /* instr_switch  */
  YYSYMBOL_instr_r_head = 440,             /* instr_r_head  */
  YYSYMBOL_instr = 441,                    /* instr  */
  YYSYMBOL_labels = 442,                   /* labels  */
  YYSYMBOL_tyArgs0 = 443,                  /* tyArgs0  */
  YYSYMBOL_tyArgs1 = 444,                  /* tyArgs1  */
  YYSYMBOL_tyArgs2 = 445,                  /* tyArgs2  */
  YYSYMBOL_sigArgs0 = 446,                 /* sigArgs0  */
  YYSYMBOL_sigArgs1 = 447,                 /* sigArgs1  */
  YYSYMBOL_sigArg = 448,                   /* sigArg  */
  YYSYMBOL_className = 449,                /* className  */
  YYSYMBOL_slashedName = 450,              /* slashedName  */
  YYSYMBOL_typeSpec = 451,                 /* typeSpec  */
  YYSYMBOL_nativeType = 452,               /* nativeType  */
  YYSYMBOL_iidParamIndex = 453,            /* iidParamIndex  */
  YYSYMBOL_variantType = 454,              /* variantType  */
  YYSYMBOL_type = 455,                     /* type  */
  YYSYMBOL_simpleType = 456,               /* simpleType  */
  YYSYMBOL_bounds1 = 457,                  /* bounds1  */
  YYSYMBOL_bound = 458,                    /* bound  */
  YYSYMBOL_secDecl = 459,                  /* secDecl  */
  YYSYMBOL_secAttrSetBlob = 460,           /* secAttrSetBlob  */
  YYSYMBOL_secAttrBlob = 461,              /* secAttrBlob  */
  YYSYMBOL_psetHead = 462,                 /* psetHead  */
  YYSYMBOL_nameValPairs = 463,             /* nameValPairs  */
  YYSYMBOL_nameValPair = 464,              /* nameValPair  */
  YYSYMBOL_truefalse = 465,                /* truefalse  */
  YYSYMBOL_caValue = 466,                  /* caValue  */
  YYSYMBOL_secAction = 467,                /* secAction  */
  YYSYMBOL_esHead = 468,                   /* esHead  */
  YYSYMBOL_extSourceSpec = 469,            /* extSourceSpec  */
  YYSYMBOL_fileDecl = 470,                 /* fileDecl  */
  YYSYMBOL_fileAttr = 471,                 /* fileAttr  */
  YYSYMBOL_fileEntry = 472,                /* fileEntry  */
  YYSYMBOL_hashHead = 473,                 /* hashHead  */
  YYSYMBOL_assemblyHead = 474,             /* assemblyHead  */
  YYSYMBOL_asmAttr = 475,                  /* asmAttr  */
  YYSYMBOL_assemblyDecls = 476,            /* assemblyDecls  */
  YYSYMBOL_assemblyDecl = 477,             /* assemblyDecl  */
  YYSYMBOL_intOrWildcard = 478,            /* intOrWildcard  */
  YYSYMBOL_asmOrRefDecl = 479,             /* asmOrRefDecl  */
  YYSYMBOL_publicKeyHead = 480,            /* publicKeyHead  */
  YYSYMBOL_publicKeyTokenHead = 481,       /* publicKeyTokenHead  */
  YYSYMBOL_localeHead = 482,               /* localeHead  */
  YYSYMBOL_assemblyRefHead = 483,          /* assemblyRefHead  */
  YYSYMBOL_assemblyRefDecls = 484,         /* assemblyRefDecls  */
  YYSYMBOL_assemblyRefDecl = 485,          /* assemblyRefDecl  */
  YYSYMBOL_exptypeHead = 486,              /* exptypeHead  */
  YYSYMBOL_exportHead = 487,               /* exportHead  */
  YYSYMBOL_exptAttr = 488,                 /* exptAttr  */
  YYSYMBOL_exptypeDecls = 489,             /* exptypeDecls  */
  YYSYMBOL_exptypeDecl = 490,              /* exptypeDecl  */
  YYSYMBOL_manifestResHead = 491,          /* manifestResHead  */
  YYSYMBOL_manresAttr = 492,               /* manresAttr  */
  YYSYMBOL_manifestResDecls = 493,         /* manifestResDecls  */
  YYSYMBOL_manifestResDecl = 494           /* manifestResDecl  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3711

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  309
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  186
/* YYNRULES -- Number of rules.  */
#define YYNRULES  850
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1601

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   544


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   308,     2,     2,     2,     2,   306,     2,
     295,   296,   305,   292,   293,   303,   294,   307,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   304,   297,
     301,   298,   302,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   299,     2,   300,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   290,     2,   291,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   189,   189,   190,   193,   194,   195,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   222,   223,   226,   229,   230,   231,   232,   233,   234,
     237,   238,   241,   242,   245,   246,   248,   253,   254,   257,
     258,   259,   262,   265,   266,   269,   270,   271,   275,   276,
     277,   278,   279,   284,   285,   286,   287,   290,   293,   294,
     298,   299,   303,   304,   305,   306,   309,   310,   311,   313,
     316,   319,   325,   328,   329,   333,   339,   340,   342,   345,
     346,   352,   355,   356,   359,   363,   364,   372,   373,   374,
     375,   377,   379,   384,   385,   386,   393,   397,   398,   399,
     400,   401,   402,   405,   408,   412,   415,   418,   424,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   456,   457,   460,   461,
     464,   465,   468,   469,   473,   474,   477,   478,   481,   482,
     485,   486,   487,   488,   489,   490,   491,   494,   495,   498,
     499,   502,   503,   506,   509,   510,   513,   517,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     538,   547,   548,   549,   554,   560,   561,   562,   569,   574,
     575,   576,   577,   578,   579,   580,   581,   593,   595,   596,
     597,   598,   599,   600,   601,   604,   605,   608,   609,   612,
     613,   617,   634,   640,   656,   661,   662,   663,   666,   667,
     668,   669,   672,   673,   674,   675,   676,   677,   678,   679,
     682,   685,   690,   694,   698,   700,   702,   707,   708,   712,
     713,   714,   717,   718,   721,   722,   723,   724,   725,   726,
     727,   728,   732,   738,   739,   740,   743,   744,   748,   749,
     750,   751,   752,   753,   754,   758,   764,   765,   768,   769,
     772,   775,   791,   792,   793,   794,   795,   796,   797,   798,
     799,   800,   801,   802,   803,   804,   805,   806,   807,   808,
     809,   810,   811,   814,   817,   822,   823,   824,   825,   826,
     827,   828,   829,   830,   831,   832,   833,   834,   835,   836,
     837,   840,   841,   842,   845,   846,   847,   848,   849,   852,
     853,   854,   855,   856,   857,   858,   859,   860,   861,   862,
     863,   864,   865,   866,   867,   870,   874,   875,   878,   879,
     880,   881,   883,   886,   887,   888,   889,   890,   891,   892,
     893,   894,   895,   896,   906,   916,   918,   921,   928,   929,
     934,   940,   941,   943,   964,   967,   971,   974,   975,   978,
     979,   980,   984,   989,   990,   991,   992,   996,   997,   999,
    1003,  1007,  1012,  1016,  1020,  1021,  1022,  1027,  1030,  1031,
    1034,  1035,  1036,  1039,  1040,  1043,  1044,  1047,  1048,  1053,
    1054,  1055,  1056,  1063,  1070,  1077,  1084,  1092,  1100,  1101,
    1102,  1103,  1104,  1105,  1109,  1112,  1114,  1116,  1118,  1120,
    1122,  1124,  1126,  1128,  1130,  1132,  1134,  1136,  1138,  1140,
    1142,  1144,  1146,  1150,  1153,  1154,  1157,  1158,  1162,  1163,
    1164,  1169,  1170,  1171,  1173,  1175,  1177,  1178,  1179,  1183,
    1187,  1191,  1195,  1199,  1203,  1207,  1211,  1215,  1219,  1223,
    1227,  1231,  1235,  1239,  1243,  1247,  1251,  1258,  1259,  1261,
    1265,  1266,  1268,  1272,  1273,  1277,  1278,  1281,  1282,  1285,
    1286,  1289,  1290,  1294,  1295,  1296,  1300,  1301,  1302,  1304,
    1308,  1309,  1313,  1319,  1322,  1325,  1328,  1331,  1334,  1337,
    1345,  1348,  1351,  1354,  1357,  1360,  1363,  1367,  1368,  1369,
    1370,  1371,  1372,  1373,  1374,  1383,  1384,  1385,  1392,  1400,
    1408,  1414,  1420,  1426,  1430,  1431,  1433,  1435,  1439,  1445,
    1448,  1449,  1450,  1451,  1452,  1456,  1457,  1460,  1461,  1464,
    1465,  1469,  1470,  1473,  1474,  1477,  1478,  1479,  1483,  1484,
    1485,  1486,  1487,  1488,  1489,  1490,  1493,  1499,  1506,  1507,
    1510,  1511,  1512,  1513,  1517,  1518,  1525,  1531,  1533,  1536,
    1538,  1539,  1541,  1543,  1544,  1545,  1546,  1547,  1548,  1549,
    1550,  1551,  1552,  1553,  1554,  1555,  1556,  1557,  1558,  1559,
    1561,  1563,  1568,  1573,  1576,  1578,  1580,  1581,  1582,  1583,
    1584,  1586,  1588,  1590,  1591,  1593,  1596,  1600,  1601,  1602,
    1603,  1605,  1606,  1607,  1608,  1609,  1610,  1611,  1612,  1615,
    1616,  1619,  1620,  1621,  1622,  1623,  1624,  1625,  1626,  1627,
    1628,  1629,  1630,  1631,  1632,  1633,  1634,  1635,  1636,  1637,
    1638,  1639,  1640,  1641,  1642,  1643,  1644,  1645,  1646,  1647,
    1648,  1649,  1650,  1651,  1652,  1653,  1654,  1655,  1656,  1657,
    1658,  1659,  1660,  1661,  1662,  1663,  1664,  1665,  1666,  1667,
    1671,  1677,  1678,  1679,  1680,  1681,  1682,  1683,  1684,  1685,
    1687,  1689,  1696,  1703,  1709,  1715,  1730,  1745,  1746,  1747,
    1748,  1749,  1750,  1751,  1754,  1755,  1756,  1757,  1758,  1759,
    1760,  1761,  1762,  1763,  1764,  1765,  1766,  1767,  1768,  1769,
    1770,  1771,  1774,  1775,  1778,  1779,  1780,  1781,  1784,  1788,
    1790,  1792,  1793,  1794,  1796,  1805,  1806,  1807,  1810,  1813,
    1818,  1819,  1823,  1824,  1827,  1830,  1831,  1834,  1837,  1840,
    1843,  1847,  1853,  1859,  1865,  1873,  1874,  1875,  1876,  1877,
    1878,  1879,  1880,  1881,  1882,  1883,  1884,  1885,  1886,  1887,
    1891,  1892,  1895,  1898,  1900,  1903,  1905,  1909,  1912,  1916,
    1919,  1923,  1926,  1932,  1934,  1937,  1938,  1941,  1942,  1945,
    1948,  1951,  1952,  1953,  1954,  1955,  1956,  1957,  1958,  1959,
    1960,  1963,  1964,  1967,  1968,  1969,  1970,  1971,  1972,  1973,
    1976,  1977,  1980,  1981,  1983,  1984,  1985,  1986,  1989,  1992,
    1995,  1998,  2000,  2004,  2005,  2008,  2009,  2010,  2011,  2014,
    2017,  2020,  2021,  2022,  2023,  2024,  2025,  2026,  2027,  2028,
    2029,  2032,  2033,  2036,  2037,  2038,  2039,  2041,  2043,  2044,
    2047,  2048,  2052,  2053,  2054,  2057,  2058,  2061,  2062,  2063,
    2064
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
  "\"end of file\"", "error", "\"invalid token\"", "BAD_COMMENT_",
  "BAD_LITERAL_", "ID", "DOTTEDNAME", "QSTRING", "SQSTRING", "INT32_V",
  "INT64_V", "FLOAT64", "HEXBYTE", "TYPEDEF_T", "TYPEDEF_M", "TYPEDEF_F",
  "TYPEDEF_TS", "TYPEDEF_MR", "TYPEDEF_CA", "DCOLON", "ELLIPSIS", "VOID_",
  "BOOL_", "CHAR_", "UNSIGNED_", "INT_", "INT8_", "INT16_", "INT32_",
  "INT64_", "FLOAT_", "FLOAT32_", "FLOAT64_", "BYTEARRAY_", "UINT_",
  "UINT8_", "UINT16_", "UINT32_", "UINT64_", "FLAGS_", "CALLCONV_",
  "MDTOKEN_", "OBJECT_", "STRING_", "NULLREF_", "DEFAULT_", "CDECL_",
  "VARARG_", "STDCALL_", "THISCALL_", "FASTCALL_", "CLASS_", "BYREFLIKE_",
  "TYPEDREF_", "UNMANAGED_", "FINALLY_", "HANDLER_", "CATCH_", "FILTER_",
  "FAULT_", "EXTENDS_", "IMPLEMENTS_", "TO_", "AT_", "TLS_", "TRUE_",
  "FALSE_", "_INTERFACEIMPL", "VALUE_", "VALUETYPE_", "NATIVE_",
  "INSTANCE_", "SPECIALNAME_", "FORWARDER_", "STATIC_", "PUBLIC_",
  "PRIVATE_", "FAMILY_", "FINAL_", "SYNCHRONIZED_", "INTERFACE_",
  "SEALED_", "NESTED_", "ABSTRACT_", "AUTO_", "SEQUENTIAL_", "EXPLICIT_",
  "ANSI_", "UNICODE_", "AUTOCHAR_", "IMPORT_", "ENUM_", "VIRTUAL_",
  "NOINLINING_", "AGGRESSIVEINLINING_", "NOOPTIMIZATION_",
  "AGGRESSIVEOPTIMIZATION_", "UNMANAGEDEXP_", "BEFOREFIELDINIT_",
  "STRICT_", "RETARGETABLE_", "WINDOWSRUNTIME_", "NOPLATFORM_", "METHOD_",
  "FIELD_", "PINNED_", "MODREQ_", "MODOPT_", "SERIALIZABLE_", "PROPERTY_",
  "TYPE_", "ASSEMBLY_", "FAMANDASSEM_", "FAMORASSEM_", "PRIVATESCOPE_",
  "HIDEBYSIG_", "NEWSLOT_", "RTSPECIALNAME_", "PINVOKEIMPL_", "_CTOR",
  "_CCTOR", "LITERAL_", "NOTSERIALIZED_", "INITONLY_", "REQSECOBJ_",
  "CIL_", "OPTIL_", "MANAGED_", "FORWARDREF_", "PRESERVESIG_", "RUNTIME_",
  "INTERNALCALL_", "_IMPORT", "NOMANGLE_", "LASTERR_", "WINAPI_", "AS_",
  "BESTFIT_", "ON_", "OFF_", "CHARMAPERROR_", "INSTR_NONE", "INSTR_VAR",
  "INSTR_I", "INSTR_I8", "INSTR_R", "INSTR_BRTARGET", "INSTR_METHOD",
  "INSTR_FIELD", "INSTR_TYPE", "INSTR_STRING", "INSTR_SIG", "INSTR_TOK",
  "INSTR_SWITCH", "_CLASS", "_NAMESPACE", "_METHOD", "_FIELD", "_DATA",
  "_THIS", "_BASE", "_NESTER", "_EMITBYTE", "_TRY", "_MAXSTACK", "_LOCALS",
  "_ENTRYPOINT", "_ZEROINIT", "_EVENT", "_ADDON", "_REMOVEON", "_FIRE",
  "_OTHER", "_PROPERTY", "_SET", "_GET", "_PERMISSION", "_PERMISSIONSET",
  "REQUEST_", "DEMAND_", "ASSERT_", "DENY_", "PERMITONLY_", "LINKCHECK_",
  "INHERITCHECK_", "REQMIN_", "REQOPT_", "REQREFUSE_", "PREJITGRANT_",
  "PREJITDENY_", "NONCASDEMAND_", "NONCASLINKDEMAND_",
  "NONCASINHERITANCE_", "_LINE", "P_LINE", "_LANGUAGE", "_CUSTOM", "INIT_",
  "_SIZE", "_PACK", "_VTABLE", "_VTFIXUP", "FROMUNMANAGED_",
  "CALLMOSTDERIVED_", "_VTENTRY", "RETAINAPPDOMAIN_", "_FILE",
  "NOMETADATA_", "_TYPEREF", "_HASH", "_ASSEMBLY", "_PUBLICKEY",
  "_PUBLICKEYTOKEN", "ALGORITHM_", "_VER", "_LOCALE", "EXTERN_",
  "_MRESOURCE", "_MODULE", "_EXPORT", "LEGACY_", "LIBRARY_", "X86_",
  "AMD64_", "ARM_", "ARM64_", "MARSHAL_", "CUSTOM_", "SYSSTRING_",
  "FIXED_", "VARIANT_", "CURRENCY_", "SYSCHAR_", "DECIMAL_", "DATE_",
  "BSTR_", "TBSTR_", "LPSTR_", "LPWSTR_", "LPTSTR_", "OBJECTREF_",
  "IUNKNOWN_", "IDISPATCH_", "STRUCT_", "SAFEARRAY_", "BYVALSTR_",
  "LPVOID_", "ANY_", "ARRAY_", "LPSTRUCT_", "IIDPARAM_", "IN_", "OUT_",
  "OPT_", "_PARAM", "_OVERRIDE", "WITH_", "NULL_", "ERROR_", "HRESULT_",
  "CARRAY_", "USERDEFINED_", "RECORD_", "FILETIME_", "BLOB_", "STREAM_",
  "STORAGE_", "STREAMED_OBJECT_", "STORED_OBJECT_", "BLOB_OBJECT_", "CF_",
  "CLSID_", "VECTOR_", "_SUBSYSTEM", "_CORFLAGS", "ALIGNMENT_",
  "_IMAGEBASE", "_STACKRESERVE", "_TYPEDEF", "_TEMPLATE", "_TYPELIST",
  "_MSCORLIB", "P_DEFINE", "P_UNDEF", "P_IFDEF", "P_IFNDEF", "P_ELSE",
  "P_ENDIF", "P_INCLUDE", "CONSTRAINT_", "'{'", "'}'", "'+'", "','", "'.'",
  "'('", "')'", "';'", "'='", "'['", "']'", "'<'", "'>'", "'-'", "':'",
  "'*'", "'&'", "'/'", "'!'", "$accept", "decls", "decl", "classNameSeq",
  "compQstring", "languageDecl", "id", "dottedName", "int32", "int64",
  "float64", "typedefDecl", "compControl", "customDescr",
  "customDescrWithOwner", "customHead", "customHeadWithOwner",
  "customType", "ownerType", "customBlobDescr", "customBlobArgs",
  "customBlobNVPairs", "fieldOrProp", "customAttrDecl", "serializType",
  "moduleHead", "vtfixupDecl", "vtfixupAttr", "vtableDecl", "vtableHead",
  "nameSpaceHead", "_class", "classHeadBegin", "classHead", "classAttr",
  "extendsClause", "implClause", "classDecls", "implList", "typeList",
  "typeListNotEmpty", "typarsClause", "typarAttrib", "typarAttribs",
  "typars", "typarsRest", "tyBound", "genArity", "genArityNotEmpty",
  "classDecl", "fieldDecl", "fieldAttr", "atOpt", "initOpt", "repeatOpt",
  "methodRef", "callConv", "callKind", "mdtoken", "memberRef", "eventHead",
  "eventAttr", "eventDecls", "eventDecl", "propHead", "propAttr",
  "propDecls", "propDecl", "methodHeadPart1", "marshalClause",
  "marshalBlob", "marshalBlobHead", "methodHead", "methAttr", "pinvAttr",
  "methodName", "paramAttr", "implAttr", "localsHead", "methodDecls",
  "methodDecl", "scopeBlock", "scopeOpen", "sehBlock", "sehClauses",
  "tryBlock", "tryHead", "sehClause", "filterClause", "filterHead",
  "catchClause", "finallyClause", "faultClause", "handlerBlock",
  "dataDecl", "ddHead", "tls", "ddBody", "ddItemList", "ddItemCount",
  "ddItem", "fieldSerInit", "bytearrayhead", "bytes", "hexbytes",
  "fieldInit", "serInit", "f32seq", "f64seq", "i64seq", "i32seq", "i16seq",
  "i8seq", "boolSeq", "sqstringSeq", "classSeq", "objSeq", "methodSpec",
  "instr_none", "instr_var", "instr_i", "instr_i8", "instr_r",
  "instr_brtarget", "instr_method", "instr_field", "instr_type",
  "instr_string", "instr_sig", "instr_tok", "instr_switch", "instr_r_head",
  "instr", "labels", "tyArgs0", "tyArgs1", "tyArgs2", "sigArgs0",
  "sigArgs1", "sigArg", "className", "slashedName", "typeSpec",
  "nativeType", "iidParamIndex", "variantType", "type", "simpleType",
  "bounds1", "bound", "secDecl", "secAttrSetBlob", "secAttrBlob",
  "psetHead", "nameValPairs", "nameValPair", "truefalse", "caValue",
  "secAction", "esHead", "extSourceSpec", "fileDecl", "fileAttr",
  "fileEntry", "hashHead", "assemblyHead", "asmAttr", "assemblyDecls",
  "assemblyDecl", "intOrWildcard", "asmOrRefDecl", "publicKeyHead",
  "publicKeyTokenHead", "localeHead", "assemblyRefHead",
  "assemblyRefDecls", "assemblyRefDecl", "exptypeHead", "exportHead",
  "exptAttr", "exptypeDecls", "exptypeDecl", "manifestResHead",
  "manresAttr", "manifestResDecls", "manifestResDecl", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-1305)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-559)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -1305,  1183, -1305, -1305,   -84,   728, -1305,  -134,   154,  2929,
    2929, -1305, -1305,   258,   822,  -121,  -100,    54,   105, -1305,
     252,   286,   286,   352,   352,  1693,    41, -1305,   728,   728,
     728,   728, -1305, -1305,   338, -1305, -1305, -1305, -1305, -1305,
   -1305, -1305,   374,   374, -1305, -1305, -1305, -1305,   374,   198,
   -1305,   331,   203, -1305, -1305, -1305, -1305,   717, -1305,   374,
     286, -1305, -1305,   226,   233,   241,   257, -1305, -1305, -1305,
   -1305, -1305,   176,   286, -1305, -1305, -1305,   516, -1305, -1305,
   -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305,
   -1305, -1305, -1305,  1997,    62,   179, -1305, -1305,   263,   270,
   -1305, -1305,   463,  1278,  1278,  1938,   251, -1305,  2951, -1305,
   -1305,   278,   286,   286,   246, -1305,  1270,   512,   728,   176,
   -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305,  2951,
   -1305, -1305, -1305,   992, -1305, -1305, -1305, -1305, -1305, -1305,
   -1305, -1305, -1305, -1305, -1305, -1305,   489, -1305,   432,   489,
     380, -1305,  2330, -1305, -1305, -1305,    97,    46,   176,   439,
     454, -1305,   466,  2204,   468,   307,   560, -1305,   489,    64,
     176,   176,   176, -1305, -1305,   327,   625,   387,   409, -1305,
    3340,  1997,   615, -1305,  3467,  2370,   416,    15,    37,   197,
     237,   265,   271,   447,   741,   459, -1305, -1305,   374,   460,
      51, -1305, -1305, -1305, -1305,   586,   728,   480,  2740,   465,
     135, -1305,  1278, -1305,   375,   613, -1305,   510,   -70,   526,
     824,   286,   286, -1305, -1305, -1305, -1305, -1305, -1305,   541,
   -1305, -1305,    32,  1028, -1305,   535, -1305, -1305,   -58,  1270,
   -1305, -1305, -1305, -1305,   622, -1305, -1305, -1305, -1305,   176,
   -1305, -1305,     8,   176,   613, -1305, -1305, -1305, -1305, -1305,
     489, -1305,   825, -1305, -1305, -1305, -1305,  1634,   728,   558,
      56,   564,   604,   176, -1305,   728,   728,   728, -1305,  2951,
     728,   728, -1305,   573,   575,   728,    95,  2951, -1305, -1305,
     584,   489,   526, -1305, -1305, -1305, -1305,  2888,   593, -1305,
   -1305, -1305, -1305, -1305, -1305,   847, -1305, -1305, -1305, -1305,
   -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305,    91,
   -1305,  1997, -1305,  3032,   596, -1305, -1305, -1305, -1305, -1305,
   -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305,
   -1305, -1305,   600, -1305, -1305, -1305, -1305, -1305, -1305, -1305,
   -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305,   286, -1305,
     286, -1305, -1305, -1305,   286,   606,    29,  2109, -1305, -1305,
   -1305,   599, -1305, -1305,    18, -1305, -1305, -1305, -1305,   588,
     155, -1305, -1305,   591,   286,   352,   288,   591,  2204,  1129,
    1997,   191,  1278,  1938,   618,   374, -1305, -1305, -1305,   630,
     286,   286, -1305,   286, -1305,   286, -1305,   352, -1305,   254,
   -1305,   254, -1305, -1305,   629,   633,   516,   631, -1305, -1305,
   -1305,   286,   286,  1609,  1329,  1626,  1013, -1305, -1305, -1305,
     870,   176,   176, -1305,   634, -1305, -1305, -1305, -1305, -1305,
   -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305,   637,    76,
   -1305,   728,   123,  2951,   930,   652, -1305,  2160, -1305,   937,
     655,   654,   656,  2204, -1305, -1305,   526, -1305, -1305,   201,
      30,   650,   948, -1305, -1305,   747,     9, -1305,   728, -1305,
   -1305,    30,   952,   139,   728,   728,   728,   176, -1305,   176,
     176,   176,  1529,   176,   176,  1997,  1997,   176, -1305, -1305,
     949,    96, -1305,   673,   680,   613, -1305, -1305, -1305,   286,
   -1305, -1305, -1305, -1305, -1305, -1305,   500, -1305,   685, -1305,
     869, -1305, -1305, -1305,   286,   286, -1305,   -54,  2271, -1305,
   -1305, -1305, -1305,   695, -1305, -1305,   696,   700, -1305, -1305,
   -1305, -1305,   701,   286,   930,  2844, -1305, -1305,   693,   286,
      58,   113,   286,  1278,   982, -1305,   710,    77,  2455, -1305,
    1997, -1305, -1305, -1305,   588,    21,   155,    21,    21,    21,
     944,   947, -1305, -1305, -1305, -1305, -1305, -1305,   719,   721,
   -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305,  1634,
   -1305,   727,   526,   374,  2951, -1305,   591,   729,   930,   730,
     713,   732,   733,   734,   736,   739, -1305,   741,   744, -1305,
     720,    49,   728,   829,   745,    35,    40, -1305, -1305, -1305,
   -1305, -1305, -1305,   374,   374, -1305,   748,   755, -1305,   374,
   -1305,   374, -1305,   750,   101,   728,   842, -1305, -1305, -1305,
   -1305,   728,   845, -1305, -1305, -1305, -1305, -1305, -1305, -1305,
   -1305, -1305, -1305,   286,  3365,    31,   166,   728,   905,    14,
     766,   774, -1305,   718,   770,   789,   793, -1305,  1074, -1305,
   -1305,   790,   804,  1396,  2895,   794,   808,   502,   611,   374,
     728,   176,   728,   728,   307,   307,   307,   811,   817,   831,
     286,   230, -1305, -1305,  2951,   840,   844, -1305, -1305, -1305,
   -1305, -1305, -1305,   500,   125,   838,  1997,  1997,  1835,  1281,
   -1305, -1305,   586,   142,   148,  1278,  1122, -1305, -1305, -1305,
    2540, -1305,   858,    13,   712,   224,   521,   286,   843,   286,
     176,   286,   164,   859,  2951,   502,    77, -1305,  2844,   866,
     875, -1305, -1305, -1305, -1305,   591, -1305, -1305, -1305, -1305,
   -1305, -1305, -1305, -1305,   516,   286,   286,   352,    30,  1144,
     930,   877,   671,   881,   882,   885, -1305,   -15,   878, -1305,
     878,   878,   878,   878,   878, -1305, -1305,   286, -1305,   286,
     180,   286,   889, -1305, -1305,   886,   896,   526,   897,   904,
     908,   912,   916,   917,   286,   728, -1305,   176,   728,    57,
     728,   919, -1305, -1305, -1305,   855, -1305, -1305, -1305, -1305,
   -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305,   913,   973,
     986, -1305,   970,   927,    20,  1202, -1305, -1305, -1305, -1305,
   -1305, -1305, -1305, -1305, -1305, -1305,   913,   913, -1305,  3003,
   -1305, -1305, -1305, -1305,   931,   374,   200,   516,   943,   728,
     520, -1305,   930,   951,   945,   954, -1305,  2160, -1305,    53,
   -1305,   294,   321,  1046,   330,   336,   343,   365,   383,   389,
     396,   403,   411,   418,   458,   476,   486, -1305,  1644, -1305,
     374, -1305,   286,   946,    77,    77,   176,   650, -1305, -1305,
     516, -1305, -1305, -1305,   953,   176,   176,   307,    77, -1305,
   -1305, -1305, -1305,   613, -1305,   286, -1305,  1997,   210,   728,
   -1305, -1305,  1049, -1305, -1305,   492,   728, -1305, -1305,  2951,
     176,   286,   176,   286,   399,  2951,   502,  3179,  1120,  2045,
   -1305,  2206, -1305,   930,   950,   955, -1305, -1305, -1305, -1305,
   -1305, -1305, -1305, -1305, -1305, -1305,   956,   959, -1305,   964,
     965,   972,   977,   957,   502, -1305,  1111,   985,   987,  1997,
     943,  1634, -1305,   958,   521, -1305,  1231,  1191,  1193, -1305,
   -1305,   960,   963,   728,   498, -1305,    77,   591,   591, -1305,
   -1305, -1305, -1305, -1305, -1305, -1305, -1305,    79,  1274,   728,
    1225,    27, -1305, -1305,    35, -1305, -1305, -1305, -1305, -1305,
   -1305, -1305,   998,   307,   176,   286,   176, -1305, -1305, -1305,
   -1305, -1305, -1305,  1053, -1305, -1305, -1305, -1305,   930,  1006,
    1007, -1305, -1305, -1305, -1305, -1305,   872, -1305, -1305, -1305,
   -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305,
   -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305,
   -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305,
   -1305, -1305, -1305, -1305, -1305,   302, -1305,    55,    87, -1305,
   -1305,  2549, -1305,  1012, -1305, -1305,   526, -1305,  1014, -1305,
   -1305, -1305, -1305,  1018, -1305, -1305, -1305, -1305,   526,   662,
     286,   286,   286,   503,   522,   539,   549,   286,   286,   286,
     286,   286,   286,   352,   286,   367,   286,   798,   286,   286,
     286,   286,   286,   286,   286,   352,   286,  2443,   286,   211,
     286,   681,   286, -1305, -1305, -1305,  2419,  1015,  1017, -1305,
    1016,  1023,  1025,  1027, -1305,  1158,  1034,  1047,  1050,  1052,
   -1305,   500, -1305,   210,  2204, -1305,   176,    76,  1042,  1048,
    1997,  1634,  1094, -1305,  2204,  2204,  2204,  2204, -1305, -1305,
   -1305, -1305, -1305, -1305,  2204,  2204,  2204, -1305, -1305, -1305,
   -1305, -1305, -1305, -1305,   526, -1305,   286,   443,   658, -1305,
   -1305, -1305, -1305,  3365,  1055,   516, -1305,  1058, -1305, -1305,
    1335, -1305,   516, -1305,   516,   286, -1305, -1305,   176, -1305,
    1061, -1305, -1305, -1305,   286, -1305,   176,   728, -1305,  1177,
    1057, -1305, -1305,  1067,   531,   286,   286, -1305, -1305, -1305,
   -1305, -1305, -1305,   930,  1063, -1305, -1305,   286, -1305,    -9,
    1071,  1073,  1065,  1078,  1079,  1085,  1086,  1087,  1090,  1091,
    1092,  1093,  1095, -1305,   526, -1305, -1305,   286,   529, -1305,
    1491,  1100,  1096,  1069,  1098,  1109,   286,   286,   286,   286,
     286,   286,   352,   286,  1114,  1112,  1119,  1116,  1125,  1126,
    1134,  1135,  1145,  1147,  1140,  1148,  1149,  1150,  1153,  1151,
    1156,  1154,  1157,  1155,  1162,  1172,  1166,  1173,  1178,  1179,
    1176,  1181,  1388,  1182,  1184, -1305,    85, -1305,   181, -1305,
   -1305,  1180, -1305, -1305,    77,    77, -1305, -1305, -1305, -1305,
    1997, -1305, -1305,   578, -1305,  1186, -1305,  1462,  1278, -1305,
   -1305, -1305, -1305, -1305, -1305, -1305,  1146,  1189, -1305, -1305,
   -1305, -1305,  1190,  1192, -1305,  1997,   502, -1305, -1305, -1305,
   -1305,  1480,   176, -1305,    35,   286,   930,  1196,  1197,   526,
   -1305,  1199,   286, -1305,  1194,  1205,  1206,  1207,  1212,  1209,
    1210,  1211,  1220,  1524, -1305, -1305, -1305,  1222, -1305,  1223,
    1226,  1221,  1227,  1224,  1230,  1228,  1233,  1236, -1305,  1232,
   -1305,  1235, -1305,  1244, -1305,  1251, -1305, -1305,  1252, -1305,
   -1305,  1259, -1305,  1264, -1305,  1267, -1305,  1268, -1305,  1273,
   -1305,  1279, -1305, -1305,  1280, -1305,  1277, -1305,  1282,  1568,
   -1305,  1283,   557, -1305,  1285,  1288, -1305,    77,  1997,   502,
    2951, -1305, -1305, -1305,    77, -1305,  1284, -1305,  1275,  1290,
     248, -1305,  3453, -1305,  1287, -1305,   286,   286,   286, -1305,
   -1305, -1305, -1305, -1305,  1293, -1305,  1294, -1305,  1296, -1305,
    1297, -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305,
   -1305, -1305, -1305, -1305, -1305, -1305, -1305,  2443, -1305, -1305,
    1300, -1305,  1284,  1634,  1305,  1303,  1298, -1305,    35, -1305,
     930, -1305,   200, -1305,  1307,  1308,  1309,   147,   146, -1305,
   -1305, -1305, -1305,   165,   169,   175,   107,   185,    69,   186,
     188,   193,   152,  2053,    45,   129, -1305,   943,  1311,  1559,
   -1305,    77, -1305,   614, -1305, -1305, -1305, -1305, -1305, -1305,
   -1305,   194,   195,   202,   182, -1305, -1305, -1305, -1305, -1305,
   -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305,
   -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305,  1599, -1305,
   -1305, -1305,    77,   502,  1673,  1312,   930, -1305, -1305, -1305,
   -1305, -1305,  1313,  1315,  1323, -1305, -1305, -1305, -1305, -1305,
   -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305,
   -1305,   561,  1363,    77,   286, -1305,  1518,  1326,  1327,  1278,
   -1305, -1305,  2951,  1634,  1605,   502,  1284,  1330,    77,  1333,
   -1305
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,     0,     1,    86,   106,     0,   265,   209,   390,     0,
       0,   760,   761,     0,   222,     0,     0,   775,   781,   842,
      93,     0,     0,     0,     0,     0,     0,    29,     0,     0,
       0,     0,    58,    59,     0,    61,     3,    25,    26,    27,
      84,    85,   434,   434,    19,    17,    10,     9,   434,     0,
     109,   136,     0,     7,   272,   336,     8,     0,    18,   434,
       0,    11,    12,     0,     0,     0,     0,   821,    37,    40,
      38,    39,   105,     0,   189,   391,   392,   389,   745,   746,
     747,   748,   749,   750,   751,   752,   753,   754,   755,   756,
     757,   758,   759,     0,     0,    34,   216,   217,     0,     0,
     223,   224,   229,   222,   222,     0,    62,    72,     0,   220,
     215,     0,     0,     0,     0,   781,     0,     0,     0,    94,
      42,    20,    21,    44,    43,    23,    24,   554,   711,     0,
     688,   696,   694,     0,   697,   698,   699,   700,   701,   702,
     707,   708,   709,   710,   671,   695,     0,   687,     0,     0,
       0,   492,     0,   555,   556,   557,     0,     0,   558,     0,
       0,   236,     0,   222,     0,   552,     0,   692,    30,    53,
      55,    56,    57,    60,   436,     0,   435,     0,     0,     2,
       0,     0,   138,   140,   222,     0,     0,   397,   397,   397,
     397,   397,   397,     0,     0,     0,   387,   394,   434,     0,
     763,   791,   813,   831,   845,     0,     0,     0,     0,     0,
       0,   553,   222,   560,   721,   563,    32,     0,     0,   723,
       0,     0,     0,   225,   226,   227,   228,   218,   219,     0,
      74,    73,     0,     0,   104,     0,    22,   776,   777,     0,
     782,   783,   784,   786,     0,   787,   788,   789,   790,   780,
     843,   844,   840,    95,   693,   703,   704,   705,   706,   670,
       0,   673,     0,   689,   691,   234,   235,     0,     0,     0,
       0,     0,     0,   686,   684,     0,     0,     0,   231,     0,
       0,     0,   678,     0,     0,     0,   714,   537,   677,   676,
       0,    30,    54,    65,   437,    69,   103,     0,     0,   112,
     133,   110,   111,   114,   115,     0,   116,   117,   118,   119,
     120,   121,   122,   123,   113,   132,   125,   124,   134,   148,
     137,     0,   108,     0,     0,   278,   273,   274,   275,   276,
     277,   281,   279,   289,   280,   282,   283,   284,   285,   286,
     287,   288,     0,   290,   314,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,     0,   372,
       0,   335,   343,   344,     0,     0,     0,     0,   365,     6,
     350,     0,   352,   351,     0,   337,   358,   336,   339,     0,
       0,   345,   507,     0,     0,     0,     0,     0,   222,     0,
       0,     0,   222,     0,     0,   434,   346,   348,   349,     0,
       0,     0,   413,     0,   412,     0,   411,     0,   410,     0,
     408,     0,   409,   433,     0,   396,     0,     0,   722,   772,
     762,     0,     0,     0,     0,     0,     0,   824,   823,   822,
       0,   819,    41,   210,     0,   196,   190,   191,   192,   193,
     198,   199,   200,   201,   195,   202,   203,   194,     0,     0,
     388,     0,     0,     0,     0,     0,   731,   725,   730,     0,
      35,     0,     0,   222,    76,    70,    63,   311,   312,   714,
     313,   535,     0,    97,   778,   774,   811,   785,     0,   672,
     690,   233,     0,     0,     0,     0,     0,   685,   683,    51,
      52,    50,     0,    49,   559,     0,     0,    48,   715,   674,
     716,     0,   712,     0,   538,   539,    28,    31,     5,     0,
     126,   127,   128,   129,   130,   131,   157,   107,   139,   143,
       0,   106,   239,   253,     0,     0,   821,     0,     0,     4,
     181,   182,   175,     0,   141,   171,     0,     0,   336,   172,
     173,   174,     0,     0,   295,     0,   338,   340,     0,     0,
       0,     0,     0,   222,     0,   347,     0,   314,     0,   382,
       0,   380,   383,   366,   368,     0,     0,     0,     0,     0,
       0,     0,   369,   509,   508,   510,   511,    45,     0,     0,
     506,   513,   512,   516,   515,   517,   521,   522,   520,     0,
     523,     0,   524,   434,     0,   528,   530,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   393,     0,     0,   401,
       0,   765,     0,     0,     0,     0,     0,    13,   807,   806,
     794,   792,   795,   434,   434,   818,     0,     0,    14,   434,
     816,   434,   814,     0,     0,     0,     0,    15,   839,   838,
     832,     0,     0,    16,   850,   849,   846,   825,   826,   827,
     828,   829,   830,     0,   564,   205,     0,   561,     0,     0,
       0,   732,    76,     0,     0,     0,   726,    33,     0,   221,
     230,    66,     0,    79,   537,     0,     0,     0,     0,   434,
       0,   841,     0,     0,   550,   548,   549,   677,     0,     0,
     718,   714,   675,   682,     0,     0,     0,   152,   154,   153,
     155,   150,   151,   157,     0,     0,     0,     0,     0,   222,
     176,   177,     0,     0,     0,   222,     0,   140,   242,   256,
       0,   831,     0,   295,     0,     0,   266,     0,     0,     0,
     360,     0,     0,     0,     0,     0,   314,   545,     0,     0,
     542,   543,   364,   381,   367,     0,   384,   374,   378,   379,
     377,   373,   375,   376,     0,     0,     0,     0,   519,     0,
       0,     0,     0,   533,   534,     0,   514,     0,   397,   398,
     397,   397,   397,   397,   397,   395,   400,     0,   764,     0,
       0,     0,     0,   801,   800,     0,     0,   804,     0,     0,
       0,     0,     0,     0,     0,     0,   837,   833,     0,     0,
       0,     0,   618,   572,   573,     0,   607,   574,   575,   576,
     577,   578,   579,   609,   585,   586,   587,   588,   619,     0,
       0,   615,     0,     0,     0,   569,   570,   571,   594,   595,
     596,   613,   597,   598,   599,   600,   619,   619,   603,   621,
     611,   617,   580,   270,     0,     0,   268,     0,   207,   562,
       0,   719,     0,     0,    38,     0,   724,   725,    36,     0,
      64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,    75,   441,
     434,    77,     0,     0,   314,   314,   313,   535,    98,    99,
       0,   100,   101,   102,     0,   812,   232,   551,   314,   679,
     680,   717,   713,   540,   135,     0,   158,   144,   161,     0,
     149,   142,     0,   241,   240,   558,     0,   255,   254,     0,
     820,     0,   184,     0,     0,     0,     0,     0,     0,     0,
     167,     0,   291,     0,     0,     0,   302,   303,   304,   305,
     297,   298,   299,   296,   300,   301,     0,     0,   294,     0,
       0,     0,     0,     0,     0,   355,   353,     0,     0,     0,
     207,     0,   356,     0,   266,   341,   314,     0,     0,   370,
     371,     0,     0,     0,     0,   526,   314,   530,   530,   529,
     399,   407,   406,   405,   404,   402,   403,   769,   767,     0,
       0,     0,   793,   808,     0,   810,   802,   805,   779,   809,
     815,   817,     0,   834,   835,     0,   848,   204,   608,   581,
     582,   583,   584,     0,   604,   610,   612,   616,     0,     0,
       0,   614,   601,   602,   625,   626,     0,   653,   627,   628,
     629,   630,   631,   632,   655,   637,   638,   639,   640,   623,
     624,   645,   646,   647,   648,   649,   650,   651,   652,   622,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   641,   605,   197,     0,     0,   589,
     206,     0,   188,     0,   735,   736,   740,   738,     0,   737,
     734,   733,   720,     0,    79,   727,    76,    71,    67,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    82,    83,    81,     0,     0,     0,   536,
       0,     0,     0,     0,    96,   777,     0,     0,     0,   145,
     146,   157,   160,   161,   222,   187,   237,     0,     0,     0,
       0,     0,     0,   168,   222,   222,   222,   222,   169,   250,
     251,   249,   243,   248,   222,   222,   222,   170,   263,   264,
     261,   257,   262,   178,   295,   293,     0,     0,     0,   315,
     316,   317,   318,   564,   148,     0,   359,     0,   362,   363,
       0,   342,   546,   544,     0,     0,    46,    47,   518,   525,
       0,   531,   532,   768,     0,   766,   796,     0,   798,     0,
       0,   836,   847,     0,     0,     0,     0,   654,   633,   634,
     635,   636,   643,     0,     0,   644,   269,     0,   590,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   440,   439,   438,   208,     0,     0,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    89,     0,    88,     0,    87,
     432,     0,   214,   213,   314,   314,   773,   681,   156,   163,
       0,   162,   159,     0,   183,     0,   186,     0,   222,   244,
     245,   246,   247,   260,   258,   259,     0,     0,   306,   307,
     308,   309,     0,     0,   354,     0,     0,   547,   385,   386,
     527,   771,   797,   799,     0,     0,     0,     0,     0,   606,
     642,     0,     0,   591,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   728,    68,   431,     0,   430,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   421,     0,
     420,     0,   419,     0,   418,     0,   416,   414,     0,   417,
     415,     0,   429,     0,   428,     0,   427,     0,   426,     0,
     447,     0,   443,   442,     0,   446,     0,   445,     0,     0,
      91,     0,     0,   166,     0,     0,   147,   314,     0,     0,
       0,   292,   310,   267,   314,   361,   164,   770,     0,     0,
       0,   567,   564,   593,     0,   739,     0,     0,     0,   744,
     729,   481,   477,   425,     0,   424,     0,   423,     0,   422,
       0,   479,   477,   475,   473,   467,   470,   479,   477,   475,
     473,   490,   483,   444,   486,    90,    92,     0,   212,   211,
       0,   185,   164,     0,     0,     0,     0,   165,     0,   620,
       0,   566,   568,   592,     0,     0,     0,     0,     0,   479,
     477,   475,   473,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,   207,     0,     0,
     319,   314,   803,     0,   741,   742,   743,   463,   482,   462,
     478,     0,     0,     0,     0,   453,   480,   452,   451,   476,
     450,   474,   448,   469,   468,   449,   472,   471,   457,   456,
     455,   454,   466,   491,   485,   484,   464,   487,     0,   465,
     489,   252,   314,     0,     0,     0,     0,   461,   460,   459,
     458,   488,     0,     0,     0,   324,   320,   329,   330,   331,
     332,   333,   321,   322,   323,   325,   326,   327,   328,   271,
     357,     0,     0,   314,     0,   565,     0,     0,     0,   222,
     179,   334,     0,     0,     0,     0,   164,     0,   314,     0,
     180
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1305,  1451, -1305,  1340,   -44,     7,   -16,    -5,    10,    22,
    -393, -1305,    12,   -18,  1612, -1305, -1305,  1175,  1248,  -627,
   -1305, -1022, -1305,    26, -1305, -1305, -1305, -1305, -1305, -1305,
   -1305, -1305, -1305,  -312, -1305, -1305, -1305,   926, -1305, -1305,
   -1305,   461, -1305,   961,   505,   508, -1305, -1304,  -431, -1305,
    -309, -1305, -1305,  -939, -1305,  -162,   -98, -1305,    74,  1627,
   -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305,   689,
     485, -1305,  -303, -1305,  -689,  -667,  1342, -1305, -1305,  -285,
   -1305,  -157, -1305, -1305,  1110, -1305, -1305, -1305, -1305, -1305,
   -1305, -1305, -1305,   243,    11, -1305, -1305, -1305,  1066,  -116,
    1602,   620,   -28,   -26,   849, -1305, -1079, -1305, -1305, -1270,
   -1230, -1151, -1216, -1305, -1305, -1305, -1305,    23, -1305, -1305,
   -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305,
   -1305, -1305, -1305,   -68,   805,  1021, -1305,  -727, -1305,   731,
     -22,  -443,   -74,   264,    80, -1305,   -23,   574, -1305,  1019,
       3,   848, -1305, -1305,   856, -1305, -1053, -1305,  1697, -1305,
      36, -1305, -1305,   576,  1243, -1305,  1608, -1305, -1305,  -964,
    1302, -1305, -1305, -1305, -1305, -1305, -1305, -1305, -1305,  1216,
    1011, -1305, -1305, -1305, -1305, -1305
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,    36,   290,   659,   370,    71,   158,   784,  1531,
     582,    38,   372,    40,    41,    42,    43,   106,   229,   672,
     673,   878,  1126,   373,  1298,    45,    46,   678,    47,    48,
      49,    50,    51,    52,   180,   182,   322,   323,   518,  1138,
    1139,   517,   703,   704,   705,  1142,   909,  1476,  1477,   534,
      53,   208,   848,  1072,    74,   107,   108,   109,   211,   230,
     536,   708,   928,  1162,   537,   709,   929,  1171,    54,   954,
     844,   845,    55,   184,   724,   471,   738,  1554,   374,   185,
     375,   746,   377,   378,   563,   379,   380,   564,   565,   566,
     567,   568,   569,   747,   381,    57,    77,   196,   414,   402,
     415,   879,   880,   175,   176,  1246,   881,  1497,  1498,  1496,
    1495,  1488,  1493,  1487,  1504,  1505,  1503,   212,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   765,   676,   503,   504,   739,   740,   741,
     213,   165,   231,   846,  1014,  1065,   215,   167,   501,   502,
     397,   665,   666,    59,   660,   661,  1079,  1080,    93,    60,
     398,    62,   114,   475,   629,    63,   116,   423,   621,   785,
     622,   623,   631,   624,    64,   424,   632,    65,   542,   205,
     425,   640,    66,   117,   426,   646
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      72,   278,   166,   164,    58,   227,   228,   159,    37,   963,
     887,   533,    56,    39,   535,   119,   604,   177,   605,   214,
     538,  1189,   178,   169,   170,   171,   172,    44,   376,   198,
    1210,   121,   122,   199,   934,   853,  1252,    61,  1286,   216,
     675,   684,   685,   686,   120,   125,   126,   216,   163,  -558,
     219,    68,    69,  1544,    70,   120,   713,   778,   419,   420,
     216,   209,  1250,    68,    69,   279,    70,   294,   962,   216,
     200,   216,   404,   406,   408,   410,   412,   745,   123,   124,
     577,    68,    69,   207,    70,   233,   344,  1203,   110,  1545,
      68,    69,   558,    70,   847,   217,   120,   737,   127,   161,
     578,   579,    68,    69,   120,    70,   254,   320,   474,   238,
     120,   249,   252,   253,   453,   498,   123,   124,    68,    69,
    1005,    70,   235,   236,   259,   292,    99,   261,   163,   267,
      68,    69,    67,    70,    68,    69,  1409,    70,    99,   550,
      68,    69,   127,    70,   478,   680,   291,    68,    69,   933,
      70,   270,   273,    68,    69,   120,    70,  1130,  1131,   472,
      68,   123,   124,    70,   120,    73,   198,   274,  1508,   371,
      99,  1136,   417,  1547,   120,   319,    99,   111,   120,   161,
    1548,   282,   283,   284,   120,   449,    68,    69,   466,    70,
    1502,   123,   124,   482,   120,   120,   577,   120,   216,   112,
     431,   432,   120,   120,   120,   452,    68,    69,  1208,    70,
     120,   120,  1074,  1075,   685,   556,   578,   579,    75,  1288,
     457,   498,  1524,   572,   193,   458,   585,  1363,   470,  1501,
     271,   461,   462,   120,   476,   714,   206,   110,   479,   120,
     897,  1499,    99,   989,   153,   154,   155,   519,  1019,  1200,
     498,    68,    69,   720,    70,  1289,   492,    68,    69,  1152,
      70,  1523,   481,   483,   505,   577,    95,   487,  1020,   291,
     489,   490,   491,  1521,  1209,   493,   494,   459,   591,    76,
     497,   980,   488,  1352,   271,   578,   579,  1184,   153,   154,
     155,  1353,  1597,   554,   594,   120,   500,   123,   124,   577,
      58,  1494,   206,   206,    37,   459,   459,  1500,    56,    39,
     400,   368,   850,   557,   401,   268,   590,   795,   551,   578,
     579,   115,   464,    44,   206,   206,   540,   465,   552,   113,
     530,   168,   403,    61,   539,   531,   401,  -558,   786,  1522,
     783,  1546,   779,  1086,   421,   173,  1226,   592,  1087,   532,
     206,   206,  1003,   451,   272,   422,   485,   729,   206,   541,
     218,   123,   124,   593,   570,  1535,   589,   573,   546,   597,
     547,   583,  1204,  -541,   548,   286,   120,   287,   577,  1227,
    1428,   288,   289,   664,   156,   206,   174,  1228,  1506,   691,
     571,   181,   516,   574,   575,   499,   692,   584,   578,   579,
     608,   376,   269,  1530,   262,   263,   897,   576,   581,   750,
     599,   600,   731,   601,   264,   602,   163,   206,   472,   451,
     907,   688,   689,   657,  1543,  1549,   620,   990,   156,   603,
     658,   610,   611,   206,  1518,   618,   618,   638,   644,   683,
     269,   921,  1519,  1517,   655,   368,   656,   923,  1541,   619,
     619,   639,   645,   237,   716,   734,  1132,   959,   206,  1251,
     206,  1525,   110,   588,   452,  1527,   849,   161,   118,   991,
     206,  1528,   220,   681,   206,   949,   950,   951,  1560,   500,
    1411,  1532,  1538,   260,  1539,  1326,   743,   470,   179,  1540,
    1557,  1558,   405,   183,    68,    69,   401,    70,  1559,  1068,
     723,   499,   127,  1141,   206,  1069,   269,    68,    69,   223,
      70,   224,   225,   226,  1512,   759,   201,    68,    69,   695,
      70,    68,   726,   202,    70,    68,    69,   216,    70,   120,
      99,   203,   407,   127,   710,   711,   401,   110,   120,   696,
     459,  1480,   371,   271,  1481,   730,   732,   204,  1073,   232,
     748,   697,   698,   722,   767,  1359,  1360,  1361,   221,   728,
     409,    99,   733,   376,   401,   222,   411,   761,  1551,   699,
     401,   762,   787,   234,  1222,   275,   749,  1414,  1415,   198,
     763,  1328,  1329,   580,   758,  1074,  1075,   250,   251,  1089,
     276,    68,    69,  1090,    70,  1223,    68,   788,   789,    70,
     120,  1224,   277,   792,   280,   793,   764,   780,  1225,    68,
      69,   919,    70,   120,   281,   533,  1091,   925,   535,   700,
    1092,   467,   468,   293,   538,  1097,   282,   283,   284,  1098,
     797,  1099,   911,   912,   916,  1100,   799,   294,  1101,   888,
     889,   259,  1102,   559,   796,   560,   561,   562,   153,   154,
     155,   505,   981,   894,   982,   983,   984,   985,   986,   427,
    1103,   428,   429,   801,  1104,   282,   283,   284,   430,  1426,
     454,   903,   886,   455,   890,   895,   321,   896,  1105,   153,
     154,   155,  1106,   295,  1107,   877,    68,    69,  1108,    70,
    1470,  1109,  1150,   206,   127,  1110,   285,  1474,  1111,   908,
     901,   500,  1112,   915,   371,   296,  1113,   920,   922,   924,
    1114,   961,  1273,  1115,  1276,   964,   974,  1116,   282,   283,
     284,   399,    99,    68,    69,  1291,   854,  1074,  1075,   967,
     886,   127,  1292,    68,    69,   952,    70,   955,   969,   957,
     186,   958,   413,   187,   188,   189,   190,   953,   191,   192,
     193,   935,  1472,  1117,   416,   968,   418,  1118,   936,    99,
     937,   938,   939,   450,   186,   970,   971,   187,   188,   189,
     190,  1119,   191,   192,   193,  1120,   282,   283,   284,   972,
     433,  1121,  -238,   664,  1555,  1122,   206,   987,   156,   988,
     459,   992,   701,  1004,  1199,  1006,  1330,  1331,  1256,   940,
     941,   942,  1257,   702,  1002,   456,  1076,   123,   124,   577,
     751,   752,   753,   891,   892,  1088,   893,  1258,   459,   156,
     286,  1259,   287,   459,  1346,  1562,   288,   289,  1078,   578,
     579,  1070,   460,  1140,  1260,   473,    96,   463,  1261,    97,
     153,   154,   155,   477,  1262,   943,   944,   945,  1263,   946,
     480,   206,   947,   459,  1127,  1467,  1587,  1585,   484,   286,
    1077,   287,    98,    99,   486,   288,   289,   100,   495,   101,
     496,  1599,   206,  1417,  1134,   506,   102,   153,   154,   155,
    1008,  1009,  1010,  1011,  1012,  1188,  1563,  1190,   509,  1174,
    1125,   543,  1128,   103,  1145,   544,  1147,  1217,  1218,  1219,
    1220,  1221,  1151,   555,  1143,   549,   459,  1556,   104,  1201,
    1202,  1146,   286,   596,   287,  1137,  1022,  1023,   288,   289,
     606,   886,   510,   511,   512,   598,   607,   609,  1596,   653,
     540,  1148,   654,  1149,   530,  1159,  1168,   216,   539,   531,
    1160,  1169,   662,   638,   667,   647,   648,   649,   668,   886,
     669,   674,   670,   532,  1161,  1170,   626,   639,   513,   514,
     515,   763,   763,   541,  1163,  1172,   976,   677,  1198,   690,
     286,   682,   287,   694,  1214,   693,   288,   289,   706,   707,
     156,   650,   651,   652,  1206,   717,   718,   764,   764,   935,
     719,   721,  1319,  1320,  1321,  1322,   936,   727,   937,   938,
     939,   735,  1323,  1324,  1325,   736,   754,   194,   948,   755,
     282,   283,   284,   769,   756,  1212,   757,   156,   255,   256,
     257,   258,   760,   195,   777,   766,   768,  1244,   770,   771,
     772,     3,   773,    68,    69,   774,    70,   940,   941,   942,
     776,   127,   781,   782,   128,   794,   790,   195,   129,   130,
     131,   132,   133,   791,   134,   135,   136,   137,   798,   138,
     139,   800,   851,   140,   141,   142,   143,   852,   855,    99,
     144,   145,  1093,  1094,  1095,  1096,  1316,  1317,  1229,   146,
     856,   147,   858,   943,   944,   945,   857,   946,   859,   884,
     947,  1354,  1355,  1356,  1357,   860,   148,   149,   150,  1293,
    1253,  1254,  1255,   885,  1534,  1537,   898,  1264,  1265,  1266,
    1267,  1268,  1269,   899,  1271,  1272,  1274,   105,  1277,  1278,
    1279,  1280,  1281,  1282,  1283,  1270,  1285,   900,  1287,  1275,
    1290,   151,  1294,   282,   283,   284,   904,  1284,     3,   905,
     910,   926,  1313,   956,   586,   128,   587,   467,   468,   129,
     130,   131,   132,   133,   932,   134,   135,   136,   137,   960,
     138,   139,   965,   973,   140,   141,   142,   143,   966,  1334,
      99,   144,   145,   975,   977,   978,  1337,   401,  1338,  1349,
     146,   979,   147,     2,   993,   935,  1327,   153,   154,   155,
     994,   995,   936,   996,   937,   938,   939,   148,   149,   150,
     997,     3,  1342,   998,   286,  1339,   287,   999,  1013,    14,
     687,   289,  1000,  1001,  1341,  1007,  1015,  1017,   110,   641,
    1420,  1016,  1018,   642,  1021,  1347,  1348,  1066,   110,   110,
     110,   110,   151,   940,   941,   942,  1416,  1351,   110,   110,
     110,  1071,  1082,  1083,  1084,  1144,  1175,  1185,  1129,  1135,
    1176,   737,  1183,  1194,  1191,  1195,  1196,  1358,  1362,  1197,
    1177,  1425,  1125,  1178,  1179,  1180,  1370,  1371,  1372,  1373,
    1374,  1375,  1181,  1377,  1410,    68,    69,  1182,    70,   943,
     944,   945,  1205,   946,  1376,  1186,   947,  1187,  1207,  1154,
    1155,  1156,  1157,  1412,  1211,    28,    29,    30,    31,    32,
      33,    34,  1430,  1213,   643,  1215,  1216,  1247,  1249,  1248,
      35,  1300,  1302,    11,    12,    13,    14,  1301,    98,  1303,
    1304,    98,  1305,   100,   474,   101,   100,   469,   101,   287,
    1307,   886,   102,   288,   289,   102,   157,     4,     5,     6,
       7,     8,  1314,  1308,  1471,  1310,  1309,     3,  1315,   103,
    1318,  1335,   103,   917,  1336,  1429,   516,  1340,  1343,     9,
      10,  1344,  1434,  1350,   104,  1345,  1089,   104,  1091,  1367,
     240,   241,   242,  1097,  1099,  1125,    11,    12,    13,    14,
    1101,  1103,  1105,    15,    16,  1107,  1109,  1111,  1113,    17,
    1115,  1365,  1366,    18,  1368,   243,  1406,  1473,   918,  1509,
      19,    20,    28,    29,    30,    31,    32,    33,    34,  1369,
    1378,  1158,  1379,   625,   886,  1380,  1381,    35,   861,   862,
     863,  1382,   864,   865,   866,   867,  1383,   868,   869,   193,
    1384,   870,   871,   872,   873,  1385,  1513,   157,   874,   875,
    1388,  1386,  1421,  1387,  1389,  1390,  1484,  1485,  1486,  1392,
    1391,  1393,  1394,  1396,  1395,  1397,    21,    22,  1398,    23,
      24,    25,  1400,    26,    27,    28,    29,    30,    31,    32,
      33,    34,  1399,  1401,  1402,  1403,  1404,  1405,  1407,  1418,
      35,  1419,  1413,  1550,  1408,  1422,  1423,  1424,  1427,  1256,
     244,  1592,   245,   246,   247,   248,  1431,  1432,  1520,  1433,
    1258,  1260,  1262,  1526,  1520,  1529,   876,  1533,  1435,  1526,
    1520,  1529,  1581,  1436,  1437,  1438,  1439,  1441,  1442,  1594,
    1536,  1444,  1443,  1445,  1446,    14,  1447,  1451,  1448,  1449,
    1452,  1526,  1520,  1529,    68,    69,  1450,    70,   626,  1453,
     614,   627,   127,   615,   616,   128,  1454,  1455,   886,   129,
     130,   131,   132,   133,  1456,   134,   135,   136,   137,  1457,
     138,   139,  1458,  1459,   140,   141,   142,   143,  1460,  1593,
      99,   144,   145,  1463,  1461,  1462,  1465,  1464,  1553,  1478,
     146,  1468,   147,  1466,  1469,  1475,  1479,  1483,  1489,  1490,
     886,  1491,  1492,  1511,  1588,  1123,  1507,   148,   149,   150,
    1124,  1510,   882,  1514,  1515,  1516,  1552,  1561,  1580,  1582,
    1583,    28,    29,    30,    31,    32,    33,    34,  1584,  1586,
     628,  1589,  1590,  1591,  1595,  1598,    35,     3,  1123,  1600,
     297,   507,   151,  1124,   282,   283,   284,   160,   671,    68,
      69,   595,    70,   927,     3,  1333,  1311,   127,   467,   468,
     128,  1312,   162,  1192,   129,   130,   131,   132,   133,   197,
     134,   135,   136,   137,   906,   138,   139,   633,  1332,   140,
     141,   142,   143,   775,   744,    99,   144,   145,    28,    29,
      30,    31,    32,    33,    34,   146,   545,   147,   153,   154,
     155,  1245,  1133,    35,  1067,   883,  1482,  1193,    68,    69,
    1299,    70,   148,   149,   150,  1085,   127,    94,  1081,   128,
     902,  1306,  1564,   129,   130,   131,   132,   133,   679,   134,
     135,   136,   137,   239,   138,   139,   630,  1565,   140,   141,
     142,   143,   931,     0,    99,   144,   145,   151,     0,   282,
     283,   284,   712,  1566,   146,     0,   147,     0,  1123,     0,
       0,     0,  1567,  1124,     0,     0,     0,     0,     0,     0,
       0,   148,   149,   150,     0,     0,  1568,  1569,  1570,  1571,
       0,     0,     0,    28,    29,    30,    31,    32,    33,    34,
     634,     0,  1364,     0,     0,     9,    10,     0,    35,     0,
       0,     0,     0,   153,   154,   155,   151,   152,  1572,  1573,
    1574,  1575,  1576,  1577,  1578,    14,    28,    29,    30,    31,
      32,    33,    34,     0,     0,  1440,     0,   612,   613,     0,
     614,    35,    14,   615,   616,     0,     0,     0,   469,     0,
     287,     0,   635,     0,   687,   289,   636,   157,     0,     0,
      68,    69,     0,    70,     0,     0,     0,     0,   127,     0,
       0,   128,   153,   154,   155,   129,   130,   131,   132,   133,
       0,   134,   135,   136,   137,     0,   138,   139,     0,     0,
     140,   141,   142,   143,     0,     0,    99,   144,   145,     0,
       0,     0,     0,     0,     0,     0,   146,     0,   147,    14,
       0,    28,    29,    30,    31,    32,    33,    34,     0,     0,
     617,     0,     0,   148,   149,   150,    35,   913,    28,    29,
      30,    31,    32,    33,    34,     0,     0,   637,     0,     0,
       0,     0,     0,    35,     0,     0,    28,    29,    30,    31,
      32,    33,    34,   469,     0,   287,     0,     0,   151,   288,
     289,    35,   157,    68,    69,     0,    70,     0,     0,     0,
       0,   127,   914,     0,   128,     0,     0,     0,   129,   130,
     131,   132,   133,  1579,   134,   135,   136,   137,     0,   138,
     139,     0,     0,   140,   141,   142,   143,     0,     0,    99,
     144,   145,     0,     0,     0,     0,     0,     0,     0,   146,
       0,   147,   156,     0,   153,   154,   155,     0,     0,     0,
       0,   157,    68,    69,     0,    70,   148,   149,   150,     0,
     127,     0,     0,   128,     0,     0,     0,   129,   130,   131,
     132,   133,     0,   134,   135,   136,   137,     0,   138,   139,
       0,     0,   140,   141,   142,   143,     0,     0,    99,   144,
     145,   151,   152,     0,     0,     0,     0,     0,   146,     0,
     147,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     0,   148,   149,   150,     0,     0,
       0,     0,     0,     0,     0,   861,   862,   863,     0,   864,
     865,   866,   867,     0,   868,   869,   193,     0,   870,   871,
     872,   873,     0,     0,     0,   874,   875,   153,   154,   155,
     151,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    68,    69,     0,    70,     0,     0,
       0,     0,   127,     0,     0,   128,     0,     0,     0,   129,
     130,   131,   132,   133,   210,   134,   135,   136,   137,     0,
     138,   139,     0,   157,   140,   141,   142,   143,     0,     0,
      99,   144,   145,     0,     0,     0,   153,   154,   155,     0,
     146,     0,   147,   876,     0,    68,    69,     0,    70,     0,
       0,     0,     0,   127,     0,     0,   128,   148,   149,   150,
     129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
       0,   138,   139,     0,     0,   140,   141,   142,   143,     0,
       0,    99,   144,   145,     0,     0,     0,     0,     0,     0,
       0,   663,   553,   147,     0,     0,     0,  1164,    96,  1165,
    1166,    97,     0,     0,     3,     0,     0,     0,   148,   149,
     150,     0,     0,     0,     0,     0,     0,   210,    11,    12,
      13,    14,     0,     0,    98,    99,   157,   633,     0,   100,
       0,   101,     0,     0,     0,     0,     0,     0,   102,     0,
       0,     0,     0,   151,     0,     0,     0,     0,   153,   154,
     155,     0,     0,     0,     0,   103,    68,    69,     0,    70,
       0,     0,     0,     0,   127,     0,     0,   128,     0,     0,
     104,   129,   130,   131,   132,   133,   210,   134,   135,   136,
     137,     0,   138,   139,     0,   157,   140,   141,   142,   143,
       0,     0,    99,   144,   145,     0,     0,     0,     0,   153,
     154,   155,   146,     0,   147,     0,     0,    28,    29,    30,
      31,    32,    33,    34,     0,     0,  1167,     0,     0,   148,
     149,   150,    35,     0,     0,   265,   128,   266,     0,  1542,
     129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     634,   138,   139,     0,     0,   140,   141,   142,   143,     0,
       0,     0,   144,   145,   715,    68,     0,     0,    70,     0,
       0,   146,     0,   147,     0,     0,     0,     0,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   148,   149,
     150,     0,    14,     0,     0,     0,     0,     0,   210,     0,
       0,     0,   635,     0,     0,     0,   636,   157,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     153,   154,   155,   151,     0,   128,     0,     0,     0,     0,
       0,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     138,   139,     0,     0,   140,   141,   142,   143,     0,   210,
      68,  1295,   145,    70,     0,   861,   862,   863,   157,   864,
     865,   866,   867,     3,   868,   869,   193,     0,   870,   871,
     872,   873,     0,     0,     0,   874,   875,     0,    28,    29,
      30,    31,    32,    33,    34,     0,     0,  1173,     0,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
    1296,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,     0,     0,     0,     0,     8,  1297,
       0,     0,   358,   359,   360,   361,   362,   363,     0,     0,
       0,     0,     0,     0,     0,    68,     9,    10,    70,     0,
       0,     0,     0,   876,     0,     0,   216,     0,     3,     0,
       0,     0,     0,    11,    12,    13,    14,     0,     0,     0,
     210,  1230,  1231,  1232,   364,  1233,  1234,  1235,  1236,   157,
    1237,  1238,   193,     0,  1239,  1240,  1241,  1242,     0,   365,
       0,     0,     0,  1243,     0,     0,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,     0,
       0,     0,     0,     8,     0,     0,     0,   358,   359,   360,
     361,   362,   363,     0,   366,   367,     0,     0,     0,     0,
       0,     9,    10,     0,     0,     0,     0,     0,   157,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
      13,    14,    28,    29,    30,    31,    32,    33,    34,   364,
     368,   369,     0,     0,     0,     0,     0,    35,     0,     0,
       0,     0,     0,     0,   365,     0,     0,     0,     0,     0,
       0,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,     0,     0,     0,     0,     8,     0,
       0,     0,   358,   359,   360,   361,   362,   363,     0,   366,
     367,     0,     0,     0,     0,     0,     9,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,    13,    14,    28,    29,    30,
      31,    32,    33,    34,   364,   368,   742,     0,     0,     0,
       0,     0,    35,     0,     0,     0,   128,     0,     0,   365,
     129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
       0,   138,   139,     0,     0,   140,   141,   142,   143,   434,
       0,     0,   144,   145,     0,     0,     0,     0,     0,     0,
       0,   146,     0,   147,   366,   367,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   148,   149,
     150,     0,   435,     0,   436,   437,   438,   439,     0,     0,
       0,     0,    28,    29,    30,    31,    32,    33,    34,     0,
     368,   930,     0,     0,     0,     0,     0,    35,     0,     0,
       0,     0,     0,   151,     0,     0,     0,     0,     0,     0,
       0,   440,   441,   442,   443,     0,     0,   444,     0,     0,
     128,   445,   446,   447,   129,   130,   131,   132,   133,     0,
     134,   135,   136,   137,     0,   138,   139,     0,     0,   140,
     141,   142,   143,     0,     0,     0,   144,   145,     0,     0,
       0,     0,     0,     0,     0,   146,     0,   147,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     0,     0,     0,
       0,   128,   148,   149,   150,   129,   130,   131,   132,   133,
       0,   134,   135,   136,   137,     0,   138,   139,     0,     0,
     140,   141,   142,   143,     0,     0,     0,   144,   145,     0,
       0,     0,     0,     0,     0,     0,   146,   151,   147,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   148,   149,   150,   448,   128,     0,     0,
       0,   129,   130,   131,   132,   133,     0,   134,   135,   136,
     137,     0,   138,   139,     0,     0,   140,   141,   142,   143,
       0,     0,     0,   144,   145,     0,     0,     0,   151,     0,
       0,     0,   146,     0,   147,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   148,
     149,   150,     0,     0,  1024,  1025,     0,  1026,  1027,  1028,
    1029,  1030,  1031,     0,  1032,  1033,     0,  1034,  1035,  1036,
    1037,  1038,     4,     5,     6,     7,     8,     0,   157,     0,
       3,     0,     0,     0,   151,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,    13,    14,     0,     0,     0,    15,    16,
       0,     0,     0,     0,    17,     0,     0,     0,    18,   520,
       0,     0,     0,     0,     0,    19,    20,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   725,     0,     0,     0,     0,     0,     0,
       0,     0,   157,     0,     0,     0,     0,     0,     0,     0,
       0,    21,    22,     0,    23,    24,    25,     0,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     0,     0,   508,
       0,     0,     0,     0,     0,    35,   521,     0,     6,     7,
       8,     0,     0,     0,   882,     0,     0,     3,     0,     0,
     522,     0,     0,   157,     0,   523,     0,     0,     9,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,    13,    14,     0,
     524,   525,     0,  1039,  1040,     0,  1041,  1042,  1043,     0,
    1044,  1045,     0,     0,  1046,  1047,   520,  1048,     0,     0,
       0,   526,     0,     0,     0,     0,     0,     0,     0,   157,
    1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,  1057,  1058,
    1059,  1060,  1061,  1062,  1063,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   527,   528,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1064,     0,
       0,     0,     0,     0,    28,    29,    30,    31,    32,    33,
      34,     0,     0,   529,     0,     0,     0,     0,     0,    35,
       0,     0,     0,   521,     0,     6,     7,     8,     0,     0,
       0,     0,     0,     0,     0,    68,    69,   522,    70,     0,
       0,     0,   523,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,    13,    14,     0,   524,   525,   298,
       0,   802,     0,     0,     0,     0,   803,   804,     0,   805,
     806,   807,   808,   809,   810,     0,   811,   812,   526,   813,
     814,   815,   816,   817,     0,     0,     0,     0,   299,     0,
       0,     0,   300,     0,     0,   301,   302,     0,     0,     0,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,     0,   527,   528,     0,     0,     0,   315,     0,
       0,   316,     0,     0,     0,   818,     0,   819,   317,     0,
       0,     0,   820,     0,     0,     0,     0,   318,     0,     0,
       0,    28,    29,    30,    31,    32,    33,    34,   821,   802,
    1153,     0,     0,     0,   803,   804,    35,   805,   806,   807,
     808,   809,   810,     0,   811,   812,     0,   813,   814,   815,
     816,   817,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   822,     0,     0,     0,     0,   324,    98,     0,     0,
       0,     0,   100,     0,   101,     0,     0,     0,     0,     0,
       0,   102,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   818,     0,   819,     0,     0,   103,   325,
     820,   326,   327,   328,   329,   330,     0,     0,     0,     0,
     331,     0,     0,   104,     0,     0,   821,     0,     0,   332,
       0,     0,     0,     0,   333,     0,   334,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   335,   336,
     337,   338,   339,   340,   341,   342,     0,     0,     0,   822,
       0,   343,   823,     0,   824,   825,   826,   827,   828,   829,
     830,   831,   832,   833,   834,   835,   836,   837,   838,   839,
     840,     0,     0,     0,   841,     0,     0,     0,     0,     0,
       0,     0,     0,   842,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   843,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     823,     0,   824,   825,   826,   827,   828,   829,   830,   831,
     832,   833,   834,   835,   836,   837,   838,   839,   840,     0,
       0,     0,   841,     0,     0,     0,     0,     0,     0,     0,
       0,   842
};

static const yytype_int16 yycheck[] =
{
       5,   163,    25,    25,     1,   103,   104,    25,     1,   736,
     677,   323,     1,     1,   323,    20,   409,    43,   411,    93,
     323,   960,    48,    28,    29,    30,    31,     1,   185,    57,
     994,    21,    22,    59,   723,   662,  1089,     1,  1117,     7,
     471,   484,   485,   486,     9,    23,    24,     7,    25,    19,
      94,     5,     6,     8,     8,     9,   110,     8,     7,     8,
       7,    77,  1084,     5,     6,   163,     8,    12,   735,     7,
      60,     7,   188,   189,   190,   191,   192,    56,     9,    10,
      11,     5,     6,    73,     8,   108,   184,     8,    14,    44,
       5,     6,   377,     8,    63,    33,     9,    20,    13,    25,
      31,    32,     5,     6,     9,     8,   129,   181,   166,   114,
       9,   116,   117,   118,   212,    20,     9,    10,     5,     6,
      63,     8,   112,   113,   146,   169,    41,   149,   105,   152,
       5,     6,   216,     8,     5,     6,    51,     8,    41,   110,
       5,     6,    13,     8,   136,   136,   168,     5,     6,   136,
       8,   156,   157,     5,     6,     9,     8,   884,   885,   233,
       5,     9,    10,     8,     9,   299,   194,   157,  1472,   185,
      41,   898,   198,    44,     9,   180,    41,   298,     9,   105,
      51,   105,   106,   107,     9,   208,     5,     6,   232,     8,
    1460,     9,    10,   267,     9,     9,    11,     9,     7,   299,
     205,   206,     9,     9,     9,   210,     5,     6,   181,     8,
       9,     9,    65,    66,   657,   197,    31,    32,    64,     8,
     290,    20,  1492,   380,    33,   295,   388,  1249,   233,  1459,
     156,   221,   222,     9,   239,   289,   294,   163,   260,     9,
     683,  1457,    41,    63,   159,   160,   161,   321,   228,   976,
      20,     5,     6,   538,     8,    44,   279,     5,     6,   926,
       8,  1491,   267,   268,   287,    11,     8,   272,   248,   291,
     275,   276,   277,  1489,   247,   280,   281,   292,    87,   125,
     285,   296,   272,   292,   210,    31,    32,   954,   159,   160,
     161,   300,  1596,   367,   392,     9,   286,     9,    10,    11,
     297,  1452,   294,   294,   297,   292,   292,  1458,   297,   297,
     295,   290,   298,   295,   299,   218,   390,   216,   289,    31,
      32,   216,   290,   297,   294,   294,   323,   295,   299,   275,
     323,   290,   295,   297,   323,   323,   299,   307,   298,  1490,
     305,   296,   293,   290,   293,     7,   291,   391,   295,   323,
     294,   294,   795,   218,   308,   304,   300,   299,   294,   323,
     298,     9,    10,   391,   380,   296,   389,   383,   358,   395,
     360,   387,   293,   296,   364,   299,     9,   301,    11,   292,
    1344,   305,   306,   457,   299,   294,    12,   300,  1467,   293,
     380,    60,   301,   383,   384,   300,   300,   387,    31,    32,
     416,   558,   305,   296,    24,    25,   849,   385,   386,   566,
     400,   401,   299,   403,    34,   405,   393,   294,   492,   218,
     295,   495,   496,   300,  1503,   296,   423,   247,   299,   407,
     453,   421,   422,   294,  1487,   423,   424,   425,   426,   300,
     305,   299,   296,   296,   449,   290,   451,   299,   296,   423,
     424,   425,   426,   207,   528,   553,   887,   293,   294,  1086,
     294,   296,   388,   389,   469,   296,   300,   393,   216,   289,
     294,   296,   293,   478,   294,   251,   252,   253,   296,   469,
     299,   296,   296,    51,   296,  1174,   560,   492,   290,   296,
     296,   296,   295,   290,     5,     6,   299,     8,   296,   299,
     544,   300,    13,   293,   294,   305,   305,     5,     6,    46,
       8,    48,    49,    50,  1478,   589,   290,     5,     6,   509,
       8,     5,   545,   290,     8,     5,     6,     7,     8,     9,
      41,   290,   295,    13,   524,   525,   299,   463,     9,    39,
     292,   293,   558,   469,   296,   550,   551,   290,    28,   298,
     566,    51,    52,   543,   598,    26,    27,    28,   295,   549,
     295,    41,   552,   720,   299,   295,   295,   593,  1507,    69,
     299,   594,   616,   295,   272,   136,   566,  1304,  1305,   607,
     596,   138,   139,   295,   589,    65,    66,    75,    76,   295,
     136,     5,     6,   299,     8,   293,     5,   623,   624,     8,
       9,   299,   136,   629,   136,   631,   596,   612,   306,     5,
       6,   709,     8,     9,   307,   927,   295,   715,   927,   119,
     299,   119,   120,   296,   927,   295,   105,   106,   107,   299,
     635,   295,   706,   707,   708,   299,   641,    12,   295,    28,
      29,   663,   299,    55,   634,    57,    58,    59,   159,   160,
     161,   674,   768,   679,   770,   771,   772,   773,   774,    73,
     295,    75,    76,   653,   299,   105,   106,   107,    82,  1336,
     295,   694,   677,   298,    63,   680,    61,   682,   295,   159,
     160,   161,   299,   296,   295,   673,     5,     6,   299,     8,
    1417,   295,   293,   294,    13,   299,   136,  1424,   295,   704,
     690,   691,   299,   708,   720,   296,   295,   712,   713,   714,
     299,   734,  1105,   295,  1107,   738,   760,   299,   105,   106,
     107,   305,    41,     5,     6,    44,     8,    65,    66,   745,
     735,    13,    51,     5,     6,   725,     8,   727,   754,   729,
      23,   731,   295,    26,    27,    28,    29,   226,    31,    32,
      33,    39,  1419,   295,   295,   745,   296,   299,    46,    41,
      48,    49,    50,   298,    23,   755,   756,    26,    27,    28,
      29,   295,    31,    32,    33,   299,   105,   106,   107,   757,
     300,   295,   290,   857,  1511,   299,   294,   777,   299,   779,
     292,   781,   292,   798,   296,   800,   138,   139,   295,    87,
      88,    89,   299,   303,   794,   295,   850,     9,    10,    11,
     567,   568,   569,   202,   203,   859,   205,   295,   292,   299,
     299,   299,   301,   292,   293,  1552,   305,   306,   850,    31,
      32,   847,     8,   907,   295,   300,    14,   296,   299,    17,
     159,   160,   161,   221,   295,   133,   134,   135,   299,   137,
      25,   294,   140,   292,   880,   298,  1583,   296,   300,   299,
     850,   301,    40,    41,   300,   305,   306,    45,   295,    47,
     295,  1598,   294,   295,   890,   291,    54,   159,   160,   161,
      25,    26,    27,    28,    29,   959,  1553,   961,   295,   933,
     878,   295,   882,    71,   912,   295,   919,    25,    26,    27,
      28,    29,   925,   304,   909,   299,   292,   293,    86,   977,
     978,   916,   299,   295,   301,   905,   836,   837,   305,   306,
     291,   926,    75,    76,    77,   295,   293,   296,  1595,   295,
     927,   921,   295,   923,   927,   928,   929,     7,   927,   927,
     928,   929,   290,   931,     7,    75,    76,    77,   293,   954,
     296,   301,   296,   927,   928,   929,   209,   931,   111,   112,
     113,   977,   978,   927,   928,   929,   295,    19,   973,    20,
     299,    19,   301,   293,  1018,   302,   305,   306,   293,   110,
     299,   111,   112,   113,   989,   290,   290,   977,   978,    39,
     290,   290,  1154,  1155,  1156,  1157,    46,   304,    48,    49,
      50,    19,  1164,  1165,  1166,   295,    62,   290,   296,    62,
     105,   106,   107,   300,   295,  1005,   295,   299,    26,    27,
      28,    29,   295,   306,   304,   296,   296,  1071,   296,   296,
     296,    18,   296,     5,     6,   296,     8,    87,    88,    89,
     296,    13,   213,   298,    16,   295,   298,   306,    20,    21,
      22,    23,    24,   298,    26,    27,    28,    29,   216,    31,
      32,   216,   296,    35,    36,    37,    38,   293,   298,    41,
      42,    43,    26,    27,    28,    29,  1150,  1151,  1068,    51,
     291,    53,     8,   133,   134,   135,   293,   137,   298,   295,
     140,    26,    27,    28,    29,   291,    68,    69,    70,  1121,
    1090,  1091,  1092,   295,  1497,  1498,   295,  1097,  1098,  1099,
    1100,  1101,  1102,   296,  1104,  1105,  1106,   295,  1108,  1109,
    1110,  1111,  1112,  1113,  1114,  1103,  1116,   296,  1118,  1107,
    1120,   103,  1122,   105,   106,   107,   296,  1115,    18,   295,
     302,    19,  1147,   300,    15,    16,    17,   119,   120,    20,
      21,    22,    23,    24,   296,    26,    27,    28,    29,   300,
      31,    32,   296,    19,    35,    36,    37,    38,   293,  1185,
      41,    42,    43,   296,   293,   293,  1192,   299,  1194,  1223,
      51,   296,    53,     0,   295,    39,  1176,   159,   160,   161,
     304,   295,    46,   296,    48,    49,    50,    68,    69,    70,
     296,    18,  1207,   295,   299,  1195,   301,   295,   295,   196,
     305,   306,   296,   296,  1204,   296,   243,   247,  1144,   206,
    1318,   235,   295,   210,    22,  1215,  1216,   296,  1154,  1155,
    1156,  1157,   103,    87,    88,    89,  1310,  1227,  1164,  1165,
    1166,   298,   291,   298,   290,   196,   296,   136,   302,   296,
     295,    20,   295,    62,   296,    62,   296,  1247,  1248,   296,
     304,  1335,  1250,   304,   300,   300,  1256,  1257,  1258,  1259,
    1260,  1261,   300,  1263,  1296,     5,     6,   300,     8,   133,
     134,   135,     8,   137,  1262,   300,   140,   300,    63,   169,
     170,   171,   172,  1298,   296,   282,   283,   284,   285,   286,
     287,   288,  1346,   250,   291,   299,   299,   295,   290,   295,
     297,   296,   296,   193,   194,   195,   196,   300,    40,   296,
     295,    40,   295,    45,   166,    47,    45,   299,    47,   301,
     296,  1336,    54,   305,   306,    54,   308,   154,   155,   156,
     157,   158,   300,   296,  1418,   293,   296,    18,   300,    71,
     256,   293,    71,    72,    19,  1345,   301,   296,   181,   176,
     177,   304,  1352,   300,    86,   298,   295,    86,   295,   300,
     100,   101,   102,   295,   295,  1363,   193,   194,   195,   196,
     295,   295,   295,   200,   201,   295,   295,   295,   295,   206,
     295,   291,   296,   210,   296,   125,     8,  1420,   117,  1473,
     217,   218,   282,   283,   284,   285,   286,   287,   288,   300,
     296,   291,   300,    84,  1419,   296,   300,   297,    22,    23,
      24,   296,    26,    27,    28,    29,   300,    31,    32,    33,
     296,    35,    36,    37,    38,   300,  1480,   308,    42,    43,
     300,   296,   296,   296,   296,   296,  1436,  1437,  1438,   296,
     300,   300,   296,   296,   300,   300,   273,   274,   296,   276,
     277,   278,   296,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   300,   300,   296,   296,   300,   296,   296,   293,
     297,    19,   302,  1505,   300,   296,   296,   295,     8,   295,
     220,  1589,   222,   223,   224,   225,   300,   300,  1488,   300,
     295,   295,   295,  1493,  1494,  1495,   110,  1497,   296,  1499,
    1500,  1501,  1556,   304,   304,   304,   296,   295,   295,  1593,
    1498,   300,   296,   296,   300,   196,   296,   295,   300,   296,
     295,  1521,  1522,  1523,     5,     6,   300,     8,   209,   295,
     211,   212,    13,   214,   215,    16,   295,   295,  1553,    20,
      21,    22,    23,    24,   295,    26,    27,    28,    29,   295,
      31,    32,   295,   295,    35,    36,    37,    38,   295,  1592,
      41,    42,    43,   296,   295,   295,     8,   295,    19,   304,
      51,   296,    53,   300,   296,   301,   296,   300,   295,   295,
    1595,   295,   295,   295,  1584,   104,   296,    68,    69,    70,
     109,   296,   299,   296,   296,   296,   295,     8,   296,   296,
     295,   282,   283,   284,   285,   286,   287,   288,   295,   256,
     291,   103,   296,   296,    19,   295,   297,    18,   104,   296,
     179,   291,   103,   109,   105,   106,   107,    25,   463,     5,
       6,   393,     8,   717,    18,  1184,  1141,    13,   119,   120,
      16,  1143,    25,   964,    20,    21,    22,    23,    24,    57,
      26,    27,    28,    29,   703,    31,    32,    41,  1183,    35,
      36,    37,    38,   607,   564,    41,    42,    43,   282,   283,
     284,   285,   286,   287,   288,    51,   344,    53,   159,   160,
     161,  1071,   887,   297,   845,   674,  1432,   966,     5,     6,
    1126,     8,    68,    69,    70,   857,    13,    10,   852,    16,
     691,  1135,    39,    20,    21,    22,    23,    24,   475,    26,
      27,    28,    29,   115,    31,    32,   424,    54,    35,    36,
      37,    38,   721,    -1,    41,    42,    43,   103,    -1,   105,
     106,   107,   526,    70,    51,    -1,    53,    -1,   104,    -1,
      -1,    -1,    79,   109,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    69,    70,    -1,    -1,    93,    94,    95,    96,
      -1,    -1,    -1,   282,   283,   284,   285,   286,   287,   288,
     154,    -1,   291,    -1,    -1,   176,   177,    -1,   297,    -1,
      -1,    -1,    -1,   159,   160,   161,   103,   104,   125,   126,
     127,   128,   129,   130,   131,   196,   282,   283,   284,   285,
     286,   287,   288,    -1,    -1,   291,    -1,   208,   209,    -1,
     211,   297,   196,   214,   215,    -1,    -1,    -1,   299,    -1,
     301,    -1,   206,    -1,   305,   306,   210,   308,    -1,    -1,
       5,     6,    -1,     8,    -1,    -1,    -1,    -1,    13,    -1,
      -1,    16,   159,   160,   161,    20,    21,    22,    23,    24,
      -1,    26,    27,    28,    29,    -1,    31,    32,    -1,    -1,
      35,    36,    37,    38,    -1,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,   196,
      -1,   282,   283,   284,   285,   286,   287,   288,    -1,    -1,
     291,    -1,    -1,    68,    69,    70,   297,    72,   282,   283,
     284,   285,   286,   287,   288,    -1,    -1,   291,    -1,    -1,
      -1,    -1,    -1,   297,    -1,    -1,   282,   283,   284,   285,
     286,   287,   288,   299,    -1,   301,    -1,    -1,   103,   305,
     306,   297,   308,     5,     6,    -1,     8,    -1,    -1,    -1,
      -1,    13,   117,    -1,    16,    -1,    -1,    -1,    20,    21,
      22,    23,    24,   290,    26,    27,    28,    29,    -1,    31,
      32,    -1,    -1,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    53,   299,    -1,   159,   160,   161,    -1,    -1,    -1,
      -1,   308,     5,     6,    -1,     8,    68,    69,    70,    -1,
      13,    -1,    -1,    16,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    -1,    26,    27,    28,    29,    -1,    31,    32,
      -1,    -1,    35,    36,    37,    38,    -1,    -1,    41,    42,
      43,   103,   104,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,    26,
      27,    28,    29,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    -1,    -1,    -1,    42,    43,   159,   160,   161,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,    -1,     8,    -1,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    -1,    -1,    20,
      21,    22,    23,    24,   299,    26,    27,    28,    29,    -1,
      31,    32,    -1,   308,    35,    36,    37,    38,    -1,    -1,
      41,    42,    43,    -1,    -1,    -1,   159,   160,   161,    -1,
      51,    -1,    53,   110,    -1,     5,     6,    -1,     8,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    16,    68,    69,    70,
      20,    21,    22,    23,    24,    -1,    26,    27,    28,    29,
      -1,    31,    32,    -1,    -1,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,   103,    53,    -1,    -1,    -1,   172,    14,   174,
     175,    17,    -1,    -1,    18,    -1,    -1,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,   299,   193,   194,
     195,   196,    -1,    -1,    40,    41,   308,    41,    -1,    45,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,   159,   160,
     161,    -1,    -1,    -1,    -1,    71,     5,     6,    -1,     8,
      -1,    -1,    -1,    -1,    13,    -1,    -1,    16,    -1,    -1,
      86,    20,    21,    22,    23,    24,   299,    26,    27,    28,
      29,    -1,    31,    32,    -1,   308,    35,    36,    37,    38,
      -1,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,   159,
     160,   161,    51,    -1,    53,    -1,    -1,   282,   283,   284,
     285,   286,   287,   288,    -1,    -1,   291,    -1,    -1,    68,
      69,    70,   297,    -1,    -1,    15,    16,    17,    -1,   296,
      20,    21,    22,    23,    24,    -1,    26,    27,    28,    29,
     154,    31,    32,    -1,    -1,    35,    36,    37,    38,    -1,
      -1,    -1,    42,    43,   103,     5,    -1,    -1,     8,    -1,
      -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,
      70,    -1,   196,    -1,    -1,    -1,    -1,    -1,   299,    -1,
      -1,    -1,   206,    -1,    -1,    -1,   210,   308,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,   160,   161,   103,    -1,    16,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    -1,    26,    27,    28,    29,    -1,
      31,    32,    -1,    -1,    35,    36,    37,    38,    -1,   299,
       5,    42,    43,     8,    -1,    22,    23,    24,   308,    26,
      27,    28,    29,    18,    31,    32,    33,    -1,    35,    36,
      37,    38,    -1,    -1,    -1,    42,    43,    -1,   282,   283,
     284,   285,   286,   287,   288,    -1,    -1,   291,    -1,    -1,
      -1,    -1,    -1,   297,    -1,    -1,    -1,    -1,    -1,    -1,
      91,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,    -1,    -1,    -1,    -1,   158,   110,
      -1,    -1,   162,   163,   164,   165,   166,   167,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,   176,   177,     8,    -1,
      -1,    -1,    -1,   110,    -1,    -1,     7,    -1,    18,    -1,
      -1,    -1,    -1,   193,   194,   195,   196,    -1,    -1,    -1,
     299,    22,    23,    24,   204,    26,    27,    28,    29,   308,
      31,    32,    33,    -1,    35,    36,    37,    38,    -1,   219,
      -1,    -1,    -1,    44,    -1,    -1,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,    -1,
      -1,    -1,    -1,   158,    -1,    -1,    -1,   162,   163,   164,
     165,   166,   167,    -1,   254,   255,    -1,    -1,    -1,    -1,
      -1,   176,   177,    -1,    -1,    -1,    -1,    -1,   308,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,   194,
     195,   196,   282,   283,   284,   285,   286,   287,   288,   204,
     290,   291,    -1,    -1,    -1,    -1,    -1,   297,    -1,    -1,
      -1,    -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,
      -1,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,    -1,    -1,    -1,    -1,   158,    -1,
      -1,    -1,   162,   163,   164,   165,   166,   167,    -1,   254,
     255,    -1,    -1,    -1,    -1,    -1,   176,   177,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   193,   194,   195,   196,   282,   283,   284,
     285,   286,   287,   288,   204,   290,   291,    -1,    -1,    -1,
      -1,    -1,   297,    -1,    -1,    -1,    16,    -1,    -1,   219,
      20,    21,    22,    23,    24,    -1,    26,    27,    28,    29,
      -1,    31,    32,    -1,    -1,    35,    36,    37,    38,    39,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    53,   254,   255,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,
      70,    -1,    72,    -1,    74,    75,    76,    77,    -1,    -1,
      -1,    -1,   282,   283,   284,   285,   286,   287,   288,    -1,
     290,   291,    -1,    -1,    -1,    -1,    -1,   297,    -1,    -1,
      -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   111,   112,   113,   114,    -1,    -1,   117,    -1,    -1,
      16,   121,   122,   123,    20,    21,    22,    23,    24,    -1,
      26,    27,    28,    29,    -1,    31,    32,    -1,    -1,    35,
      36,    37,    38,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    16,    68,    69,    70,    20,    21,    22,    23,    24,
      -1,    26,    27,    28,    29,    -1,    31,    32,    -1,    -1,
      35,    36,    37,    38,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,   103,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,   226,    16,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    -1,    26,    27,    28,
      29,    -1,    31,    32,    -1,    -1,    35,    36,    37,    38,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,   103,    -1,
      -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      69,    70,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      27,    28,    29,    -1,    31,    32,    -1,    34,    35,    36,
      37,    38,   154,   155,   156,   157,   158,    -1,   308,    -1,
      18,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   176,   177,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   193,   194,   195,   196,    -1,    -1,    -1,   200,   201,
      -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,   210,    67,
      -1,    -1,    -1,    -1,    -1,   217,   218,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   299,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   273,   274,    -1,   276,   277,   278,    -1,   280,   281,
     282,   283,   284,   285,   286,   287,   288,    -1,    -1,   291,
      -1,    -1,    -1,    -1,    -1,   297,   154,    -1,   156,   157,
     158,    -1,    -1,    -1,   299,    -1,    -1,    18,    -1,    -1,
     168,    -1,    -1,   308,    -1,   173,    -1,    -1,   176,   177,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   193,   194,   195,   196,    -1,
     198,   199,    -1,   230,   231,    -1,   233,   234,   235,    -1,
     237,   238,    -1,    -1,   241,   242,    67,   244,    -1,    -1,
      -1,   219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   254,   255,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,
      -1,    -1,    -1,    -1,   282,   283,   284,   285,   286,   287,
     288,    -1,    -1,   291,    -1,    -1,    -1,    -1,    -1,   297,
      -1,    -1,    -1,   154,    -1,   156,   157,   158,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,   168,     8,    -1,
      -1,    -1,   173,    -1,    -1,   176,   177,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   193,   194,   195,   196,    -1,   198,   199,    39,
      -1,    16,    -1,    -1,    -1,    -1,    21,    22,    -1,    24,
      25,    26,    27,    28,    29,    -1,    31,    32,   219,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    72,    -1,    -1,    75,    76,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    -1,   254,   255,    -1,    -1,    -1,    98,    -1,
      -1,   101,    -1,    -1,    -1,    80,    -1,    82,   108,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,   117,    -1,    -1,
      -1,   282,   283,   284,   285,   286,   287,   288,   103,    16,
     291,    -1,    -1,    -1,    21,    22,   297,    24,    25,    26,
      27,    28,    29,    -1,    31,    32,    -1,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    -1,    45,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    82,    -1,    -1,    71,    72,
      87,    74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    86,    -1,    -1,   103,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    97,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,
     113,   114,   115,   116,   117,   118,    -1,    -1,    -1,   136,
      -1,   124,   227,    -1,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,    -1,    -1,    -1,   249,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   290,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     227,    -1,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    -1,
      -1,    -1,   249,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   258
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   310,     0,    18,   154,   155,   156,   157,   158,   176,
     177,   193,   194,   195,   196,   200,   201,   206,   210,   217,
     218,   273,   274,   276,   277,   278,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   297,   311,   314,   320,   321,
     322,   323,   324,   325,   332,   334,   335,   337,   338,   339,
     340,   341,   342,   359,   377,   381,   403,   404,   459,   462,
     468,   469,   470,   474,   483,   486,   491,   216,     5,     6,
       8,   315,   316,   299,   363,    64,   125,   405,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   467,   467,     8,    14,    17,    40,    41,
      45,    47,    54,    71,    86,   295,   326,   364,   365,   366,
     367,   298,   299,   275,   471,   216,   475,   492,   216,   316,
       9,   317,   317,     9,    10,   318,   318,    13,    16,    20,
      21,    22,    23,    24,    26,    27,    28,    29,    31,    32,
      35,    36,    37,    38,    42,    43,    51,    53,    68,    69,
      70,   103,   104,   159,   160,   161,   299,   308,   316,   322,
     323,   367,   368,   426,   449,   450,   455,   456,   290,   316,
     316,   316,   316,     7,    12,   412,   413,   412,   412,   290,
     343,    60,   344,   290,   382,   388,    23,    26,    27,    28,
      29,    31,    32,    33,   290,   306,   406,   409,   411,   412,
     317,   290,   290,   290,   290,   488,   294,   317,   360,   315,
     299,   367,   426,   449,   451,   455,     7,    33,   298,   313,
     293,   295,   295,    46,    48,    49,    50,   365,   365,   327,
     368,   451,   298,   455,   295,   317,   317,   207,   316,   475,
     100,   101,   102,   125,   220,   222,   223,   224,   225,   316,
      75,    76,   316,   316,   455,    26,    27,    28,    29,   449,
      51,   449,    24,    25,    34,    15,    17,   455,   218,   305,
     316,   367,   308,   316,   317,   136,   136,   136,   364,   365,
     136,   307,   105,   106,   107,   136,   299,   301,   305,   306,
     312,   449,   313,   296,    12,   296,   296,   310,    39,    68,
      72,    75,    76,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    98,   101,   108,   117,   316,
     451,    61,   345,   346,    39,    72,    74,    75,    76,    77,
      78,    83,    92,    97,    99,   111,   112,   113,   114,   115,
     116,   117,   118,   124,   365,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   162,   163,
     164,   165,   166,   167,   204,   219,   254,   255,   290,   291,
     314,   315,   321,   332,   387,   389,   390,   391,   392,   394,
     395,   403,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   459,   469,   305,
     295,   299,   408,   295,   408,   295,   408,   295,   408,   295,
     408,   295,   408,   295,   407,   409,   295,   412,   296,     7,
       8,   293,   304,   476,   484,   489,   493,    73,    75,    76,
      82,   316,   316,   300,    39,    72,    74,    75,    76,    77,
     111,   112,   113,   114,   117,   121,   122,   123,   226,   455,
     298,   218,   316,   365,   295,   298,   295,   290,   295,   292,
       8,   317,   317,   296,   290,   295,   313,   119,   120,   299,
     316,   384,   451,   300,   166,   472,   316,   221,   136,   449,
      25,   316,   451,   316,   300,   300,   300,   316,   317,   316,
     316,   316,   455,   316,   316,   295,   295,   316,    20,   300,
     317,   457,   458,   444,   445,   455,   291,   312,   291,   295,
      75,    76,    77,   111,   112,   113,   301,   350,   347,   451,
      67,   154,   168,   173,   198,   199,   219,   254,   255,   291,
     314,   321,   332,   342,   358,   359,   369,   373,   381,   403,
     459,   469,   487,   295,   295,   385,   317,   317,   317,   299,
     110,   289,   299,   103,   451,   304,   197,   295,   388,    55,
      57,    58,    59,   393,   396,   397,   398,   399,   400,   401,
     315,   317,   390,   315,   317,   317,   318,    11,    31,    32,
     295,   318,   319,   315,   317,   364,    15,    17,   367,   455,
     451,    87,   313,   411,   365,   327,   295,   412,   295,   317,
     317,   317,   317,   318,   319,   319,   291,   293,   315,   296,
     317,   317,   208,   209,   211,   214,   215,   291,   321,   332,
     459,   477,   479,   480,   482,    84,   209,   212,   291,   473,
     479,   481,   485,    41,   154,   206,   210,   291,   321,   332,
     490,   206,   210,   291,   321,   332,   494,    75,    76,    77,
     111,   112,   113,   295,   295,   316,   316,   300,   455,   313,
     463,   464,   290,    51,   451,   460,   461,     7,   293,   296,
     296,   326,   328,   329,   301,   357,   443,    19,   336,   473,
     136,   316,    19,   300,   450,   450,   450,   305,   451,   451,
      20,   293,   300,   302,   293,   317,    39,    51,    52,    69,
     119,   292,   303,   351,   352,   353,   293,   110,   370,   374,
     317,   317,   488,   110,   289,   103,   451,   290,   290,   290,
     388,   290,   317,   313,   383,   299,   455,   304,   317,   299,
     316,   299,   316,   317,   365,    19,   295,    20,   385,   446,
     447,   448,   291,   451,   393,    56,   390,   402,   315,   317,
     390,   402,   402,   402,    62,    62,   295,   295,   316,   451,
     295,   412,   455,   315,   317,   442,   296,   313,   296,   300,
     296,   296,   296,   296,   296,   407,   296,   304,     8,   293,
     316,   213,   298,   305,   317,   478,   298,   313,   412,   412,
     298,   298,   412,   412,   295,   216,   317,   316,   216,   316,
     216,   317,    16,    21,    22,    24,    25,    26,    27,    28,
      29,    31,    32,    34,    35,    36,    37,    38,    80,    82,
      87,   103,   136,   227,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   249,   258,   290,   379,   380,   452,    63,   361,   300,
     298,   296,   293,   328,     8,   298,   291,   293,     8,   298,
     291,    22,    23,    24,    26,    27,    28,    29,    31,    32,
      35,    36,    37,    38,    42,    43,   110,   321,   330,   410,
     411,   415,   299,   444,   295,   295,   316,   384,    28,    29,
      63,   202,   203,   205,   412,   316,   316,   450,   295,   296,
     296,   317,   458,   455,   296,   295,   352,   295,   316,   355,
     302,   451,   451,    72,   117,   316,   451,    72,   117,   365,
     316,   299,   316,   299,   316,   365,    19,   346,   371,   375,
     291,   489,   296,   136,   383,    39,    46,    48,    49,    50,
      87,    88,    89,   133,   134,   135,   137,   140,   296,   251,
     252,   253,   317,   226,   378,   317,   300,   317,   317,   293,
     300,   455,   384,   446,   455,   296,   293,   315,   317,   315,
     317,   317,   318,    19,   313,   296,   295,   293,   293,   296,
     296,   408,   408,   408,   408,   408,   408,   317,   317,    63,
     247,   289,   317,   295,   304,   295,   296,   296,   295,   295,
     296,   296,   317,   450,   316,    63,   316,   296,    25,    26,
      27,    28,    29,   295,   453,   243,   235,   247,   295,   228,
     248,    22,   453,   453,    21,    22,    24,    25,    26,    27,
      28,    29,    31,    32,    34,    35,    36,    37,    38,   230,
     231,   233,   234,   235,   237,   238,   241,   242,   244,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   305,   454,   296,   413,   299,   305,
     315,   298,   362,    28,    65,    66,   313,   317,   449,   465,
     466,   463,   291,   298,   290,   460,   290,   295,   313,   295,
     299,   295,   299,    26,    27,    28,    29,   295,   299,   295,
     299,   295,   299,   295,   299,   295,   299,   295,   299,   295,
     299,   295,   299,   295,   299,   295,   299,   295,   299,   295,
     299,   295,   299,   104,   109,   321,   331,   412,   317,   302,
     446,   446,   357,   443,   315,   296,   446,   317,   348,   349,
     451,   293,   354,   316,   196,   322,   316,   455,   317,   317,
     293,   455,   384,   291,   169,   170,   171,   172,   291,   314,
     321,   332,   372,   469,   172,   174,   175,   291,   314,   321,
     332,   376,   469,   291,   313,   296,   295,   304,   304,   300,
     300,   300,   300,   295,   384,   136,   300,   300,   451,   362,
     451,   296,   378,   448,    62,    62,   296,   296,   316,   296,
     446,   442,   442,     8,   293,     8,   316,    63,   181,   247,
     478,   296,   317,   250,   313,   299,   299,    25,    26,    27,
      28,    29,   272,   293,   299,   306,   291,   292,   300,   317,
      22,    23,    24,    26,    27,    28,    29,    31,    32,    35,
      36,    37,    38,    44,   313,   410,   414,   295,   295,   290,
     330,   328,   465,   317,   317,   317,   295,   299,   295,   299,
     295,   299,   295,   299,   317,   317,   317,   317,   317,   317,
     318,   317,   317,   319,   317,   318,   319,   317,   317,   317,
     317,   317,   317,   317,   318,   317,   415,   317,     8,    44,
     317,    44,    51,   449,   317,    42,    91,   110,   333,   456,
     296,   300,   296,   296,   295,   295,   472,   296,   296,   296,
     293,   353,   354,   316,   300,   300,   451,   451,   256,   364,
     364,   364,   364,   364,   364,   364,   383,   317,   138,   139,
     138,   139,   379,   350,   315,   293,    19,   315,   315,   317,
     296,   317,   316,   181,   304,   298,   293,   317,   317,   313,
     300,   317,   292,   300,    26,    27,    28,    29,   317,    26,
      27,    28,   317,   330,   291,   291,   296,   300,   296,   300,
     317,   317,   317,   317,   317,   317,   318,   317,   296,   300,
     296,   300,   296,   300,   296,   300,   296,   296,   300,   296,
     296,   300,   296,   300,   296,   300,   296,   300,   296,   300,
     296,   300,   296,   296,   300,   296,     8,   296,   300,    51,
     449,   299,   316,   302,   446,   446,   451,   295,   293,    19,
     365,   296,   296,   296,   295,   451,   384,     8,   478,   317,
     313,   300,   300,   300,   317,   296,   304,   304,   304,   296,
     291,   295,   295,   296,   300,   296,   300,   296,   300,   296,
     300,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   296,   295,     8,   300,   298,   296,   296,
     446,   451,   384,   455,   446,   301,   356,   357,   304,   296,
     293,   296,   452,   300,   317,   317,   317,   422,   420,   295,
     295,   295,   295,   421,   420,   419,   418,   416,   417,   421,
     420,   419,   418,   425,   423,   424,   415,   296,   356,   451,
     296,   295,   478,   313,   296,   296,   296,   296,   465,   296,
     317,   421,   420,   419,   418,   296,   317,   296,   296,   317,
     296,   318,   296,   317,   319,   296,   318,   319,   296,   296,
     296,   296,   296,   415,     8,    44,   296,    44,    51,   296,
     449,   362,   295,    19,   386,   446,   293,   296,   296,   296,
     296,     8,   446,   384,    39,    54,    70,    79,    93,    94,
      95,    96,   125,   126,   127,   128,   129,   130,   131,   290,
     296,   313,   296,   295,   295,   296,   256,   446,   317,   103,
     296,   296,   365,   455,   451,    19,   384,   356,   295,   446,
     296
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   309,   310,   310,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     312,   312,   313,   313,   314,   314,   314,   315,   315,   316,
     316,   316,   317,   318,   318,   319,   319,   319,   320,   320,
     320,   320,   320,   321,   321,   321,   321,   321,   321,   321,
     321,   321,   322,   322,   322,   322,   323,   323,   323,   323,
     324,   325,   326,   327,   327,   328,   329,   329,   329,   330,
     330,   330,   331,   331,   332,   332,   332,   333,   333,   333,
     333,   333,   333,   334,   334,   334,   335,   336,   336,   336,
     336,   336,   336,   337,   338,   339,   340,   341,   342,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   344,   344,   345,   345,
     346,   346,   347,   347,   348,   348,   349,   349,   350,   350,
     351,   351,   351,   351,   351,   351,   351,   352,   352,   353,
     353,   354,   354,   355,   356,   356,   357,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   359,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   361,   361,   362,   362,   363,
     363,   364,   364,   364,   364,   364,   364,   364,   365,   365,
     365,   365,   366,   366,   366,   366,   366,   366,   366,   366,
     367,   368,   368,   368,   368,   368,   368,   369,   369,   370,
     370,   370,   371,   371,   372,   372,   372,   372,   372,   372,
     372,   372,   373,   374,   374,   374,   375,   375,   376,   376,
     376,   376,   376,   376,   376,   377,   378,   378,   379,   379,
     380,   381,   382,   382,   382,   382,   382,   382,   382,   382,
     382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
     382,   382,   382,   382,   382,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
     383,   384,   384,   384,   385,   385,   385,   385,   385,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   387,   388,   388,   389,   389,
     389,   389,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   389,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   389,   389,   389,   390,   391,   392,   393,   393,   394,
     394,   394,   395,   396,   396,   396,   396,   397,   397,   397,
     398,   399,   400,   401,   402,   402,   402,   403,   404,   404,
     405,   405,   405,   406,   406,   407,   407,   408,   408,   409,
     409,   409,   409,   409,   409,   409,   409,   409,   409,   409,
     409,   409,   409,   409,   410,   410,   410,   410,   410,   410,
     410,   410,   410,   410,   410,   410,   410,   410,   410,   410,
     410,   410,   410,   411,   412,   412,   413,   413,   414,   414,
     414,   415,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   415,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   415,   415,   415,   415,   415,   415,   416,   416,   416,
     417,   417,   417,   418,   418,   419,   419,   420,   420,   421,
     421,   422,   422,   423,   423,   423,   424,   424,   424,   424,
     425,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   441,   441,
     441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
     441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
     442,   442,   442,   442,   442,   443,   443,   444,   444,   445,
     445,   446,   446,   447,   447,   448,   448,   448,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   450,   450,
     451,   451,   451,   451,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   453,
     453,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   457,   457,   458,   458,   458,   458,   458,   459,
     459,   459,   459,   459,   459,   460,   460,   460,   461,   461,
     462,   462,   463,   463,   464,   465,   465,   466,   466,   466,
     466,   466,   466,   466,   466,   467,   467,   467,   467,   467,
     467,   467,   467,   467,   467,   467,   467,   467,   467,   467,
     468,   468,   469,   469,   469,   469,   469,   469,   469,   469,
     469,   469,   469,   470,   470,   471,   471,   472,   472,   473,
     474,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   476,   476,   477,   477,   477,   477,   477,   477,   477,
     478,   478,   479,   479,   479,   479,   479,   479,   480,   481,
     482,   483,   483,   484,   484,   485,   485,   485,   485,   486,
     487,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   489,   489,   490,   490,   490,   490,   490,   490,   490,
     491,   491,   492,   492,   492,   493,   493,   494,   494,   494,
     494
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     4,     4,     3,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     1,     1,     1,
       2,     2,     3,     2,     2,     1,     1,     1,     4,     1,
       0,     2,     1,     3,     2,     4,     6,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     4,     4,     2,     3,     2,     2,     2,     1,     1,
       2,     1,     2,     4,     6,     3,     5,     7,     9,     3,
       4,     7,     1,     1,     1,     2,     0,     2,     2,     0,
       6,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     3,     1,     2,     3,     7,     0,     2,     2,
       2,     2,     2,     3,     3,     2,     1,     4,     3,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     5,     0,     2,     0,     2,
       0,     2,     3,     1,     0,     1,     1,     3,     0,     3,
       1,     1,     1,     1,     1,     1,     4,     0,     2,     4,
       3,     0,     2,     3,     0,     1,     5,     3,     4,     4,
       4,     1,     1,     1,     1,     1,     2,     2,     4,    13,
      22,     1,     1,     5,     3,     7,     5,     4,     7,     0,
       2,     2,     2,     2,     2,     2,     2,     5,     2,     2,
       2,     2,     2,     2,     5,     0,     2,     0,     2,     0,
       3,     9,     9,     7,     7,     1,     1,     1,     2,     2,
       1,     4,     0,     1,     1,     2,     2,     2,     2,     1,
       4,     2,     5,     3,     2,     2,     1,     4,     3,     0,
       2,     2,     0,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     9,     0,     2,     2,     0,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     0,     4,     1,     3,
       1,    13,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     5,     8,     6,     5,     0,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     4,     4,     4,     4,
       5,     1,     1,     1,     0,     4,     4,     4,     4,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     5,     1,     0,     2,     2,     1,
       2,     4,     5,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     4,     6,     4,     4,    11,     1,     5,
       3,     7,     5,     5,     3,     1,     2,     2,     1,     2,
       4,     4,     1,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     1,     1,     1,     4,     4,     2,     4,     2,
       0,     1,     1,     3,     1,     3,     1,     0,     3,     5,
       4,     3,     5,     5,     5,     5,     5,     5,     2,     2,
       2,     2,     2,     2,     4,     4,     4,     4,     4,     4,
       4,     4,     5,     5,     5,     5,     4,     4,     4,     4,
       4,     4,     3,     2,     0,     1,     1,     2,     1,     1,
       1,     1,     4,     4,     5,     4,     4,     4,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     8,     8,
       8,     8,     7,     7,     7,     7,     7,     0,     2,     2,
       0,     2,     2,     0,     2,     0,     2,     0,     2,     0,
       2,     0,     2,     0,     2,     2,     0,     2,     3,     2,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     2,
       2,     2,     2,     2,     3,     2,     2,     2,     5,     3,
       2,     2,     2,     2,     2,     5,     4,     6,     2,     4,
       0,     3,     3,     1,     1,     0,     3,     0,     1,     1,
       3,     0,     1,     1,     3,     1,     3,     4,     4,     4,
       4,     5,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     4,     1,     0,    10,     6,     5,     6,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     1,     1,     1,     1,     2,
       3,     4,     6,     5,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     2,     2,     4,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     1,     0,
       5,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     3,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     3,     2,     3,     4,     2,     2,     2,     5,
       5,     7,     4,     3,     2,     3,     2,     1,     1,     2,
       3,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     3,     0,     1,     1,     3,     2,     6,
       7,     3,     3,     3,     6,     0,     1,     3,     5,     6,
       4,     4,     1,     3,     3,     1,     1,     1,     1,     4,
       1,     6,     6,     6,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     5,     4,     7,     6,     7,     6,
       9,     8,     3,     8,     4,     0,     2,     0,     1,     3,
       3,     0,     2,     2,     2,     3,     2,     2,     2,     2,
       2,     0,     2,     3,     1,     1,     4,     5,     4,     5,
       1,     1,     3,     8,     2,     3,     1,     1,     3,     3,
       3,     4,     6,     0,     2,     3,     1,     3,     1,     4,
       3,     0,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     0,     2,     2,     3,     3,     4,     2,     1,     1,
       3,     5,     0,     2,     2,     0,     2,     4,     3,     1,
       1
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
  case 4: /* decl: classHead '{' classDecls '}'  */
#line 193 "asmparse.y"
                                                                                { PASM->EndClass(); }
#line 3542 "prebuilt\\asmparse.cpp"
    break;

  case 5: /* decl: nameSpaceHead '{' decls '}'  */
#line 194 "asmparse.y"
                                                                                { PASM->EndNameSpace(); }
#line 3548 "prebuilt\\asmparse.cpp"
    break;

  case 6: /* decl: methodHead methodDecls '}'  */
#line 195 "asmparse.y"
                                                                                { if(PASM->m_pCurMethod->m_ulLines[1] ==0)
                                                                                  {  PASM->m_pCurMethod->m_ulLines[1] = PASM->m_ulCurLine;
                                                                                     PASM->m_pCurMethod->m_ulColumns[1]=PASM->m_ulCurColumn;}
                                                                                  PASM->EndMethod(); }
#line 3557 "prebuilt\\asmparse.cpp"
    break;

  case 13: /* decl: assemblyHead '{' assemblyDecls '}'  */
#line 205 "asmparse.y"
                                                                                { PASMM->EndAssembly(); }
#line 3563 "prebuilt\\asmparse.cpp"
    break;

  case 14: /* decl: assemblyRefHead '{' assemblyRefDecls '}'  */
#line 206 "asmparse.y"
                                                                                { PASMM->EndAssembly(); }
#line 3569 "prebuilt\\asmparse.cpp"
    break;

  case 15: /* decl: exptypeHead '{' exptypeDecls '}'  */
#line 207 "asmparse.y"
                                                                                { PASMM->EndComType(); }
#line 3575 "prebuilt\\asmparse.cpp"
    break;

  case 16: /* decl: manifestResHead '{' manifestResDecls '}'  */
#line 208 "asmparse.y"
                                                                                { PASMM->EndManifestRes(); }
#line 3581 "prebuilt\\asmparse.cpp"
    break;

  case 20: /* decl: _SUBSYSTEM int32  */
#line 212 "asmparse.y"
                                                                                {
#ifdef _PREFAST_
#pragma warning(push)
#pragma warning(disable:22011) // Suppress PREFast warning about integer overflow/underflow
#endif
                                                                                  PASM->m_dwSubsystem = (yyvsp[0].int32);
#ifdef _PREFAST_
#pragma warning(pop)
#endif
                                                                                }
#line 3596 "prebuilt\\asmparse.cpp"
    break;

  case 21: /* decl: _CORFLAGS int32  */
#line 222 "asmparse.y"
                                                                                { PASM->m_dwComImageFlags = (yyvsp[0].int32); }
#line 3602 "prebuilt\\asmparse.cpp"
    break;

  case 22: /* decl: _FILE ALIGNMENT_ int32  */
#line 223 "asmparse.y"
                                                                                { PASM->m_dwFileAlignment = (yyvsp[0].int32);
                                                                                  if(((yyvsp[0].int32) & ((yyvsp[0].int32) - 1))||((yyvsp[0].int32) < 0x200)||((yyvsp[0].int32) > 0x10000))
                                                                                    PASM->report->error("Invalid file alignment, must be power of 2 from 0x200 to 0x10000\n");}
#line 3610 "prebuilt\\asmparse.cpp"
    break;

  case 23: /* decl: _IMAGEBASE int64  */
#line 226 "asmparse.y"
                                                                                { PASM->m_stBaseAddress = (ULONGLONG)(*((yyvsp[0].int64))); delete (yyvsp[0].int64);
                                                                                  if(PASM->m_stBaseAddress & 0xFFFF)
                                                                                    PASM->report->error("Invalid image base, must be 0x10000-aligned\n");}
#line 3618 "prebuilt\\asmparse.cpp"
    break;

  case 24: /* decl: _STACKRESERVE int64  */
#line 229 "asmparse.y"
                                                                                { PASM->m_stSizeOfStackReserve = (size_t)(*((yyvsp[0].int64))); delete (yyvsp[0].int64); }
#line 3624 "prebuilt\\asmparse.cpp"
    break;

  case 29: /* decl: _MSCORLIB  */
#line 234 "asmparse.y"
                                                                                { PASM->m_fIsMscorlib = TRUE; }
#line 3630 "prebuilt\\asmparse.cpp"
    break;

  case 32: /* compQstring: QSTRING  */
#line 241 "asmparse.y"
                                                                                { (yyval.binstr) = (yyvsp[0].binstr); }
#line 3636 "prebuilt\\asmparse.cpp"
    break;

  case 33: /* compQstring: compQstring '+' QSTRING  */
#line 242 "asmparse.y"
                                                                                { (yyval.binstr) = (yyvsp[-2].binstr); (yyval.binstr)->append((yyvsp[0].binstr)); delete (yyvsp[0].binstr); }
#line 3642 "prebuilt\\asmparse.cpp"
    break;

  case 34: /* languageDecl: _LANGUAGE SQSTRING  */
#line 245 "asmparse.y"
                                                                                { LPCSTRToGuid((yyvsp[0].string),&(PASM->m_guidLang)); }
#line 3648 "prebuilt\\asmparse.cpp"
    break;

  case 35: /* languageDecl: _LANGUAGE SQSTRING ',' SQSTRING  */
#line 246 "asmparse.y"
                                                                                { LPCSTRToGuid((yyvsp[-2].string),&(PASM->m_guidLang));
                                                                                  LPCSTRToGuid((yyvsp[0].string),&(PASM->m_guidLangVendor));}
#line 3655 "prebuilt\\asmparse.cpp"
    break;

  case 36: /* languageDecl: _LANGUAGE SQSTRING ',' SQSTRING ',' SQSTRING  */
#line 248 "asmparse.y"
                                                                                { LPCSTRToGuid((yyvsp[-4].string),&(PASM->m_guidLang));
                                                                                  LPCSTRToGuid((yyvsp[-2].string),&(PASM->m_guidLangVendor));
                                                                                  LPCSTRToGuid((yyvsp[-2].string),&(PASM->m_guidDoc));}
#line 3663 "prebuilt\\asmparse.cpp"
    break;

  case 37: /* id: ID  */
#line 253 "asmparse.y"
                                                              { (yyval.string) = (yyvsp[0].string); }
#line 3669 "prebuilt\\asmparse.cpp"
    break;

  case 38: /* id: SQSTRING  */
#line 254 "asmparse.y"
                                                              { (yyval.string) = (yyvsp[0].string); }
#line 3675 "prebuilt\\asmparse.cpp"
    break;

  case 39: /* dottedName: id  */
#line 257 "asmparse.y"
                                                              { (yyval.string) = (yyvsp[0].string); }
#line 3681 "prebuilt\\asmparse.cpp"
    break;

  case 40: /* dottedName: DOTTEDNAME  */
#line 258 "asmparse.y"
                                                              { (yyval.string) = (yyvsp[0].string); }
#line 3687 "prebuilt\\asmparse.cpp"
    break;

  case 41: /* dottedName: dottedName '.' dottedName  */
#line 259 "asmparse.y"
                                                              { (yyval.string) = newStringWDel((yyvsp[-2].string), '.', (yyvsp[0].string)); }
#line 3693 "prebuilt\\asmparse.cpp"
    break;

  case 42: /* int32: INT32_V  */
#line 262 "asmparse.y"
                                                              { (yyval.int32) = (yyvsp[0].int32); }
#line 3699 "prebuilt\\asmparse.cpp"
    break;

  case 43: /* int64: INT64_V  */
#line 265 "asmparse.y"
                                                              { (yyval.int64) = (yyvsp[0].int64); }
#line 3705 "prebuilt\\asmparse.cpp"
    break;

  case 44: /* int64: INT32_V  */
#line 266 "asmparse.y"
                                                              { (yyval.int64) = neg ? new int64_t((yyvsp[0].int32)) : new int64_t((unsigned)(yyvsp[0].int32)); }
#line 3711 "prebuilt\\asmparse.cpp"
    break;

  case 45: /* float64: FLOAT64  */
#line 269 "asmparse.y"
                                                              { (yyval.float64) = (yyvsp[0].float64); }
#line 3717 "prebuilt\\asmparse.cpp"
    break;

  case 46: /* float64: FLOAT32_ '(' int32 ')'  */
#line 270 "asmparse.y"
                                                              { float f; *((int32_t*) (&f)) = (yyvsp[-1].int32); (yyval.float64) = new double(f); }
#line 3723 "prebuilt\\asmparse.cpp"
    break;

  case 47: /* float64: FLOAT64_ '(' int64 ')'  */
#line 271 "asmparse.y"
                                                              { (yyval.float64) = (double*) (yyvsp[-1].int64); }
#line 3729 "prebuilt\\asmparse.cpp"
    break;

  case 48: /* typedefDecl: _TYPEDEF type AS_ dottedName  */
#line 275 "asmparse.y"
                                                                                { PASM->AddTypeDef((yyvsp[-2].binstr),(yyvsp[0].string)); }
#line 3735 "prebuilt\\asmparse.cpp"
    break;

  case 49: /* typedefDecl: _TYPEDEF className AS_ dottedName  */
#line 276 "asmparse.y"
                                                                                { PASM->AddTypeDef((yyvsp[-2].token),(yyvsp[0].string)); }
#line 3741 "prebuilt\\asmparse.cpp"
    break;

  case 50: /* typedefDecl: _TYPEDEF memberRef AS_ dottedName  */
#line 277 "asmparse.y"
                                                                                { PASM->AddTypeDef((yyvsp[-2].token),(yyvsp[0].string)); }
#line 3747 "prebuilt\\asmparse.cpp"
    break;

  case 51: /* typedefDecl: _TYPEDEF customDescr AS_ dottedName  */
#line 278 "asmparse.y"
                                                                                { (yyvsp[-2].cad)->tkOwner = 0; PASM->AddTypeDef((yyvsp[-2].cad),(yyvsp[0].string)); }
#line 3753 "prebuilt\\asmparse.cpp"
    break;

  case 52: /* typedefDecl: _TYPEDEF customDescrWithOwner AS_ dottedName  */
#line 279 "asmparse.y"
                                                                                { PASM->AddTypeDef((yyvsp[-2].cad),(yyvsp[0].string)); }
#line 3759 "prebuilt\\asmparse.cpp"
    break;

  case 53: /* compControl: P_DEFINE dottedName  */
#line 284 "asmparse.y"
                                                                                { DefineVar((yyvsp[0].string), NULL); }
#line 3765 "prebuilt\\asmparse.cpp"
    break;

  case 54: /* compControl: P_DEFINE dottedName compQstring  */
#line 285 "asmparse.y"
                                                                                { DefineVar((yyvsp[-1].string), (yyvsp[0].binstr)); }
#line 3771 "prebuilt\\asmparse.cpp"
    break;

  case 55: /* compControl: P_UNDEF dottedName  */
#line 286 "asmparse.y"
                                                                                { UndefVar((yyvsp[0].string)); }
#line 3777 "prebuilt\\asmparse.cpp"
    break;

  case 56: /* compControl: P_IFDEF dottedName  */
#line 287 "asmparse.y"
                                                                                { SkipToken = !IsVarDefined((yyvsp[0].string));
                                                                                  IfEndif++;
                                                                                }
#line 3785 "prebuilt\\asmparse.cpp"
    break;

  case 57: /* compControl: P_IFNDEF dottedName  */
#line 290 "asmparse.y"
                                                                                { SkipToken = IsVarDefined((yyvsp[0].string));
                                                                                  IfEndif++;
                                                                                }
#line 3793 "prebuilt\\asmparse.cpp"
    break;

  case 58: /* compControl: P_ELSE  */
#line 293 "asmparse.y"
                                                                                { if(IfEndif == 1) SkipToken = !SkipToken;}
#line 3799 "prebuilt\\asmparse.cpp"
    break;

  case 59: /* compControl: P_ENDIF  */
#line 294 "asmparse.y"
                                                                                { if(IfEndif == 0)
                                                                                    PASM->report->error("Unmatched #endif\n");
                                                                                  else IfEndif--;
                                                                                }
#line 3808 "prebuilt\\asmparse.cpp"
    break;

  case 60: /* compControl: P_INCLUDE QSTRING  */
#line 298 "asmparse.y"
                                                                                { _ASSERTE(!"yylex should have dealt with this"); }
#line 3814 "prebuilt\\asmparse.cpp"
    break;

  case 61: /* compControl: ';'  */
#line 299 "asmparse.y"
                                                                                { }
#line 3820 "prebuilt\\asmparse.cpp"
    break;

  case 62: /* customDescr: _CUSTOM customType  */
#line 303 "asmparse.y"
                                                                                { (yyval.cad) = new CustomDescr(PASM->m_tkCurrentCVOwner, (yyvsp[0].token), NULL); }
#line 3826 "prebuilt\\asmparse.cpp"
    break;

  case 63: /* customDescr: _CUSTOM customType '=' compQstring  */
#line 304 "asmparse.y"
                                                                                { (yyval.cad) = new CustomDescr(PASM->m_tkCurrentCVOwner, (yyvsp[-2].token), (yyvsp[0].binstr)); }
#line 3832 "prebuilt\\asmparse.cpp"
    break;

  case 64: /* customDescr: _CUSTOM customType '=' '{' customBlobDescr '}'  */
#line 305 "asmparse.y"
                                                                                { (yyval.cad) = new CustomDescr(PASM->m_tkCurrentCVOwner, (yyvsp[-4].token), (yyvsp[-1].binstr)); }
#line 3838 "prebuilt\\asmparse.cpp"
    break;

  case 65: /* customDescr: customHead bytes ')'  */
#line 306 "asmparse.y"
                                                                                { (yyval.cad) = new CustomDescr(PASM->m_tkCurrentCVOwner, (yyvsp[-2].int32), (yyvsp[-1].binstr)); }
#line 3844 "prebuilt\\asmparse.cpp"
    break;

  case 66: /* customDescrWithOwner: _CUSTOM '(' ownerType ')' customType  */
#line 309 "asmparse.y"
                                                                                { (yyval.cad) = new CustomDescr((yyvsp[-2].token), (yyvsp[0].token), NULL); }
#line 3850 "prebuilt\\asmparse.cpp"
    break;

  case 67: /* customDescrWithOwner: _CUSTOM '(' ownerType ')' customType '=' compQstring  */
#line 310 "asmparse.y"
                                                                                { (yyval.cad) = new CustomDescr((yyvsp[-4].token), (yyvsp[-2].token), (yyvsp[0].binstr)); }
#line 3856 "prebuilt\\asmparse.cpp"
    break;

  case 68: /* customDescrWithOwner: _CUSTOM '(' ownerType ')' customType '=' '{' customBlobDescr '}'  */
#line 312 "asmparse.y"
                                                                                { (yyval.cad) = new CustomDescr((yyvsp[-6].token), (yyvsp[-4].token), (yyvsp[-1].binstr)); }
#line 3862 "prebuilt\\asmparse.cpp"
    break;

  case 69: /* customDescrWithOwner: customHeadWithOwner bytes ')'  */
#line 313 "asmparse.y"
                                                                                { (yyval.cad) = new CustomDescr(PASM->m_tkCurrentCVOwner, (yyvsp[-2].int32), (yyvsp[-1].binstr)); }
#line 3868 "prebuilt\\asmparse.cpp"
    break;

  case 70: /* customHead: _CUSTOM customType '=' '('  */
#line 316 "asmparse.y"
                                                                                { (yyval.int32) = (yyvsp[-2].token); bParsingByteArray = TRUE; }
#line 3874 "prebuilt\\asmparse.cpp"
    break;

  case 71: /* customHeadWithOwner: _CUSTOM '(' ownerType ')' customType '=' '('  */
#line 320 "asmparse.y"
                                                                                { PASM->m_pCustomDescrList = NULL;
                                                                                  PASM->m_tkCurrentCVOwner = (yyvsp[-4].token);
                                                                                  (yyval.int32) = (yyvsp[-2].token); bParsingByteArray = TRUE; }
#line 3882 "prebuilt\\asmparse.cpp"
    break;

  case 72: /* customType: methodRef  */
#line 325 "asmparse.y"
                                                            { (yyval.token) = (yyvsp[0].token); }
#line 3888 "prebuilt\\asmparse.cpp"
    break;

  case 73: /* ownerType: typeSpec  */
#line 328 "asmparse.y"
                                                            { (yyval.token) = (yyvsp[0].token); }
#line 3894 "prebuilt\\asmparse.cpp"
    break;

  case 74: /* ownerType: memberRef  */
#line 329 "asmparse.y"
                                                            { (yyval.token) = (yyvsp[0].token); }
#line 3900 "prebuilt\\asmparse.cpp"
    break;

  case 75: /* customBlobDescr: customBlobArgs customBlobNVPairs  */
#line 333 "asmparse.y"
                                                                                { (yyval.binstr) = (yyvsp[-1].binstr);
                                                                                  (yyval.binstr)->appendInt16(VAL16(nCustomBlobNVPairs));
                                                                                  (yyval.binstr)->append((yyvsp[0].binstr));
                                                                                  nCustomBlobNVPairs = 0; }
#line 3909 "prebuilt\\asmparse.cpp"
    break;

  case 76: /* customBlobArgs: %empty  */
#line 339 "asmparse.y"
                                                                                { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt16(VAL16(0x0001)); }
#line 3915 "prebuilt\\asmparse.cpp"
    break;

  case 77: /* customBlobArgs: customBlobArgs serInit  */
#line 340 "asmparse.y"
                                                                                { (yyval.binstr) = (yyvsp[-1].binstr);
                                                                                  AppendFieldToCustomBlob((yyval.binstr),(yyvsp[0].binstr)); }
#line 3922 "prebuilt\\asmparse.cpp"
    break;

  case 78: /* customBlobArgs: customBlobArgs compControl  */
#line 342 "asmparse.y"
                                                                                { (yyval.binstr) = (yyvsp[-1].binstr); }
#line 3928 "prebuilt\\asmparse.cpp"
    break;

  case 79: /* customBlobNVPairs: %empty  */
#line 345 "asmparse.y"
                                                                                { (yyval.binstr) = new BinStr(); }
#line 3934 "prebuilt\\asmparse.cpp"
    break;

  case 80: /* customBlobNVPairs: customBlobNVPairs fieldOrProp serializType dottedName '=' serInit  */
#line 347 "asmparse.y"
                                                                                { (yyval.binstr) = (yyvsp[-5].binstr); (yyval.binstr)->appendInt8((yyvsp[-4].int32));
                                                                                  (yyval.binstr)->append((yyvsp[-3].binstr));
                                                                                  AppendStringWithLength((yyval.binstr),(yyvsp[-2].string));
                                                                                  AppendFieldToCustomBlob((yyval.binstr),(yyvsp[0].binstr));
                                                                                  nCustomBlobNVPairs++; }
#line 3944 "prebuilt\\asmparse.cpp"
    break;

  case 81: /* customBlobNVPairs: customBlobNVPairs compControl  */
#line 352 "asmparse.y"
                                                                                { (yyval.binstr) = (yyvsp[-1].binstr); }
#line 3950 "prebuilt\\asmparse.cpp"
    break;

  case 82: /* fieldOrProp: FIELD_  */
#line 355 "asmparse.y"
                                                                                { (yyval.int32) = SERIALIZATION_TYPE_FIELD; }
#line 3956 "prebuilt\\asmparse.cpp"
    break;

  case 83: /* fieldOrProp: PROPERTY_  */
#line 356 "asmparse.y"
                                                                                { (yyval.int32) = SERIALIZATION_TYPE_PROPERTY; }
#line 3962 "prebuilt\\asmparse.cpp"
    break;

  case 84: /* customAttrDecl: customDescr  */
#line 359 "asmparse.y"
                                                                                { if((yyvsp[0].cad)->tkOwner && !(yyvsp[0].cad)->tkInterfacePair)
                                                                                    PASM->DefineCV((yyvsp[0].cad));
                                                                                  else if(PASM->m_pCustomDescrList)
                                                                                    PASM->m_pCustomDescrList->PUSH((yyvsp[0].cad)); }
#line 3971 "prebuilt\\asmparse.cpp"
    break;

  case 85: /* customAttrDecl: customDescrWithOwner  */
#line 363 "asmparse.y"
                                                                                { PASM->DefineCV((yyvsp[0].cad)); }
#line 3977 "prebuilt\\asmparse.cpp"
    break;

  case 86: /* customAttrDecl: TYPEDEF_CA  */
#line 364 "asmparse.y"
                                                                                { CustomDescr* pNew = new CustomDescr((yyvsp[0].tdd)->m_pCA);
                                                                                  if(pNew->tkOwner == 0) pNew->tkOwner = PASM->m_tkCurrentCVOwner;
                                                                                  if(pNew->tkOwner)
                                                                                    PASM->DefineCV(pNew);
                                                                                  else if(PASM->m_pCustomDescrList)
                                                                                    PASM->m_pCustomDescrList->PUSH(pNew); }
#line 3988 "prebuilt\\asmparse.cpp"
    break;

  case 87: /* serializType: simpleType  */
#line 372 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[0].binstr); }
#line 3994 "prebuilt\\asmparse.cpp"
    break;

  case 88: /* serializType: TYPE_  */
#line 373 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_TYPE); }
#line 4000 "prebuilt\\asmparse.cpp"
    break;

  case 89: /* serializType: OBJECT_  */
#line 374 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_TAGGED_OBJECT); }
#line 4006 "prebuilt\\asmparse.cpp"
    break;

  case 90: /* serializType: ENUM_ CLASS_ SQSTRING  */
#line 375 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_ENUM);
                                                                AppendStringWithLength((yyval.binstr),(yyvsp[0].string)); }
#line 4013 "prebuilt\\asmparse.cpp"
    break;

  case 91: /* serializType: ENUM_ className  */
#line 377 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_ENUM);
                                                                AppendStringWithLength((yyval.binstr),PASM->ReflectionNotation((yyvsp[0].token))); }
#line 4020 "prebuilt\\asmparse.cpp"
    break;

  case 92: /* serializType: serializType '[' ']'  */
#line 379 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[-2].binstr); (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 4026 "prebuilt\\asmparse.cpp"
    break;

  case 93: /* moduleHead: _MODULE  */
#line 384 "asmparse.y"
                                                                                { PASMM->SetModuleName(NULL); PASM->m_tkCurrentCVOwner=1; }
#line 4032 "prebuilt\\asmparse.cpp"
    break;

  case 94: /* moduleHead: _MODULE dottedName  */
#line 385 "asmparse.y"
                                                                                { PASMM->SetModuleName((yyvsp[0].string)); PASM->m_tkCurrentCVOwner=1; }
#line 4038 "prebuilt\\asmparse.cpp"
    break;

  case 95: /* moduleHead: _MODULE EXTERN_ dottedName  */
#line 386 "asmparse.y"
                                                                                { BinStr* pbs = new BinStr();
                                                                                  unsigned L = (unsigned)strlen((yyvsp[0].string));
                                                                                  memcpy((char*)(pbs->getBuff(L)),(yyvsp[0].string),L);
                                                                                  PASM->EmitImport(pbs); delete pbs;}
#line 4047 "prebuilt\\asmparse.cpp"
    break;

  case 96: /* vtfixupDecl: _VTFIXUP '[' int32 ']' vtfixupAttr AT_ id  */
#line 393 "asmparse.y"
                                                                                { /*PASM->SetDataSection(); PASM->EmitDataLabel($7);*/
                                                                                  PASM->m_VTFList.PUSH(new VTFEntry((USHORT)(yyvsp[-4].int32), (USHORT)(yyvsp[-2].int32), (yyvsp[0].string))); }
#line 4054 "prebuilt\\asmparse.cpp"
    break;

  case 97: /* vtfixupAttr: %empty  */
#line 397 "asmparse.y"
                                                                                { (yyval.int32) = 0; }
#line 4060 "prebuilt\\asmparse.cpp"
    break;

  case 98: /* vtfixupAttr: vtfixupAttr INT32_  */
#line 398 "asmparse.y"
                                                                                { (yyval.int32) = (yyvsp[-1].int32) | COR_VTABLE_32BIT; }
#line 4066 "prebuilt\\asmparse.cpp"
    break;

  case 99: /* vtfixupAttr: vtfixupAttr INT64_  */
#line 399 "asmparse.y"
                                                                                { (yyval.int32) = (yyvsp[-1].int32) | COR_VTABLE_64BIT; }
#line 4072 "prebuilt\\asmparse.cpp"
    break;

  case 100: /* vtfixupAttr: vtfixupAttr FROMUNMANAGED_  */
#line 400 "asmparse.y"
                                                                                { (yyval.int32) = (yyvsp[-1].int32) | COR_VTABLE_FROM_UNMANAGED; }
#line 4078 "prebuilt\\asmparse.cpp"
    break;

  case 101: /* vtfixupAttr: vtfixupAttr CALLMOSTDERIVED_  */
#line 401 "asmparse.y"
                                                                                { (yyval.int32) = (yyvsp[-1].int32) | COR_VTABLE_CALL_MOST_DERIVED; }
#line 4084 "prebuilt\\asmparse.cpp"
    break;

  case 102: /* vtfixupAttr: vtfixupAttr RETAINAPPDOMAIN_  */
#line 402 "asmparse.y"
                                                                                { (yyval.int32) = (yyvsp[-1].int32) | COR_VTABLE_FROM_UNMANAGED_RETAIN_APPDOMAIN; }
#line 4090 "prebuilt\\asmparse.cpp"
    break;

  case 103: /* vtableDecl: vtableHead bytes ')'  */
#line 405 "asmparse.y"
                                                                                { PASM->m_pVTable = (yyvsp[-1].binstr); }
#line 4096 "prebuilt\\asmparse.cpp"
    break;

  case 104: /* vtableHead: _VTABLE '=' '('  */
#line 408 "asmparse.y"
                                                                                { bParsingByteArray = TRUE; }
#line 4102 "prebuilt\\asmparse.cpp"
    break;

  case 105: /* nameSpaceHead: _NAMESPACE dottedName  */
#line 412 "asmparse.y"
                                                                                { PASM->StartNameSpace((yyvsp[0].string)); }
#line 4108 "prebuilt\\asmparse.cpp"
    break;

  case 106: /* _class: _CLASS  */
#line 415 "asmparse.y"
                                                                                { newclass = TRUE; }
#line 4114 "prebuilt\\asmparse.cpp"
    break;

  case 107: /* classHeadBegin: _class classAttr dottedName typarsClause  */
#line 418 "asmparse.y"
                                                                                { if((yyvsp[0].typarlist)) FixupConstraints();
                                                                                  PASM->StartClass((yyvsp[-1].string), (yyvsp[-2].classAttr), (yyvsp[0].typarlist));
                                                                                  TyParFixupList.RESET(false);
                                                                                  newclass = FALSE;
                                                                                }
#line 4124 "prebuilt\\asmparse.cpp"
    break;

  case 108: /* classHead: classHeadBegin extendsClause implClause  */
#line 424 "asmparse.y"
                                                                                { PASM->AddClass(); }
#line 4130 "prebuilt\\asmparse.cpp"
    break;

  case 109: /* classAttr: %empty  */
#line 427 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) 0; }
#line 4136 "prebuilt\\asmparse.cpp"
    break;

  case 110: /* classAttr: classAttr PUBLIC_  */
#line 428 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-1].classAttr) & ~tdVisibilityMask) | tdPublic); }
#line 4142 "prebuilt\\asmparse.cpp"
    break;

  case 111: /* classAttr: classAttr PRIVATE_  */
#line 429 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-1].classAttr) & ~tdVisibilityMask) | tdNotPublic); }
#line 4148 "prebuilt\\asmparse.cpp"
    break;

  case 112: /* classAttr: classAttr VALUE_  */
#line 430 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) ((yyvsp[-1].classAttr) | 0x80000000 | tdSealed); }
#line 4154 "prebuilt\\asmparse.cpp"
    break;

  case 113: /* classAttr: classAttr ENUM_  */
#line 431 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) ((yyvsp[-1].classAttr) | 0x40000000); }
#line 4160 "prebuilt\\asmparse.cpp"
    break;

  case 114: /* classAttr: classAttr INTERFACE_  */
#line 432 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) ((yyvsp[-1].classAttr) | tdInterface | tdAbstract); }
#line 4166 "prebuilt\\asmparse.cpp"
    break;

  case 115: /* classAttr: classAttr SEALED_  */
#line 433 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) ((yyvsp[-1].classAttr) | tdSealed); }
#line 4172 "prebuilt\\asmparse.cpp"
    break;

  case 116: /* classAttr: classAttr ABSTRACT_  */
#line 434 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) ((yyvsp[-1].classAttr) | tdAbstract); }
#line 4178 "prebuilt\\asmparse.cpp"
    break;

  case 117: /* classAttr: classAttr AUTO_  */
#line 435 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-1].classAttr) & ~tdLayoutMask) | tdAutoLayout); }
#line 4184 "prebuilt\\asmparse.cpp"
    break;

  case 118: /* classAttr: classAttr SEQUENTIAL_  */
#line 436 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-1].classAttr) & ~tdLayoutMask) | tdSequentialLayout); }
#line 4190 "prebuilt\\asmparse.cpp"
    break;

  case 119: /* classAttr: classAttr EXPLICIT_  */
#line 437 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-1].classAttr) & ~tdLayoutMask) | tdExplicitLayout); }
#line 4196 "prebuilt\\asmparse.cpp"
    break;

  case 120: /* classAttr: classAttr ANSI_  */
#line 438 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-1].classAttr) & ~tdStringFormatMask) | tdAnsiClass); }
#line 4202 "prebuilt\\asmparse.cpp"
    break;

  case 121: /* classAttr: classAttr UNICODE_  */
#line 439 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-1].classAttr) & ~tdStringFormatMask) | tdUnicodeClass); }
#line 4208 "prebuilt\\asmparse.cpp"
    break;

  case 122: /* classAttr: classAttr AUTOCHAR_  */
#line 440 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-1].classAttr) & ~tdStringFormatMask) | tdAutoClass); }
#line 4214 "prebuilt\\asmparse.cpp"
    break;

  case 123: /* classAttr: classAttr IMPORT_  */
#line 441 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) ((yyvsp[-1].classAttr) | tdImport); }
#line 4220 "prebuilt\\asmparse.cpp"
    break;

  case 124: /* classAttr: classAttr SERIALIZABLE_  */
#line 442 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) ((yyvsp[-1].classAttr) | tdSerializable); }
#line 4226 "prebuilt\\asmparse.cpp"
    break;

  case 125: /* classAttr: classAttr WINDOWSRUNTIME_  */
#line 443 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) ((yyvsp[-1].classAttr) | tdWindowsRuntime); }
#line 4232 "prebuilt\\asmparse.cpp"
    break;

  case 126: /* classAttr: classAttr NESTED_ PUBLIC_  */
#line 444 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-2].classAttr) & ~tdVisibilityMask) | tdNestedPublic); }
#line 4238 "prebuilt\\asmparse.cpp"
    break;

  case 127: /* classAttr: classAttr NESTED_ PRIVATE_  */
#line 445 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-2].classAttr) & ~tdVisibilityMask) | tdNestedPrivate); }
#line 4244 "prebuilt\\asmparse.cpp"
    break;

  case 128: /* classAttr: classAttr NESTED_ FAMILY_  */
#line 446 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-2].classAttr) & ~tdVisibilityMask) | tdNestedFamily); }
#line 4250 "prebuilt\\asmparse.cpp"
    break;

  case 129: /* classAttr: classAttr NESTED_ ASSEMBLY_  */
#line 447 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-2].classAttr) & ~tdVisibilityMask) | tdNestedAssembly); }
#line 4256 "prebuilt\\asmparse.cpp"
    break;

  case 130: /* classAttr: classAttr NESTED_ FAMANDASSEM_  */
#line 448 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-2].classAttr) & ~tdVisibilityMask) | tdNestedFamANDAssem); }
#line 4262 "prebuilt\\asmparse.cpp"
    break;

  case 131: /* classAttr: classAttr NESTED_ FAMORASSEM_  */
#line 449 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-2].classAttr) & ~tdVisibilityMask) | tdNestedFamORAssem); }
#line 4268 "prebuilt\\asmparse.cpp"
    break;

  case 132: /* classAttr: classAttr BEFOREFIELDINIT_  */
#line 450 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) ((yyvsp[-1].classAttr) | tdBeforeFieldInit); }
#line 4274 "prebuilt\\asmparse.cpp"
    break;

  case 133: /* classAttr: classAttr SPECIALNAME_  */
#line 451 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) ((yyvsp[-1].classAttr) | tdSpecialName); }
#line 4280 "prebuilt\\asmparse.cpp"
    break;

  case 134: /* classAttr: classAttr RTSPECIALNAME_  */
#line 452 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) ((yyvsp[-1].classAttr)); }
#line 4286 "prebuilt\\asmparse.cpp"
    break;

  case 135: /* classAttr: classAttr FLAGS_ '(' int32 ')'  */
#line 453 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) ((yyvsp[-1].int32)); }
#line 4292 "prebuilt\\asmparse.cpp"
    break;

  case 137: /* extendsClause: EXTENDS_ typeSpec  */
#line 457 "asmparse.y"
                                                                            { PASM->m_crExtends = (yyvsp[0].token); }
#line 4298 "prebuilt\\asmparse.cpp"
    break;

  case 142: /* implList: implList ',' typeSpec  */
#line 468 "asmparse.y"
                                                            { PASM->AddToImplList((yyvsp[0].token)); }
#line 4304 "prebuilt\\asmparse.cpp"
    break;

  case 143: /* implList: typeSpec  */
#line 469 "asmparse.y"
                                                            { PASM->AddToImplList((yyvsp[0].token)); }
#line 4310 "prebuilt\\asmparse.cpp"
    break;

  case 144: /* typeList: %empty  */
#line 473 "asmparse.y"
                                                            { (yyval.binstr) = new BinStr(); }
#line 4316 "prebuilt\\asmparse.cpp"
    break;

  case 145: /* typeList: typeListNotEmpty  */
#line 474 "asmparse.y"
                                                            { (yyval.binstr) = (yyvsp[0].binstr); }
#line 4322 "prebuilt\\asmparse.cpp"
    break;

  case 146: /* typeListNotEmpty: typeSpec  */
#line 477 "asmparse.y"
                                                            { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt32((yyvsp[0].token)); }
#line 4328 "prebuilt\\asmparse.cpp"
    break;

  case 147: /* typeListNotEmpty: typeListNotEmpty ',' typeSpec  */
#line 478 "asmparse.y"
                                                            { (yyval.binstr) = (yyvsp[-2].binstr); (yyval.binstr)->appendInt32((yyvsp[0].token)); }
#line 4334 "prebuilt\\asmparse.cpp"
    break;

  case 148: /* typarsClause: %empty  */
#line 481 "asmparse.y"
                                                            { (yyval.typarlist) = NULL; PASM->m_TyParList = NULL;}
#line 4340 "prebuilt\\asmparse.cpp"
    break;

  case 149: /* typarsClause: '<' typars '>'  */
#line 482 "asmparse.y"
                                                            { (yyval.typarlist) = (yyvsp[-1].typarlist);   PASM->m_TyParList = (yyvsp[-1].typarlist);}
#line 4346 "prebuilt\\asmparse.cpp"
    break;

  case 150: /* typarAttrib: '+'  */
#line 485 "asmparse.y"
                                                            { (yyval.int32) = gpCovariant; }
#line 4352 "prebuilt\\asmparse.cpp"
    break;

  case 151: /* typarAttrib: '-'  */
#line 486 "asmparse.y"
                                                            { (yyval.int32) = gpContravariant; }
#line 4358 "prebuilt\\asmparse.cpp"
    break;

  case 152: /* typarAttrib: CLASS_  */
#line 487 "asmparse.y"
                                                            { (yyval.int32) = gpReferenceTypeConstraint; }
#line 4364 "prebuilt\\asmparse.cpp"
    break;

  case 153: /* typarAttrib: VALUETYPE_  */
#line 488 "asmparse.y"
                                                            { (yyval.int32) = gpNotNullableValueTypeConstraint; }
#line 4370 "prebuilt\\asmparse.cpp"
    break;

  case 154: /* typarAttrib: BYREFLIKE_  */
#line 489 "asmparse.y"
                                                            { (yyval.int32) = gpAllowByRefLike; }
#line 4376 "prebuilt\\asmparse.cpp"
    break;

  case 155: /* typarAttrib: _CTOR  */
#line 490 "asmparse.y"
                                                            { (yyval.int32) = gpDefaultConstructorConstraint; }
#line 4382 "prebuilt\\asmparse.cpp"
    break;

  case 156: /* typarAttrib: FLAGS_ '(' int32 ')'  */
#line 491 "asmparse.y"
                                                            { (yyval.int32) = (CorGenericParamAttr)(yyvsp[-1].int32); }
#line 4388 "prebuilt\\asmparse.cpp"
    break;

  case 157: /* typarAttribs: %empty  */
#line 494 "asmparse.y"
                                                            { (yyval.int32) = 0; }
#line 4394 "prebuilt\\asmparse.cpp"
    break;

  case 158: /* typarAttribs: typarAttrib typarAttribs  */
#line 495 "asmparse.y"
                                                            { (yyval.int32) = (yyvsp[-1].int32) | (yyvsp[0].int32); }
#line 4400 "prebuilt\\asmparse.cpp"
    break;

  case 159: /* typars: typarAttribs tyBound dottedName typarsRest  */
#line 498 "asmparse.y"
                                                                     {(yyval.typarlist) = new TyParList((yyvsp[-3].int32), (yyvsp[-2].binstr), (yyvsp[-1].string), (yyvsp[0].typarlist));}
#line 4406 "prebuilt\\asmparse.cpp"
    break;

  case 160: /* typars: typarAttribs dottedName typarsRest  */
#line 499 "asmparse.y"
                                                               {(yyval.typarlist) = new TyParList((yyvsp[-2].int32), NULL, (yyvsp[-1].string), (yyvsp[0].typarlist));}
#line 4412 "prebuilt\\asmparse.cpp"
    break;

  case 161: /* typarsRest: %empty  */
#line 502 "asmparse.y"
                                                            { (yyval.typarlist) = NULL; }
#line 4418 "prebuilt\\asmparse.cpp"
    break;

  case 162: /* typarsRest: ',' typars  */
#line 503 "asmparse.y"
                                                            { (yyval.typarlist) = (yyvsp[0].typarlist); }
#line 4424 "prebuilt\\asmparse.cpp"
    break;

  case 163: /* tyBound: '(' typeList ')'  */
#line 506 "asmparse.y"
                                                            { (yyval.binstr) = (yyvsp[-1].binstr); }
#line 4430 "prebuilt\\asmparse.cpp"
    break;

  case 164: /* genArity: %empty  */
#line 509 "asmparse.y"
                                                            { (yyval.int32)= 0; }
#line 4436 "prebuilt\\asmparse.cpp"
    break;

  case 165: /* genArity: genArityNotEmpty  */
#line 510 "asmparse.y"
                                                            { (yyval.int32) = (yyvsp[0].int32); }
#line 4442 "prebuilt\\asmparse.cpp"
    break;

  case 166: /* genArityNotEmpty: '<' '[' int32 ']' '>'  */
#line 513 "asmparse.y"
                                                            { (yyval.int32) = (yyvsp[-2].int32); }
#line 4448 "prebuilt\\asmparse.cpp"
    break;

  case 167: /* classDecl: methodHead methodDecls '}'  */
#line 517 "asmparse.y"
                                                            { if(PASM->m_pCurMethod->m_ulLines[1] ==0)
                                                              {  PASM->m_pCurMethod->m_ulLines[1] = PASM->m_ulCurLine;
                                                                 PASM->m_pCurMethod->m_ulColumns[1]=PASM->m_ulCurColumn;}
                                                              PASM->EndMethod(); }
#line 4457 "prebuilt\\asmparse.cpp"
    break;

  case 168: /* classDecl: classHead '{' classDecls '}'  */
#line 521 "asmparse.y"
                                                            { PASM->EndClass(); }
#line 4463 "prebuilt\\asmparse.cpp"
    break;

  case 169: /* classDecl: eventHead '{' eventDecls '}'  */
#line 522 "asmparse.y"
                                                            { PASM->EndEvent(); }
#line 4469 "prebuilt\\asmparse.cpp"
    break;

  case 170: /* classDecl: propHead '{' propDecls '}'  */
#line 523 "asmparse.y"
                                                            { PASM->EndProp(); }
#line 4475 "prebuilt\\asmparse.cpp"
    break;

  case 176: /* classDecl: _SIZE int32  */
#line 529 "asmparse.y"
                                                                { PASM->m_pCurClass->m_ulSize = (yyvsp[0].int32); }
#line 4481 "prebuilt\\asmparse.cpp"
    break;

  case 177: /* classDecl: _PACK int32  */
#line 530 "asmparse.y"
                                                                { PASM->m_pCurClass->m_ulPack = (yyvsp[0].int32); }
#line 4487 "prebuilt\\asmparse.cpp"
    break;

  case 178: /* classDecl: exportHead '{' exptypeDecls '}'  */
#line 531 "asmparse.y"
                                                                { PASMM->EndComType(); }
#line 4493 "prebuilt\\asmparse.cpp"
    break;

  case 179: /* classDecl: _OVERRIDE typeSpec DCOLON methodName WITH_ callConv type typeSpec DCOLON methodName '(' sigArgs0 ')'  */
#line 533 "asmparse.y"
                                                                { BinStr *sig1 = parser->MakeSig((yyvsp[-7].int32), (yyvsp[-6].binstr), (yyvsp[-1].binstr));
                                                                  BinStr *sig2 = new BinStr(); sig2->append(sig1);
                                                                  PASM->AddMethodImpl((yyvsp[-11].token),(yyvsp[-9].string),sig1,(yyvsp[-5].token),(yyvsp[-3].string),sig2);
                                                                  PASM->ResetArgNameList();
                                                                }
#line 4503 "prebuilt\\asmparse.cpp"
    break;

  case 180: /* classDecl: _OVERRIDE METHOD_ callConv type typeSpec DCOLON methodName genArity '(' sigArgs0 ')' WITH_ METHOD_ callConv type typeSpec DCOLON methodName genArity '(' sigArgs0 ')'  */
#line 539 "asmparse.y"
                                                                 { PASM->AddMethodImpl((yyvsp[-17].token),(yyvsp[-15].string),
                                                                      ((yyvsp[-14].int32)==0 ? parser->MakeSig((yyvsp[-19].int32),(yyvsp[-18].binstr),(yyvsp[-12].binstr)) :
                                                                      parser->MakeSig((yyvsp[-19].int32)| IMAGE_CEE_CS_CALLCONV_GENERIC,(yyvsp[-18].binstr),(yyvsp[-12].binstr),(yyvsp[-14].int32))),
                                                                      (yyvsp[-6].token),(yyvsp[-4].string),
                                                                      ((yyvsp[-3].int32)==0 ? parser->MakeSig((yyvsp[-8].int32),(yyvsp[-7].binstr),(yyvsp[-1].binstr)) :
                                                                      parser->MakeSig((yyvsp[-8].int32)| IMAGE_CEE_CS_CALLCONV_GENERIC,(yyvsp[-7].binstr),(yyvsp[-1].binstr),(yyvsp[-3].int32))));
                                                                   PASM->ResetArgNameList();
                                                                 }
#line 4516 "prebuilt\\asmparse.cpp"
    break;

  case 183: /* classDecl: _PARAM TYPE_ '[' int32 ']'  */
#line 549 "asmparse.y"
                                                            { if(((yyvsp[-1].int32) > 0) && ((yyvsp[-1].int32) <= (int)PASM->m_pCurClass->m_NumTyPars))
                                                                PASM->m_pCustomDescrList = PASM->m_pCurClass->m_TyPars[(yyvsp[-1].int32)-1].CAList();
                                                              else
                                                                PASM->report->error("Type parameter index out of range\n");
                                                            }
#line 4526 "prebuilt\\asmparse.cpp"
    break;

  case 184: /* classDecl: _PARAM TYPE_ dottedName  */
#line 554 "asmparse.y"
                                                            { int n = PASM->m_pCurClass->FindTyPar((yyvsp[0].string));
                                                              if(n >= 0)
                                                                PASM->m_pCustomDescrList = PASM->m_pCurClass->m_TyPars[n].CAList();
                                                              else
                                                                PASM->report->error("Type parameter '%s' undefined\n",(yyvsp[0].string));
                                                            }
#line 4537 "prebuilt\\asmparse.cpp"
    break;

  case 185: /* classDecl: _PARAM CONSTRAINT_ '[' int32 ']' ',' typeSpec  */
#line 560 "asmparse.y"
                                                                        { PASM->AddGenericParamConstraint((yyvsp[-3].int32), 0, (yyvsp[0].token)); }
#line 4543 "prebuilt\\asmparse.cpp"
    break;

  case 186: /* classDecl: _PARAM CONSTRAINT_ dottedName ',' typeSpec  */
#line 561 "asmparse.y"
                                                                        { PASM->AddGenericParamConstraint(0, (yyvsp[-2].string), (yyvsp[0].token)); }
#line 4549 "prebuilt\\asmparse.cpp"
    break;

  case 187: /* classDecl: _INTERFACEIMPL TYPE_ typeSpec customDescr  */
#line 562 "asmparse.y"
                                                                      { (yyvsp[0].cad)->tkInterfacePair = (yyvsp[-1].token);
                                                                        if(PASM->m_pCustomDescrList)
                                                                            PASM->m_pCustomDescrList->PUSH((yyvsp[0].cad));
                                                                      }
#line 4558 "prebuilt\\asmparse.cpp"
    break;

  case 188: /* fieldDecl: _FIELD repeatOpt fieldAttr type dottedName atOpt initOpt  */
#line 570 "asmparse.y"
                                                            { (yyvsp[-3].binstr)->insertInt8(IMAGE_CEE_CS_CALLCONV_FIELD);
                                                              PASM->AddField((yyvsp[-2].string), (yyvsp[-3].binstr), (yyvsp[-4].fieldAttr), (yyvsp[-1].string), (yyvsp[0].binstr), (yyvsp[-5].int32)); }
#line 4565 "prebuilt\\asmparse.cpp"
    break;

  case 189: /* fieldAttr: %empty  */
#line 574 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) 0; }
#line 4571 "prebuilt\\asmparse.cpp"
    break;

  case 190: /* fieldAttr: fieldAttr STATIC_  */
#line 575 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) ((yyvsp[-1].fieldAttr) | fdStatic); }
#line 4577 "prebuilt\\asmparse.cpp"
    break;

  case 191: /* fieldAttr: fieldAttr PUBLIC_  */
#line 576 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) (((yyvsp[-1].fieldAttr) & ~mdMemberAccessMask) | fdPublic); }
#line 4583 "prebuilt\\asmparse.cpp"
    break;

  case 192: /* fieldAttr: fieldAttr PRIVATE_  */
#line 577 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) (((yyvsp[-1].fieldAttr) & ~mdMemberAccessMask) | fdPrivate); }
#line 4589 "prebuilt\\asmparse.cpp"
    break;

  case 193: /* fieldAttr: fieldAttr FAMILY_  */
#line 578 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) (((yyvsp[-1].fieldAttr) & ~mdMemberAccessMask) | fdFamily); }
#line 4595 "prebuilt\\asmparse.cpp"
    break;

  case 194: /* fieldAttr: fieldAttr INITONLY_  */
#line 579 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) ((yyvsp[-1].fieldAttr) | fdInitOnly); }
#line 4601 "prebuilt\\asmparse.cpp"
    break;

  case 195: /* fieldAttr: fieldAttr RTSPECIALNAME_  */
#line 580 "asmparse.y"
                                                            { (yyval.fieldAttr) = (yyvsp[-1].fieldAttr); }
#line 4607 "prebuilt\\asmparse.cpp"
    break;

  case 196: /* fieldAttr: fieldAttr SPECIALNAME_  */
#line 581 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) ((yyvsp[-1].fieldAttr) | fdSpecialName); }
#line 4613 "prebuilt\\asmparse.cpp"
    break;

  case 197: /* fieldAttr: fieldAttr MARSHAL_ '(' marshalBlob ')'  */
#line 594 "asmparse.y"
                                                            { PASM->m_pMarshal = (yyvsp[-1].binstr); }
#line 4619 "prebuilt\\asmparse.cpp"
    break;

  case 198: /* fieldAttr: fieldAttr ASSEMBLY_  */
#line 595 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) (((yyvsp[-1].fieldAttr) & ~mdMemberAccessMask) | fdAssembly); }
#line 4625 "prebuilt\\asmparse.cpp"
    break;

  case 199: /* fieldAttr: fieldAttr FAMANDASSEM_  */
#line 596 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) (((yyvsp[-1].fieldAttr) & ~mdMemberAccessMask) | fdFamANDAssem); }
#line 4631 "prebuilt\\asmparse.cpp"
    break;

  case 200: /* fieldAttr: fieldAttr FAMORASSEM_  */
#line 597 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) (((yyvsp[-1].fieldAttr) & ~mdMemberAccessMask) | fdFamORAssem); }
#line 4637 "prebuilt\\asmparse.cpp"
    break;

  case 201: /* fieldAttr: fieldAttr PRIVATESCOPE_  */
#line 598 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) (((yyvsp[-1].fieldAttr) & ~mdMemberAccessMask) | fdPrivateScope); }
#line 4643 "prebuilt\\asmparse.cpp"
    break;

  case 202: /* fieldAttr: fieldAttr LITERAL_  */
#line 599 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) ((yyvsp[-1].fieldAttr) | fdLiteral); }
#line 4649 "prebuilt\\asmparse.cpp"
    break;

  case 203: /* fieldAttr: fieldAttr NOTSERIALIZED_  */
#line 600 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) ((yyvsp[-1].fieldAttr) | fdNotSerialized); }
#line 4655 "prebuilt\\asmparse.cpp"
    break;

  case 204: /* fieldAttr: fieldAttr FLAGS_ '(' int32 ')'  */
#line 601 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) ((yyvsp[-1].int32)); }
#line 4661 "prebuilt\\asmparse.cpp"
    break;

  case 205: /* atOpt: %empty  */
#line 604 "asmparse.y"
                                                            { (yyval.string) = 0; }
#line 4667 "prebuilt\\asmparse.cpp"
    break;

  case 206: /* atOpt: AT_ id  */
#line 605 "asmparse.y"
                                                            { (yyval.string) = (yyvsp[0].string); }
#line 4673 "prebuilt\\asmparse.cpp"
    break;

  case 207: /* initOpt: %empty  */
#line 608 "asmparse.y"
                                                            { (yyval.binstr) = NULL; }
#line 4679 "prebuilt\\asmparse.cpp"
    break;

  case 208: /* initOpt: '=' fieldInit  */
#line 609 "asmparse.y"
                                                            { (yyval.binstr) = (yyvsp[0].binstr); }
#line 4685 "prebuilt\\asmparse.cpp"
    break;

  case 209: /* repeatOpt: %empty  */
#line 612 "asmparse.y"
                                                            { (yyval.int32) = 0xFFFFFFFF; }
#line 4691 "prebuilt\\asmparse.cpp"
    break;

  case 210: /* repeatOpt: '[' int32 ']'  */
#line 613 "asmparse.y"
                                                            { (yyval.int32) = (yyvsp[-1].int32); }
#line 4697 "prebuilt\\asmparse.cpp"
    break;

  case 211: /* methodRef: callConv type typeSpec DCOLON methodName tyArgs0 '(' sigArgs0 ')'  */
#line 618 "asmparse.y"
                                                             { PASM->ResetArgNameList();
                                                               if ((yyvsp[-3].binstr) == NULL)
                                                               {
                                                                 if((iCallConv)&&(((yyvsp[-8].int32) & iCallConv) != iCallConv)) parser->warn("'instance' added to method's calling convention\n");
                                                                 (yyval.token) = PASM->MakeMemberRef((yyvsp[-6].token), (yyvsp[-4].string), parser->MakeSig((yyvsp[-8].int32)|iCallConv, (yyvsp[-7].binstr), (yyvsp[-1].binstr)));
                                                               }
                                                               else
                                                               {
                                                                 mdToken mr;
                                                                 if((iCallConv)&&(((yyvsp[-8].int32) & iCallConv) != iCallConv)) parser->warn("'instance' added to method's calling convention\n");
                                                                 mr = PASM->MakeMemberRef((yyvsp[-6].token), (yyvsp[-4].string),
                                                                   parser->MakeSig((yyvsp[-8].int32) | IMAGE_CEE_CS_CALLCONV_GENERIC|iCallConv, (yyvsp[-7].binstr), (yyvsp[-1].binstr), corCountArgs((yyvsp[-3].binstr))));
                                                                 (yyval.token) = PASM->MakeMethodSpec(mr,
                                                                   parser->MakeSig(IMAGE_CEE_CS_CALLCONV_INSTANTIATION, 0, (yyvsp[-3].binstr)));
                                                               }
                                                             }
#line 4718 "prebuilt\\asmparse.cpp"
    break;

  case 212: /* methodRef: callConv type typeSpec DCOLON methodName genArityNotEmpty '(' sigArgs0 ')'  */
#line 635 "asmparse.y"
                                                             { PASM->ResetArgNameList();
                                                               if((iCallConv)&&(((yyvsp[-8].int32) & iCallConv) != iCallConv)) parser->warn("'instance' added to method's calling convention\n");
                                                               (yyval.token) = PASM->MakeMemberRef((yyvsp[-6].token), (yyvsp[-4].string),
                                                                 parser->MakeSig((yyvsp[-8].int32) | IMAGE_CEE_CS_CALLCONV_GENERIC|iCallConv, (yyvsp[-7].binstr), (yyvsp[-1].binstr), (yyvsp[-3].int32)));
                                                             }
#line 4728 "prebuilt\\asmparse.cpp"
    break;

  case 213: /* methodRef: callConv type methodName tyArgs0 '(' sigArgs0 ')'  */
#line 641 "asmparse.y"
                                                             { PASM->ResetArgNameList();
                                                               if ((yyvsp[-3].binstr) == NULL)
                                                               {
                                                                 if((iCallConv)&&(((yyvsp[-6].int32) & iCallConv) != iCallConv)) parser->warn("'instance' added to method's calling convention\n");
                                                                 (yyval.token) = PASM->MakeMemberRef(mdTokenNil, (yyvsp[-4].string), parser->MakeSig((yyvsp[-6].int32)|iCallConv, (yyvsp[-5].binstr), (yyvsp[-1].binstr)));
                                                               }
                                                               else
                                                               {
                                                                 mdToken mr;
                                                                 if((iCallConv)&&(((yyvsp[-6].int32) & iCallConv) != iCallConv)) parser->warn("'instance' added to method's calling convention\n");
                                                                 mr = PASM->MakeMemberRef(mdTokenNil, (yyvsp[-4].string), parser->MakeSig((yyvsp[-6].int32) | IMAGE_CEE_CS_CALLCONV_GENERIC|iCallConv, (yyvsp[-5].binstr), (yyvsp[-1].binstr), corCountArgs((yyvsp[-3].binstr))));
                                                                 (yyval.token) = PASM->MakeMethodSpec(mr,
                                                                   parser->MakeSig(IMAGE_CEE_CS_CALLCONV_INSTANTIATION, 0, (yyvsp[-3].binstr)));
                                                               }
                                                             }
#line 4748 "prebuilt\\asmparse.cpp"
    break;

  case 214: /* methodRef: callConv type methodName genArityNotEmpty '(' sigArgs0 ')'  */
#line 657 "asmparse.y"
                                                             { PASM->ResetArgNameList();
                                                               if((iCallConv)&&(((yyvsp[-6].int32) & iCallConv) != iCallConv)) parser->warn("'instance' added to method's calling convention\n");
                                                               (yyval.token) = PASM->MakeMemberRef(mdTokenNil, (yyvsp[-4].string), parser->MakeSig((yyvsp[-6].int32) | IMAGE_CEE_CS_CALLCONV_GENERIC|iCallConv, (yyvsp[-5].binstr), (yyvsp[-1].binstr), (yyvsp[-3].int32)));
                                                             }
#line 4757 "prebuilt\\asmparse.cpp"
    break;

  case 215: /* methodRef: mdtoken  */
#line 661 "asmparse.y"
                                                             { (yyval.token) = (yyvsp[0].token); }
#line 4763 "prebuilt\\asmparse.cpp"
    break;

  case 216: /* methodRef: TYPEDEF_M  */
#line 662 "asmparse.y"
                                                             { (yyval.token) = (yyvsp[0].tdd)->m_tkTypeSpec; }
#line 4769 "prebuilt\\asmparse.cpp"
    break;

  case 217: /* methodRef: TYPEDEF_MR  */
#line 663 "asmparse.y"
                                                             { (yyval.token) = (yyvsp[0].tdd)->m_tkTypeSpec; }
#line 4775 "prebuilt\\asmparse.cpp"
    break;

  case 218: /* callConv: INSTANCE_ callConv  */
#line 666 "asmparse.y"
                                                              { (yyval.int32) = ((yyvsp[0].int32) | IMAGE_CEE_CS_CALLCONV_HASTHIS); }
#line 4781 "prebuilt\\asmparse.cpp"
    break;

  case 219: /* callConv: EXPLICIT_ callConv  */
#line 667 "asmparse.y"
                                                              { (yyval.int32) = ((yyvsp[0].int32) | IMAGE_CEE_CS_CALLCONV_EXPLICITTHIS); }
#line 4787 "prebuilt\\asmparse.cpp"
    break;

  case 220: /* callConv: callKind  */
#line 668 "asmparse.y"
                                                              { (yyval.int32) = (yyvsp[0].int32); }
#line 4793 "prebuilt\\asmparse.cpp"
    break;

  case 221: /* callConv: CALLCONV_ '(' int32 ')'  */
#line 669 "asmparse.y"
                                                              { (yyval.int32) = (yyvsp[-1].int32); }
#line 4799 "prebuilt\\asmparse.cpp"
    break;

  case 222: /* callKind: %empty  */
#line 672 "asmparse.y"
                                                              { (yyval.int32) = IMAGE_CEE_CS_CALLCONV_DEFAULT; }
#line 4805 "prebuilt\\asmparse.cpp"
    break;

  case 223: /* callKind: DEFAULT_  */
#line 673 "asmparse.y"
                                                              { (yyval.int32) = IMAGE_CEE_CS_CALLCONV_DEFAULT; }
#line 4811 "prebuilt\\asmparse.cpp"
    break;

  case 224: /* callKind: VARARG_  */
#line 674 "asmparse.y"
                                                              { (yyval.int32) = IMAGE_CEE_CS_CALLCONV_VARARG; }
#line 4817 "prebuilt\\asmparse.cpp"
    break;

  case 225: /* callKind: UNMANAGED_ CDECL_  */
#line 675 "asmparse.y"
                                                              { (yyval.int32) = IMAGE_CEE_CS_CALLCONV_C; }
#line 4823 "prebuilt\\asmparse.cpp"
    break;

  case 226: /* callKind: UNMANAGED_ STDCALL_  */
#line 676 "asmparse.y"
                                                              { (yyval.int32) = IMAGE_CEE_CS_CALLCONV_STDCALL; }
#line 4829 "prebuilt\\asmparse.cpp"
    break;

  case 227: /* callKind: UNMANAGED_ THISCALL_  */
#line 677 "asmparse.y"
                                                              { (yyval.int32) = IMAGE_CEE_CS_CALLCONV_THISCALL; }
#line 4835 "prebuilt\\asmparse.cpp"
    break;

  case 228: /* callKind: UNMANAGED_ FASTCALL_  */
#line 678 "asmparse.y"
                                                              { (yyval.int32) = IMAGE_CEE_CS_CALLCONV_FASTCALL; }
#line 4841 "prebuilt\\asmparse.cpp"
    break;

  case 229: /* callKind: UNMANAGED_  */
#line 679 "asmparse.y"
                                                              { (yyval.int32) = IMAGE_CEE_CS_CALLCONV_UNMANAGED; }
#line 4847 "prebuilt\\asmparse.cpp"
    break;

  case 230: /* mdtoken: MDTOKEN_ '(' int32 ')'  */
#line 682 "asmparse.y"
                                                             { (yyval.token) = (yyvsp[-1].int32); }
#line 4853 "prebuilt\\asmparse.cpp"
    break;

  case 231: /* memberRef: methodSpec methodRef  */
#line 685 "asmparse.y"
                                                             { (yyval.token) = (yyvsp[0].token);
                                                               PASM->delArgNameList(PASM->m_firstArgName);
                                                               PASM->m_firstArgName = parser->m_ANSFirst.POP();
                                                               PASM->m_lastArgName = parser->m_ANSLast.POP();
                                                               PASM->SetMemberRefFixup((yyvsp[0].token),iOpcodeLen); }
#line 4863 "prebuilt\\asmparse.cpp"
    break;

  case 232: /* memberRef: FIELD_ type typeSpec DCOLON dottedName  */
#line 691 "asmparse.y"
                                                             { (yyvsp[-3].binstr)->insertInt8(IMAGE_CEE_CS_CALLCONV_FIELD);
                                                               (yyval.token) = PASM->MakeMemberRef((yyvsp[-2].token), (yyvsp[0].string), (yyvsp[-3].binstr));
                                                               PASM->SetMemberRefFixup((yyval.token),iOpcodeLen); }
#line 4871 "prebuilt\\asmparse.cpp"
    break;

  case 233: /* memberRef: FIELD_ type dottedName  */
#line 695 "asmparse.y"
                                                             { (yyvsp[-1].binstr)->insertInt8(IMAGE_CEE_CS_CALLCONV_FIELD);
                                                               (yyval.token) = PASM->MakeMemberRef(mdTokenNil, (yyvsp[0].string), (yyvsp[-1].binstr));
                                                               PASM->SetMemberRefFixup((yyval.token),iOpcodeLen); }
#line 4879 "prebuilt\\asmparse.cpp"
    break;

  case 234: /* memberRef: FIELD_ TYPEDEF_F  */
#line 698 "asmparse.y"
                                                             { (yyval.token) = (yyvsp[0].tdd)->m_tkTypeSpec;
                                                               PASM->SetMemberRefFixup((yyval.token),iOpcodeLen); }
#line 4886 "prebuilt\\asmparse.cpp"
    break;

  case 235: /* memberRef: FIELD_ TYPEDEF_MR  */
#line 700 "asmparse.y"
                                                             { (yyval.token) = (yyvsp[0].tdd)->m_tkTypeSpec;
                                                               PASM->SetMemberRefFixup((yyval.token),iOpcodeLen); }
#line 4893 "prebuilt\\asmparse.cpp"
    break;

  case 236: /* memberRef: mdtoken  */
#line 702 "asmparse.y"
                                                             { (yyval.token) = (yyvsp[0].token);
                                                               PASM->SetMemberRefFixup((yyval.token),iOpcodeLen); }
#line 4900 "prebuilt\\asmparse.cpp"
    break;

  case 237: /* eventHead: _EVENT eventAttr typeSpec dottedName  */
#line 707 "asmparse.y"
                                                                 { PASM->ResetEvent((yyvsp[0].string), (yyvsp[-1].token), (yyvsp[-2].eventAttr)); }
#line 4906 "prebuilt\\asmparse.cpp"
    break;

  case 238: /* eventHead: _EVENT eventAttr dottedName  */
#line 708 "asmparse.y"
                                                                 { PASM->ResetEvent((yyvsp[0].string), mdTypeRefNil, (yyvsp[-1].eventAttr)); }
#line 4912 "prebuilt\\asmparse.cpp"
    break;

  case 239: /* eventAttr: %empty  */
#line 712 "asmparse.y"
                                                            { (yyval.eventAttr) = (CorEventAttr) 0; }
#line 4918 "prebuilt\\asmparse.cpp"
    break;

  case 240: /* eventAttr: eventAttr RTSPECIALNAME_  */
#line 713 "asmparse.y"
                                                            { (yyval.eventAttr) = (yyvsp[-1].eventAttr); }
#line 4924 "prebuilt\\asmparse.cpp"
    break;

  case 241: /* eventAttr: eventAttr SPECIALNAME_  */
#line 714 "asmparse.y"
                                                            { (yyval.eventAttr) = (CorEventAttr) ((yyvsp[-1].eventAttr) | evSpecialName); }
#line 4930 "prebuilt\\asmparse.cpp"
    break;

  case 244: /* eventDecl: _ADDON methodRef  */
#line 721 "asmparse.y"
                                                           { PASM->SetEventMethod(0, (yyvsp[0].token)); }
#line 4936 "prebuilt\\asmparse.cpp"
    break;

  case 245: /* eventDecl: _REMOVEON methodRef  */
#line 722 "asmparse.y"
                                                           { PASM->SetEventMethod(1, (yyvsp[0].token)); }
#line 4942 "prebuilt\\asmparse.cpp"
    break;

  case 246: /* eventDecl: _FIRE methodRef  */
#line 723 "asmparse.y"
                                                           { PASM->SetEventMethod(2, (yyvsp[0].token)); }
#line 4948 "prebuilt\\asmparse.cpp"
    break;

  case 247: /* eventDecl: _OTHER methodRef  */
#line 724 "asmparse.y"
                                                           { PASM->SetEventMethod(3, (yyvsp[0].token)); }
#line 4954 "prebuilt\\asmparse.cpp"
    break;

  case 252: /* propHead: _PROPERTY propAttr callConv type dottedName '(' sigArgs0 ')' initOpt  */
#line 733 "asmparse.y"
                                                            { PASM->ResetProp((yyvsp[-4].string),
                                                              parser->MakeSig((IMAGE_CEE_CS_CALLCONV_PROPERTY |
                                                              ((yyvsp[-6].int32) & IMAGE_CEE_CS_CALLCONV_HASTHIS)),(yyvsp[-5].binstr),(yyvsp[-2].binstr)), (yyvsp[-7].propAttr), (yyvsp[0].binstr));}
#line 4962 "prebuilt\\asmparse.cpp"
    break;

  case 253: /* propAttr: %empty  */
#line 738 "asmparse.y"
                                                            { (yyval.propAttr) = (CorPropertyAttr) 0; }
#line 4968 "prebuilt\\asmparse.cpp"
    break;

  case 254: /* propAttr: propAttr RTSPECIALNAME_  */
#line 739 "asmparse.y"
                                                            { (yyval.propAttr) = (yyvsp[-1].propAttr); }
#line 4974 "prebuilt\\asmparse.cpp"
    break;

  case 255: /* propAttr: propAttr SPECIALNAME_  */
#line 740 "asmparse.y"
                                                            { (yyval.propAttr) = (CorPropertyAttr) ((yyvsp[-1].propAttr) | prSpecialName); }
#line 4980 "prebuilt\\asmparse.cpp"
    break;

  case 258: /* propDecl: _SET methodRef  */
#line 748 "asmparse.y"
                                                            { PASM->SetPropMethod(0, (yyvsp[0].token)); }
#line 4986 "prebuilt\\asmparse.cpp"
    break;

  case 259: /* propDecl: _GET methodRef  */
#line 749 "asmparse.y"
                                                            { PASM->SetPropMethod(1, (yyvsp[0].token)); }
#line 4992 "prebuilt\\asmparse.cpp"
    break;

  case 260: /* propDecl: _OTHER methodRef  */
#line 750 "asmparse.y"
                                                            { PASM->SetPropMethod(2, (yyvsp[0].token)); }
#line 4998 "prebuilt\\asmparse.cpp"
    break;

  case 265: /* methodHeadPart1: _METHOD  */
#line 758 "asmparse.y"
                                                            { PASM->ResetForNextMethod();
                                                              uMethodBeginLine = PASM->m_ulCurLine;
                                                              uMethodBeginColumn=PASM->m_ulCurColumn;
                                                            }
#line 5007 "prebuilt\\asmparse.cpp"
    break;

  case 266: /* marshalClause: %empty  */
#line 764 "asmparse.y"
                                                            { (yyval.binstr) = NULL; }
#line 5013 "prebuilt\\asmparse.cpp"
    break;

  case 267: /* marshalClause: MARSHAL_ '(' marshalBlob ')'  */
#line 765 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); }
#line 5019 "prebuilt\\asmparse.cpp"
    break;

  case 268: /* marshalBlob: nativeType  */
#line 768 "asmparse.y"
                                                            { (yyval.binstr) = (yyvsp[0].binstr); }
#line 5025 "prebuilt\\asmparse.cpp"
    break;

  case 269: /* marshalBlob: marshalBlobHead hexbytes '}'  */
#line 769 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); }
#line 5031 "prebuilt\\asmparse.cpp"
    break;

  case 270: /* marshalBlobHead: '{'  */
#line 772 "asmparse.y"
                                                             { bParsingByteArray = TRUE; }
#line 5037 "prebuilt\\asmparse.cpp"
    break;

  case 271: /* methodHead: methodHeadPart1 methAttr callConv paramAttr type marshalClause methodName typarsClause '(' sigArgs0 ')' implAttr '{'  */
#line 776 "asmparse.y"
                                                            { BinStr* sig;
                                                              if ((yyvsp[-5].typarlist) == NULL) sig = parser->MakeSig((yyvsp[-10].int32), (yyvsp[-8].binstr), (yyvsp[-3].binstr));
                                                              else {
                                                               FixupTyPars((yyvsp[-8].binstr));
                                                               sig = parser->MakeSig((yyvsp[-10].int32) | IMAGE_CEE_CS_CALLCONV_GENERIC, (yyvsp[-8].binstr), (yyvsp[-3].binstr), (yyvsp[-5].typarlist)->Count());
                                                               FixupConstraints();
                                                              }
                                                              PASM->StartMethod((yyvsp[-6].string), sig, (yyvsp[-11].methAttr), (yyvsp[-7].binstr), (yyvsp[-9].int32), (yyvsp[-5].typarlist));
                                                              TyParFixupList.RESET(false);
                                                              PASM->SetImplAttr((USHORT)(yyvsp[-1].implAttr));
                                                              PASM->m_pCurMethod->m_ulLines[0] = uMethodBeginLine;
                                                              PASM->m_pCurMethod->m_ulColumns[0]=uMethodBeginColumn;
                                                            }
#line 5055 "prebuilt\\asmparse.cpp"
    break;

  case 272: /* methAttr: %empty  */
#line 791 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) 0; }
#line 5061 "prebuilt\\asmparse.cpp"
    break;

  case 273: /* methAttr: methAttr STATIC_  */
#line 792 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-1].methAttr) | mdStatic); }
#line 5067 "prebuilt\\asmparse.cpp"
    break;

  case 274: /* methAttr: methAttr PUBLIC_  */
#line 793 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) (((yyvsp[-1].methAttr) & ~mdMemberAccessMask) | mdPublic); }
#line 5073 "prebuilt\\asmparse.cpp"
    break;

  case 275: /* methAttr: methAttr PRIVATE_  */
#line 794 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) (((yyvsp[-1].methAttr) & ~mdMemberAccessMask) | mdPrivate); }
#line 5079 "prebuilt\\asmparse.cpp"
    break;

  case 276: /* methAttr: methAttr FAMILY_  */
#line 795 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) (((yyvsp[-1].methAttr) & ~mdMemberAccessMask) | mdFamily); }
#line 5085 "prebuilt\\asmparse.cpp"
    break;

  case 277: /* methAttr: methAttr FINAL_  */
#line 796 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-1].methAttr) | mdFinal); }
#line 5091 "prebuilt\\asmparse.cpp"
    break;

  case 278: /* methAttr: methAttr SPECIALNAME_  */
#line 797 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-1].methAttr) | mdSpecialName); }
#line 5097 "prebuilt\\asmparse.cpp"
    break;

  case 279: /* methAttr: methAttr VIRTUAL_  */
#line 798 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-1].methAttr) | mdVirtual); }
#line 5103 "prebuilt\\asmparse.cpp"
    break;

  case 280: /* methAttr: methAttr STRICT_  */
#line 799 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-1].methAttr) | mdCheckAccessOnOverride); }
#line 5109 "prebuilt\\asmparse.cpp"
    break;

  case 281: /* methAttr: methAttr ABSTRACT_  */
#line 800 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-1].methAttr) | mdAbstract); }
#line 5115 "prebuilt\\asmparse.cpp"
    break;

  case 282: /* methAttr: methAttr ASSEMBLY_  */
#line 801 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) (((yyvsp[-1].methAttr) & ~mdMemberAccessMask) | mdAssem); }
#line 5121 "prebuilt\\asmparse.cpp"
    break;

  case 283: /* methAttr: methAttr FAMANDASSEM_  */
#line 802 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) (((yyvsp[-1].methAttr) & ~mdMemberAccessMask) | mdFamANDAssem); }
#line 5127 "prebuilt\\asmparse.cpp"
    break;

  case 284: /* methAttr: methAttr FAMORASSEM_  */
#line 803 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) (((yyvsp[-1].methAttr) & ~mdMemberAccessMask) | mdFamORAssem); }
#line 5133 "prebuilt\\asmparse.cpp"
    break;

  case 285: /* methAttr: methAttr PRIVATESCOPE_  */
#line 804 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) (((yyvsp[-1].methAttr) & ~mdMemberAccessMask) | mdPrivateScope); }
#line 5139 "prebuilt\\asmparse.cpp"
    break;

  case 286: /* methAttr: methAttr HIDEBYSIG_  */
#line 805 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-1].methAttr) | mdHideBySig); }
#line 5145 "prebuilt\\asmparse.cpp"
    break;

  case 287: /* methAttr: methAttr NEWSLOT_  */
#line 806 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-1].methAttr) | mdNewSlot); }
#line 5151 "prebuilt\\asmparse.cpp"
    break;

  case 288: /* methAttr: methAttr RTSPECIALNAME_  */
#line 807 "asmparse.y"
                                                            { (yyval.methAttr) = (yyvsp[-1].methAttr); }
#line 5157 "prebuilt\\asmparse.cpp"
    break;

  case 289: /* methAttr: methAttr UNMANAGEDEXP_  */
#line 808 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-1].methAttr) | mdUnmanagedExport); }
#line 5163 "prebuilt\\asmparse.cpp"
    break;

  case 290: /* methAttr: methAttr REQSECOBJ_  */
#line 809 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-1].methAttr) | mdRequireSecObject); }
#line 5169 "prebuilt\\asmparse.cpp"
    break;

  case 291: /* methAttr: methAttr FLAGS_ '(' int32 ')'  */
#line 810 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-1].int32)); }
#line 5175 "prebuilt\\asmparse.cpp"
    break;

  case 292: /* methAttr: methAttr PINVOKEIMPL_ '(' compQstring AS_ compQstring pinvAttr ')'  */
#line 812 "asmparse.y"
                                                            { PASM->SetPinvoke((yyvsp[-4].binstr),0,(yyvsp[-2].binstr),(yyvsp[-1].pinvAttr));
                                                              (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-7].methAttr) | mdPinvokeImpl); }
#line 5182 "prebuilt\\asmparse.cpp"
    break;

  case 293: /* methAttr: methAttr PINVOKEIMPL_ '(' compQstring pinvAttr ')'  */
#line 815 "asmparse.y"
                                                            { PASM->SetPinvoke((yyvsp[-2].binstr),0,NULL,(yyvsp[-1].pinvAttr));
                                                              (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-5].methAttr) | mdPinvokeImpl); }
#line 5189 "prebuilt\\asmparse.cpp"
    break;

  case 294: /* methAttr: methAttr PINVOKEIMPL_ '(' pinvAttr ')'  */
#line 818 "asmparse.y"
                                                            { PASM->SetPinvoke(new BinStr(),0,NULL,(yyvsp[-1].pinvAttr));
                                                              (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-4].methAttr) | mdPinvokeImpl); }
#line 5196 "prebuilt\\asmparse.cpp"
    break;

  case 295: /* pinvAttr: %empty  */
#line 822 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) 0; }
#line 5202 "prebuilt\\asmparse.cpp"
    break;

  case 296: /* pinvAttr: pinvAttr NOMANGLE_  */
#line 823 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-1].pinvAttr) | pmNoMangle); }
#line 5208 "prebuilt\\asmparse.cpp"
    break;

  case 297: /* pinvAttr: pinvAttr ANSI_  */
#line 824 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-1].pinvAttr) | pmCharSetAnsi); }
#line 5214 "prebuilt\\asmparse.cpp"
    break;

  case 298: /* pinvAttr: pinvAttr UNICODE_  */
#line 825 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-1].pinvAttr) | pmCharSetUnicode); }
#line 5220 "prebuilt\\asmparse.cpp"
    break;

  case 299: /* pinvAttr: pinvAttr AUTOCHAR_  */
#line 826 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-1].pinvAttr) | pmCharSetAuto); }
#line 5226 "prebuilt\\asmparse.cpp"
    break;

  case 300: /* pinvAttr: pinvAttr LASTERR_  */
#line 827 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-1].pinvAttr) | pmSupportsLastError); }
#line 5232 "prebuilt\\asmparse.cpp"
    break;

  case 301: /* pinvAttr: pinvAttr WINAPI_  */
#line 828 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-1].pinvAttr) | pmCallConvWinapi); }
#line 5238 "prebuilt\\asmparse.cpp"
    break;

  case 302: /* pinvAttr: pinvAttr CDECL_  */
#line 829 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-1].pinvAttr) | pmCallConvCdecl); }
#line 5244 "prebuilt\\asmparse.cpp"
    break;

  case 303: /* pinvAttr: pinvAttr STDCALL_  */
#line 830 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-1].pinvAttr) | pmCallConvStdcall); }
#line 5250 "prebuilt\\asmparse.cpp"
    break;

  case 304: /* pinvAttr: pinvAttr THISCALL_  */
#line 831 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-1].pinvAttr) | pmCallConvThiscall); }
#line 5256 "prebuilt\\asmparse.cpp"
    break;

  case 305: /* pinvAttr: pinvAttr FASTCALL_  */
#line 832 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-1].pinvAttr) | pmCallConvFastcall); }
#line 5262 "prebuilt\\asmparse.cpp"
    break;

  case 306: /* pinvAttr: pinvAttr BESTFIT_ ':' ON_  */
#line 833 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-3].pinvAttr) | pmBestFitEnabled); }
#line 5268 "prebuilt\\asmparse.cpp"
    break;

  case 307: /* pinvAttr: pinvAttr BESTFIT_ ':' OFF_  */
#line 834 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-3].pinvAttr) | pmBestFitDisabled); }
#line 5274 "prebuilt\\asmparse.cpp"
    break;

  case 308: /* pinvAttr: pinvAttr CHARMAPERROR_ ':' ON_  */
#line 835 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-3].pinvAttr) | pmThrowOnUnmappableCharEnabled); }
#line 5280 "prebuilt\\asmparse.cpp"
    break;

  case 309: /* pinvAttr: pinvAttr CHARMAPERROR_ ':' OFF_  */
#line 836 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-3].pinvAttr) | pmThrowOnUnmappableCharDisabled); }
#line 5286 "prebuilt\\asmparse.cpp"
    break;

  case 310: /* pinvAttr: pinvAttr FLAGS_ '(' int32 ')'  */
#line 837 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-1].int32)); }
#line 5292 "prebuilt\\asmparse.cpp"
    break;

  case 311: /* methodName: _CTOR  */
#line 840 "asmparse.y"
                                                            { (yyval.string) = newString(COR_CTOR_METHOD_NAME); }
#line 5298 "prebuilt\\asmparse.cpp"
    break;

  case 312: /* methodName: _CCTOR  */
#line 841 "asmparse.y"
                                                            { (yyval.string) = newString(COR_CCTOR_METHOD_NAME); }
#line 5304 "prebuilt\\asmparse.cpp"
    break;

  case 313: /* methodName: dottedName  */
#line 842 "asmparse.y"
                                                            { (yyval.string) = (yyvsp[0].string); }
#line 5310 "prebuilt\\asmparse.cpp"
    break;

  case 314: /* paramAttr: %empty  */
#line 845 "asmparse.y"
                                                            { (yyval.int32) = 0; }
#line 5316 "prebuilt\\asmparse.cpp"
    break;

  case 315: /* paramAttr: paramAttr '[' IN_ ']'  */
#line 846 "asmparse.y"
                                                            { (yyval.int32) = (yyvsp[-3].int32) | pdIn; }
#line 5322 "prebuilt\\asmparse.cpp"
    break;

  case 316: /* paramAttr: paramAttr '[' OUT_ ']'  */
#line 847 "asmparse.y"
                                                            { (yyval.int32) = (yyvsp[-3].int32) | pdOut; }
#line 5328 "prebuilt\\asmparse.cpp"
    break;

  case 317: /* paramAttr: paramAttr '[' OPT_ ']'  */
#line 848 "asmparse.y"
                                                            { (yyval.int32) = (yyvsp[-3].int32) | pdOptional; }
#line 5334 "prebuilt\\asmparse.cpp"
    break;

  case 318: /* paramAttr: paramAttr '[' int32 ']'  */
#line 849 "asmparse.y"
                                                            { (yyval.int32) = (yyvsp[-1].int32) + 1; }
#line 5340 "prebuilt\\asmparse.cpp"
    break;

  case 319: /* implAttr: %empty  */
#line 852 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) (miIL | miManaged); }
#line 5346 "prebuilt\\asmparse.cpp"
    break;

  case 320: /* implAttr: implAttr NATIVE_  */
#line 853 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) (((yyvsp[-1].implAttr) & 0xFFF4) | miNative); }
#line 5352 "prebuilt\\asmparse.cpp"
    break;

  case 321: /* implAttr: implAttr CIL_  */
#line 854 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) (((yyvsp[-1].implAttr) & 0xFFF4) | miIL); }
#line 5358 "prebuilt\\asmparse.cpp"
    break;

  case 322: /* implAttr: implAttr OPTIL_  */
#line 855 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) (((yyvsp[-1].implAttr) & 0xFFF4) | miOPTIL); }
#line 5364 "prebuilt\\asmparse.cpp"
    break;

  case 323: /* implAttr: implAttr MANAGED_  */
#line 856 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) (((yyvsp[-1].implAttr) & 0xFFFB) | miManaged); }
#line 5370 "prebuilt\\asmparse.cpp"
    break;

  case 324: /* implAttr: implAttr UNMANAGED_  */
#line 857 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) (((yyvsp[-1].implAttr) & 0xFFFB) | miUnmanaged); }
#line 5376 "prebuilt\\asmparse.cpp"
    break;

  case 325: /* implAttr: implAttr FORWARDREF_  */
#line 858 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) ((yyvsp[-1].implAttr) | miForwardRef); }
#line 5382 "prebuilt\\asmparse.cpp"
    break;

  case 326: /* implAttr: implAttr PRESERVESIG_  */
#line 859 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) ((yyvsp[-1].implAttr) | miPreserveSig); }
#line 5388 "prebuilt\\asmparse.cpp"
    break;

  case 327: /* implAttr: implAttr RUNTIME_  */
#line 860 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) ((yyvsp[-1].implAttr) | miRuntime); }
#line 5394 "prebuilt\\asmparse.cpp"
    break;

  case 328: /* implAttr: implAttr INTERNALCALL_  */
#line 861 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) ((yyvsp[-1].implAttr) | miInternalCall); }
#line 5400 "prebuilt\\asmparse.cpp"
    break;

  case 329: /* implAttr: implAttr SYNCHRONIZED_  */
#line 862 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) ((yyvsp[-1].implAttr) | miSynchronized); }
#line 5406 "prebuilt\\asmparse.cpp"
    break;

  case 330: /* implAttr: implAttr NOINLINING_  */
#line 863 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) ((yyvsp[-1].implAttr) | miNoInlining); }
#line 5412 "prebuilt\\asmparse.cpp"
    break;

  case 331: /* implAttr: implAttr AGGRESSIVEINLINING_  */
#line 864 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) ((yyvsp[-1].implAttr) | miAggressiveInlining); }
#line 5418 "prebuilt\\asmparse.cpp"
    break;

  case 332: /* implAttr: implAttr NOOPTIMIZATION_  */
#line 865 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) ((yyvsp[-1].implAttr) | miNoOptimization); }
#line 5424 "prebuilt\\asmparse.cpp"
    break;

  case 333: /* implAttr: implAttr AGGRESSIVEOPTIMIZATION_  */
#line 866 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) ((yyvsp[-1].implAttr) | miAggressiveOptimization); }
#line 5430 "prebuilt\\asmparse.cpp"
    break;

  case 334: /* implAttr: implAttr FLAGS_ '(' int32 ')'  */
#line 867 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) ((yyvsp[-1].int32)); }
#line 5436 "prebuilt\\asmparse.cpp"
    break;

  case 335: /* localsHead: _LOCALS  */
#line 870 "asmparse.y"
                                                            { PASM->delArgNameList(PASM->m_firstArgName); PASM->m_firstArgName = NULL;PASM->m_lastArgName = NULL;
                                                            }
#line 5443 "prebuilt\\asmparse.cpp"
    break;

  case 338: /* methodDecl: _EMITBYTE int32  */
#line 878 "asmparse.y"
                                                            { PASM->EmitByte((yyvsp[0].int32)); }
#line 5449 "prebuilt\\asmparse.cpp"
    break;

  case 339: /* methodDecl: sehBlock  */
#line 879 "asmparse.y"
                                                            { delete PASM->m_SEHD; PASM->m_SEHD = PASM->m_SEHDstack.POP(); }
#line 5455 "prebuilt\\asmparse.cpp"
    break;

  case 340: /* methodDecl: _MAXSTACK int32  */
#line 880 "asmparse.y"
                                                            { PASM->EmitMaxStack((yyvsp[0].int32)); }
#line 5461 "prebuilt\\asmparse.cpp"
    break;

  case 341: /* methodDecl: localsHead '(' sigArgs0 ')'  */
#line 881 "asmparse.y"
                                                            { PASM->EmitLocals(parser->MakeSig(IMAGE_CEE_CS_CALLCONV_LOCAL_SIG, 0, (yyvsp[-1].binstr)));
                                                            }
#line 5468 "prebuilt\\asmparse.cpp"
    break;

  case 342: /* methodDecl: localsHead INIT_ '(' sigArgs0 ')'  */
#line 883 "asmparse.y"
                                                            { PASM->EmitZeroInit();
                                                              PASM->EmitLocals(parser->MakeSig(IMAGE_CEE_CS_CALLCONV_LOCAL_SIG, 0, (yyvsp[-1].binstr)));
                                                            }
#line 5476 "prebuilt\\asmparse.cpp"
    break;

  case 343: /* methodDecl: _ENTRYPOINT  */
#line 886 "asmparse.y"
                                                            { PASM->EmitEntryPoint(); }
#line 5482 "prebuilt\\asmparse.cpp"
    break;

  case 344: /* methodDecl: _ZEROINIT  */
#line 887 "asmparse.y"
                                                            { PASM->EmitZeroInit(); }
#line 5488 "prebuilt\\asmparse.cpp"
    break;

  case 347: /* methodDecl: id ':'  */
#line 890 "asmparse.y"
                                                            { PASM->AddLabel(PASM->m_CurPC,(yyvsp[-1].string)); /*PASM->EmitLabel($1);*/ }
#line 5494 "prebuilt\\asmparse.cpp"
    break;

  case 353: /* methodDecl: _EXPORT '[' int32 ']'  */
#line 896 "asmparse.y"
                                                            { if(PASM->m_pCurMethod->m_dwExportOrdinal == 0xFFFFFFFF)
                                                              {
                                                                PASM->m_pCurMethod->m_dwExportOrdinal = (yyvsp[-1].int32);
                                                                PASM->m_pCurMethod->m_szExportAlias = NULL;
                                                                if(PASM->m_pCurMethod->m_wVTEntry == 0) PASM->m_pCurMethod->m_wVTEntry = 1;
                                                                if(PASM->m_pCurMethod->m_wVTSlot  == 0) PASM->m_pCurMethod->m_wVTSlot = (WORD)((yyvsp[-1].int32) + 0x8000);
                                                              }
                                                              else
                                                                PASM->report->warn("Duplicate .export directive, ignored\n");
                                                            }
#line 5509 "prebuilt\\asmparse.cpp"
    break;

  case 354: /* methodDecl: _EXPORT '[' int32 ']' AS_ id  */
#line 906 "asmparse.y"
                                                            { if(PASM->m_pCurMethod->m_dwExportOrdinal == 0xFFFFFFFF)
                                                              {
                                                                PASM->m_pCurMethod->m_dwExportOrdinal = (yyvsp[-3].int32);
                                                                PASM->m_pCurMethod->m_szExportAlias = (yyvsp[0].string);
                                                                if(PASM->m_pCurMethod->m_wVTEntry == 0) PASM->m_pCurMethod->m_wVTEntry = 1;
                                                                if(PASM->m_pCurMethod->m_wVTSlot  == 0) PASM->m_pCurMethod->m_wVTSlot = (WORD)((yyvsp[-3].int32) + 0x8000);
                                                              }
                                                              else
                                                                PASM->report->warn("Duplicate .export directive, ignored\n");
                                                            }
#line 5524 "prebuilt\\asmparse.cpp"
    break;

  case 355: /* methodDecl: _VTENTRY int32 ':' int32  */
#line 916 "asmparse.y"
                                                            { PASM->m_pCurMethod->m_wVTEntry = (WORD)(yyvsp[-2].int32);
                                                              PASM->m_pCurMethod->m_wVTSlot = (WORD)(yyvsp[0].int32); }
#line 5531 "prebuilt\\asmparse.cpp"
    break;

  case 356: /* methodDecl: _OVERRIDE typeSpec DCOLON methodName  */
#line 919 "asmparse.y"
                                                            { PASM->AddMethodImpl((yyvsp[-2].token),(yyvsp[0].string),NULL,mdTokenNil,NULL,NULL); }
#line 5537 "prebuilt\\asmparse.cpp"
    break;

  case 357: /* methodDecl: _OVERRIDE METHOD_ callConv type typeSpec DCOLON methodName genArity '(' sigArgs0 ')'  */
#line 922 "asmparse.y"
                                                            { PASM->AddMethodImpl((yyvsp[-6].token),(yyvsp[-4].string),
                                                              ((yyvsp[-3].int32)==0 ? parser->MakeSig((yyvsp[-8].int32),(yyvsp[-7].binstr),(yyvsp[-1].binstr)) :
                                                              parser->MakeSig((yyvsp[-8].int32)| IMAGE_CEE_CS_CALLCONV_GENERIC,(yyvsp[-7].binstr),(yyvsp[-1].binstr),(yyvsp[-3].int32)))
                                                              ,mdTokenNil,NULL,NULL);
                                                              PASM->ResetArgNameList();
                                                            }
#line 5548 "prebuilt\\asmparse.cpp"
    break;

  case 359: /* methodDecl: _PARAM TYPE_ '[' int32 ']'  */
#line 929 "asmparse.y"
                                                            { if(((yyvsp[-1].int32) > 0) && ((yyvsp[-1].int32) <= (int)PASM->m_pCurMethod->m_NumTyPars))
                                                                PASM->m_pCustomDescrList = PASM->m_pCurMethod->m_TyPars[(yyvsp[-1].int32)-1].CAList();
                                                              else
                                                                PASM->report->error("Type parameter index out of range\n");
                                                            }
#line 5558 "prebuilt\\asmparse.cpp"
    break;

  case 360: /* methodDecl: _PARAM TYPE_ dottedName  */
#line 934 "asmparse.y"
                                                            { int n = PASM->m_pCurMethod->FindTyPar((yyvsp[0].string));
                                                              if(n >= 0)
                                                                PASM->m_pCustomDescrList = PASM->m_pCurMethod->m_TyPars[n].CAList();
                                                              else
                                                                PASM->report->error("Type parameter '%s' undefined\n",(yyvsp[0].string));
                                                            }
#line 5569 "prebuilt\\asmparse.cpp"
    break;

  case 361: /* methodDecl: _PARAM CONSTRAINT_ '[' int32 ']' ',' typeSpec  */
#line 940 "asmparse.y"
                                                                        { PASM->m_pCurMethod->AddGenericParamConstraint((yyvsp[-3].int32), 0, (yyvsp[0].token)); }
#line 5575 "prebuilt\\asmparse.cpp"
    break;

  case 362: /* methodDecl: _PARAM CONSTRAINT_ dottedName ',' typeSpec  */
#line 941 "asmparse.y"
                                                                        { PASM->m_pCurMethod->AddGenericParamConstraint(0, (yyvsp[-2].string), (yyvsp[0].token)); }
#line 5581 "prebuilt\\asmparse.cpp"
    break;

  case 363: /* methodDecl: _PARAM '[' int32 ']' initOpt  */
#line 944 "asmparse.y"
                                                            { if( (yyvsp[-2].int32) ) {
                                                                ARG_NAME_LIST* pAN=PASM->findArg(PASM->m_pCurMethod->m_firstArgName, (yyvsp[-2].int32) - 1);
                                                                if(pAN)
                                                                {
                                                                    PASM->m_pCustomDescrList = &(pAN->CustDList);
                                                                    pAN->pValue = (yyvsp[0].binstr);
                                                                }
                                                                else
                                                                {
                                                                    PASM->m_pCustomDescrList = NULL;
                                                                    if((yyvsp[0].binstr)) delete (yyvsp[0].binstr);
                                                                }
                                                              } else {
                                                                PASM->m_pCustomDescrList = &(PASM->m_pCurMethod->m_RetCustDList);
                                                                PASM->m_pCurMethod->m_pRetValue = (yyvsp[0].binstr);
                                                              }
                                                              PASM->m_tkCurrentCVOwner = 0;
                                                            }
#line 5604 "prebuilt\\asmparse.cpp"
    break;

  case 364: /* scopeBlock: scopeOpen methodDecls '}'  */
#line 964 "asmparse.y"
                                                            { PASM->m_pCurMethod->CloseScope(); }
#line 5610 "prebuilt\\asmparse.cpp"
    break;

  case 365: /* scopeOpen: '{'  */
#line 967 "asmparse.y"
                                                            { PASM->m_pCurMethod->OpenScope(); }
#line 5616 "prebuilt\\asmparse.cpp"
    break;

  case 369: /* tryBlock: tryHead scopeBlock  */
#line 978 "asmparse.y"
                                                            { PASM->m_SEHD->tryTo = PASM->m_CurPC; }
#line 5622 "prebuilt\\asmparse.cpp"
    break;

  case 370: /* tryBlock: tryHead id TO_ id  */
#line 979 "asmparse.y"
                                                            { PASM->SetTryLabels((yyvsp[-2].string), (yyvsp[0].string)); }
#line 5628 "prebuilt\\asmparse.cpp"
    break;

  case 371: /* tryBlock: tryHead int32 TO_ int32  */
#line 980 "asmparse.y"
                                                            { if(PASM->m_SEHD) {PASM->m_SEHD->tryFrom = (yyvsp[-2].int32);
                                                              PASM->m_SEHD->tryTo = (yyvsp[0].int32);} }
#line 5635 "prebuilt\\asmparse.cpp"
    break;

  case 372: /* tryHead: _TRY  */
#line 984 "asmparse.y"
                                                            { PASM->NewSEHDescriptor();
                                                              PASM->m_SEHD->tryFrom = PASM->m_CurPC; }
#line 5642 "prebuilt\\asmparse.cpp"
    break;

  case 373: /* sehClause: catchClause handlerBlock  */
#line 989 "asmparse.y"
                                                             { PASM->EmitTry(); }
#line 5648 "prebuilt\\asmparse.cpp"
    break;

  case 374: /* sehClause: filterClause handlerBlock  */
#line 990 "asmparse.y"
                                                             { PASM->EmitTry(); }
#line 5654 "prebuilt\\asmparse.cpp"
    break;

  case 375: /* sehClause: finallyClause handlerBlock  */
#line 991 "asmparse.y"
                                                             { PASM->EmitTry(); }
#line 5660 "prebuilt\\asmparse.cpp"
    break;

  case 376: /* sehClause: faultClause handlerBlock  */
#line 992 "asmparse.y"
                                                             { PASM->EmitTry(); }
#line 5666 "prebuilt\\asmparse.cpp"
    break;

  case 377: /* filterClause: filterHead scopeBlock  */
#line 996 "asmparse.y"
                                                             { PASM->m_SEHD->sehHandler = PASM->m_CurPC; }
#line 5672 "prebuilt\\asmparse.cpp"
    break;

  case 378: /* filterClause: filterHead id  */
#line 997 "asmparse.y"
                                                             { PASM->SetFilterLabel((yyvsp[0].string));
                                                               PASM->m_SEHD->sehHandler = PASM->m_CurPC; }
#line 5679 "prebuilt\\asmparse.cpp"
    break;

  case 379: /* filterClause: filterHead int32  */
#line 999 "asmparse.y"
                                                             { PASM->m_SEHD->sehFilter = (yyvsp[0].int32);
                                                               PASM->m_SEHD->sehHandler = PASM->m_CurPC; }
#line 5686 "prebuilt\\asmparse.cpp"
    break;

  case 380: /* filterHead: FILTER_  */
#line 1003 "asmparse.y"
                                                             { PASM->m_SEHD->sehClause = COR_ILEXCEPTION_CLAUSE_FILTER;
                                                               PASM->m_SEHD->sehFilter = PASM->m_CurPC; }
#line 5693 "prebuilt\\asmparse.cpp"
    break;

  case 381: /* catchClause: CATCH_ typeSpec  */
#line 1007 "asmparse.y"
                                                            {  PASM->m_SEHD->sehClause = COR_ILEXCEPTION_CLAUSE_NONE;
                                                               PASM->SetCatchClass((yyvsp[0].token));
                                                               PASM->m_SEHD->sehHandler = PASM->m_CurPC; }
#line 5701 "prebuilt\\asmparse.cpp"
    break;

  case 382: /* finallyClause: FINALLY_  */
#line 1012 "asmparse.y"
                                                             { PASM->m_SEHD->sehClause = COR_ILEXCEPTION_CLAUSE_FINALLY;
                                                               PASM->m_SEHD->sehHandler = PASM->m_CurPC; }
#line 5708 "prebuilt\\asmparse.cpp"
    break;

  case 383: /* faultClause: FAULT_  */
#line 1016 "asmparse.y"
                                                             { PASM->m_SEHD->sehClause = COR_ILEXCEPTION_CLAUSE_FAULT;
                                                               PASM->m_SEHD->sehHandler = PASM->m_CurPC; }
#line 5715 "prebuilt\\asmparse.cpp"
    break;

  case 384: /* handlerBlock: scopeBlock  */
#line 1020 "asmparse.y"
                                                             { PASM->m_SEHD->sehHandlerTo = PASM->m_CurPC; }
#line 5721 "prebuilt\\asmparse.cpp"
    break;

  case 385: /* handlerBlock: HANDLER_ id TO_ id  */
#line 1021 "asmparse.y"
                                                             { PASM->SetHandlerLabels((yyvsp[-2].string), (yyvsp[0].string)); }
#line 5727 "prebuilt\\asmparse.cpp"
    break;

  case 386: /* handlerBlock: HANDLER_ int32 TO_ int32  */
#line 1022 "asmparse.y"
                                                             { PASM->m_SEHD->sehHandler = (yyvsp[-2].int32);
                                                               PASM->m_SEHD->sehHandlerTo = (yyvsp[0].int32); }
#line 5734 "prebuilt\\asmparse.cpp"
    break;

  case 388: /* ddHead: _DATA tls id '='  */
#line 1030 "asmparse.y"
                                                             { PASM->EmitDataLabel((yyvsp[-1].string)); }
#line 5740 "prebuilt\\asmparse.cpp"
    break;

  case 390: /* tls: %empty  */
#line 1034 "asmparse.y"
                                                             { PASM->SetDataSection(); }
#line 5746 "prebuilt\\asmparse.cpp"
    break;

  case 391: /* tls: TLS_  */
#line 1035 "asmparse.y"
                                                             { PASM->SetTLSSection(); }
#line 5752 "prebuilt\\asmparse.cpp"
    break;

  case 392: /* tls: CIL_  */
#line 1036 "asmparse.y"
                                                             { PASM->SetILSection(); }
#line 5758 "prebuilt\\asmparse.cpp"
    break;

  case 397: /* ddItemCount: %empty  */
#line 1047 "asmparse.y"
                                                             { (yyval.int32) = 1; }
#line 5764 "prebuilt\\asmparse.cpp"
    break;

  case 398: /* ddItemCount: '[' int32 ']'  */
#line 1048 "asmparse.y"
                                                             { (yyval.int32) = (yyvsp[-1].int32);
                                                               if((yyvsp[-1].int32) <= 0) { PASM->report->error("Illegal item count: %d\n",(yyvsp[-1].int32));
                                                                  if(!PASM->OnErrGo) (yyval.int32) = 1; }}
#line 5772 "prebuilt\\asmparse.cpp"
    break;

  case 399: /* ddItem: CHAR_ '*' '(' compQstring ')'  */
#line 1053 "asmparse.y"
                                                             { PASM->EmitDataString((yyvsp[-1].binstr)); }
#line 5778 "prebuilt\\asmparse.cpp"
    break;

  case 400: /* ddItem: '&' '(' id ')'  */
#line 1054 "asmparse.y"
                                                             { PASM->EmitDD((yyvsp[-1].string)); }
#line 5784 "prebuilt\\asmparse.cpp"
    break;

  case 401: /* ddItem: bytearrayhead bytes ')'  */
#line 1055 "asmparse.y"
                                                             { PASM->EmitData((yyvsp[-1].binstr)->ptr(),(yyvsp[-1].binstr)->length()); }
#line 5790 "prebuilt\\asmparse.cpp"
    break;

  case 402: /* ddItem: FLOAT32_ '(' float64 ')' ddItemCount  */
#line 1057 "asmparse.y"
                                                             { float f = (float) (*(yyvsp[-2].float64)); float* p = new (nothrow) float[(yyvsp[0].int32)];
                                                               if(p != NULL) {
                                                                 for(int i=0; i < (yyvsp[0].int32); i++) p[i] = f;
                                                                 PASM->EmitData(p, sizeof(float)*(yyvsp[0].int32)); delete (yyvsp[-2].float64); delete [] p;
                                                               } else PASM->report->error("Out of memory emitting data block %d bytes\n",
                                                                     sizeof(float)*(yyvsp[0].int32)); }
#line 5801 "prebuilt\\asmparse.cpp"
    break;

  case 403: /* ddItem: FLOAT64_ '(' float64 ')' ddItemCount  */
#line 1064 "asmparse.y"
                                                             { double* p = new (nothrow) double[(yyvsp[0].int32)];
                                                               if(p != NULL) {
                                                                 for(int i=0; i<(yyvsp[0].int32); i++) p[i] = *((yyvsp[-2].float64));
                                                                 PASM->EmitData(p, sizeof(double)*(yyvsp[0].int32)); delete (yyvsp[-2].float64); delete [] p;
                                                               } else PASM->report->error("Out of memory emitting data block %d bytes\n",
                                                                     sizeof(double)*(yyvsp[0].int32)); }
#line 5812 "prebuilt\\asmparse.cpp"
    break;

  case 404: /* ddItem: INT64_ '(' int64 ')' ddItemCount  */
#line 1071 "asmparse.y"
                                                             { int64_t* p = new (nothrow) int64_t[(yyvsp[0].int32)];
                                                               if(p != NULL) {
                                                                 for(int i=0; i<(yyvsp[0].int32); i++) p[i] = *((yyvsp[-2].int64));
                                                                 PASM->EmitData(p, sizeof(int64_t)*(yyvsp[0].int32)); delete (yyvsp[-2].int64); delete [] p;
                                                               } else PASM->report->error("Out of memory emitting data block %d bytes\n",
                                                                     sizeof(int64_t)*(yyvsp[0].int32)); }
#line 5823 "prebuilt\\asmparse.cpp"
    break;

  case 405: /* ddItem: INT32_ '(' int32 ')' ddItemCount  */
#line 1078 "asmparse.y"
                                                             { int32_t* p = new (nothrow) int32_t[(yyvsp[0].int32)];
                                                               if(p != NULL) {
                                                                 for(int i=0; i<(yyvsp[0].int32); i++) p[i] = (yyvsp[-2].int32);
                                                                 PASM->EmitData(p, sizeof(int32_t)*(yyvsp[0].int32)); delete [] p;
                                                               } else PASM->report->error("Out of memory emitting data block %d bytes\n",
                                                                     sizeof(int32_t)*(yyvsp[0].int32)); }
#line 5834 "prebuilt\\asmparse.cpp"
    break;

  case 406: /* ddItem: INT16_ '(' int32 ')' ddItemCount  */
#line 1085 "asmparse.y"
                                                             { int16_t i = (int16_t) (yyvsp[-2].int32); FAIL_UNLESS(i == (yyvsp[-2].int32), ("Value %d too big\n", (yyvsp[-2].int32)));
                                                               int16_t* p = new (nothrow) int16_t[(yyvsp[0].int32)];
                                                               if(p != NULL) {
                                                                 for(int j=0; j<(yyvsp[0].int32); j++) p[j] = i;
                                                                 PASM->EmitData(p, sizeof(int16_t)*(yyvsp[0].int32)); delete [] p;
                                                               } else PASM->report->error("Out of memory emitting data block %d bytes\n",
                                                                     sizeof(int16_t)*(yyvsp[0].int32)); }
#line 5846 "prebuilt\\asmparse.cpp"
    break;

  case 407: /* ddItem: INT8_ '(' int32 ')' ddItemCount  */
#line 1093 "asmparse.y"
                                                             { int8_t i = (int8_t) (yyvsp[-2].int32); FAIL_UNLESS(i == (yyvsp[-2].int32), ("Value %d too big\n", (yyvsp[-2].int32)));
                                                               int8_t* p = new (nothrow) int8_t[(yyvsp[0].int32)];
                                                               if(p != NULL) {
                                                                 for(int j=0; j<(yyvsp[0].int32); j++) p[j] = i;
                                                                 PASM->EmitData(p, sizeof(int8_t)*(yyvsp[0].int32)); delete [] p;
                                                               } else PASM->report->error("Out of memory emitting data block %d bytes\n",
                                                                     sizeof(int8_t)*(yyvsp[0].int32)); }
#line 5858 "prebuilt\\asmparse.cpp"
    break;

  case 408: /* ddItem: FLOAT32_ ddItemCount  */
#line 1100 "asmparse.y"
                                                             { PASM->EmitData(NULL, sizeof(float)*(yyvsp[0].int32)); }
#line 5864 "prebuilt\\asmparse.cpp"
    break;

  case 409: /* ddItem: FLOAT64_ ddItemCount  */
#line 1101 "asmparse.y"
                                                             { PASM->EmitData(NULL, sizeof(double)*(yyvsp[0].int32)); }
#line 5870 "prebuilt\\asmparse.cpp"
    break;

  case 410: /* ddItem: INT64_ ddItemCount  */
#line 1102 "asmparse.y"
                                                             { PASM->EmitData(NULL, sizeof(int64_t)*(yyvsp[0].int32)); }
#line 5876 "prebuilt\\asmparse.cpp"
    break;

  case 411: /* ddItem: INT32_ ddItemCount  */
#line 1103 "asmparse.y"
                                                             { PASM->EmitData(NULL, sizeof(int32_t)*(yyvsp[0].int32)); }
#line 5882 "prebuilt\\asmparse.cpp"
    break;

  case 412: /* ddItem: INT16_ ddItemCount  */
#line 1104 "asmparse.y"
                                                             { PASM->EmitData(NULL, sizeof(int16_t)*(yyvsp[0].int32)); }
#line 5888 "prebuilt\\asmparse.cpp"
    break;

  case 413: /* ddItem: INT8_ ddItemCount  */
#line 1105 "asmparse.y"
                                                             { PASM->EmitData(NULL, sizeof(int8_t)*(yyvsp[0].int32)); }
#line 5894 "prebuilt\\asmparse.cpp"
    break;

  case 414: /* fieldSerInit: FLOAT32_ '(' float64 ')'  */
#line 1109 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_R4);
                                                               float f = (float)(*(yyvsp[-1].float64));
                                                               (yyval.binstr)->appendInt32(*((int32_t*)&f)); delete (yyvsp[-1].float64); }
#line 5902 "prebuilt\\asmparse.cpp"
    break;

  case 415: /* fieldSerInit: FLOAT64_ '(' float64 ')'  */
#line 1112 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_R8);
                                                               (yyval.binstr)->appendInt64((int64_t *)(yyvsp[-1].float64)); delete (yyvsp[-1].float64); }
#line 5909 "prebuilt\\asmparse.cpp"
    break;

  case 416: /* fieldSerInit: FLOAT32_ '(' int32 ')'  */
#line 1114 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_R4);
                                                               (yyval.binstr)->appendInt32((yyvsp[-1].int32)); }
#line 5916 "prebuilt\\asmparse.cpp"
    break;

  case 417: /* fieldSerInit: FLOAT64_ '(' int64 ')'  */
#line 1116 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_R8);
                                                               (yyval.binstr)->appendInt64((int64_t *)(yyvsp[-1].int64)); delete (yyvsp[-1].int64); }
#line 5923 "prebuilt\\asmparse.cpp"
    break;

  case 418: /* fieldSerInit: INT64_ '(' int64 ')'  */
#line 1118 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_I8);
                                                               (yyval.binstr)->appendInt64((int64_t *)(yyvsp[-1].int64)); delete (yyvsp[-1].int64); }
#line 5930 "prebuilt\\asmparse.cpp"
    break;

  case 419: /* fieldSerInit: INT32_ '(' int32 ')'  */
#line 1120 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_I4);
                                                               (yyval.binstr)->appendInt32((yyvsp[-1].int32)); }
#line 5937 "prebuilt\\asmparse.cpp"
    break;

  case 420: /* fieldSerInit: INT16_ '(' int32 ')'  */
#line 1122 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_I2);
                                                               (yyval.binstr)->appendInt16((yyvsp[-1].int32)); }
#line 5944 "prebuilt\\asmparse.cpp"
    break;

  case 421: /* fieldSerInit: INT8_ '(' int32 ')'  */
#line 1124 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_I1);
                                                               (yyval.binstr)->appendInt8((yyvsp[-1].int32)); }
#line 5951 "prebuilt\\asmparse.cpp"
    break;

  case 422: /* fieldSerInit: UNSIGNED_ INT64_ '(' int64 ')'  */
#line 1126 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U8);
                                                               (yyval.binstr)->appendInt64((int64_t *)(yyvsp[-1].int64)); delete (yyvsp[-1].int64); }
#line 5958 "prebuilt\\asmparse.cpp"
    break;

  case 423: /* fieldSerInit: UNSIGNED_ INT32_ '(' int32 ')'  */
#line 1128 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U4);
                                                               (yyval.binstr)->appendInt32((yyvsp[-1].int32)); }
#line 5965 "prebuilt\\asmparse.cpp"
    break;

  case 424: /* fieldSerInit: UNSIGNED_ INT16_ '(' int32 ')'  */
#line 1130 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U2);
                                                               (yyval.binstr)->appendInt16((yyvsp[-1].int32)); }
#line 5972 "prebuilt\\asmparse.cpp"
    break;

  case 425: /* fieldSerInit: UNSIGNED_ INT8_ '(' int32 ')'  */
#line 1132 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U1);
                                                               (yyval.binstr)->appendInt8((yyvsp[-1].int32)); }
#line 5979 "prebuilt\\asmparse.cpp"
    break;

  case 426: /* fieldSerInit: UINT64_ '(' int64 ')'  */
#line 1134 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U8);
                                                               (yyval.binstr)->appendInt64((int64_t *)(yyvsp[-1].int64)); delete (yyvsp[-1].int64); }
#line 5986 "prebuilt\\asmparse.cpp"
    break;

  case 427: /* fieldSerInit: UINT32_ '(' int32 ')'  */
#line 1136 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U4);
                                                               (yyval.binstr)->appendInt32((yyvsp[-1].int32)); }
#line 5993 "prebuilt\\asmparse.cpp"
    break;

  case 428: /* fieldSerInit: UINT16_ '(' int32 ')'  */
#line 1138 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U2);
                                                               (yyval.binstr)->appendInt16((yyvsp[-1].int32)); }
#line 6000 "prebuilt\\asmparse.cpp"
    break;

  case 429: /* fieldSerInit: UINT8_ '(' int32 ')'  */
#line 1140 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U1);
                                                               (yyval.binstr)->appendInt8((yyvsp[-1].int32)); }
#line 6007 "prebuilt\\asmparse.cpp"
    break;

  case 430: /* fieldSerInit: CHAR_ '(' int32 ')'  */
#line 1142 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_CHAR);
                                                               (yyval.binstr)->appendInt16((yyvsp[-1].int32)); }
#line 6014 "prebuilt\\asmparse.cpp"
    break;

  case 431: /* fieldSerInit: BOOL_ '(' truefalse ')'  */
#line 1144 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_BOOLEAN);
                                                               (yyval.binstr)->appendInt8((yyvsp[-1].int32));}
#line 6021 "prebuilt\\asmparse.cpp"
    break;

  case 432: /* fieldSerInit: bytearrayhead bytes ')'  */
#line 1146 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_STRING);
                                                               (yyval.binstr)->append((yyvsp[-1].binstr)); delete (yyvsp[-1].binstr);}
#line 6028 "prebuilt\\asmparse.cpp"
    break;

  case 433: /* bytearrayhead: BYTEARRAY_ '('  */
#line 1150 "asmparse.y"
                                                             { bParsingByteArray = TRUE; }
#line 6034 "prebuilt\\asmparse.cpp"
    break;

  case 434: /* bytes: %empty  */
#line 1153 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); }
#line 6040 "prebuilt\\asmparse.cpp"
    break;

  case 435: /* bytes: hexbytes  */
#line 1154 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[0].binstr); }
#line 6046 "prebuilt\\asmparse.cpp"
    break;

  case 436: /* hexbytes: HEXBYTE  */
#line 1157 "asmparse.y"
                                                             { int8_t i = (int8_t) (yyvsp[0].int32); (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(i); }
#line 6052 "prebuilt\\asmparse.cpp"
    break;

  case 437: /* hexbytes: hexbytes HEXBYTE  */
#line 1158 "asmparse.y"
                                                             { int8_t i = (int8_t) (yyvsp[0].int32); (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->appendInt8(i); }
#line 6058 "prebuilt\\asmparse.cpp"
    break;

  case 438: /* fieldInit: fieldSerInit  */
#line 1162 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[0].binstr); }
#line 6064 "prebuilt\\asmparse.cpp"
    break;

  case 439: /* fieldInit: compQstring  */
#line 1163 "asmparse.y"
                                                             { (yyval.binstr) = BinStrToUnicode((yyvsp[0].binstr),true); (yyval.binstr)->insertInt8(ELEMENT_TYPE_STRING);}
#line 6070 "prebuilt\\asmparse.cpp"
    break;

  case 440: /* fieldInit: NULLREF_  */
#line 1164 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_CLASS);
                                                               (yyval.binstr)->appendInt32(0); }
#line 6077 "prebuilt\\asmparse.cpp"
    break;

  case 441: /* serInit: fieldSerInit  */
#line 1169 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[0].binstr); }
#line 6083 "prebuilt\\asmparse.cpp"
    break;

  case 442: /* serInit: STRING_ '(' NULLREF_ ')'  */
#line 1170 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_STRING); (yyval.binstr)->appendInt8(0xFF); }
#line 6089 "prebuilt\\asmparse.cpp"
    break;

  case 443: /* serInit: STRING_ '(' SQSTRING ')'  */
#line 1171 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_STRING);
                                                               AppendStringWithLength((yyval.binstr),(yyvsp[-1].string)); delete [] (yyvsp[-1].string);}
#line 6096 "prebuilt\\asmparse.cpp"
    break;

  case 444: /* serInit: TYPE_ '(' CLASS_ SQSTRING ')'  */
#line 1173 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_TYPE);
                                                               AppendStringWithLength((yyval.binstr),(yyvsp[-1].string)); delete [] (yyvsp[-1].string);}
#line 6103 "prebuilt\\asmparse.cpp"
    break;

  case 445: /* serInit: TYPE_ '(' className ')'  */
#line 1175 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_TYPE);
                                                               AppendStringWithLength((yyval.binstr),PASM->ReflectionNotation((yyvsp[-1].token)));}
#line 6110 "prebuilt\\asmparse.cpp"
    break;

  case 446: /* serInit: TYPE_ '(' NULLREF_ ')'  */
#line 1177 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_TYPE); (yyval.binstr)->appendInt8(0xFF); }
#line 6116 "prebuilt\\asmparse.cpp"
    break;

  case 447: /* serInit: OBJECT_ '(' serInit ')'  */
#line 1178 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt8(SERIALIZATION_TYPE_TAGGED_OBJECT);}
#line 6122 "prebuilt\\asmparse.cpp"
    break;

  case 448: /* serInit: FLOAT32_ '[' int32 ']' '(' f32seq ')'  */
#line 1180 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_R4);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6130 "prebuilt\\asmparse.cpp"
    break;

  case 449: /* serInit: FLOAT64_ '[' int32 ']' '(' f64seq ')'  */
#line 1184 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_R8);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6138 "prebuilt\\asmparse.cpp"
    break;

  case 450: /* serInit: INT64_ '[' int32 ']' '(' i64seq ')'  */
#line 1188 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_I8);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6146 "prebuilt\\asmparse.cpp"
    break;

  case 451: /* serInit: INT32_ '[' int32 ']' '(' i32seq ')'  */
#line 1192 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_I4);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6154 "prebuilt\\asmparse.cpp"
    break;

  case 452: /* serInit: INT16_ '[' int32 ']' '(' i16seq ')'  */
#line 1196 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_I2);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6162 "prebuilt\\asmparse.cpp"
    break;

  case 453: /* serInit: INT8_ '[' int32 ']' '(' i8seq ')'  */
#line 1200 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_I1);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6170 "prebuilt\\asmparse.cpp"
    break;

  case 454: /* serInit: UINT64_ '[' int32 ']' '(' i64seq ')'  */
#line 1204 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_U8);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6178 "prebuilt\\asmparse.cpp"
    break;

  case 455: /* serInit: UINT32_ '[' int32 ']' '(' i32seq ')'  */
#line 1208 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_U4);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6186 "prebuilt\\asmparse.cpp"
    break;

  case 456: /* serInit: UINT16_ '[' int32 ']' '(' i16seq ')'  */
#line 1212 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_U2);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6194 "prebuilt\\asmparse.cpp"
    break;

  case 457: /* serInit: UINT8_ '[' int32 ']' '(' i8seq ')'  */
#line 1216 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_U1);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6202 "prebuilt\\asmparse.cpp"
    break;

  case 458: /* serInit: UNSIGNED_ INT64_ '[' int32 ']' '(' i64seq ')'  */
#line 1220 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_U8);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6210 "prebuilt\\asmparse.cpp"
    break;

  case 459: /* serInit: UNSIGNED_ INT32_ '[' int32 ']' '(' i32seq ')'  */
#line 1224 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_U4);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6218 "prebuilt\\asmparse.cpp"
    break;

  case 460: /* serInit: UNSIGNED_ INT16_ '[' int32 ']' '(' i16seq ')'  */
#line 1228 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_U2);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6226 "prebuilt\\asmparse.cpp"
    break;

  case 461: /* serInit: UNSIGNED_ INT8_ '[' int32 ']' '(' i8seq ')'  */
#line 1232 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_U1);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6234 "prebuilt\\asmparse.cpp"
    break;

  case 462: /* serInit: CHAR_ '[' int32 ']' '(' i16seq ')'  */
#line 1236 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_CHAR);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6242 "prebuilt\\asmparse.cpp"
    break;

  case 463: /* serInit: BOOL_ '[' int32 ']' '(' boolSeq ')'  */
#line 1240 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_BOOLEAN);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6250 "prebuilt\\asmparse.cpp"
    break;

  case 464: /* serInit: STRING_ '[' int32 ']' '(' sqstringSeq ')'  */
#line 1244 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_STRING);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6258 "prebuilt\\asmparse.cpp"
    break;

  case 465: /* serInit: TYPE_ '[' int32 ']' '(' classSeq ')'  */
#line 1248 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(SERIALIZATION_TYPE_TYPE);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6266 "prebuilt\\asmparse.cpp"
    break;

  case 466: /* serInit: OBJECT_ '[' int32 ']' '(' objSeq ')'  */
#line 1252 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(SERIALIZATION_TYPE_TAGGED_OBJECT);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6274 "prebuilt\\asmparse.cpp"
    break;

  case 467: /* f32seq: %empty  */
#line 1258 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); }
#line 6280 "prebuilt\\asmparse.cpp"
    break;

  case 468: /* f32seq: f32seq float64  */
#line 1259 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr);
                                                               float f = (float) (*(yyvsp[0].float64)); (yyval.binstr)->appendInt32(*((int32_t*)&f)); delete (yyvsp[0].float64); }
#line 6287 "prebuilt\\asmparse.cpp"
    break;

  case 469: /* f32seq: f32seq int32  */
#line 1261 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr);
                                                               (yyval.binstr)->appendInt32((yyvsp[0].int32)); }
#line 6294 "prebuilt\\asmparse.cpp"
    break;

  case 470: /* f64seq: %empty  */
#line 1265 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); }
#line 6300 "prebuilt\\asmparse.cpp"
    break;

  case 471: /* f64seq: f64seq float64  */
#line 1266 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr);
                                                               (yyval.binstr)->appendInt64((int64_t *)(yyvsp[0].float64)); delete (yyvsp[0].float64); }
#line 6307 "prebuilt\\asmparse.cpp"
    break;

  case 472: /* f64seq: f64seq int64  */
#line 1268 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr);
                                                               (yyval.binstr)->appendInt64((int64_t *)(yyvsp[0].int64)); delete (yyvsp[0].int64); }
#line 6314 "prebuilt\\asmparse.cpp"
    break;

  case 473: /* i64seq: %empty  */
#line 1272 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); }
#line 6320 "prebuilt\\asmparse.cpp"
    break;

  case 474: /* i64seq: i64seq int64  */
#line 1273 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr);
                                                               (yyval.binstr)->appendInt64((int64_t *)(yyvsp[0].int64)); delete (yyvsp[0].int64); }
#line 6327 "prebuilt\\asmparse.cpp"
    break;

  case 475: /* i32seq: %empty  */
#line 1277 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); }
#line 6333 "prebuilt\\asmparse.cpp"
    break;

  case 476: /* i32seq: i32seq int32  */
#line 1278 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->appendInt32((yyvsp[0].int32));}
#line 6339 "prebuilt\\asmparse.cpp"
    break;

  case 477: /* i16seq: %empty  */
#line 1281 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); }
#line 6345 "prebuilt\\asmparse.cpp"
    break;

  case 478: /* i16seq: i16seq int32  */
#line 1282 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->appendInt16((yyvsp[0].int32));}
#line 6351 "prebuilt\\asmparse.cpp"
    break;

  case 479: /* i8seq: %empty  */
#line 1285 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); }
#line 6357 "prebuilt\\asmparse.cpp"
    break;

  case 480: /* i8seq: i8seq int32  */
#line 1286 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->appendInt8((yyvsp[0].int32)); }
#line 6363 "prebuilt\\asmparse.cpp"
    break;

  case 481: /* boolSeq: %empty  */
#line 1289 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); }
#line 6369 "prebuilt\\asmparse.cpp"
    break;

  case 482: /* boolSeq: boolSeq truefalse  */
#line 1290 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr);
                                                               (yyval.binstr)->appendInt8((yyvsp[0].int32));}
#line 6376 "prebuilt\\asmparse.cpp"
    break;

  case 483: /* sqstringSeq: %empty  */
#line 1294 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); }
#line 6382 "prebuilt\\asmparse.cpp"
    break;

  case 484: /* sqstringSeq: sqstringSeq NULLREF_  */
#line 1295 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->appendInt8(0xFF); }
#line 6388 "prebuilt\\asmparse.cpp"
    break;

  case 485: /* sqstringSeq: sqstringSeq SQSTRING  */
#line 1296 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr);
                                                               AppendStringWithLength((yyval.binstr),(yyvsp[0].string)); delete [] (yyvsp[0].string);}
#line 6395 "prebuilt\\asmparse.cpp"
    break;

  case 486: /* classSeq: %empty  */
#line 1300 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); }
#line 6401 "prebuilt\\asmparse.cpp"
    break;

  case 487: /* classSeq: classSeq NULLREF_  */
#line 1301 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->appendInt8(0xFF); }
#line 6407 "prebuilt\\asmparse.cpp"
    break;

  case 488: /* classSeq: classSeq CLASS_ SQSTRING  */
#line 1302 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-2].binstr);
                                                               AppendStringWithLength((yyval.binstr),(yyvsp[0].string)); delete [] (yyvsp[0].string);}
#line 6414 "prebuilt\\asmparse.cpp"
    break;

  case 489: /* classSeq: classSeq className  */
#line 1304 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr);
                                                               AppendStringWithLength((yyval.binstr),PASM->ReflectionNotation((yyvsp[0].token)));}
#line 6421 "prebuilt\\asmparse.cpp"
    break;

  case 490: /* objSeq: %empty  */
#line 1308 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); }
#line 6427 "prebuilt\\asmparse.cpp"
    break;

  case 491: /* objSeq: objSeq serInit  */
#line 1309 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->append((yyvsp[0].binstr)); delete (yyvsp[0].binstr); }
#line 6433 "prebuilt\\asmparse.cpp"
    break;

  case 492: /* methodSpec: METHOD_  */
#line 1313 "asmparse.y"
                                                             { parser->m_ANSFirst.PUSH(PASM->m_firstArgName);
                                                               parser->m_ANSLast.PUSH(PASM->m_lastArgName);
                                                               PASM->m_firstArgName = NULL;
                                                               PASM->m_lastArgName = NULL; }
#line 6442 "prebuilt\\asmparse.cpp"
    break;

  case 493: /* instr_none: INSTR_NONE  */
#line 1319 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode)); }
#line 6448 "prebuilt\\asmparse.cpp"
    break;

  case 494: /* instr_var: INSTR_VAR  */
#line 1322 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode)); }
#line 6454 "prebuilt\\asmparse.cpp"
    break;

  case 495: /* instr_i: INSTR_I  */
#line 1325 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode)); }
#line 6460 "prebuilt\\asmparse.cpp"
    break;

  case 496: /* instr_i8: INSTR_I8  */
#line 1328 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode)); }
#line 6466 "prebuilt\\asmparse.cpp"
    break;

  case 497: /* instr_r: INSTR_R  */
#line 1331 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode)); }
#line 6472 "prebuilt\\asmparse.cpp"
    break;

  case 498: /* instr_brtarget: INSTR_BRTARGET  */
#line 1334 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode)); }
#line 6478 "prebuilt\\asmparse.cpp"
    break;

  case 499: /* instr_method: INSTR_METHOD  */
#line 1337 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode));
                                                               if((!PASM->OnErrGo)&&
                                                               (((yyvsp[0].opcode) == CEE_NEWOBJ)||
                                                                ((yyvsp[0].opcode) == CEE_CALLVIRT)))
                                                                  iCallConv = IMAGE_CEE_CS_CALLCONV_HASTHIS;
                                                             }
#line 6489 "prebuilt\\asmparse.cpp"
    break;

  case 500: /* instr_field: INSTR_FIELD  */
#line 1345 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode)); }
#line 6495 "prebuilt\\asmparse.cpp"
    break;

  case 501: /* instr_type: INSTR_TYPE  */
#line 1348 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode)); }
#line 6501 "prebuilt\\asmparse.cpp"
    break;

  case 502: /* instr_string: INSTR_STRING  */
#line 1351 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode)); }
#line 6507 "prebuilt\\asmparse.cpp"
    break;

  case 503: /* instr_sig: INSTR_SIG  */
#line 1354 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode)); }
#line 6513 "prebuilt\\asmparse.cpp"
    break;

  case 504: /* instr_tok: INSTR_TOK  */
#line 1357 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode)); iOpcodeLen = PASM->OpcodeLen((yyval.instr)); }
#line 6519 "prebuilt\\asmparse.cpp"
    break;

  case 505: /* instr_switch: INSTR_SWITCH  */
#line 1360 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode)); }
#line 6525 "prebuilt\\asmparse.cpp"
    break;

  case 506: /* instr_r_head: instr_r '('  */
#line 1363 "asmparse.y"
                                                             { (yyval.instr) = (yyvsp[-1].instr); bParsingByteArray = TRUE; }
#line 6531 "prebuilt\\asmparse.cpp"
    break;

  case 507: /* instr: instr_none  */
#line 1367 "asmparse.y"
                                                             { PASM->EmitOpcode((yyvsp[0].instr)); }
#line 6537 "prebuilt\\asmparse.cpp"
    break;

  case 508: /* instr: instr_var int32  */
#line 1368 "asmparse.y"
                                                             { PASM->EmitInstrVar((yyvsp[-1].instr), (yyvsp[0].int32)); }
#line 6543 "prebuilt\\asmparse.cpp"
    break;

  case 509: /* instr: instr_var id  */
#line 1369 "asmparse.y"
                                                             { PASM->EmitInstrVarByName((yyvsp[-1].instr), (yyvsp[0].string)); }
#line 6549 "prebuilt\\asmparse.cpp"
    break;

  case 510: /* instr: instr_i int32  */
#line 1370 "asmparse.y"
                                                             { PASM->EmitInstrI((yyvsp[-1].instr), (yyvsp[0].int32)); }
#line 6555 "prebuilt\\asmparse.cpp"
    break;

  case 511: /* instr: instr_i8 int64  */
#line 1371 "asmparse.y"
                                                             { PASM->EmitInstrI8((yyvsp[-1].instr), (yyvsp[0].int64)); }
#line 6561 "prebuilt\\asmparse.cpp"
    break;

  case 512: /* instr: instr_r float64  */
#line 1372 "asmparse.y"
                                                             { PASM->EmitInstrR((yyvsp[-1].instr), (yyvsp[0].float64)); delete ((yyvsp[0].float64));}
#line 6567 "prebuilt\\asmparse.cpp"
    break;

  case 513: /* instr: instr_r int64  */
#line 1373 "asmparse.y"
                                                             { double f = (double) (*(yyvsp[0].int64)); PASM->EmitInstrR((yyvsp[-1].instr), &f); }
#line 6573 "prebuilt\\asmparse.cpp"
    break;

  case 514: /* instr: instr_r_head bytes ')'  */
#line 1374 "asmparse.y"
                                                             { unsigned L = (yyvsp[-1].binstr)->length();
                                                               FAIL_UNLESS(L >= sizeof(float), ("%d hexbytes, must be at least %d\n",
                                                                           L,sizeof(float)));
                                                               if(L < sizeof(float)) {YYERROR; }
                                                               else {
                                                                   double f = (L >= sizeof(double)) ? *((double *)((yyvsp[-1].binstr)->ptr()))
                                                                                    : (double)(*(float *)((yyvsp[-1].binstr)->ptr()));
                                                                   PASM->EmitInstrR((yyvsp[-2].instr),&f); }
                                                               delete (yyvsp[-1].binstr); }
#line 6587 "prebuilt\\asmparse.cpp"
    break;

  case 515: /* instr: instr_brtarget int32  */
#line 1383 "asmparse.y"
                                                             { PASM->EmitInstrBrOffset((yyvsp[-1].instr), (yyvsp[0].int32)); }
#line 6593 "prebuilt\\asmparse.cpp"
    break;

  case 516: /* instr: instr_brtarget id  */
#line 1384 "asmparse.y"
                                                             { PASM->EmitInstrBrTarget((yyvsp[-1].instr), (yyvsp[0].string)); }
#line 6599 "prebuilt\\asmparse.cpp"
    break;

  case 517: /* instr: instr_method methodRef  */
#line 1386 "asmparse.y"
                                                             { PASM->SetMemberRefFixup((yyvsp[0].token),PASM->OpcodeLen((yyvsp[-1].instr)));
                                                               PASM->EmitInstrI((yyvsp[-1].instr),(yyvsp[0].token));
                                                               PASM->m_tkCurrentCVOwner = (yyvsp[0].token);
                                                               PASM->m_pCustomDescrList = NULL;
                                                               iCallConv = 0;
                                                             }
#line 6610 "prebuilt\\asmparse.cpp"
    break;

  case 518: /* instr: instr_field type typeSpec DCOLON dottedName  */
#line 1393 "asmparse.y"
                                                             { (yyvsp[-3].binstr)->insertInt8(IMAGE_CEE_CS_CALLCONV_FIELD);
                                                               mdToken mr = PASM->MakeMemberRef((yyvsp[-2].token), (yyvsp[0].string), (yyvsp[-3].binstr));
                                                               PASM->SetMemberRefFixup(mr, PASM->OpcodeLen((yyvsp[-4].instr)));
                                                               PASM->EmitInstrI((yyvsp[-4].instr),mr);
                                                               PASM->m_tkCurrentCVOwner = mr;
                                                               PASM->m_pCustomDescrList = NULL;
                                                             }
#line 6622 "prebuilt\\asmparse.cpp"
    break;

  case 519: /* instr: instr_field type dottedName  */
#line 1401 "asmparse.y"
                                                             { (yyvsp[-1].binstr)->insertInt8(IMAGE_CEE_CS_CALLCONV_FIELD);
                                                               mdToken mr = PASM->MakeMemberRef(mdTokenNil, (yyvsp[0].string), (yyvsp[-1].binstr));
                                                               PASM->SetMemberRefFixup(mr, PASM->OpcodeLen((yyvsp[-2].instr)));
                                                               PASM->EmitInstrI((yyvsp[-2].instr),mr);
                                                               PASM->m_tkCurrentCVOwner = mr;
                                                               PASM->m_pCustomDescrList = NULL;
                                                             }
#line 6634 "prebuilt\\asmparse.cpp"
    break;

  case 520: /* instr: instr_field mdtoken  */
#line 1408 "asmparse.y"
                                                             { mdToken mr = (yyvsp[0].token);
                                                               PASM->SetMemberRefFixup(mr, PASM->OpcodeLen((yyvsp[-1].instr)));
                                                               PASM->EmitInstrI((yyvsp[-1].instr),mr);
                                                               PASM->m_tkCurrentCVOwner = mr;
                                                               PASM->m_pCustomDescrList = NULL;
                                                             }
#line 6645 "prebuilt\\asmparse.cpp"
    break;

  case 521: /* instr: instr_field TYPEDEF_F  */
#line 1414 "asmparse.y"
                                                             { mdToken mr = (yyvsp[0].tdd)->m_tkTypeSpec;
                                                               PASM->SetMemberRefFixup(mr, PASM->OpcodeLen((yyvsp[-1].instr)));
                                                               PASM->EmitInstrI((yyvsp[-1].instr),mr);
                                                               PASM->m_tkCurrentCVOwner = mr;
                                                               PASM->m_pCustomDescrList = NULL;
                                                             }
#line 6656 "prebuilt\\asmparse.cpp"
    break;

  case 522: /* instr: instr_field TYPEDEF_MR  */
#line 1420 "asmparse.y"
                                                             { mdToken mr = (yyvsp[0].tdd)->m_tkTypeSpec;
                                                               PASM->SetMemberRefFixup(mr, PASM->OpcodeLen((yyvsp[-1].instr)));
                                                               PASM->EmitInstrI((yyvsp[-1].instr),mr);
                                                               PASM->m_tkCurrentCVOwner = mr;
                                                               PASM->m_pCustomDescrList = NULL;
                                                             }
#line 6667 "prebuilt\\asmparse.cpp"
    break;

  case 523: /* instr: instr_type typeSpec  */
#line 1426 "asmparse.y"
                                                             { PASM->EmitInstrI((yyvsp[-1].instr), (yyvsp[0].token));
                                                               PASM->m_tkCurrentCVOwner = (yyvsp[0].token);
                                                               PASM->m_pCustomDescrList = NULL;
                                                             }
#line 6676 "prebuilt\\asmparse.cpp"
    break;

  case 524: /* instr: instr_string compQstring  */
#line 1430 "asmparse.y"
                                                             { PASM->EmitInstrStringLiteral((yyvsp[-1].instr), (yyvsp[0].binstr),TRUE); }
#line 6682 "prebuilt\\asmparse.cpp"
    break;

  case 525: /* instr: instr_string ANSI_ '(' compQstring ')'  */
#line 1432 "asmparse.y"
                                                             { PASM->EmitInstrStringLiteral((yyvsp[-4].instr), (yyvsp[-1].binstr),FALSE); }
#line 6688 "prebuilt\\asmparse.cpp"
    break;

  case 526: /* instr: instr_string bytearrayhead bytes ')'  */
#line 1434 "asmparse.y"
                                                             { PASM->EmitInstrStringLiteral((yyvsp[-3].instr), (yyvsp[-1].binstr),FALSE,TRUE); }
#line 6694 "prebuilt\\asmparse.cpp"
    break;

  case 527: /* instr: instr_sig callConv type '(' sigArgs0 ')'  */
#line 1436 "asmparse.y"
                                                             { PASM->EmitInstrSig((yyvsp[-5].instr), parser->MakeSig((yyvsp[-4].int32), (yyvsp[-3].binstr), (yyvsp[-1].binstr)));
                                                               PASM->ResetArgNameList();
                                                             }
#line 6702 "prebuilt\\asmparse.cpp"
    break;

  case 528: /* instr: instr_tok ownerType  */
#line 1440 "asmparse.y"
                                                             { PASM->EmitInstrI((yyvsp[-1].instr),(yyvsp[0].token));
                                                               PASM->m_tkCurrentCVOwner = (yyvsp[0].token);
                                                               PASM->m_pCustomDescrList = NULL;
                                                               iOpcodeLen = 0;
                                                             }
#line 6712 "prebuilt\\asmparse.cpp"
    break;

  case 529: /* instr: instr_switch '(' labels ')'  */
#line 1445 "asmparse.y"
                                                             { PASM->EmitInstrSwitch((yyvsp[-3].instr), (yyvsp[-1].labels)); }
#line 6718 "prebuilt\\asmparse.cpp"
    break;

  case 530: /* labels: %empty  */
#line 1448 "asmparse.y"
                                                              { (yyval.labels) = 0; }
#line 6724 "prebuilt\\asmparse.cpp"
    break;

  case 531: /* labels: id ',' labels  */
#line 1449 "asmparse.y"
                                                              { (yyval.labels) = new Labels((yyvsp[-2].string), (yyvsp[0].labels), TRUE); }
#line 6730 "prebuilt\\asmparse.cpp"
    break;

  case 532: /* labels: int32 ',' labels  */
#line 1450 "asmparse.y"
                                                              { (yyval.labels) = new Labels((char *)(UINT_PTR)(yyvsp[-2].int32), (yyvsp[0].labels), FALSE); }
#line 6736 "prebuilt\\asmparse.cpp"
    break;

  case 533: /* labels: id  */
#line 1451 "asmparse.y"
                                                              { (yyval.labels) = new Labels((yyvsp[0].string), NULL, TRUE); }
#line 6742 "prebuilt\\asmparse.cpp"
    break;

  case 534: /* labels: int32  */
#line 1452 "asmparse.y"
                                                              { (yyval.labels) = new Labels((char *)(UINT_PTR)(yyvsp[0].int32), NULL, FALSE); }
#line 6748 "prebuilt\\asmparse.cpp"
    break;

  case 535: /* tyArgs0: %empty  */
#line 1456 "asmparse.y"
                                                             { (yyval.binstr) = NULL; }
#line 6754 "prebuilt\\asmparse.cpp"
    break;

  case 536: /* tyArgs0: '<' tyArgs1 '>'  */
#line 1457 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); }
#line 6760 "prebuilt\\asmparse.cpp"
    break;

  case 537: /* tyArgs1: %empty  */
#line 1460 "asmparse.y"
                                                             { (yyval.binstr) = NULL; }
#line 6766 "prebuilt\\asmparse.cpp"
    break;

  case 538: /* tyArgs1: tyArgs2  */
#line 1461 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[0].binstr); }
#line 6772 "prebuilt\\asmparse.cpp"
    break;

  case 539: /* tyArgs2: type  */
#line 1464 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[0].binstr); }
#line 6778 "prebuilt\\asmparse.cpp"
    break;

  case 540: /* tyArgs2: tyArgs2 ',' type  */
#line 1465 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-2].binstr); (yyval.binstr)->append((yyvsp[0].binstr)); delete (yyvsp[0].binstr); }
#line 6784 "prebuilt\\asmparse.cpp"
    break;

  case 541: /* sigArgs0: %empty  */
#line 1469 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); }
#line 6790 "prebuilt\\asmparse.cpp"
    break;

  case 542: /* sigArgs0: sigArgs1  */
#line 1470 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[0].binstr);}
#line 6796 "prebuilt\\asmparse.cpp"
    break;

  case 543: /* sigArgs1: sigArg  */
#line 1473 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[0].binstr); }
#line 6802 "prebuilt\\asmparse.cpp"
    break;

  case 544: /* sigArgs1: sigArgs1 ',' sigArg  */
#line 1474 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-2].binstr); (yyval.binstr)->append((yyvsp[0].binstr)); delete (yyvsp[0].binstr); }
#line 6808 "prebuilt\\asmparse.cpp"
    break;

  case 545: /* sigArg: ELLIPSIS  */
#line 1477 "asmparse.y"
                                                               { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_SENTINEL); }
#line 6814 "prebuilt\\asmparse.cpp"
    break;

  case 546: /* sigArg: paramAttr type marshalClause  */
#line 1478 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->append((yyvsp[-1].binstr)); PASM->addArgName(NULL, (yyvsp[-1].binstr), (yyvsp[0].binstr), (yyvsp[-2].int32)); }
#line 6820 "prebuilt\\asmparse.cpp"
    break;

  case 547: /* sigArg: paramAttr type marshalClause id  */
#line 1479 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->append((yyvsp[-2].binstr)); PASM->addArgName((yyvsp[0].string), (yyvsp[-2].binstr), (yyvsp[-1].binstr), (yyvsp[-3].int32));}
#line 6826 "prebuilt\\asmparse.cpp"
    break;

  case 548: /* className: '[' dottedName ']' slashedName  */
#line 1483 "asmparse.y"
                                                              { (yyval.token) = PASM->ResolveClassRef(PASM->GetAsmRef((yyvsp[-2].string)), (yyvsp[0].string), NULL); delete[] (yyvsp[-2].string);}
#line 6832 "prebuilt\\asmparse.cpp"
    break;

  case 549: /* className: '[' mdtoken ']' slashedName  */
#line 1484 "asmparse.y"
                                                              { (yyval.token) = PASM->ResolveClassRef((yyvsp[-2].token), (yyvsp[0].string), NULL); }
#line 6838 "prebuilt\\asmparse.cpp"
    break;

  case 550: /* className: '[' '*' ']' slashedName  */
#line 1485 "asmparse.y"
                                                              { (yyval.token) = PASM->ResolveClassRef(mdTokenNil, (yyvsp[0].string), NULL); }
#line 6844 "prebuilt\\asmparse.cpp"
    break;

  case 551: /* className: '[' _MODULE dottedName ']' slashedName  */
#line 1486 "asmparse.y"
                                                                   { (yyval.token) = PASM->ResolveClassRef(PASM->GetModRef((yyvsp[-2].string)),(yyvsp[0].string), NULL); delete[] (yyvsp[-2].string);}
#line 6850 "prebuilt\\asmparse.cpp"
    break;

  case 552: /* className: slashedName  */
#line 1487 "asmparse.y"
                                                              { (yyval.token) = PASM->ResolveClassRef(1,(yyvsp[0].string),NULL); }
#line 6856 "prebuilt\\asmparse.cpp"
    break;

  case 553: /* className: mdtoken  */
#line 1488 "asmparse.y"
                                                              { (yyval.token) = (yyvsp[0].token); }
#line 6862 "prebuilt\\asmparse.cpp"
    break;

  case 554: /* className: TYPEDEF_T  */
#line 1489 "asmparse.y"
                                                              { (yyval.token) = (yyvsp[0].tdd)->m_tkTypeSpec; }
#line 6868 "prebuilt\\asmparse.cpp"
    break;

  case 555: /* className: _THIS  */
#line 1490 "asmparse.y"
                                                              { if(PASM->m_pCurClass != NULL) (yyval.token) = PASM->m_pCurClass->m_cl;
                                                                else { (yyval.token) = 0; PASM->report->error(".this outside class scope\n"); }
                                                              }
#line 6876 "prebuilt\\asmparse.cpp"
    break;

  case 556: /* className: _BASE  */
#line 1493 "asmparse.y"
                                                              { if(PASM->m_pCurClass != NULL) {
                                                                  (yyval.token) = PASM->m_pCurClass->m_crExtends;
                                                                  if(RidFromToken((yyval.token)) == 0)
                                                                    PASM->report->error(".base undefined\n");
                                                                } else { (yyval.token) = 0; PASM->report->error(".base outside class scope\n"); }
                                                              }
#line 6887 "prebuilt\\asmparse.cpp"
    break;

  case 557: /* className: _NESTER  */
#line 1499 "asmparse.y"
                                                              { if(PASM->m_pCurClass != NULL) {
                                                                  if(PASM->m_pCurClass->m_pEncloser != NULL) (yyval.token) = PASM->m_pCurClass->m_pEncloser->m_cl;
                                                                  else { (yyval.token) = 0; PASM->report->error(".nester undefined\n"); }
                                                                } else { (yyval.token) = 0; PASM->report->error(".nester outside class scope\n"); }
                                                              }
#line 6897 "prebuilt\\asmparse.cpp"
    break;

  case 558: /* slashedName: dottedName  */
#line 1506 "asmparse.y"
                                                              { (yyval.string) = (yyvsp[0].string); }
#line 6903 "prebuilt\\asmparse.cpp"
    break;

  case 559: /* slashedName: slashedName '/' dottedName  */
#line 1507 "asmparse.y"
                                                              { (yyval.string) = newStringWDel((yyvsp[-2].string), NESTING_SEP, (yyvsp[0].string)); }
#line 6909 "prebuilt\\asmparse.cpp"
    break;

  case 560: /* typeSpec: className  */
#line 1510 "asmparse.y"
                                                              { (yyval.token) = (yyvsp[0].token);}
#line 6915 "prebuilt\\asmparse.cpp"
    break;

  case 561: /* typeSpec: '[' dottedName ']'  */
#line 1511 "asmparse.y"
                                                              { (yyval.token) = PASM->GetAsmRef((yyvsp[-1].string)); delete[] (yyvsp[-1].string);}
#line 6921 "prebuilt\\asmparse.cpp"
    break;

  case 562: /* typeSpec: '[' _MODULE dottedName ']'  */
#line 1512 "asmparse.y"
                                                              { (yyval.token) = PASM->GetModRef((yyvsp[-1].string)); delete[] (yyvsp[-1].string);}
#line 6927 "prebuilt\\asmparse.cpp"
    break;

  case 563: /* typeSpec: type  */
#line 1513 "asmparse.y"
                                                              { (yyval.token) = PASM->ResolveTypeSpec((yyvsp[0].binstr)); }
#line 6933 "prebuilt\\asmparse.cpp"
    break;

  case 564: /* nativeType: %empty  */
#line 1517 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); }
#line 6939 "prebuilt\\asmparse.cpp"
    break;

  case 565: /* nativeType: CUSTOM_ '(' compQstring ',' compQstring ',' compQstring ',' compQstring ')'  */
#line 1519 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_CUSTOMMARSHALER);
                                                                corEmitInt((yyval.binstr),(yyvsp[-7].binstr)->length()); (yyval.binstr)->append((yyvsp[-7].binstr));
                                                                corEmitInt((yyval.binstr),(yyvsp[-5].binstr)->length()); (yyval.binstr)->append((yyvsp[-5].binstr));
                                                                corEmitInt((yyval.binstr),(yyvsp[-3].binstr)->length()); (yyval.binstr)->append((yyvsp[-3].binstr));
                                                                corEmitInt((yyval.binstr),(yyvsp[-1].binstr)->length()); (yyval.binstr)->append((yyvsp[-1].binstr));
                                                                PASM->report->warn("Deprecated 4-string form of custom marshaler, first two strings ignored\n");}
#line 6950 "prebuilt\\asmparse.cpp"
    break;

  case 566: /* nativeType: CUSTOM_ '(' compQstring ',' compQstring ')'  */
#line 1526 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_CUSTOMMARSHALER);
                                                                corEmitInt((yyval.binstr),0);
                                                                corEmitInt((yyval.binstr),0);
                                                                corEmitInt((yyval.binstr),(yyvsp[-3].binstr)->length()); (yyval.binstr)->append((yyvsp[-3].binstr));
                                                                corEmitInt((yyval.binstr),(yyvsp[-1].binstr)->length()); (yyval.binstr)->append((yyvsp[-1].binstr)); }
#line 6960 "prebuilt\\asmparse.cpp"
    break;

  case 567: /* nativeType: FIXED_ SYSSTRING_ '[' int32 ']'  */
#line 1531 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_FIXEDSYSSTRING);
                                                                corEmitInt((yyval.binstr),(yyvsp[-1].int32)); }
#line 6967 "prebuilt\\asmparse.cpp"
    break;

  case 568: /* nativeType: FIXED_ ARRAY_ '[' int32 ']' nativeType  */
#line 1534 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_FIXEDARRAY);
                                                                corEmitInt((yyval.binstr),(yyvsp[-2].int32)); (yyval.binstr)->append((yyvsp[0].binstr)); }
#line 6974 "prebuilt\\asmparse.cpp"
    break;

  case 569: /* nativeType: VARIANT_  */
#line 1536 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_VARIANT);
                                                                PASM->report->warn("Deprecated native type 'variant'\n"); }
#line 6981 "prebuilt\\asmparse.cpp"
    break;

  case 570: /* nativeType: CURRENCY_  */
#line 1538 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_CURRENCY); }
#line 6987 "prebuilt\\asmparse.cpp"
    break;

  case 571: /* nativeType: SYSCHAR_  */
#line 1539 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_SYSCHAR);
                                                                PASM->report->warn("Deprecated native type 'syschar'\n"); }
#line 6994 "prebuilt\\asmparse.cpp"
    break;

  case 572: /* nativeType: VOID_  */
#line 1541 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_VOID);
                                                                PASM->report->warn("Deprecated native type 'void'\n"); }
#line 7001 "prebuilt\\asmparse.cpp"
    break;

  case 573: /* nativeType: BOOL_  */
#line 1543 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_BOOLEAN); }
#line 7007 "prebuilt\\asmparse.cpp"
    break;

  case 574: /* nativeType: INT8_  */
#line 1544 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_I1); }
#line 7013 "prebuilt\\asmparse.cpp"
    break;

  case 575: /* nativeType: INT16_  */
#line 1545 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_I2); }
#line 7019 "prebuilt\\asmparse.cpp"
    break;

  case 576: /* nativeType: INT32_  */
#line 1546 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_I4); }
#line 7025 "prebuilt\\asmparse.cpp"
    break;

  case 577: /* nativeType: INT64_  */
#line 1547 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_I8); }
#line 7031 "prebuilt\\asmparse.cpp"
    break;

  case 578: /* nativeType: FLOAT32_  */
#line 1548 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_R4); }
#line 7037 "prebuilt\\asmparse.cpp"
    break;

  case 579: /* nativeType: FLOAT64_  */
#line 1549 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_R8); }
#line 7043 "prebuilt\\asmparse.cpp"
    break;

  case 580: /* nativeType: ERROR_  */
#line 1550 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_ERROR); }
#line 7049 "prebuilt\\asmparse.cpp"
    break;

  case 581: /* nativeType: UNSIGNED_ INT8_  */
#line 1551 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_U1); }
#line 7055 "prebuilt\\asmparse.cpp"
    break;

  case 582: /* nativeType: UNSIGNED_ INT16_  */
#line 1552 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_U2); }
#line 7061 "prebuilt\\asmparse.cpp"
    break;

  case 583: /* nativeType: UNSIGNED_ INT32_  */
#line 1553 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_U4); }
#line 7067 "prebuilt\\asmparse.cpp"
    break;

  case 584: /* nativeType: UNSIGNED_ INT64_  */
#line 1554 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_U8); }
#line 7073 "prebuilt\\asmparse.cpp"
    break;

  case 585: /* nativeType: UINT8_  */
#line 1555 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_U1); }
#line 7079 "prebuilt\\asmparse.cpp"
    break;

  case 586: /* nativeType: UINT16_  */
#line 1556 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_U2); }
#line 7085 "prebuilt\\asmparse.cpp"
    break;

  case 587: /* nativeType: UINT32_  */
#line 1557 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_U4); }
#line 7091 "prebuilt\\asmparse.cpp"
    break;

  case 588: /* nativeType: UINT64_  */
#line 1558 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_U8); }
#line 7097 "prebuilt\\asmparse.cpp"
    break;

  case 589: /* nativeType: nativeType '*'  */
#line 1559 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt8(NATIVE_TYPE_PTR);
                                                                PASM->report->warn("Deprecated native type '*'\n"); }
#line 7104 "prebuilt\\asmparse.cpp"
    break;

  case 590: /* nativeType: nativeType '[' ']'  */
#line 1561 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[-2].binstr); if((yyval.binstr)->length()==0) (yyval.binstr)->appendInt8(NATIVE_TYPE_MAX);
                                                                (yyval.binstr)->insertInt8(NATIVE_TYPE_ARRAY); }
#line 7111 "prebuilt\\asmparse.cpp"
    break;

  case 591: /* nativeType: nativeType '[' int32 ']'  */
#line 1563 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[-3].binstr); if((yyval.binstr)->length()==0) (yyval.binstr)->appendInt8(NATIVE_TYPE_MAX);
                                                                (yyval.binstr)->insertInt8(NATIVE_TYPE_ARRAY);
                                                                corEmitInt((yyval.binstr),0);
                                                                corEmitInt((yyval.binstr),(yyvsp[-1].int32));
                                                                corEmitInt((yyval.binstr),0); }
#line 7121 "prebuilt\\asmparse.cpp"
    break;

  case 592: /* nativeType: nativeType '[' int32 '+' int32 ']'  */
#line 1568 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[-5].binstr); if((yyval.binstr)->length()==0) (yyval.binstr)->appendInt8(NATIVE_TYPE_MAX);
                                                                (yyval.binstr)->insertInt8(NATIVE_TYPE_ARRAY);
                                                                corEmitInt((yyval.binstr),(yyvsp[-1].int32));
                                                                corEmitInt((yyval.binstr),(yyvsp[-3].int32));
                                                                corEmitInt((yyval.binstr),ntaSizeParamIndexSpecified); }
#line 7131 "prebuilt\\asmparse.cpp"
    break;

  case 593: /* nativeType: nativeType '[' '+' int32 ']'  */
#line 1573 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[-4].binstr); if((yyval.binstr)->length()==0) (yyval.binstr)->appendInt8(NATIVE_TYPE_MAX);
                                                                (yyval.binstr)->insertInt8(NATIVE_TYPE_ARRAY);
                                                                corEmitInt((yyval.binstr),(yyvsp[-1].int32)); }
#line 7139 "prebuilt\\asmparse.cpp"
    break;

  case 594: /* nativeType: DECIMAL_  */
#line 1576 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_DECIMAL);
                                                                PASM->report->warn("Deprecated native type 'decimal'\n"); }
#line 7146 "prebuilt\\asmparse.cpp"
    break;

  case 595: /* nativeType: DATE_  */
#line 1578 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_DATE);
                                                                PASM->report->warn("Deprecated native type 'date'\n"); }
#line 7153 "prebuilt\\asmparse.cpp"
    break;

  case 596: /* nativeType: BSTR_  */
#line 1580 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_BSTR); }
#line 7159 "prebuilt\\asmparse.cpp"
    break;

  case 597: /* nativeType: LPSTR_  */
#line 1581 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_LPSTR); }
#line 7165 "prebuilt\\asmparse.cpp"
    break;

  case 598: /* nativeType: LPWSTR_  */
#line 1582 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_LPWSTR); }
#line 7171 "prebuilt\\asmparse.cpp"
    break;

  case 599: /* nativeType: LPTSTR_  */
#line 1583 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_LPTSTR); }
#line 7177 "prebuilt\\asmparse.cpp"
    break;

  case 600: /* nativeType: OBJECTREF_  */
#line 1584 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_OBJECTREF);
                                                                PASM->report->warn("Deprecated native type 'objectref'\n"); }
#line 7184 "prebuilt\\asmparse.cpp"
    break;

  case 601: /* nativeType: IUNKNOWN_ iidParamIndex  */
#line 1586 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_IUNKNOWN);
                                                                if((yyvsp[0].int32) != -1) corEmitInt((yyval.binstr),(yyvsp[0].int32)); }
#line 7191 "prebuilt\\asmparse.cpp"
    break;

  case 602: /* nativeType: IDISPATCH_ iidParamIndex  */
#line 1588 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_IDISPATCH);
                                                                if((yyvsp[0].int32) != -1) corEmitInt((yyval.binstr),(yyvsp[0].int32)); }
#line 7198 "prebuilt\\asmparse.cpp"
    break;

  case 603: /* nativeType: STRUCT_  */
#line 1590 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_STRUCT); }
#line 7204 "prebuilt\\asmparse.cpp"
    break;

  case 604: /* nativeType: INTERFACE_ iidParamIndex  */
#line 1591 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_INTF);
                                                                if((yyvsp[0].int32) != -1) corEmitInt((yyval.binstr),(yyvsp[0].int32)); }
#line 7211 "prebuilt\\asmparse.cpp"
    break;

  case 605: /* nativeType: SAFEARRAY_ variantType  */
#line 1593 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_SAFEARRAY);
                                                                corEmitInt((yyval.binstr),(yyvsp[0].int32));
                                                                corEmitInt((yyval.binstr),0);}
#line 7219 "prebuilt\\asmparse.cpp"
    break;

  case 606: /* nativeType: SAFEARRAY_ variantType ',' compQstring  */
#line 1596 "asmparse.y"
                                                                 { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_SAFEARRAY);
                                                                corEmitInt((yyval.binstr),(yyvsp[-2].int32));
                                                                corEmitInt((yyval.binstr),(yyvsp[0].binstr)->length()); (yyval.binstr)->append((yyvsp[0].binstr)); }
#line 7227 "prebuilt\\asmparse.cpp"
    break;

  case 607: /* nativeType: INT_  */
#line 1600 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_INT); }
#line 7233 "prebuilt\\asmparse.cpp"
    break;

  case 608: /* nativeType: UNSIGNED_ INT_  */
#line 1601 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_UINT); }
#line 7239 "prebuilt\\asmparse.cpp"
    break;

  case 609: /* nativeType: UINT_  */
#line 1602 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_UINT); }
#line 7245 "prebuilt\\asmparse.cpp"
    break;

  case 610: /* nativeType: NESTED_ STRUCT_  */
#line 1603 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_NESTEDSTRUCT);
                                                                PASM->report->warn("Deprecated native type 'nested struct'\n"); }
#line 7252 "prebuilt\\asmparse.cpp"
    break;

  case 611: /* nativeType: BYVALSTR_  */
#line 1605 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_BYVALSTR); }
#line 7258 "prebuilt\\asmparse.cpp"
    break;

  case 612: /* nativeType: ANSI_ BSTR_  */
#line 1606 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_ANSIBSTR); }
#line 7264 "prebuilt\\asmparse.cpp"
    break;

  case 613: /* nativeType: TBSTR_  */
#line 1607 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_TBSTR); }
#line 7270 "prebuilt\\asmparse.cpp"
    break;

  case 614: /* nativeType: VARIANT_ BOOL_  */
#line 1608 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_VARIANTBOOL); }
#line 7276 "prebuilt\\asmparse.cpp"
    break;

  case 615: /* nativeType: METHOD_  */
#line 1609 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_FUNC); }
#line 7282 "prebuilt\\asmparse.cpp"
    break;

  case 616: /* nativeType: AS_ ANY_  */
#line 1610 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_ASANY); }
#line 7288 "prebuilt\\asmparse.cpp"
    break;

  case 617: /* nativeType: LPSTRUCT_  */
#line 1611 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_LPSTRUCT); }
#line 7294 "prebuilt\\asmparse.cpp"
    break;

  case 618: /* nativeType: TYPEDEF_TS  */
#line 1612 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->append((yyvsp[0].tdd)->m_pbsTypeSpec); }
#line 7300 "prebuilt\\asmparse.cpp"
    break;

  case 619: /* iidParamIndex: %empty  */
#line 1615 "asmparse.y"
                                                              { (yyval.int32) = -1; }
#line 7306 "prebuilt\\asmparse.cpp"
    break;

  case 620: /* iidParamIndex: '(' IIDPARAM_ '=' int32 ')'  */
#line 1616 "asmparse.y"
                                                              { (yyval.int32) = (yyvsp[-1].int32); }
#line 7312 "prebuilt\\asmparse.cpp"
    break;

  case 621: /* variantType: %empty  */
#line 1619 "asmparse.y"
                                                              { (yyval.int32) = VT_EMPTY; }
#line 7318 "prebuilt\\asmparse.cpp"
    break;

  case 622: /* variantType: NULL_  */
#line 1620 "asmparse.y"
                                                              { (yyval.int32) = VT_NULL; }
#line 7324 "prebuilt\\asmparse.cpp"
    break;

  case 623: /* variantType: VARIANT_  */
#line 1621 "asmparse.y"
                                                              { (yyval.int32) = VT_VARIANT; }
#line 7330 "prebuilt\\asmparse.cpp"
    break;

  case 624: /* variantType: CURRENCY_  */
#line 1622 "asmparse.y"
                                                              { (yyval.int32) = VT_CY; }
#line 7336 "prebuilt\\asmparse.cpp"
    break;

  case 625: /* variantType: VOID_  */
#line 1623 "asmparse.y"
                                                              { (yyval.int32) = VT_VOID; }
#line 7342 "prebuilt\\asmparse.cpp"
    break;

  case 626: /* variantType: BOOL_  */
#line 1624 "asmparse.y"
                                                              { (yyval.int32) = VT_BOOL; }
#line 7348 "prebuilt\\asmparse.cpp"
    break;

  case 627: /* variantType: INT8_  */
#line 1625 "asmparse.y"
                                                              { (yyval.int32) = VT_I1; }
#line 7354 "prebuilt\\asmparse.cpp"
    break;

  case 628: /* variantType: INT16_  */
#line 1626 "asmparse.y"
                                                              { (yyval.int32) = VT_I2; }
#line 7360 "prebuilt\\asmparse.cpp"
    break;

  case 629: /* variantType: INT32_  */
#line 1627 "asmparse.y"
                                                              { (yyval.int32) = VT_I4; }
#line 7366 "prebuilt\\asmparse.cpp"
    break;

  case 630: /* variantType: INT64_  */
#line 1628 "asmparse.y"
                                                              { (yyval.int32) = VT_I8; }
#line 7372 "prebuilt\\asmparse.cpp"
    break;

  case 631: /* variantType: FLOAT32_  */
#line 1629 "asmparse.y"
                                                              { (yyval.int32) = VT_R4; }
#line 7378 "prebuilt\\asmparse.cpp"
    break;

  case 632: /* variantType: FLOAT64_  */
#line 1630 "asmparse.y"
                                                              { (yyval.int32) = VT_R8; }
#line 7384 "prebuilt\\asmparse.cpp"
    break;

  case 633: /* variantType: UNSIGNED_ INT8_  */
#line 1631 "asmparse.y"
                                                              { (yyval.int32) = VT_UI1; }
#line 7390 "prebuilt\\asmparse.cpp"
    break;

  case 634: /* variantType: UNSIGNED_ INT16_  */
#line 1632 "asmparse.y"
                                                              { (yyval.int32) = VT_UI2; }
#line 7396 "prebuilt\\asmparse.cpp"
    break;

  case 635: /* variantType: UNSIGNED_ INT32_  */
#line 1633 "asmparse.y"
                                                              { (yyval.int32) = VT_UI4; }
#line 7402 "prebuilt\\asmparse.cpp"
    break;

  case 636: /* variantType: UNSIGNED_ INT64_  */
#line 1634 "asmparse.y"
                                                              { (yyval.int32) = VT_UI8; }
#line 7408 "prebuilt\\asmparse.cpp"
    break;

  case 637: /* variantType: UINT8_  */
#line 1635 "asmparse.y"
                                                              { (yyval.int32) = VT_UI1; }
#line 7414 "prebuilt\\asmparse.cpp"
    break;

  case 638: /* variantType: UINT16_  */
#line 1636 "asmparse.y"
                                                              { (yyval.int32) = VT_UI2; }
#line 7420 "prebuilt\\asmparse.cpp"
    break;

  case 639: /* variantType: UINT32_  */
#line 1637 "asmparse.y"
                                                              { (yyval.int32) = VT_UI4; }
#line 7426 "prebuilt\\asmparse.cpp"
    break;

  case 640: /* variantType: UINT64_  */
#line 1638 "asmparse.y"
                                                              { (yyval.int32) = VT_UI8; }
#line 7432 "prebuilt\\asmparse.cpp"
    break;

  case 641: /* variantType: '*'  */
#line 1639 "asmparse.y"
                                                              { (yyval.int32) = VT_PTR; }
#line 7438 "prebuilt\\asmparse.cpp"
    break;

  case 642: /* variantType: variantType '[' ']'  */
#line 1640 "asmparse.y"
                                                              { (yyval.int32) = (yyvsp[-2].int32) | VT_ARRAY; }
#line 7444 "prebuilt\\asmparse.cpp"
    break;

  case 643: /* variantType: variantType VECTOR_  */
#line 1641 "asmparse.y"
                                                              { (yyval.int32) = (yyvsp[-1].int32) | VT_VECTOR; }
#line 7450 "prebuilt\\asmparse.cpp"
    break;

  case 644: /* variantType: variantType '&'  */
#line 1642 "asmparse.y"
                                                              { (yyval.int32) = (yyvsp[-1].int32) | VT_BYREF; }
#line 7456 "prebuilt\\asmparse.cpp"
    break;

  case 645: /* variantType: DECIMAL_  */
#line 1643 "asmparse.y"
                                                              { (yyval.int32) = VT_DECIMAL; }
#line 7462 "prebuilt\\asmparse.cpp"
    break;

  case 646: /* variantType: DATE_  */
#line 1644 "asmparse.y"
                                                              { (yyval.int32) = VT_DATE; }
#line 7468 "prebuilt\\asmparse.cpp"
    break;

  case 647: /* variantType: BSTR_  */
#line 1645 "asmparse.y"
                                                              { (yyval.int32) = VT_BSTR; }
#line 7474 "prebuilt\\asmparse.cpp"
    break;

  case 648: /* variantType: LPSTR_  */
#line 1646 "asmparse.y"
                                                              { (yyval.int32) = VT_LPSTR; }
#line 7480 "prebuilt\\asmparse.cpp"
    break;

  case 649: /* variantType: LPWSTR_  */
#line 1647 "asmparse.y"
                                                              { (yyval.int32) = VT_LPWSTR; }
#line 7486 "prebuilt\\asmparse.cpp"
    break;

  case 650: /* variantType: IUNKNOWN_  */
#line 1648 "asmparse.y"
                                                              { (yyval.int32) = VT_UNKNOWN; }
#line 7492 "prebuilt\\asmparse.cpp"
    break;

  case 651: /* variantType: IDISPATCH_  */
#line 1649 "asmparse.y"
                                                              { (yyval.int32) = VT_DISPATCH; }
#line 7498 "prebuilt\\asmparse.cpp"
    break;

  case 652: /* variantType: SAFEARRAY_  */
#line 1650 "asmparse.y"
                                                              { (yyval.int32) = VT_SAFEARRAY; }
#line 7504 "prebuilt\\asmparse.cpp"
    break;

  case 653: /* variantType: INT_  */
#line 1651 "asmparse.y"
                                                              { (yyval.int32) = VT_INT; }
#line 7510 "prebuilt\\asmparse.cpp"
    break;

  case 654: /* variantType: UNSIGNED_ INT_  */
#line 1652 "asmparse.y"
                                                              { (yyval.int32) = VT_UINT; }
#line 7516 "prebuilt\\asmparse.cpp"
    break;

  case 655: /* variantType: UINT_  */
#line 1653 "asmparse.y"
                                                              { (yyval.int32) = VT_UINT; }
#line 7522 "prebuilt\\asmparse.cpp"
    break;

  case 656: /* variantType: ERROR_  */
#line 1654 "asmparse.y"
                                                              { (yyval.int32) = VT_ERROR; }
#line 7528 "prebuilt\\asmparse.cpp"
    break;

  case 657: /* variantType: HRESULT_  */
#line 1655 "asmparse.y"
                                                              { (yyval.int32) = VT_HRESULT; }
#line 7534 "prebuilt\\asmparse.cpp"
    break;

  case 658: /* variantType: CARRAY_  */
#line 1656 "asmparse.y"
                                                              { (yyval.int32) = VT_CARRAY; }
#line 7540 "prebuilt\\asmparse.cpp"
    break;

  case 659: /* variantType: USERDEFINED_  */
#line 1657 "asmparse.y"
                                                              { (yyval.int32) = VT_USERDEFINED; }
#line 7546 "prebuilt\\asmparse.cpp"
    break;

  case 660: /* variantType: RECORD_  */
#line 1658 "asmparse.y"
                                                              { (yyval.int32) = VT_RECORD; }
#line 7552 "prebuilt\\asmparse.cpp"
    break;

  case 661: /* variantType: FILETIME_  */
#line 1659 "asmparse.y"
                                                              { (yyval.int32) = VT_FILETIME; }
#line 7558 "prebuilt\\asmparse.cpp"
    break;

  case 662: /* variantType: BLOB_  */
#line 1660 "asmparse.y"
                                                              { (yyval.int32) = VT_BLOB; }
#line 7564 "prebuilt\\asmparse.cpp"
    break;

  case 663: /* variantType: STREAM_  */
#line 1661 "asmparse.y"
                                                              { (yyval.int32) = VT_STREAM; }
#line 7570 "prebuilt\\asmparse.cpp"
    break;

  case 664: /* variantType: STORAGE_  */
#line 1662 "asmparse.y"
                                                              { (yyval.int32) = VT_STORAGE; }
#line 7576 "prebuilt\\asmparse.cpp"
    break;

  case 665: /* variantType: STREAMED_OBJECT_  */
#line 1663 "asmparse.y"
                                                              { (yyval.int32) = VT_STREAMED_OBJECT; }
#line 7582 "prebuilt\\asmparse.cpp"
    break;

  case 666: /* variantType: STORED_OBJECT_  */
#line 1664 "asmparse.y"
                                                              { (yyval.int32) = VT_STORED_OBJECT; }
#line 7588 "prebuilt\\asmparse.cpp"
    break;

  case 667: /* variantType: BLOB_OBJECT_  */
#line 1665 "asmparse.y"
                                                              { (yyval.int32) = VT_BLOB_OBJECT; }
#line 7594 "prebuilt\\asmparse.cpp"
    break;

  case 668: /* variantType: CF_  */
#line 1666 "asmparse.y"
                                                              { (yyval.int32) = VT_CF; }
#line 7600 "prebuilt\\asmparse.cpp"
    break;

  case 669: /* variantType: CLSID_  */
#line 1667 "asmparse.y"
                                                              { (yyval.int32) = VT_CLSID; }
#line 7606 "prebuilt\\asmparse.cpp"
    break;

  case 670: /* type: CLASS_ className  */
#line 1671 "asmparse.y"
                                                              { if((yyvsp[0].token) == PASM->m_tkSysString)
                                                                {     (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_STRING); }
                                                                else if((yyvsp[0].token) == PASM->m_tkSysObject)
                                                                {     (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_OBJECT); }
                                                                else
                                                                 (yyval.binstr) = parser->MakeTypeClass(ELEMENT_TYPE_CLASS, (yyvsp[0].token)); }
#line 7617 "prebuilt\\asmparse.cpp"
    break;

  case 671: /* type: OBJECT_  */
#line 1677 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_OBJECT); }
#line 7623 "prebuilt\\asmparse.cpp"
    break;

  case 672: /* type: VALUE_ CLASS_ className  */
#line 1678 "asmparse.y"
                                                              { (yyval.binstr) = parser->MakeTypeClass(ELEMENT_TYPE_VALUETYPE, (yyvsp[0].token)); }
#line 7629 "prebuilt\\asmparse.cpp"
    break;

  case 673: /* type: VALUETYPE_ className  */
#line 1679 "asmparse.y"
                                                              { (yyval.binstr) = parser->MakeTypeClass(ELEMENT_TYPE_VALUETYPE, (yyvsp[0].token)); }
#line 7635 "prebuilt\\asmparse.cpp"
    break;

  case 674: /* type: type '[' ']'  */
#line 1680 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[-2].binstr); (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 7641 "prebuilt\\asmparse.cpp"
    break;

  case 675: /* type: type '[' bounds1 ']'  */
#line 1681 "asmparse.y"
                                                              { (yyval.binstr) = parser->MakeTypeArray(ELEMENT_TYPE_ARRAY, (yyvsp[-3].binstr), (yyvsp[-1].binstr)); }
#line 7647 "prebuilt\\asmparse.cpp"
    break;

  case 676: /* type: type '&'  */
#line 1682 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt8(ELEMENT_TYPE_BYREF); }
#line 7653 "prebuilt\\asmparse.cpp"
    break;

  case 677: /* type: type '*'  */
#line 1683 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt8(ELEMENT_TYPE_PTR); }
#line 7659 "prebuilt\\asmparse.cpp"
    break;

  case 678: /* type: type PINNED_  */
#line 1684 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt8(ELEMENT_TYPE_PINNED); }
#line 7665 "prebuilt\\asmparse.cpp"
    break;

  case 679: /* type: type MODREQ_ '(' typeSpec ')'  */
#line 1685 "asmparse.y"
                                                              { (yyval.binstr) = parser->MakeTypeClass(ELEMENT_TYPE_CMOD_REQD, (yyvsp[-1].token));
                                                                (yyval.binstr)->append((yyvsp[-4].binstr)); }
#line 7672 "prebuilt\\asmparse.cpp"
    break;

  case 680: /* type: type MODOPT_ '(' typeSpec ')'  */
#line 1687 "asmparse.y"
                                                              { (yyval.binstr) = parser->MakeTypeClass(ELEMENT_TYPE_CMOD_OPT, (yyvsp[-1].token));
                                                                (yyval.binstr)->append((yyvsp[-4].binstr)); }
#line 7679 "prebuilt\\asmparse.cpp"
    break;

  case 681: /* type: methodSpec callConv type '*' '(' sigArgs0 ')'  */
#line 1690 "asmparse.y"
                                                              { (yyval.binstr) = parser->MakeSig((yyvsp[-5].int32), (yyvsp[-4].binstr), (yyvsp[-1].binstr));
                                                                (yyval.binstr)->insertInt8(ELEMENT_TYPE_FNPTR);
                                                                PASM->delArgNameList(PASM->m_firstArgName);
                                                                PASM->m_firstArgName = parser->m_ANSFirst.POP();
                                                                PASM->m_lastArgName = parser->m_ANSLast.POP();
                                                              }
#line 7690 "prebuilt\\asmparse.cpp"
    break;

  case 682: /* type: type '<' tyArgs1 '>'  */
#line 1696 "asmparse.y"
                                                              { if((yyvsp[-1].binstr) == NULL) (yyval.binstr) = (yyvsp[-3].binstr);
                                                                else {
                                                                  (yyval.binstr) = new BinStr();
                                                                  (yyval.binstr)->appendInt8(ELEMENT_TYPE_GENERICINST);
                                                                  (yyval.binstr)->append((yyvsp[-3].binstr));
                                                                  corEmitInt((yyval.binstr), corCountArgs((yyvsp[-1].binstr)));
                                                                  (yyval.binstr)->append((yyvsp[-1].binstr)); delete (yyvsp[-3].binstr); delete (yyvsp[-1].binstr); }}
#line 7702 "prebuilt\\asmparse.cpp"
    break;

  case 683: /* type: '!' '!' int32  */
#line 1703 "asmparse.y"
                                                              { //if(PASM->m_pCurMethod)  {
                                                                //  if(($3 < 0)||((DWORD)$3 >= PASM->m_pCurMethod->m_NumTyPars))
                                                                //    PASM->report->error("Invalid method type parameter '%d'\n",$3);
                                                                  (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_MVAR); corEmitInt((yyval.binstr), (yyvsp[0].int32));
                                                                //} else PASM->report->error("Method type parameter '%d' outside method scope\n",$3);
                                                              }
#line 7713 "prebuilt\\asmparse.cpp"
    break;

  case 684: /* type: '!' int32  */
#line 1709 "asmparse.y"
                                                              { //if(PASM->m_pCurClass)  {
                                                                //  if(($2 < 0)||((DWORD)$2 >= PASM->m_pCurClass->m_NumTyPars))
                                                                //    PASM->report->error("Invalid type parameter '%d'\n",$2);
                                                                  (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_VAR); corEmitInt((yyval.binstr), (yyvsp[0].int32));
                                                                //} else PASM->report->error("Type parameter '%d' outside class scope\n",$2);
                                                              }
#line 7724 "prebuilt\\asmparse.cpp"
    break;

  case 685: /* type: '!' '!' dottedName  */
#line 1715 "asmparse.y"
                                                              { int eltype = ELEMENT_TYPE_MVAR;
                                                                int n=-1;
                                                                if(PASM->m_pCurMethod) n = PASM->m_pCurMethod->FindTyPar((yyvsp[0].string));
                                                                else {
                                                                  if(PASM->m_TyParList) n = PASM->m_TyParList->IndexOf((yyvsp[0].string));
                                                                  if(n == -1)
                                                                  { n = TyParFixupList.COUNT();
                                                                    TyParFixupList.PUSH((yyvsp[0].string));
                                                                    eltype = ELEMENT_TYPE_MVARFIXUP;
                                                                  }
                                                                }
                                                                if(n == -1) { PASM->report->error("Invalid method type parameter '%s'\n",(yyvsp[0].string));
                                                                n = 0x1FFFFFFF; }
                                                                (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(eltype); corEmitInt((yyval.binstr),n);
                                                              }
#line 7744 "prebuilt\\asmparse.cpp"
    break;

  case 686: /* type: '!' dottedName  */
#line 1730 "asmparse.y"
                                                              { int eltype = ELEMENT_TYPE_VAR;
                                                                int n=-1;
                                                                if(PASM->m_pCurClass && !newclass) n = PASM->m_pCurClass->FindTyPar((yyvsp[0].string));
                                                                else {
                                                                  if(PASM->m_TyParList) n = PASM->m_TyParList->IndexOf((yyvsp[0].string));
                                                                  if(n == -1)
                                                                  { n = TyParFixupList.COUNT();
                                                                    TyParFixupList.PUSH((yyvsp[0].string));
                                                                    eltype = ELEMENT_TYPE_VARFIXUP;
                                                                  }
                                                                }
                                                                if(n == -1) { PASM->report->error("Invalid type parameter '%s'\n",(yyvsp[0].string));
                                                                n = 0x1FFFFFFF; }
                                                                (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(eltype); corEmitInt((yyval.binstr),n);
                                                              }
#line 7764 "prebuilt\\asmparse.cpp"
    break;

  case 687: /* type: TYPEDREF_  */
#line 1745 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_TYPEDBYREF); }
#line 7770 "prebuilt\\asmparse.cpp"
    break;

  case 688: /* type: VOID_  */
#line 1746 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_VOID); }
#line 7776 "prebuilt\\asmparse.cpp"
    break;

  case 689: /* type: NATIVE_ INT_  */
#line 1747 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_I); }
#line 7782 "prebuilt\\asmparse.cpp"
    break;

  case 690: /* type: NATIVE_ UNSIGNED_ INT_  */
#line 1748 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U); }
#line 7788 "prebuilt\\asmparse.cpp"
    break;

  case 691: /* type: NATIVE_ UINT_  */
#line 1749 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U); }
#line 7794 "prebuilt\\asmparse.cpp"
    break;

  case 692: /* type: simpleType  */
#line 1750 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[0].binstr); }
#line 7800 "prebuilt\\asmparse.cpp"
    break;

  case 693: /* type: ELLIPSIS type  */
#line 1751 "asmparse.y"
                                                               { (yyval.binstr) = (yyvsp[0].binstr); (yyval.binstr)->insertInt8(ELEMENT_TYPE_SENTINEL); }
#line 7806 "prebuilt\\asmparse.cpp"
    break;

  case 694: /* simpleType: CHAR_  */
#line 1754 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_CHAR); }
#line 7812 "prebuilt\\asmparse.cpp"
    break;

  case 695: /* simpleType: STRING_  */
#line 1755 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_STRING); }
#line 7818 "prebuilt\\asmparse.cpp"
    break;

  case 696: /* simpleType: BOOL_  */
#line 1756 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_BOOLEAN); }
#line 7824 "prebuilt\\asmparse.cpp"
    break;

  case 697: /* simpleType: INT8_  */
#line 1757 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_I1); }
#line 7830 "prebuilt\\asmparse.cpp"
    break;

  case 698: /* simpleType: INT16_  */
#line 1758 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_I2); }
#line 7836 "prebuilt\\asmparse.cpp"
    break;

  case 699: /* simpleType: INT32_  */
#line 1759 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_I4); }
#line 7842 "prebuilt\\asmparse.cpp"
    break;

  case 700: /* simpleType: INT64_  */
#line 1760 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_I8); }
#line 7848 "prebuilt\\asmparse.cpp"
    break;

  case 701: /* simpleType: FLOAT32_  */
#line 1761 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_R4); }
#line 7854 "prebuilt\\asmparse.cpp"
    break;

  case 702: /* simpleType: FLOAT64_  */
#line 1762 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_R8); }
#line 7860 "prebuilt\\asmparse.cpp"
    break;

  case 703: /* simpleType: UNSIGNED_ INT8_  */
#line 1763 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U1); }
#line 7866 "prebuilt\\asmparse.cpp"
    break;

  case 704: /* simpleType: UNSIGNED_ INT16_  */
#line 1764 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U2); }
#line 7872 "prebuilt\\asmparse.cpp"
    break;

  case 705: /* simpleType: UNSIGNED_ INT32_  */
#line 1765 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U4); }
#line 7878 "prebuilt\\asmparse.cpp"
    break;

  case 706: /* simpleType: UNSIGNED_ INT64_  */
#line 1766 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U8); }
#line 7884 "prebuilt\\asmparse.cpp"
    break;

  case 707: /* simpleType: UINT8_  */
#line 1767 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U1); }
#line 7890 "prebuilt\\asmparse.cpp"
    break;

  case 708: /* simpleType: UINT16_  */
#line 1768 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U2); }
#line 7896 "prebuilt\\asmparse.cpp"
    break;

  case 709: /* simpleType: UINT32_  */
#line 1769 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U4); }
#line 7902 "prebuilt\\asmparse.cpp"
    break;

  case 710: /* simpleType: UINT64_  */
#line 1770 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U8); }
#line 7908 "prebuilt\\asmparse.cpp"
    break;

  case 711: /* simpleType: TYPEDEF_TS  */
#line 1771 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->append((yyvsp[0].tdd)->m_pbsTypeSpec); }
#line 7914 "prebuilt\\asmparse.cpp"
    break;

  case 712: /* bounds1: bound  */
#line 1774 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[0].binstr); }
#line 7920 "prebuilt\\asmparse.cpp"
    break;

  case 713: /* bounds1: bounds1 ',' bound  */
#line 1775 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[-2].binstr); (yyvsp[-2].binstr)->append((yyvsp[0].binstr)); delete (yyvsp[0].binstr); }
#line 7926 "prebuilt\\asmparse.cpp"
    break;

  case 714: /* bound: %empty  */
#line 1778 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt32(0x7FFFFFFF); (yyval.binstr)->appendInt32(0x7FFFFFFF);  }
#line 7932 "prebuilt\\asmparse.cpp"
    break;

  case 715: /* bound: ELLIPSIS  */
#line 1779 "asmparse.y"
                                                               { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt32(0x7FFFFFFF); (yyval.binstr)->appendInt32(0x7FFFFFFF);  }
#line 7938 "prebuilt\\asmparse.cpp"
    break;

  case 716: /* bound: int32  */
#line 1780 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt32(0); (yyval.binstr)->appendInt32((yyvsp[0].int32)); }
#line 7944 "prebuilt\\asmparse.cpp"
    break;

  case 717: /* bound: int32 ELLIPSIS int32  */
#line 1781 "asmparse.y"
                                                               { FAIL_UNLESS((yyvsp[-2].int32) <= (yyvsp[0].int32), ("lower bound %d must be <= upper bound %d\n", (yyvsp[-2].int32), (yyvsp[0].int32)));
                                                                if ((yyvsp[-2].int32) > (yyvsp[0].int32)) { YYERROR; };
                                                                (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt32((yyvsp[-2].int32)); (yyval.binstr)->appendInt32((yyvsp[0].int32)-(yyvsp[-2].int32)+1); }
#line 7952 "prebuilt\\asmparse.cpp"
    break;

  case 718: /* bound: int32 ELLIPSIS  */
#line 1784 "asmparse.y"
                                                               { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt32((yyvsp[-1].int32)); (yyval.binstr)->appendInt32(0x7FFFFFFF); }
#line 7958 "prebuilt\\asmparse.cpp"
    break;

  case 719: /* secDecl: _PERMISSION secAction typeSpec '(' nameValPairs ')'  */
#line 1789 "asmparse.y"
                                                              { PASM->AddPermissionDecl((yyvsp[-4].secAct), (yyvsp[-3].token), (yyvsp[-1].pair)); }
#line 7964 "prebuilt\\asmparse.cpp"
    break;

  case 720: /* secDecl: _PERMISSION secAction typeSpec '=' '{' customBlobDescr '}'  */
#line 1791 "asmparse.y"
                                                              { PASM->AddPermissionDecl((yyvsp[-5].secAct), (yyvsp[-4].token), (yyvsp[-1].binstr)); }
#line 7970 "prebuilt\\asmparse.cpp"
    break;

  case 721: /* secDecl: _PERMISSION secAction typeSpec  */
#line 1792 "asmparse.y"
                                                              { PASM->AddPermissionDecl((yyvsp[-1].secAct), (yyvsp[0].token), (NVPair *)NULL); }
#line 7976 "prebuilt\\asmparse.cpp"
    break;

  case 722: /* secDecl: psetHead bytes ')'  */
#line 1793 "asmparse.y"
                                                              { PASM->AddPermissionSetDecl((yyvsp[-2].secAct), (yyvsp[-1].binstr)); }
#line 7982 "prebuilt\\asmparse.cpp"
    break;

  case 723: /* secDecl: _PERMISSIONSET secAction compQstring  */
#line 1795 "asmparse.y"
                                                              { PASM->AddPermissionSetDecl((yyvsp[-1].secAct),BinStrToUnicode((yyvsp[0].binstr),true));}
#line 7988 "prebuilt\\asmparse.cpp"
    break;

  case 724: /* secDecl: _PERMISSIONSET secAction '=' '{' secAttrSetBlob '}'  */
#line 1797 "asmparse.y"
                                                              { BinStr* ret = new BinStr();
                                                                ret->insertInt8('.');
                                                                corEmitInt(ret, nSecAttrBlobs);
                                                                ret->append((yyvsp[-1].binstr));
                                                                PASM->AddPermissionSetDecl((yyvsp[-4].secAct),ret);
                                                                nSecAttrBlobs = 0; }
#line 7999 "prebuilt\\asmparse.cpp"
    break;

  case 725: /* secAttrSetBlob: %empty  */
#line 1805 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); nSecAttrBlobs = 0;}
#line 8005 "prebuilt\\asmparse.cpp"
    break;

  case 726: /* secAttrSetBlob: secAttrBlob  */
#line 1806 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[0].binstr); nSecAttrBlobs = 1; }
#line 8011 "prebuilt\\asmparse.cpp"
    break;

  case 727: /* secAttrSetBlob: secAttrBlob ',' secAttrSetBlob  */
#line 1807 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[-2].binstr); (yyval.binstr)->append((yyvsp[0].binstr)); nSecAttrBlobs++; }
#line 8017 "prebuilt\\asmparse.cpp"
    break;

  case 728: /* secAttrBlob: typeSpec '=' '{' customBlobNVPairs '}'  */
#line 1811 "asmparse.y"
                                                              { (yyval.binstr) = PASM->EncodeSecAttr(PASM->ReflectionNotation((yyvsp[-4].token)),(yyvsp[-1].binstr),nCustomBlobNVPairs);
                                                                nCustomBlobNVPairs = 0; }
#line 8024 "prebuilt\\asmparse.cpp"
    break;

  case 729: /* secAttrBlob: CLASS_ SQSTRING '=' '{' customBlobNVPairs '}'  */
#line 1814 "asmparse.y"
                                                              { (yyval.binstr) = PASM->EncodeSecAttr((yyvsp[-4].string),(yyvsp[-1].binstr),nCustomBlobNVPairs);
                                                                nCustomBlobNVPairs = 0; }
#line 8031 "prebuilt\\asmparse.cpp"
    break;

  case 730: /* psetHead: _PERMISSIONSET secAction '=' '('  */
#line 1818 "asmparse.y"
                                                              { (yyval.secAct) = (yyvsp[-2].secAct); bParsingByteArray = TRUE; }
#line 8037 "prebuilt\\asmparse.cpp"
    break;

  case 731: /* psetHead: _PERMISSIONSET secAction BYTEARRAY_ '('  */
#line 1820 "asmparse.y"
                                                              { (yyval.secAct) = (yyvsp[-2].secAct); bParsingByteArray = TRUE; }
#line 8043 "prebuilt\\asmparse.cpp"
    break;

  case 732: /* nameValPairs: nameValPair  */
#line 1823 "asmparse.y"
                                                              { (yyval.pair) = (yyvsp[0].pair); }
#line 8049 "prebuilt\\asmparse.cpp"
    break;

  case 733: /* nameValPairs: nameValPair ',' nameValPairs  */
#line 1824 "asmparse.y"
                                                              { (yyval.pair) = (yyvsp[-2].pair)->Concat((yyvsp[0].pair)); }
#line 8055 "prebuilt\\asmparse.cpp"
    break;

  case 734: /* nameValPair: compQstring '=' caValue  */
#line 1827 "asmparse.y"
                                                              { (yyvsp[-2].binstr)->appendInt8(0); (yyval.pair) = new NVPair((yyvsp[-2].binstr), (yyvsp[0].binstr)); }
#line 8061 "prebuilt\\asmparse.cpp"
    break;

  case 735: /* truefalse: TRUE_  */
#line 1830 "asmparse.y"
                                                              { (yyval.int32) = 1; }
#line 8067 "prebuilt\\asmparse.cpp"
    break;

  case 736: /* truefalse: FALSE_  */
#line 1831 "asmparse.y"
                                                              { (yyval.int32) = 0; }
#line 8073 "prebuilt\\asmparse.cpp"
    break;

  case 737: /* caValue: truefalse  */
#line 1834 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr();
                                                                (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_BOOLEAN);
                                                                (yyval.binstr)->appendInt8((yyvsp[0].int32)); }
#line 8081 "prebuilt\\asmparse.cpp"
    break;

  case 738: /* caValue: int32  */
#line 1837 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr();
                                                                (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_I4);
                                                                (yyval.binstr)->appendInt32((yyvsp[0].int32)); }
#line 8089 "prebuilt\\asmparse.cpp"
    break;

  case 739: /* caValue: INT32_ '(' int32 ')'  */
#line 1840 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr();
                                                                (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_I4);
                                                                (yyval.binstr)->appendInt32((yyvsp[-1].int32)); }
#line 8097 "prebuilt\\asmparse.cpp"
    break;

  case 740: /* caValue: compQstring  */
#line 1843 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr();
                                                                (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_STRING);
                                                                (yyval.binstr)->append((yyvsp[0].binstr)); delete (yyvsp[0].binstr);
                                                                (yyval.binstr)->appendInt8(0); }
#line 8106 "prebuilt\\asmparse.cpp"
    break;

  case 741: /* caValue: className '(' INT8_ ':' int32 ')'  */
#line 1847 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr();
                                                                (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_ENUM);
                                                                char* sz = PASM->ReflectionNotation((yyvsp[-5].token));
                                                                strcpy_s((char *)(yyval.binstr)->getBuff((unsigned)strlen(sz) + 1), strlen(sz) + 1,sz);
                                                                (yyval.binstr)->appendInt8(1);
                                                                (yyval.binstr)->appendInt32((yyvsp[-1].int32)); }
#line 8117 "prebuilt\\asmparse.cpp"
    break;

  case 742: /* caValue: className '(' INT16_ ':' int32 ')'  */
#line 1853 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr();
                                                                (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_ENUM);
                                                                char* sz = PASM->ReflectionNotation((yyvsp[-5].token));
                                                                strcpy_s((char *)(yyval.binstr)->getBuff((unsigned)strlen(sz) + 1), strlen(sz) + 1,sz);
                                                                (yyval.binstr)->appendInt8(2);
                                                                (yyval.binstr)->appendInt32((yyvsp[-1].int32)); }
#line 8128 "prebuilt\\asmparse.cpp"
    break;

  case 743: /* caValue: className '(' INT32_ ':' int32 ')'  */
#line 1859 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr();
                                                                (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_ENUM);
                                                                char* sz = PASM->ReflectionNotation((yyvsp[-5].token));
                                                                strcpy_s((char *)(yyval.binstr)->getBuff((unsigned)strlen(sz) + 1), strlen(sz) + 1,sz);
                                                                (yyval.binstr)->appendInt8(4);
                                                                (yyval.binstr)->appendInt32((yyvsp[-1].int32)); }
#line 8139 "prebuilt\\asmparse.cpp"
    break;

  case 744: /* caValue: className '(' int32 ')'  */
#line 1865 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr();
                                                                (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_ENUM);
                                                                char* sz = PASM->ReflectionNotation((yyvsp[-3].token));
                                                                strcpy_s((char *)(yyval.binstr)->getBuff((unsigned)strlen(sz) + 1), strlen(sz) + 1,sz);
                                                                (yyval.binstr)->appendInt8(4);
                                                                (yyval.binstr)->appendInt32((yyvsp[-1].int32)); }
#line 8150 "prebuilt\\asmparse.cpp"
    break;

  case 745: /* secAction: REQUEST_  */
#line 1873 "asmparse.y"
                                                              { (yyval.secAct) = dclRequest; }
#line 8156 "prebuilt\\asmparse.cpp"
    break;

  case 746: /* secAction: DEMAND_  */
#line 1874 "asmparse.y"
                                                              { (yyval.secAct) = dclDemand; }
#line 8162 "prebuilt\\asmparse.cpp"
    break;

  case 747: /* secAction: ASSERT_  */
#line 1875 "asmparse.y"
                                                              { (yyval.secAct) = dclAssert; }
#line 8168 "prebuilt\\asmparse.cpp"
    break;

  case 748: /* secAction: DENY_  */
#line 1876 "asmparse.y"
                                                              { (yyval.secAct) = dclDeny; }
#line 8174 "prebuilt\\asmparse.cpp"
    break;

  case 749: /* secAction: PERMITONLY_  */
#line 1877 "asmparse.y"
                                                              { (yyval.secAct) = dclPermitOnly; }
#line 8180 "prebuilt\\asmparse.cpp"
    break;

  case 750: /* secAction: LINKCHECK_  */
#line 1878 "asmparse.y"
                                                              { (yyval.secAct) = dclLinktimeCheck; }
#line 8186 "prebuilt\\asmparse.cpp"
    break;

  case 751: /* secAction: INHERITCHECK_  */
#line 1879 "asmparse.y"
                                                              { (yyval.secAct) = dclInheritanceCheck; }
#line 8192 "prebuilt\\asmparse.cpp"
    break;

  case 752: /* secAction: REQMIN_  */
#line 1880 "asmparse.y"
                                                              { (yyval.secAct) = dclRequestMinimum; }
#line 8198 "prebuilt\\asmparse.cpp"
    break;

  case 753: /* secAction: REQOPT_  */
#line 1881 "asmparse.y"
                                                              { (yyval.secAct) = dclRequestOptional; }
#line 8204 "prebuilt\\asmparse.cpp"
    break;

  case 754: /* secAction: REQREFUSE_  */
#line 1882 "asmparse.y"
                                                              { (yyval.secAct) = dclRequestRefuse; }
#line 8210 "prebuilt\\asmparse.cpp"
    break;

  case 755: /* secAction: PREJITGRANT_  */
#line 1883 "asmparse.y"
                                                              { (yyval.secAct) = dclPrejitGrant; }
#line 8216 "prebuilt\\asmparse.cpp"
    break;

  case 756: /* secAction: PREJITDENY_  */
#line 1884 "asmparse.y"
                                                              { (yyval.secAct) = dclPrejitDenied; }
#line 8222 "prebuilt\\asmparse.cpp"
    break;

  case 757: /* secAction: NONCASDEMAND_  */
#line 1885 "asmparse.y"
                                                              { (yyval.secAct) = dclNonCasDemand; }
#line 8228 "prebuilt\\asmparse.cpp"
    break;

  case 758: /* secAction: NONCASLINKDEMAND_  */
#line 1886 "asmparse.y"
                                                              { (yyval.secAct) = dclNonCasLinkDemand; }
#line 8234 "prebuilt\\asmparse.cpp"
    break;

  case 759: /* secAction: NONCASINHERITANCE_  */
#line 1887 "asmparse.y"
                                                              { (yyval.secAct) = dclNonCasInheritance; }
#line 8240 "prebuilt\\asmparse.cpp"
    break;

  case 760: /* esHead: _LINE  */
#line 1891 "asmparse.y"
                                                              { PASM->ResetLineNumbers(); nCurrPC = PASM->m_CurPC; PENV->bExternSource = TRUE; PENV->bExternSourceAutoincrement = FALSE; }
#line 8246 "prebuilt\\asmparse.cpp"
    break;

  case 761: /* esHead: P_LINE  */
#line 1892 "asmparse.y"
                                                              { PASM->ResetLineNumbers(); nCurrPC = PASM->m_CurPC; PENV->bExternSource = TRUE; PENV->bExternSourceAutoincrement = TRUE; }
#line 8252 "prebuilt\\asmparse.cpp"
    break;

  case 762: /* extSourceSpec: esHead int32 SQSTRING  */
#line 1895 "asmparse.y"
                                                              { PENV->nExtLine = PENV->nExtLineEnd = (yyvsp[-1].int32);
                                                                PENV->nExtCol = 0; PENV->nExtColEnd  = static_cast<unsigned>(-1);
                                                                PASM->SetSourceFileName((yyvsp[0].string));}
#line 8260 "prebuilt\\asmparse.cpp"
    break;

  case 763: /* extSourceSpec: esHead int32  */
#line 1898 "asmparse.y"
                                                              { PENV->nExtLine = PENV->nExtLineEnd = (yyvsp[0].int32);
                                                                PENV->nExtCol = 0; PENV->nExtColEnd  = static_cast<unsigned>(-1); }
#line 8267 "prebuilt\\asmparse.cpp"
    break;

  case 764: /* extSourceSpec: esHead int32 ':' int32 SQSTRING  */
#line 1900 "asmparse.y"
                                                              { PENV->nExtLine = PENV->nExtLineEnd = (yyvsp[-3].int32);
                                                                PENV->nExtCol=(yyvsp[-1].int32); PENV->nExtColEnd = static_cast<unsigned>(-1);
                                                                PASM->SetSourceFileName((yyvsp[0].string));}
#line 8275 "prebuilt\\asmparse.cpp"
    break;

  case 765: /* extSourceSpec: esHead int32 ':' int32  */
#line 1903 "asmparse.y"
                                                              { PENV->nExtLine = PENV->nExtLineEnd = (yyvsp[-2].int32);
                                                                PENV->nExtCol=(yyvsp[0].int32); PENV->nExtColEnd = static_cast<unsigned>(-1);}
#line 8282 "prebuilt\\asmparse.cpp"
    break;

  case 766: /* extSourceSpec: esHead int32 ':' int32 ',' int32 SQSTRING  */
#line 1906 "asmparse.y"
                                                              { PENV->nExtLine = PENV->nExtLineEnd = (yyvsp[-5].int32);
                                                                PENV->nExtCol=(yyvsp[-3].int32); PENV->nExtColEnd = (yyvsp[-1].int32);
                                                                PASM->SetSourceFileName((yyvsp[0].string));}
#line 8290 "prebuilt\\asmparse.cpp"
    break;

  case 767: /* extSourceSpec: esHead int32 ':' int32 ',' int32  */
#line 1910 "asmparse.y"
                                                              { PENV->nExtLine = PENV->nExtLineEnd = (yyvsp[-4].int32);
                                                                PENV->nExtCol=(yyvsp[-2].int32); PENV->nExtColEnd = (yyvsp[0].int32); }
#line 8297 "prebuilt\\asmparse.cpp"
    break;

  case 768: /* extSourceSpec: esHead int32 ',' int32 ':' int32 SQSTRING  */
#line 1913 "asmparse.y"
                                                              { PENV->nExtLine = (yyvsp[-5].int32); PENV->nExtLineEnd = (yyvsp[-3].int32);
                                                                PENV->nExtCol=(yyvsp[-1].int32); PENV->nExtColEnd = static_cast<unsigned>(-1);
                                                                PASM->SetSourceFileName((yyvsp[0].string));}
#line 8305 "prebuilt\\asmparse.cpp"
    break;

  case 769: /* extSourceSpec: esHead int32 ',' int32 ':' int32  */
#line 1917 "asmparse.y"
                                                              { PENV->nExtLine = (yyvsp[-4].int32); PENV->nExtLineEnd = (yyvsp[-2].int32);
                                                                PENV->nExtCol=(yyvsp[0].int32); PENV->nExtColEnd = static_cast<unsigned>(-1); }
#line 8312 "prebuilt\\asmparse.cpp"
    break;

  case 770: /* extSourceSpec: esHead int32 ',' int32 ':' int32 ',' int32 SQSTRING  */
#line 1920 "asmparse.y"
                                                              { PENV->nExtLine = (yyvsp[-7].int32); PENV->nExtLineEnd = (yyvsp[-5].int32);
                                                                PENV->nExtCol=(yyvsp[-3].int32); PENV->nExtColEnd = (yyvsp[-1].int32);
                                                                PASM->SetSourceFileName((yyvsp[0].string));}
#line 8320 "prebuilt\\asmparse.cpp"
    break;

  case 771: /* extSourceSpec: esHead int32 ',' int32 ':' int32 ',' int32  */
#line 1924 "asmparse.y"
                                                              { PENV->nExtLine = (yyvsp[-6].int32); PENV->nExtLineEnd = (yyvsp[-4].int32);
                                                                PENV->nExtCol=(yyvsp[-2].int32); PENV->nExtColEnd = (yyvsp[0].int32); }
#line 8327 "prebuilt\\asmparse.cpp"
    break;

  case 772: /* extSourceSpec: esHead int32 QSTRING  */
#line 1926 "asmparse.y"
                                                              { PENV->nExtLine = PENV->nExtLineEnd = (yyvsp[-1].int32) - 1;
                                                                PENV->nExtCol = 0; PENV->nExtColEnd = static_cast<unsigned>(-1);
                                                                PASM->SetSourceFileName((yyvsp[0].binstr));}
#line 8335 "prebuilt\\asmparse.cpp"
    break;

  case 773: /* fileDecl: _FILE fileAttr dottedName fileEntry hashHead bytes ')' fileEntry  */
#line 1933 "asmparse.y"
                                                              { PASMM->AddFile((yyvsp[-5].string), (yyvsp[-6].fileAttr)|(yyvsp[-4].fileAttr)|(yyvsp[0].fileAttr), (yyvsp[-2].binstr)); }
#line 8341 "prebuilt\\asmparse.cpp"
    break;

  case 774: /* fileDecl: _FILE fileAttr dottedName fileEntry  */
#line 1934 "asmparse.y"
                                                              { PASMM->AddFile((yyvsp[-1].string), (yyvsp[-2].fileAttr)|(yyvsp[0].fileAttr), NULL); }
#line 8347 "prebuilt\\asmparse.cpp"
    break;

  case 775: /* fileAttr: %empty  */
#line 1937 "asmparse.y"
                                                              { (yyval.fileAttr) = (CorFileFlags) 0; }
#line 8353 "prebuilt\\asmparse.cpp"
    break;

  case 776: /* fileAttr: fileAttr NOMETADATA_  */
#line 1938 "asmparse.y"
                                                              { (yyval.fileAttr) = (CorFileFlags) ((yyvsp[-1].fileAttr) | ffContainsNoMetaData); }
#line 8359 "prebuilt\\asmparse.cpp"
    break;

  case 777: /* fileEntry: %empty  */
#line 1941 "asmparse.y"
                                                              { (yyval.fileAttr) = (CorFileFlags) 0; }
#line 8365 "prebuilt\\asmparse.cpp"
    break;

  case 778: /* fileEntry: _ENTRYPOINT  */
#line 1942 "asmparse.y"
                                                              { (yyval.fileAttr) = (CorFileFlags) 0x80000000; }
#line 8371 "prebuilt\\asmparse.cpp"
    break;

  case 779: /* hashHead: _HASH '=' '('  */
#line 1945 "asmparse.y"
                                                              { bParsingByteArray = TRUE; }
#line 8377 "prebuilt\\asmparse.cpp"
    break;

  case 780: /* assemblyHead: _ASSEMBLY asmAttr dottedName  */
#line 1948 "asmparse.y"
                                                              { PASMM->StartAssembly((yyvsp[0].string), NULL, (DWORD)(yyvsp[-1].asmAttr), FALSE); }
#line 8383 "prebuilt\\asmparse.cpp"
    break;

  case 781: /* asmAttr: %empty  */
#line 1951 "asmparse.y"
                                                              { (yyval.asmAttr) = (CorAssemblyFlags) 0; }
#line 8389 "prebuilt\\asmparse.cpp"
    break;

  case 782: /* asmAttr: asmAttr RETARGETABLE_  */
#line 1952 "asmparse.y"
                                                              { (yyval.asmAttr) = (CorAssemblyFlags) ((yyvsp[-1].asmAttr) | afRetargetable); }
#line 8395 "prebuilt\\asmparse.cpp"
    break;

  case 783: /* asmAttr: asmAttr WINDOWSRUNTIME_  */
#line 1953 "asmparse.y"
                                                              { (yyval.asmAttr) = (CorAssemblyFlags) ((yyvsp[-1].asmAttr) | afContentType_WindowsRuntime); }
#line 8401 "prebuilt\\asmparse.cpp"
    break;

  case 784: /* asmAttr: asmAttr NOPLATFORM_  */
#line 1954 "asmparse.y"
                                                              { (yyval.asmAttr) = (CorAssemblyFlags) ((yyvsp[-1].asmAttr) | afPA_NoPlatform); }
#line 8407 "prebuilt\\asmparse.cpp"
    break;

  case 785: /* asmAttr: asmAttr LEGACY_ LIBRARY_  */
#line 1955 "asmparse.y"
                                                              { (yyval.asmAttr) = (yyvsp[-2].asmAttr); }
#line 8413 "prebuilt\\asmparse.cpp"
    break;

  case 786: /* asmAttr: asmAttr CIL_  */
#line 1956 "asmparse.y"
                                                              { SET_PA((yyval.asmAttr),(yyvsp[-1].asmAttr),afPA_MSIL); }
#line 8419 "prebuilt\\asmparse.cpp"
    break;

  case 787: /* asmAttr: asmAttr X86_  */
#line 1957 "asmparse.y"
                                                              { SET_PA((yyval.asmAttr),(yyvsp[-1].asmAttr),afPA_x86); }
#line 8425 "prebuilt\\asmparse.cpp"
    break;

  case 788: /* asmAttr: asmAttr AMD64_  */
#line 1958 "asmparse.y"
                                                              { SET_PA((yyval.asmAttr),(yyvsp[-1].asmAttr),afPA_AMD64); }
#line 8431 "prebuilt\\asmparse.cpp"
    break;

  case 789: /* asmAttr: asmAttr ARM_  */
#line 1959 "asmparse.y"
                                                              { SET_PA((yyval.asmAttr),(yyvsp[-1].asmAttr),afPA_ARM); }
#line 8437 "prebuilt\\asmparse.cpp"
    break;

  case 790: /* asmAttr: asmAttr ARM64_  */
#line 1960 "asmparse.y"
                                                              { SET_PA((yyval.asmAttr),(yyvsp[-1].asmAttr),afPA_ARM64); }
#line 8443 "prebuilt\\asmparse.cpp"
    break;

  case 793: /* assemblyDecl: _HASH ALGORITHM_ int32  */
#line 1967 "asmparse.y"
                                                              { PASMM->SetAssemblyHashAlg((yyvsp[0].int32)); }
#line 8449 "prebuilt\\asmparse.cpp"
    break;

  case 796: /* assemblyDecl: _TYPEREF dottedName AT_ dottedName  */
#line 1970 "asmparse.y"
                                                                      { PASMM->AddAssemblyTypeRefLink((yyvsp[-2].string), (yyvsp[0].string), /*ANY_*/FALSE, /*DENY_*/FALSE); }
#line 8455 "prebuilt\\asmparse.cpp"
    break;

  case 797: /* assemblyDecl: _TYPEREF dottedName ANY_ AT_ dottedName  */
#line 1971 "asmparse.y"
                                                                      { PASMM->AddAssemblyTypeRefLink((yyvsp[-3].string), (yyvsp[0].string), /*ANY_*/TRUE, /*DENY_*/FALSE); }
#line 8461 "prebuilt\\asmparse.cpp"
    break;

  case 798: /* assemblyDecl: _TYPEREF dottedName CONSTRAINT_ DENY_  */
#line 1972 "asmparse.y"
                                                                      { PASMM->AddAssemblyTypeRefLink((yyvsp[-2].string), NULL, /*ANY_*/FALSE, /*DENY_*/TRUE); }
#line 8467 "prebuilt\\asmparse.cpp"
    break;

  case 799: /* assemblyDecl: _TYPEREF dottedName CONSTRAINT_ ANY_ DENY_  */
#line 1973 "asmparse.y"
                                                                      { PASMM->AddAssemblyTypeRefLink((yyvsp[-3].string), NULL, /*ANY_*/TRUE, /*DENY_*/TRUE); }
#line 8473 "prebuilt\\asmparse.cpp"
    break;

  case 800: /* intOrWildcard: int32  */
#line 1976 "asmparse.y"
                                                              { (yyval.int32) = (yyvsp[0].int32); }
#line 8479 "prebuilt\\asmparse.cpp"
    break;

  case 801: /* intOrWildcard: '*'  */
#line 1977 "asmparse.y"
                                                              { (yyval.int32) = 0xFFFF; }
#line 8485 "prebuilt\\asmparse.cpp"
    break;

  case 802: /* asmOrRefDecl: publicKeyHead bytes ')'  */
#line 1980 "asmparse.y"
                                                              { PASMM->SetAssemblyPublicKey((yyvsp[-1].binstr)); }
#line 8491 "prebuilt\\asmparse.cpp"
    break;

  case 803: /* asmOrRefDecl: _VER intOrWildcard ':' intOrWildcard ':' intOrWildcard ':' intOrWildcard  */
#line 1982 "asmparse.y"
                                                              { PASMM->SetAssemblyVer((USHORT)(yyvsp[-6].int32), (USHORT)(yyvsp[-4].int32), (USHORT)(yyvsp[-2].int32), (USHORT)(yyvsp[0].int32)); }
#line 8497 "prebuilt\\asmparse.cpp"
    break;

  case 804: /* asmOrRefDecl: _LOCALE compQstring  */
#line 1983 "asmparse.y"
                                                              { (yyvsp[0].binstr)->appendInt8(0); PASMM->SetAssemblyLocale((yyvsp[0].binstr),TRUE); }
#line 8503 "prebuilt\\asmparse.cpp"
    break;

  case 805: /* asmOrRefDecl: localeHead bytes ')'  */
#line 1984 "asmparse.y"
                                                              { PASMM->SetAssemblyLocale((yyvsp[-1].binstr),FALSE); }
#line 8509 "prebuilt\\asmparse.cpp"
    break;

  case 808: /* publicKeyHead: _PUBLICKEY '=' '('  */
#line 1989 "asmparse.y"
                                                              { bParsingByteArray = TRUE; }
#line 8515 "prebuilt\\asmparse.cpp"
    break;

  case 809: /* publicKeyTokenHead: _PUBLICKEYTOKEN '=' '('  */
#line 1992 "asmparse.y"
                                                              { bParsingByteArray = TRUE; }
#line 8521 "prebuilt\\asmparse.cpp"
    break;

  case 810: /* localeHead: _LOCALE '=' '('  */
#line 1995 "asmparse.y"
                                                              { bParsingByteArray = TRUE; }
#line 8527 "prebuilt\\asmparse.cpp"
    break;

  case 811: /* assemblyRefHead: _ASSEMBLY EXTERN_ asmAttr dottedName  */
#line 1999 "asmparse.y"
                                                              { PASMM->StartAssembly((yyvsp[0].string), NULL, (yyvsp[-1].asmAttr), TRUE); }
#line 8533 "prebuilt\\asmparse.cpp"
    break;

  case 812: /* assemblyRefHead: _ASSEMBLY EXTERN_ asmAttr dottedName AS_ dottedName  */
#line 2001 "asmparse.y"
                                                              { PASMM->StartAssembly((yyvsp[-2].string), (yyvsp[0].string), (yyvsp[-3].asmAttr), TRUE); }
#line 8539 "prebuilt\\asmparse.cpp"
    break;

  case 815: /* assemblyRefDecl: hashHead bytes ')'  */
#line 2008 "asmparse.y"
                                                              { PASMM->SetAssemblyHashBlob((yyvsp[-1].binstr)); }
#line 8545 "prebuilt\\asmparse.cpp"
    break;

  case 817: /* assemblyRefDecl: publicKeyTokenHead bytes ')'  */
#line 2010 "asmparse.y"
                                                              { PASMM->SetAssemblyPublicKeyToken((yyvsp[-1].binstr)); }
#line 8551 "prebuilt\\asmparse.cpp"
    break;

  case 818: /* assemblyRefDecl: AUTO_  */
#line 2011 "asmparse.y"
                                                              { PASMM->SetAssemblyAutodetect(); }
#line 8557 "prebuilt\\asmparse.cpp"
    break;

  case 819: /* exptypeHead: _CLASS EXTERN_ exptAttr dottedName  */
#line 2014 "asmparse.y"
                                                              { PASMM->StartComType((yyvsp[0].string), (yyvsp[-1].exptAttr));}
#line 8563 "prebuilt\\asmparse.cpp"
    break;

  case 820: /* exportHead: _EXPORT exptAttr dottedName  */
#line 2017 "asmparse.y"
                                                                              { PASMM->StartComType((yyvsp[0].string), (yyvsp[-1].exptAttr)); }
#line 8569 "prebuilt\\asmparse.cpp"
    break;

  case 821: /* exptAttr: %empty  */
#line 2020 "asmparse.y"
                                                              { (yyval.exptAttr) = (CorTypeAttr) 0; }
#line 8575 "prebuilt\\asmparse.cpp"
    break;

  case 822: /* exptAttr: exptAttr PRIVATE_  */
#line 2021 "asmparse.y"
                                                              { (yyval.exptAttr) = (CorTypeAttr) ((yyvsp[-1].exptAttr) | tdNotPublic); }
#line 8581 "prebuilt\\asmparse.cpp"
    break;

  case 823: /* exptAttr: exptAttr PUBLIC_  */
#line 2022 "asmparse.y"
                                                              { (yyval.exptAttr) = (CorTypeAttr) ((yyvsp[-1].exptAttr) | tdPublic); }
#line 8587 "prebuilt\\asmparse.cpp"
    break;

  case 824: /* exptAttr: exptAttr FORWARDER_  */
#line 2023 "asmparse.y"
                                                              { (yyval.exptAttr) = (CorTypeAttr) ((yyvsp[-1].exptAttr) | tdForwarder); }
#line 8593 "prebuilt\\asmparse.cpp"
    break;

  case 825: /* exptAttr: exptAttr NESTED_ PUBLIC_  */
#line 2024 "asmparse.y"
                                                              { (yyval.exptAttr) = (CorTypeAttr) ((yyvsp[-2].exptAttr) | tdNestedPublic); }
#line 8599 "prebuilt\\asmparse.cpp"
    break;

  case 826: /* exptAttr: exptAttr NESTED_ PRIVATE_  */
#line 2025 "asmparse.y"
                                                              { (yyval.exptAttr) = (CorTypeAttr) ((yyvsp[-2].exptAttr) | tdNestedPrivate); }
#line 8605 "prebuilt\\asmparse.cpp"
    break;

  case 827: /* exptAttr: exptAttr NESTED_ FAMILY_  */
#line 2026 "asmparse.y"
                                                              { (yyval.exptAttr) = (CorTypeAttr) ((yyvsp[-2].exptAttr) | tdNestedFamily); }
#line 8611 "prebuilt\\asmparse.cpp"
    break;

  case 828: /* exptAttr: exptAttr NESTED_ ASSEMBLY_  */
#line 2027 "asmparse.y"
                                                              { (yyval.exptAttr) = (CorTypeAttr) ((yyvsp[-2].exptAttr) | tdNestedAssembly); }
#line 8617 "prebuilt\\asmparse.cpp"
    break;

  case 829: /* exptAttr: exptAttr NESTED_ FAMANDASSEM_  */
#line 2028 "asmparse.y"
                                                              { (yyval.exptAttr) = (CorTypeAttr) ((yyvsp[-2].exptAttr) | tdNestedFamANDAssem); }
#line 8623 "prebuilt\\asmparse.cpp"
    break;

  case 830: /* exptAttr: exptAttr NESTED_ FAMORASSEM_  */
#line 2029 "asmparse.y"
                                                              { (yyval.exptAttr) = (CorTypeAttr) ((yyvsp[-2].exptAttr) | tdNestedFamORAssem); }
#line 8629 "prebuilt\\asmparse.cpp"
    break;

  case 833: /* exptypeDecl: _FILE dottedName  */
#line 2036 "asmparse.y"
                                                              { PASMM->SetComTypeFile((yyvsp[0].string)); }
#line 8635 "prebuilt\\asmparse.cpp"
    break;

  case 834: /* exptypeDecl: _CLASS EXTERN_ slashedName  */
#line 2037 "asmparse.y"
                                                               { PASMM->SetComTypeComType((yyvsp[0].string)); }
#line 8641 "prebuilt\\asmparse.cpp"
    break;

  case 835: /* exptypeDecl: _ASSEMBLY EXTERN_ dottedName  */
#line 2038 "asmparse.y"
                                                              { PASMM->SetComTypeAsmRef((yyvsp[0].string)); }
#line 8647 "prebuilt\\asmparse.cpp"
    break;

  case 836: /* exptypeDecl: MDTOKEN_ '(' int32 ')'  */
#line 2039 "asmparse.y"
                                                              { if(!PASMM->SetComTypeImplementationTok((yyvsp[-1].int32)))
                                                                  PASM->report->error("Invalid implementation of exported type\n"); }
#line 8654 "prebuilt\\asmparse.cpp"
    break;

  case 837: /* exptypeDecl: _CLASS int32  */
#line 2041 "asmparse.y"
                                                              { if(!PASMM->SetComTypeClassTok((yyvsp[0].int32)))
                                                                  PASM->report->error("Invalid TypeDefID of exported type\n"); }
#line 8661 "prebuilt\\asmparse.cpp"
    break;

  case 840: /* manifestResHead: _MRESOURCE manresAttr dottedName  */
#line 2047 "asmparse.y"
                                                              { PASMM->StartManifestRes((yyvsp[0].string), (yyvsp[0].string), (yyvsp[-1].manresAttr)); }
#line 8667 "prebuilt\\asmparse.cpp"
    break;

  case 841: /* manifestResHead: _MRESOURCE manresAttr dottedName AS_ dottedName  */
#line 2049 "asmparse.y"
                                                              { PASMM->StartManifestRes((yyvsp[-2].string), (yyvsp[0].string), (yyvsp[-3].manresAttr)); }
#line 8673 "prebuilt\\asmparse.cpp"
    break;

  case 842: /* manresAttr: %empty  */
#line 2052 "asmparse.y"
                                                              { (yyval.manresAttr) = (CorManifestResourceFlags) 0; }
#line 8679 "prebuilt\\asmparse.cpp"
    break;

  case 843: /* manresAttr: manresAttr PUBLIC_  */
#line 2053 "asmparse.y"
                                                              { (yyval.manresAttr) = (CorManifestResourceFlags) ((yyvsp[-1].manresAttr) | mrPublic); }
#line 8685 "prebuilt\\asmparse.cpp"
    break;

  case 844: /* manresAttr: manresAttr PRIVATE_  */
#line 2054 "asmparse.y"
                                                              { (yyval.manresAttr) = (CorManifestResourceFlags) ((yyvsp[-1].manresAttr) | mrPrivate); }
#line 8691 "prebuilt\\asmparse.cpp"
    break;

  case 847: /* manifestResDecl: _FILE dottedName AT_ int32  */
#line 2061 "asmparse.y"
                                                              { PASMM->SetManifestResFile((yyvsp[-2].string), (ULONG)(yyvsp[0].int32)); }
#line 8697 "prebuilt\\asmparse.cpp"
    break;

  case 848: /* manifestResDecl: _ASSEMBLY EXTERN_ dottedName  */
#line 2062 "asmparse.y"
                                                              { PASMM->SetManifestResAsmRef((yyvsp[0].string)); }
#line 8703 "prebuilt\\asmparse.cpp"
    break;


#line 8707 "prebuilt\\asmparse.cpp"

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

#line 2067 "asmparse.y"


#include "grammar_after.cpp"
