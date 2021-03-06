#include "m_expressions.h"
#include <stdlib.h>

void deriv2b701 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(abs(a)>1 && p>=2 && p<=9));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    char poly2n1[BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(1/((%s)^2))", polynomial(buf[0], 2, a,"x", b,""));
    chprintf(poly, "(%s)", polynomial(buf[0], 2, a,"x", b,""));
    chprintf(poly2n1, "(1/((%s)^(%d)))", polynomial(buf[0], 2, a,"x", b,""), 2*p+1);

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=!(%s)^(%d)", ab, p);
    sprintf(src, "y=(!(1/((a*x+b)^2)))^p");

    sprintf(answ[0], "y`=(%d)*.(%s)*.(%d)", -2*p, poly2n1, a);
    sprintf(answ[1], "y`=(%d)*.(%s)", -2*p, poly2n1);
    sprintf(answ[2], "y`=(%d)*.(%s)*.(%d)", p, poly2n1, a);
    sprintf(answ[3], "y`=(%d)*.(%s)*.(%d)", 2*p, poly2n1, a);
}

void deriv2b702 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(abs(a)>1 && p>=2 && p<=9));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", polynomial(buf[0], 2, a,"x", b,""));
    chprintf(poly, "(%d)^(1/((%s)^2))", p, ab);

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=%s", poly);
    sprintf(src, "y=p^(1/((a*x+b)^2))");

    sprintf(answ[0], "y`=(%s)*.ln(%d)*.(-2/((%s)^3))*.(%d)", poly, p, ab, a);
    sprintf(answ[1], "y`=(%s)*.ln(%d)*.(-2/((%s)^3))", poly, p, ab);
    sprintf(answ[2], "y`=(%s)*.ln(%d)*.(1/((%s)^3))*.(%d)", poly, p, ab, a);
    sprintf(answ[3], "y`=(%s)*.ln(%d)*.(1/((%s)^3))", poly, p, ab);
}

void deriv2b703 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(abs(a)>1 && p>=2 && p<=9));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", polynomial(buf[0], 2, a,"x", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=log(%d,1/((%s)^2))", p, ab);
    sprintf(src, "y=log(p,1/((a*x+b)^2))");

    sprintf(answ[0], "y`=(-2/(%s*ln(%d)))*.(%d)", ab, p, a);
    sprintf(answ[1], "y`=(-2/(%s*ln(%d)))", ab, p);
    sprintf(answ[2], "y`=(1/(%s*ln(%d)))*.(%d)", ab, p, a);
    sprintf(answ[3], "y`=(1/(%s*ln(%d)))", ab, p);
}

void deriv2b704 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", polynomial(buf[0], 2, a,"x", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=sin(1/((%s)^2))", ab);
    sprintf(src, "y=sin(1/((a*x+b)^2))");

    sprintf(answ[0], "y`=!(cos(1/((%s)^2)))*.(-2/((%s)^3))*.(%d)", ab, ab, a);
    sprintf(answ[1], "y`=!(cos(1/((%s)^2)))*.(-2/((%s)^3))", ab, ab);
    sprintf(answ[2], "y`=!(cos(1/((%s)^2)))*.(1/((%s)^3))*.(%d)", ab, ab, a);
    sprintf(answ[3], "y`=!(cos(1/((%s)^2)))*.(1/((%s)^3))", ab, ab);
}

void deriv2b705 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", polynomial(buf[0], 2, a,"x", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=cos(1/((%s)^2))", ab);
    sprintf(src, "y=cos(1/((a*x+b)^2))");

    sprintf(answ[0], "y`=!(-sin(1/((%s)^2)))*.(-2/((%s)^3))*.(%d)", ab, ab, a);
    sprintf(answ[1], "y`=!(-sin(1/((%s)^2)))*.(-2/((%s)^3))", ab, ab);
    sprintf(answ[2], "y`=!(-sin(1/((%s)^2)))*.(1/((%s)^3))*.(%d)", ab, ab, a);
    sprintf(answ[3], "y`=!(-sin(1/((%s)^2)))*.(1/((%s)^3))", ab, ab);
}

void deriv2b706 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", polynomial(buf[0], 2, a,"x", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=tg(1/((%s)^2))", ab);
    sprintf(src, "y=tg(1/((a*x+b)^2))");

    sprintf(answ[0], "y`=(1/(cos(1/((%s)^2))^2))*.(-2/((%s)^3))*.(%d)", ab, ab, a);
    sprintf(answ[1], "y`=(1/(cos(1/((%s)^2))^2))*.(-2/((%s)^3))", ab, ab);
    sprintf(answ[2], "y`=(1/(cos(1/((%s)^2))^2))*.(1/((%s)^3))*.(%d)", ab, ab, a);
    sprintf(answ[3], "y`=(1/(cos(1/((%s)^2))^2))*.(1/((%s)^3))", ab, ab);
}

void deriv2b707 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", polynomial(buf[0], 2, a,"x", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=ctg(1/((%s)^2))", ab);
    sprintf(src, "y=ctg(1/((a*x+b)^2))");

    sprintf(answ[0], "y`=(-1/(sin(1/((%s)^2))^2))*.(-2/((%s)^3))*.(%d)", ab, ab, a);
    sprintf(answ[1], "y`=(-1/(sin(1/((%s)^2))^2))*.(-2/((%s)^3))", ab, ab);
    sprintf(answ[2], "y`=(-1/(sin(1/((%s)^2))^2))*.(1/((%s)^3))*.(%d)", ab, ab, a);
    sprintf(answ[3], "y`=(-1/(sin(1/((%s)^2))^2))*.(1/((%s)^3))", ab, ab);
}

void deriv2b708 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", polynomial(buf[0], 2, a,"x", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=arcsin(1/((%s)^2))", ab);
    sprintf(src, "y=arcsin(1/((a*x+b)^2))");

    sprintf(answ[0], "y`=(1/sqrt(1-1/((%s)^4)))*.(-2/((%s)^3))*.(%d)", ab, ab, a);
    sprintf(answ[1], "y`=(1/sqrt(1-!(1/((%s)^2))^2))*.(-2/((%s)^3))", ab, ab);
    sprintf(answ[2], "y`=(1/sqrt(1-1/((%s)^4)))*.(1/((%s)^3))*.(%d)", ab, ab, a);
    sprintf(answ[3], "y`=(1/sqrt(1-!(1/((%s)^2))^2))*.(1/((%s)^3))", ab, ab);
}

void deriv2b709 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", polynomial(buf[0], 2, a,"x", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=arccos(1/((%s)^2))", ab);
    sprintf(src, "y=arccos(1/((a*x+b)^2))");

    sprintf(answ[0], "y`=(-1/sqrt(1-1/((%s)^4)))*.(-2/((%s)^3))*.(%d)", ab, ab, a);
    sprintf(answ[1], "y`=(-1/sqrt(1-!(1/((%s)^2))^2))*.(-2/((%s)^3))", ab, ab);
    sprintf(answ[2], "y`=(-1/sqrt(1-1/((%s)^4)))*.(1/((%s)^3))*.(%d)", ab, ab, a);
    sprintf(answ[3], "y`=(-1/sqrt(1-!(1/((%s)^2))^2))*.(1/((%s)^3))", ab, ab);
}

void deriv2b710 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", polynomial(buf[0], 2, a,"x", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=arctg(1/((%s)^2))", ab);
    sprintf(src, "y=arctg(1/((a*x+b)^2))");

    sprintf(answ[0], "y`=(1/(1+1/((%s)^4)))*.(-2/((%s)^3))*.(%d)", ab, ab, a);
    sprintf(answ[1], "y`=(1/(1+!(1/((%s)^2))^2))*.(-2/((%s)^3))", ab, ab);
    sprintf(answ[2], "y`=(1/(1+1/((%s)^4)))*.(1/((%s)^3))*.(%d)", ab, ab, a);
    sprintf(answ[3], "y`=(1/(1+!(1/((%s)^2))^2))*.(1/((%s)^3))", ab, ab);
}

void deriv2b711 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", polynomial(buf[0], 2, a,"x", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=arcctg(1/((%s)^2))", ab);
    sprintf(src, "y=arcctg(1/((a*x+b)^2))");

    sprintf(answ[0], "y`=(-1/(1+1/((%s)^4)))*.(-2/((%s)^3))*.(%d)", ab, ab, a);
    sprintf(answ[1], "y`=(-1/(1+!(1/((%s)^2))^2))*.(-2/((%s)^3))", ab, ab);
    sprintf(answ[2], "y`=(-1/(1+1/((%s)^4)))*.(1/((%s)^3))*.(%d)", ab, ab, a);
    sprintf(answ[3], "y`=(-1/(1+!(1/((%s)^2))^2))*.(1/((%s)^3))", ab, ab);
}

void deriv2b712 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a, b;
    do{
        a = rndr(r);
        b = rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", polynomial(buf[0], 2, a,"x^2", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=ln(1/(%s))", ab);
    sprintf(src, "y=ln(1/(a*x^2+b))");

    sprintf(answ[0], "y`=(%s)*.(-1/(%s)^2)*.(%s)", ab, ab, polynomial(buf[0],1, 2*a,"x"));
    sprintf(answ[1], "y`=(%s)*.(-1/(%s)^2)*.(%s)", ab, ab, polynomial(buf[0],1, 2*a,""));
    sprintf(answ[2], "y`=(%s)*.(-1/(%s)^2)*.(%s)", ab, ab, polynomial(buf[0],1, 2,"x"));
    sprintf(answ[3], "y`=(%s)*.(-1/(%s)^2)*.(%s)", ab, ab, polynomial(buf[0],1, 2,""));
}


/// 8

void deriv2b801 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(abs(a)>1 && p>=3 && p<=9));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", poly2ns(buf[0], 2, a,1,-2,1,"x", b,1,1,1,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=(%s)^(%d)", ab, p);
    sprintf(src, "y=(!(1/(a/(x^2)+b)))^p");

    sprintf(answ[0], "y`=(%d)*(%s)^(%d)*.((%d)/(x^3))", p, ab, p-1, -2*a);
    sprintf(answ[1], "y`=(%d)*(%s)^(%d)*.((%d)/(x^3))", p, ab, p-1, -2);
    sprintf(answ[2], "y`=(%d)*(%s)^(%d)*.((%d)/(x^3))", p, ab, p-1, a);
    sprintf(answ[3], "y`=(%d)*(%s)^(%d)*.((%d)/(x^3))", p, ab, p-1, 1);
}

void deriv2b802 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(abs(a)>1 && p>=2 && p<=9 && a!=-2));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", poly2ns(buf[0], 2, a,1,-2,1,"x", b,1,1,1,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=(%d)^(%s)", p, ab);
    sprintf(src, "y=p^!(1/(a/(x^2)+b))");

    sprintf(answ[0], "y`=(%d)^(%s)*.!(ln(%d))*.(%d/(x^3))", p, ab, p, -2*a);
    sprintf(answ[1], "y`=(%d)^(%s)*.!(ln(%d))*.(%d/(x^3))", p, ab, p, -2);
    sprintf(answ[2], "y`=(%d)^(%s)*.!(ln(%d))*.(%d/(x^3))", p, ab, p, a);
    sprintf(answ[3], "y`=(%d)^(%s)*.!(ln(%d))*.(%d/(x^3))", p, ab, p, 1);
}

void deriv2b803 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(abs(a)>1 && a!=-2 && p>=2 && p<=9));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", poly2ns(buf[0], 2, a,1,-2,1,"x", b,1,1,1,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=log(%d,%s)", p, ab);
    sprintf(src, "y=log(p,!(1/(a/(x^2)+b)))");

    sprintf(answ[0], "y`=(1/(%s))*.(1/ln(%d))*.(%d/(x^3))", ab, p, -2*a);
    sprintf(answ[1], "y`=(1/(%s))*.(1/ln(%d))*.(%d/(x^3))", ab, p, -2);
    sprintf(answ[2], "y`=(1/(%s))*.(1/ln(%d))*.(%d/(x^3))", ab, p, a);
    sprintf(answ[3], "y`=(1/(%s))*.(1/ln(%d))*.(%d/(x^3))", ab, p, 1);
}

void deriv2b804 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", poly2ns(buf[0], 2, a,1,-2,1,"x", b,1,1,1,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=ln(%s)", ab);
    sprintf(src, "y=ln(!(1/(a/(x^2)+b)))");

    sprintf(answ[0], "y`=(1/(%s))*.(%d/(x^3))", ab, -2*a);
    sprintf(answ[1], "y`=(1/(%s))*.(%d/(x^3))", ab, -2);
    sprintf(answ[2], "y`=(1/(%s))*.(%d/(x^3))", ab, a);
    sprintf(answ[3], "y`=(1/(%s))*.(%d/(x^3))", ab, 1);
}

void deriv2b805 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", poly2ns(buf[0], 2, a,1,-2,1,"x", b,1,1,1,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=sin(%s)", ab);
    sprintf(src, "y=sin(!(1/(a/(x^2)+b)))");

    sprintf(answ[0], "y`=!(cos(%s))*.(%d/(x^3))", ab, -2*a);
    sprintf(answ[1], "y`=!(cos(%s))*.(%d/(x^3))", ab, -2);
    sprintf(answ[2], "y`=!(cos(%s))*.(%d/(x^3))", ab, a);
    sprintf(answ[3], "y`=!(cos(%s))*.(%d/(x^3))", ab, 1);
}

void deriv2b806 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", poly2ns(buf[0], 2, a,1,-2,1,"x", b,1,1,1,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=cos(%s)", ab);
    sprintf(src, "y=cos(!(1/(a/(x^2)+b)))");

    sprintf(answ[0], "y`=(!(-sin(%s)))*.(%d/(x^3))", ab, -2*a);
    sprintf(answ[1], "y`=(!(-sin(%s)))*.(%d/(x^3))", ab, -2);
    sprintf(answ[2], "y`=(!(-sin(%s)))*.(%d/(x^3))", ab, a);
    sprintf(answ[3], "y`=(!(-sin(%s)))*.(%d/(x^3))", ab, 1);
}

void deriv2b807 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", poly2ns(buf[0], 2, a,1,-2,1,"x", b,1,1,1,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=tg(%s)", ab);
    sprintf(src, "y=tg(!(1/(a/(x^2)+b)))");

    sprintf(answ[0], "y`=(1/(cos(%s)^2))*.(%d/(x^3))", ab, -2*a);
    sprintf(answ[1], "y`=(1/(cos(%s)^2))*.(%d/(x^3))", ab, -2);
    sprintf(answ[2], "y`=(1/(cos(%s)^2))*.(%d/(x^3))", ab, a);
    sprintf(answ[3], "y`=(1/(cos(%s)^2))*.(%d/(x^3))", ab, 1);
}

void deriv2b808 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", poly2ns(buf[0], 2, a,1,-2,1,"x", b,1,1,1,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=ctg(%s)", ab);
    sprintf(src, "y=ctg(!(1/(a/(x^2)+b)))");

    sprintf(answ[0], "y`=(-1/(sin(%s)^2))*.(%d/(x^3))", ab, -2*a);
    sprintf(answ[1], "y`=(-1/(sin(%s)^2))*.(%d/(x^3))", ab, -2);
    sprintf(answ[2], "y`=(-1/(sin(%s)^2))*.(%d/(x^3))", ab, a);
    sprintf(answ[3], "y`=(-1/(sin(%s)^2))*.(%d/(x^3))", ab, 1);
}

void deriv2b809 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "%s", poly2ns(buf[0], 2, a,1,-2,1,"x", b,1,1,1,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=arcsin(%s)", ab);
    sprintf(src, "y=arcsin(!(1/(a/(x^2)+b)))");

    sprintf(answ[0], "y`=(1/sqrt(1-(%s)^2))*.(%d/(x^3))", ab, -2*a);
    sprintf(answ[1], "y`=(1/sqrt(1-(%s)^2))*.(%d/(x^3))", ab, -2);
    sprintf(answ[2], "y`=(1/sqrt(1-(%s)^2))*.(%d/(x^3))", ab, a);
    sprintf(answ[3], "y`=(1/sqrt(1-(%s)^2))*.(%d/(x^3))", ab, 1);
}

void deriv2b810 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", poly2ns(buf[0], 2, a,1,-2,1,"x", b,1,1,1,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=arccos(%s)", ab);
    sprintf(src, "y=arccos(!(1/(a/(x^2)+b)))");

    sprintf(answ[0], "y`=(-1/sqrt(1-(%s)^2))*.(%d/(x^3))", ab, -2*a);
    sprintf(answ[1], "y`=(-1/sqrt(1-(%s)^2))*.(%d/(x^3))", ab, -2);
    sprintf(answ[2], "y`=(-1/sqrt(1-(%s)^2))*.(%d/(x^3))", ab, a);
    sprintf(answ[3], "y`=(-1/sqrt(1-(%s)^2))*.(%d/(x^3))", ab, 1);
}

void deriv2b811 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", poly2ns(buf[0], 2, a,1,-2,1,"x", b,1,1,1,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=arctg(%s)", ab);
    sprintf(src, "y=arctg(!(1/(a/(x^2)+b)))");

    sprintf(answ[0], "y`=(1/(1+(%s)^2))*.(%d/(x^3))", ab, -2*a);
    sprintf(answ[1], "y`=(1/(1+(%s)^2))*.(%d/(x^3))", ab, -2);
    sprintf(answ[2], "y`=(1/(1+(%s)^2))*.(%d/(x^3))", ab, a);
    sprintf(answ[3], "y`=(1/(1+(%s)^2))*.(%d/(x^3))", ab, 1);
}

void deriv2b812 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", poly2ns(buf[0], 2, a,1,-2,1,"x", b,1,1,1,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=arcctg(%s)", ab);
    sprintf(src, "y=arcctg(!(1/(a/(x^2)+b)))");

    sprintf(answ[0], "y`=(-1/(1+(%s)^2))*.(%d/(x^3))", ab, -2*a);
    sprintf(answ[1], "y`=(-1/(1+(%s)^2))*.(%d/(x^3))", ab, -2);
    sprintf(answ[2], "y`=(-1/(1+(%s)^2))*.(%d/(x^3))", ab, a);
    sprintf(answ[3], "y`=(-1/(1+(%s)^2))*.(%d/(x^3))", ab, 1);
}


/// 9

void deriv2b901 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(abs(a)>1 && p>=3 && p<=9));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "sqrt(%s)", polynomial(buf[0], 2, a,"x", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=(%s)^(%d)", ab, p);
    sprintf(src, "y=sqrt(a*x+b)^p");

    sprintf(answ[0], "y`=(%d)*!(%s)^(%d)*.(1/(2*%s))*.(%d)", p, ab, p-1, ab, a);
    sprintf(answ[1], "y`=(%d)*!(%s)^(%d)*.(1/(2*%s))", p, ab, p-1, ab);
    sprintf(answ[2], "y`=(%d)*!(%s)^(%d)*.(1/(%s))*.(%d)", p, ab, p-1, ab, a);
    sprintf(answ[3], "y`=(%d)*!(%s)^(%d)*.(1/(%s))", p, ab, p-1, ab);
}

void deriv2b902 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(abs(a)>1 && p>=2 && p<=9));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "sqrt(%s)", polynomial(buf[0], 2, a,"x", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=(%d)^(%s)", p, ab);
    sprintf(src, "y=p^sqrt(a*x+b)");

    sprintf(answ[0], "y`=(%d)^(%s)*.ln(%d)*.(1/(2*%s))*.%d", p, ab, p, ab, a);
    sprintf(answ[1], "y`=(%d)^(%s)*.ln(%d)*.(1/(2*%s))", p, ab, p, ab);
    sprintf(answ[2], "y`=(%d)^(%s)*.ln(%d)*.(1/(%s))*.%d", p, ab, p, ab, a);
    sprintf(answ[3], "y`=(%d)^(%s)*.ln(%d)*.(1/(%s))", p, ab, p, ab);
}

void deriv2b903 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "sqrt(%s)", polynomial(buf[0], 2, a,"x", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=ln(%s)", ab);
    sprintf(src, "y=ln(sqrt(a*x+b))");

    sprintf(answ[0], "y`=(1/(%s))*.(1/(2*%s))*.(%d)", ab, ab, a);
    sprintf(answ[1], "y`=(1/(%s))*.(1/(2*%s))", ab, ab);
    sprintf(answ[2], "y`=(1/(%s))*.(1/(%s))*.(%d)", ab, ab, a);
    sprintf(answ[3], "y`=(1/(%s))*.(1/(%s))*.(%d)", ab, ab, a);
}

void deriv2b904 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(abs(a)>1 && p>=2 && p<=9));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "sqrt(%s)", polynomial(buf[0], 2, a,"x", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=log(%d,%s)", p, ab);
    sprintf(src, "y=log(p,sqrt(a*x+b))");

    sprintf(answ[0], "y`=(1/(%s*ln(%d)))*.(1/(2*%s))*.%d", ab, p, ab, a);
    sprintf(answ[1], "y`=(1/(%s*ln(%d)))*.(1/(2*%s))", ab, p, ab);
    sprintf(answ[2], "y`=(1/(%s*ln(%d)))*.(1/(%s))*.%d", ab, p, ab, a);
    sprintf(answ[3], "y`=(1/(%s*ln(%d)))*.(1/(%s))", ab, p, ab, a);
}

void deriv2b905 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "sqrt(%s)", polynomial(buf[0], 2, a,"x", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=sin(%s)", ab);
    sprintf(src, "y=sin(sqrt(a*x+b))");

    sprintf(answ[0], "y`=cos(%s)*.(1/(2*%s))*.%d", ab, ab, a);
    sprintf(answ[1], "y`=cos(%s)*.(1/(2*%s))", ab, ab);
    sprintf(answ[2], "y`=cos(%s)*.(1/(%s))*.%d", ab, ab, a);
    sprintf(answ[3], "y`=cos(%s)*.(1/(%s))", ab, ab);
}

void deriv2b906 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "sqrt(%s)", polynomial(buf[0], 2, a,"x", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=cos(%s)", ab);
    sprintf(src, "y=cos(sqrt(a*x+b))");

    sprintf(answ[0], "y`=-sin(%s)*.(1/(2*%s))*.%d", ab, ab, a);
    sprintf(answ[1], "y`=-sin(%s)*.(1/(2*%s))", ab, ab);
    sprintf(answ[2], "y`=-sin(%s)*.(1/(%s))*.%d", ab, ab, a);
    sprintf(answ[3], "y`=-sin(%s)*.(1/(%s))", ab, ab);
}

void deriv2b907 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "sqrt(%s)", polynomial(buf[0], 2, a,"x", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=tg(%s)", ab);
    sprintf(src, "y=tg(sqrt(a*x+b))");

    sprintf(answ[0], "y`=(1/(cos(%s)^2))*.(1/(2*%s))*.%d", ab, ab, a);
    sprintf(answ[1], "y`=(1/(cos(%s)^2))*.(1/(2*%s))", ab, ab);
    sprintf(answ[2], "y`=(1/(cos(%s)^2))*.(1/(%s))*.%d", ab, ab, a);
    sprintf(answ[3], "y`=(1/(cos(%s)^2))*.(1/(%s))", ab, ab, a);
}

void deriv2b908 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "sqrt(%s)", polynomial(buf[0], 2, a,"x", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=ctg(%s)", ab);
    sprintf(src, "y=ctg(sqrt(a*x+b))");

    sprintf(answ[0], "y`=(-1/(sin(%s)^2))*.(1/(2*%s))*.%d", ab, ab, a);
    sprintf(answ[1], "y`=(-1/(sin(%s)^2))*.(1/(2*%s))", ab, ab);
    sprintf(answ[2], "y`=(-1/(sin(%s)^2))*.(1/(%s))*.%d", ab, ab, a);
    sprintf(answ[3], "y`=(-1/(sin(%s)^2))*.(1/(%s))", ab, ab, a);
}

void deriv2b909 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "sqrt(%s)", polynomial(buf[0], 2, a,"x", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=arcsin(%s)", ab);
    sprintf(src, "y=arcsin(sqrt(a*x+b))");

    sprintf(answ[0], "y`=(1/sqrt(1-!(%s)^2))*.(1/(2*%s))*.%d", ab,ab,a);
    sprintf(answ[1], "y`=(1/sqrt(1-!(%s)^2))*.(1/(2*%s))", ab,ab);
    sprintf(answ[2], "y`=(1/sqrt(1-!(%s)^2))*.(1/(%s))*.%d", ab,ab,a);
    sprintf(answ[3], "y`=(1/sqrt(1-!(%s)^2))*.(1/(%s))", ab,ab);
}

void deriv2b910 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "sqrt(%s)", polynomial(buf[0], 2, a,"x", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=arccos(%s)", ab);
    sprintf(src, "y=arccos(sqrt(a*x+b))");

    sprintf(answ[0], "y`=(-1/sqrt(1-!(%s)^2))*.(1/(2*%s))*.%d", ab,ab,a);
    sprintf(answ[1], "y`=(-1/sqrt(1-!(%s)^2))*.(1/(2*%s))", ab,ab);
    sprintf(answ[2], "y`=(-1/sqrt(1-!(%s)^2))*.(1/(%s))*.%d", ab,ab,a);
    sprintf(answ[3], "y`=(-1/sqrt(1-!(%s)^2))*.(1/(%s))", ab,ab);
}

void deriv2b911 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "sqrt(%s)", polynomial(buf[0], 2, a,"x", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=arctg(%s)", ab);
    sprintf(src, "y=arctg(sqrt(a*x+b))");

    sprintf(answ[0], "y`=(1/(1+!(%s)^2))*.(1/(2*%s))*.%d", ab, ab, a);
    sprintf(answ[1], "y`=(1/(1+!(%s)^2))*.(1/(2*%s))", ab, ab);
    sprintf(answ[2], "y`=(1/(1+!(%s)^2))*.(1/(%s))*.%d", ab, ab, a);
    sprintf(answ[3], "y`=(1/(1+!(%s)^2))*.(1/(%s))", ab, ab);
}

void deriv2b912 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "sqrt(%s)", polynomial(buf[0], 2, a,"x", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=arcctg(%s)", ab);
    sprintf(src, "y=arcctg(sqrt(a*x+b))");

    sprintf(answ[0], "y`=(-1/(1+!(%s)^2))*.(1/(2*%s))*.%d", ab, ab, a);
    sprintf(answ[1], "y`=(-1/(1+!(%s)^2))*.(1/(2*%s))", ab, ab);
    sprintf(answ[2], "y`=(-1/(1+!(%s)^2))*.(1/(%s))*.%d", ab, ab, a);
    sprintf(answ[3], "y`=(-1/(1+!(%s)^2))*.(1/(%s))", ab, ab);
}

/// 10

void deriv2b1001 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(abs(a)>1 && p>=3 && p<=9));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", polynomial(buf[0], 2, a,"sqrt(x)", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=(%s)^(%d)", ab, p);
    sprintf(src, "y=(a*sqrt(x)+b)^p");

    sprintf(answ[0], "y`=(%d)*(%s)^(%d)*.(%s/sqrt(x))", p, ab, p-1, fraction(buf[2],a,1,2));
    sprintf(answ[1], "y`=(%d)*(%s)^(%d)*.(%s/sqrt(x))", p, ab, p-1, fraction(buf[2],1,1,2));
    sprintf(answ[2], "y`=(%d)*(%s)^(%d)*.(%s/sqrt(x))", p, ab, p-1, fraction(buf[2],a,1,1));
    sprintf(answ[3], "y`=(%d)*(%s)^(%d)*.(%s/sqrt(x))", p, ab, p-1, fraction(buf[2],1,1,1));
}

void deriv2b1002 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(abs(a)>1 && a!=2 && p>=2 && p<=9));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", polynomial(buf[0], 2, a,"sqrt(x)", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=(%d)^(%s)", p, ab);
    sprintf(src, "y=p^(a*sqrt(x)+b)");

    sprintf(answ[0], "y`=(%d)^(%s)*.ln(%d)*.(%s/sqrt(x))", p, ab, p, fraction(buf[2],a,1,2));
    sprintf(answ[1], "y`=(%d)^(%s)*.ln(%d)*.(%s/sqrt(x))", p, ab, p, fraction(buf[2],1,1,2));
    sprintf(answ[2], "y`=(%d)^(%s)*.ln(%d)*.(%s/sqrt(x))", p, ab, p, fraction(buf[2],a,1,1));
    sprintf(answ[3], "y`=(%d)^(%s)*.ln(%d)*.(%s/sqrt(x))", p, ab, p, fraction(buf[2],1,1,1));
}

void deriv2b1003 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(abs(a)>1 && p>=2 && p<=9));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", polynomial(buf[0], 2, a,"sqrt(x)", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=log(%d,%s)", p, ab);
    sprintf(src, "y=log(p,a*sqrt(x)+b)");

    sprintf(answ[0], "y`=(1/((%s)*ln(%d)))*.(%s/sqrt(x))", ab, p, fraction(buf[2],a,1,2));
    sprintf(answ[1], "y`=(1/((%s)*ln(%d)))*.(%s/sqrt(x))", ab, p, fraction(buf[2],1,1,2));
    sprintf(answ[2], "y`=(1/((%s)*ln(%d)))*.(%s/sqrt(x))", ab, p, fraction(buf[2],a,1,1));
    sprintf(answ[3], "y`=(1/((%s)*ln(%d)))*.(%s/sqrt(x))", ab, p, fraction(buf[2],1,1,1));
}

void deriv2b1004 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", polynomial(buf[0], 2, a,"sqrt(x)", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=ln(%s)", ab);
    sprintf(src, "y=ln(a*sqrt(x)+b)");

    sprintf(answ[0], "y`=(1/(%s))*.(%s/sqrt(x))", ab, fraction(buf[2],a,1,2));
    sprintf(answ[1], "y`=(1/(%s))*.(%s/sqrt(x))", ab, fraction(buf[2],1,1,2));
    sprintf(answ[2], "y`=(1/(%s))*.(%s/sqrt(x))", ab, fraction(buf[2],a,1,1));
    sprintf(answ[3], "y`=(1/(%s))*.(%s/sqrt(x))", ab, fraction(buf[2],1,1,1));
}

void deriv2b1005 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", polynomial(buf[0], 2, a,"sqrt(x)", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=sin(%s)", ab);
    sprintf(src, "y=sin(a*sqrt(x)+b)");

    sprintf(answ[0], "y`=!(cos(%s))*.(%s/sqrt(x))", ab, fraction(buf[2],a,1,2));
    sprintf(answ[1], "y`=!(cos(%s))*.(%s/sqrt(x))", ab, fraction(buf[2],1,1,2));
    sprintf(answ[2], "y`=!(cos(%s))*.(%s/sqrt(x))", ab, fraction(buf[2],a,1,1));
    sprintf(answ[3], "y`=!(cos(%s))*.(%s/sqrt(x))", ab, fraction(buf[2],1,1,1));
}

void deriv2b1006 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", polynomial(buf[0], 2, a,"sqrt(x)", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=cos(%s)", ab);
    sprintf(src, "y=cos(a*sqrt(x)+b)");

    sprintf(answ[0], "y`=!(-sin(%s))*.(%s/sqrt(x))", ab, fraction(buf[2],a,1,2));
    sprintf(answ[1], "y`=!(-sin(%s))*.(%s/sqrt(x))", ab, fraction(buf[2],1,1,2));
    sprintf(answ[2], "y`=!(-sin(%s))*.(%s/sqrt(x))", ab, fraction(buf[2],a,1,1));
    sprintf(answ[3], "y`=!(-sin(%s))*.(%s/sqrt(x))", ab, fraction(buf[2],1,1,1));
}

void deriv2b1007 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", polynomial(buf[0], 2, a,"sqrt(x)", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=tg(%s)", ab);
    sprintf(src, "y=tg(a*sqrt(x)+b)");

    sprintf(answ[0], "y`=(1/(cos(%s)^2))*.(%s/sqrt(x))", ab, fraction(buf[2],a,1,2));
    sprintf(answ[1], "y`=(1/(cos(%s)^2))*.(%s/sqrt(x))", ab, fraction(buf[2],1,1,2));
    sprintf(answ[2], "y`=(1/(cos(%s)^2))*.(%s/sqrt(x))", ab, fraction(buf[2],a,1,1));
    sprintf(answ[3], "y`=(1/(cos(%s)^2))*.(%s/sqrt(x))", ab, fraction(buf[2],1,1,1));
}

void deriv2b1008 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", polynomial(buf[0], 2, a,"sqrt(x)", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=ctg(%s)", ab);
    sprintf(src, "y=ctg(a*sqrt(x)+b)");

    sprintf(answ[0], "y`=(1/(sin(%s)^2))*.(%s/sqrt(x))", ab, fraction(buf[2],a,1,2));
    sprintf(answ[1], "y`=(1/(sin(%s)^2))*.(%s/sqrt(x))", ab, fraction(buf[2],1,1,2));
    sprintf(answ[2], "y`=(1/(sin(%s)^2))*.(%s/sqrt(x))", ab, fraction(buf[2],a,1,1));
    sprintf(answ[3], "y`=(1/(sin(%s)^2))*.(%s/sqrt(x))", ab, fraction(buf[2],1,1,1));
}

void deriv2b1009 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", polynomial(buf[0], 2, a,"sqrt(x)", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=arcsin(%s)", ab);
    sprintf(src, "y=arcsin(a*sqrt(x)+b)");

    sprintf(answ[0], "y`=(1/sqrt(1-(%s)^2))*.(%s/sqrt(x))", ab, fraction(buf[2],a,1,2));
    sprintf(answ[1], "y`=(1/sqrt(1-(%s)^2))*.(%s/sqrt(x))", ab, fraction(buf[2],1,1,2));
    sprintf(answ[2], "y`=(1/sqrt(1-(%s)^2))*.(%s/sqrt(x))", ab, fraction(buf[2],a,1,1));
    sprintf(answ[3], "y`=(1/sqrt(1-(%s)^2))*.(%s/sqrt(x))", ab, fraction(buf[2],1,1,1));
}

void deriv2b1010 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", polynomial(buf[0], 2, a,"sqrt(x)", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=arccos(%s)", ab);
    sprintf(src, "y=arccos(a*sqrt(x)+b)");

    sprintf(answ[0], "y`=(-1/sqrt(1-(%s)^2))*.(%s/sqrt(x))", ab, fraction(buf[2],a,1,2));
    sprintf(answ[1], "y`=(-1/sqrt(1-(%s)^2))*.(%s/sqrt(x))", ab, fraction(buf[2],1,1,2));
    sprintf(answ[2], "y`=(-1/sqrt(1-(%s)^2))*.(%s/sqrt(x))", ab, fraction(buf[2],a,1,1));
    sprintf(answ[3], "y`=(-1/sqrt(1-(%s)^2))*.(%s/sqrt(x))", ab, fraction(buf[2],1,1,1));
}

void deriv2b1011 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1 && a!=2));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", polynomial(buf[0], 2, a,"sqrt(x)", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=arctg(%s)", ab);
    sprintf(src, "y=arctg(a*sqrt(x)+b)");

    sprintf(answ[0], "y`=(1/(1+(%s)^2))*.(%s/sqrt(x))", ab, fraction(buf[2],a,1,2));
    sprintf(answ[1], "y`=(1/(1+(%s)^2))*.(%s/sqrt(x))", ab, fraction(buf[2],1,1,2));
    sprintf(answ[2], "y`=(1/(1+(%s)^2))*.(%s/sqrt(x))", ab, fraction(buf[2],a,1,1));
    sprintf(answ[3], "y`=(1/(1+(%s)^2))*.(%s/sqrt(x))", ab, fraction(buf[2],1,1,1));
}

void deriv2b1012 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1 && a!=2));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", polynomial(buf[0], 2, a,"sqrt(x)", b,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=arcctg(%s)", ab);
    sprintf(src, "y=arcctg(a*sqrt(x)+b)");

    sprintf(answ[0], "y`=(-1/(1+(%s)^2))*.(%s/sqrt(x))", ab, fraction(buf[2],a,1,2));
    sprintf(answ[1], "y`=(-1/(1+(%s)^2))*.(%s/sqrt(x))", ab, fraction(buf[2],1,1,2));
    sprintf(answ[2], "y`=(-1/(1+(%s)^2))*.(%s/sqrt(x))", ab, fraction(buf[2],a,1,1));
    sprintf(answ[3], "y`=(-1/(1+(%s)^2))*.(%s/sqrt(x))", ab, fraction(buf[2],1,1,1));
}


/// 11

void deriv2b1101 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(abs(a)>1 && p>=3 && p<=9));

    char buf[10][BUFSZ];
    char ab[BUFSZ], apb[BUFSZ];
    chprintf(apb, "(%s)", polynomial(buf[0], 2, a,"x", b,""));
    chprintf(ab, "(1/sqrt(%s))", apb);

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=(!(%s))^(%d)", ab, p);
    sprintf(src, "y=(!(1/sqrt(a*x+b)))^p");

    sprintf(answ[0], "y`=(%d*!(%s)^(%d))*.(-1/(2*sqrt(%s^3)))*.%d", p, ab, p-1, apb, a);
    sprintf(answ[1], "y`=(%d*!(%s)^(%d))*.(-1/(2*sqrt(%s^3)))", p, ab, p-1, apb);
    sprintf(answ[2], "y`=(%d*!(%s)^(%d))*.(1/(2*sqrt(%s^3)))*.%d", p, ab, p-1, apb, a);
    sprintf(answ[3], "y`=(%d*!(%s)^(%d))*.(1/(2*sqrt(%s^3)))", p, ab, p-1, apb);
}

void deriv2b1102 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(abs(a)>1 && p>=2 && p<=9));

    char buf[10][BUFSZ];
    char ab[BUFSZ], apb[BUFSZ];
    chprintf(apb, "(%s)", polynomial(buf[0], 2, a,"x", b,""));
    chprintf(ab, "(1/sqrt(%s))", apb);

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=(%d)^(%s)", p, ab);
    sprintf(src, "y=p^(1/sqrt(a*x+b))");

    sprintf(answ[0], "y`=(%d)^(%s)*.ln(%d)*.(-1/(2*sqrt(%s^3)))*.%d", p, ab, p, apb, a);
    sprintf(answ[1], "y`=(%d)^(%s)*.ln(%d)*.(-1/(2*sqrt(%s^3)))", p, ab, p, apb);
    sprintf(answ[2], "y`=(%d)^(%s)*.ln(%d)*.(1/(2*sqrt(%s^3)))*.%d", p, ab, p, apb, a);
    sprintf(answ[3], "y`=(%d)^(%s)*.ln(%d)*.(1/(2*sqrt(%s^3)))", p, ab, p, apb, a);
}

void deriv2b1103 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(abs(a)>1 && p>=2 && p<=9));

    char buf[10][BUFSZ];
    char ab[BUFSZ], apb[BUFSZ];
    chprintf(apb, "(%s)", polynomial(buf[0], 2, a,"x", b,""));
    chprintf(ab, "(1/sqrt(%s))", apb);

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=log(%d,%s)", p, ab);
    sprintf(src, "y=log(p,1/sqrt(a*x+b))");

    sprintf(answ[0], "y`=(-1/2)*.(1/(%s*ln(%d)))*.(%d)", apb, p, a);
    sprintf(answ[1], "y`=(-1/2)*.(1/(%s*ln(%d)))", apb, p, a);
    sprintf(answ[2], "y`=(-1/2)*.(1/(%s))*.(%d)", apb, a);
    sprintf(answ[3], "y`=(-1/2)*.(1/(%s))", apb);
}

void deriv2b1104 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ], apb[BUFSZ];
    chprintf(apb, "(%s)", polynomial(buf[0], 2, a,"x", b,""));
    chprintf(ab, "(1/sqrt(%s))", apb);

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=e^(%s)", ab);
    sprintf(src, "y=e^(1/sqrt(a*x+b))");

    sprintf(answ[0], "y`=e^(%s)*.(-1/(2*sqrt(%s^3)))*.(%d)", ab, apb, a);
    sprintf(answ[1], "y`=e^(%s)*.(-1/(2*sqrt(%s^3)))", ab, apb);
    sprintf(answ[2], "y`=e^(%s)*.(1/(2*sqrt(%s^3)))*.(%d)", ab, apb, a);
    sprintf(answ[3], "y`=e^(%s)*.(1/(2*sqrt(%s^3)))", ab, apb, a);
}

void deriv2b1105 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ], apb[BUFSZ];
    chprintf(apb, "(%s)", polynomial(buf[0], 2, a,"x", b,""));
    chprintf(ab, "(1/sqrt(%s))", apb);

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=sin(%s)", ab);
    sprintf(src, "y=sin(1/sqrt(a*x+b))");

    sprintf(answ[0], "y`=cos(%s)*.(-1/(2*sqrt(%s^3)))*.(%d)", ab, apb, a);
    sprintf(answ[1], "y`=cos(%s)*.(-1/(2*sqrt(%s^3)))", ab, apb);
    sprintf(answ[2], "y`=cos(%s)*.(1/(2*sqrt(%s^3)))*.(%d)", ab, apb, a);
    sprintf(answ[3], "y`=cos(%s)*.(1/(2*sqrt(%s^3)))", ab, apb);
}

void deriv2b1106 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ], apb[BUFSZ];
    chprintf(apb, "(%s)", polynomial(buf[0], 2, a,"x", b,""));
    chprintf(ab, "(1/sqrt(%s))", apb);

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=cos(%s)", ab);
    sprintf(src, "y=cos(1/sqrt(a*x+b))");

    sprintf(answ[0], "y`=-sin(%s)*.(-1/(2*sqrt(%s^3)))*.(%d)", ab, apb, a);
    sprintf(answ[1], "y`=-sin(%s)*.(-1/(2*sqrt(%s^3)))", ab, apb);
    sprintf(answ[2], "y`=-sin(%s)*.(1/(2*sqrt(%s^3)))*.(%d)", ab, apb, a);
    sprintf(answ[3], "y`=-sin(%s)*.(1/(2*sqrt(%s^3)))", ab, apb);
}

void deriv2b1107 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ], apb[BUFSZ];
    chprintf(apb, "(%s)", polynomial(buf[0], 2, a,"x", b,""));
    chprintf(ab, "(1/sqrt(%s))", apb);

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=tg(%s)",  ab);
    sprintf(src, "y=tg(1/sqrt(a*x+b))");

    sprintf(answ[0], "y`=(1/(cos(%s)^2))*.(-1/(2*sqrt(%s^3)))*.(%d)", ab, apb, a);
    sprintf(answ[1], "y`=(1/(cos(%s)^2))*.(-1/(2*sqrt(%s^3)))", ab, apb);
    sprintf(answ[2], "y`=(1/(cos(%s)^2))*.(1/(2*sqrt(%s^3)))*.(%d)", ab, apb, a);
    sprintf(answ[3], "y`=(1/(cos(%s)^2))*.(1/(2*sqrt(%s^3)))", ab, apb);
}

void deriv2b1108 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ], apb[BUFSZ];
    chprintf(apb, "(%s)", polynomial(buf[0], 2, a,"x", b,""));
    chprintf(ab, "(1/sqrt(%s))", apb);

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=ctg(%s)",  ab);
    sprintf(src, "y=ctg(1/sqrt(a*x+b))");

    sprintf(answ[0], "y`=(-1/(sin(%s)^2))*.(-1/(2*sqrt(%s^3)))*.(%d)", ab, apb, a);
    sprintf(answ[1], "y`=(-1/(sin(%s)^2))*.(-1/(2*sqrt(%s^3)))", ab, apb);
    sprintf(answ[2], "y`=(-1/(sin(%s)^2))*.(1/(2*sqrt(%s^3)))*.(%d)", ab, apb, a);
    sprintf(answ[3], "y`=(-1/(sin(%s)^2))*.(1/(2*sqrt(%s^3)))", ab, apb);
}

void deriv2b1109 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ], apb[BUFSZ];
    chprintf(apb, "(%s)", polynomial(buf[0], 2, a,"x", b,""));
    chprintf(ab, "(1/sqrt(%s))", apb);

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=arcsin(%s)", ab);
    sprintf(src, "y=arcsin(1/sqrt(a*x+b))");

    sprintf(answ[0], "y`=(1/sqrt(1-!(%s)^2))*.(-1/(2*sqrt(%s^3)))*.(%d)", ab, apb, a);
    sprintf(answ[1], "y`=(1/sqrt(1-!(%s)^2))*.(-1/(2*sqrt(%s^3)))", ab, apb);
    sprintf(answ[2], "y`=(1/sqrt(1-!(%s)^2))*.(1/(2*sqrt(%s^3)))*.(%d)", ab, apb, a);
    sprintf(answ[3], "y`=(1/sqrt(1-!(%s)^2))*.(1/(2*sqrt(%s^3)))", ab, apb);
}

void deriv2b1110 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ], apb[BUFSZ];
    chprintf(apb, "(%s)", polynomial(buf[0], 2, a,"x", b,""));
    chprintf(ab, "(1/sqrt(%s))", apb);

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=arccos(%s)", ab);
    sprintf(src, "y=arccos(1/sqrt(a*x+b))");

    sprintf(answ[0], "y`=(-1/sqrt(1-!(%s)^2))*.(-1/(2*sqrt(%s^3)))*.(%d)", ab, apb, a);
    sprintf(answ[1], "y`=(-1/sqrt(1-!(%s)^2))*.(-1/(2*sqrt(%s^3)))", ab, apb);
    sprintf(answ[2], "y`=(-1/sqrt(1-!(%s)^2))*.(1/(2*sqrt(%s^3)))*.(%d)", ab, apb, a);
    sprintf(answ[3], "y`=(-1/sqrt(1-!(%s)^2))*.(1/(2*sqrt(%s^3)))", ab, apb);
}

void deriv2b1111 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ], apb[BUFSZ];
    chprintf(apb, "(%s)", polynomial(buf[0], 2, a,"x", b,""));
    chprintf(ab, "(1/sqrt(%s))", apb);

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=arctg(%s)", ab);
    sprintf(src, "y=arctg(1/sqrt(a*x+b))");

    sprintf(answ[0], "y`=(1/(1+!(%s)^2))*.(-1/(2*sqrt(%s^3)))*.(%d)", ab, apb, a);
    sprintf(answ[1], "y`=(1/(1+!(%s)^2))*.(-1/(2*sqrt(%s^3)))", ab, apb);
    sprintf(answ[2], "y`=(1/(1+!(%s)^2))*.(1/(2*sqrt(%s^3)))*.(%d)", ab, apb, a);
    sprintf(answ[3], "y`=(1/(1+!(%s)^2))*.(1/(2*sqrt(%s^3)))", ab, apb);
}

void deriv2b1112 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ], apb[BUFSZ];
    chprintf(apb, "(%s)", polynomial(buf[0], 2, a,"x", b,""));
    chprintf(ab, "(1/sqrt(%s))", apb);

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=arcctg(%s)", ab);
    sprintf(src, "y=arcctg(1/sqrt(a*x+b))");

    sprintf(answ[0], "y`=(-1/(1+!(%s)^2))*.(-1/(2*sqrt(%s^3)))*.(%d)", ab, apb, a);
    sprintf(answ[1], "y`=(-1/(1+!(%s)^2))*.(-1/(2*sqrt(%s^3)))", ab, apb);
    sprintf(answ[2], "y`=(-1/(1+!(%s)^2))*.(1/(2*sqrt(%s^3)))*.(%d)", ab, apb, a);
    sprintf(answ[3], "y`=(-1/(1+!(%s)^2))*.(1/(2*sqrt(%s^3)))", ab, apb);
}


/// 12

void deriv2b1201 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(abs(a)>1 && p>=3 && p<=9));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", poly2ns(buf[0], 2, a,1,-1,2,"x", b,1,1,1,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=(%s)^(%d)", ab, p);
    sprintf(src, "y=(a/sqrt(x)+b)^p");

    sprintf(answ[0], "y`=%d*%s^(%d)*.(%s/sqrt(x^3))", p, ab, p-1, fraction(buf[2],-a,1,2));
    sprintf(answ[1], "y`=%d*%s^(%d)*.(%s/sqrt(x^3))", p, ab, p-1, fraction(buf[2],-1,1,2));
    sprintf(answ[2], "y`=%d*%s^(%d)*.(%s/sqrt(x^3))", p, ab, p-1, fraction(buf[2],a,1,2));
    sprintf(answ[3], "y`=%d*%s^(%d)*.(%s/sqrt(x^3))", p, ab, p-1, fraction(buf[2],1,1,2));
}

void deriv2b1202 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(abs(a)>1 && p>=2 && p<=9));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", poly2ns(buf[0], 2, a,1,-1,2,"x", b,1,1,1,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=(%d)^(%s)", p, ab);
    sprintf(src, "y=p^(!(a/sqrt(x)+b))");

    sprintf(answ[0], "y`=%d^(%s)*.(!(ln(%d)))*.(%s/sqrt(x^3))", p, ab, p, fraction(buf[2],-a,1,2));
    sprintf(answ[1], "y`=%d^(%s)*.(!(ln(%d)))*.(%s/sqrt(x^3))", p, ab, p, fraction(buf[2],-1,1,2));
    sprintf(answ[2], "y`=%d^(%s)*.(!(ln(%d)))*.(%s/sqrt(x^3))", p, ab, p, fraction(buf[2],a,1,2));
    sprintf(answ[3], "y`=%d^(%s)*.(!(ln(%d)))*.(%s/sqrt(x^3))", p, ab, p, fraction(buf[2],1,1,2));
}

void deriv2b1203 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(abs(a)>1 && p>=2 && p<=9));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", poly2ns(buf[0], 2, a,1,-1,2,"x", b,1,1,1,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=log(%d,%s)", p, ab);
    sprintf(src, "y=log(p,a/sqrt(x)+b)");

    sprintf(answ[0], "y`=(1/((%s)*ln(%d)))*.(%s)", ab, p, poly2ns(buf[2], 1, -a,2,-3,2,"x"));
    sprintf(answ[1], "y`=(1/((%s)*ln(%d)))*.(%s)", ab, p, poly2ns(buf[2], 1, -1,2,-3,2,"x"));
    sprintf(answ[2], "y`=(1/((%s)*ln(%d)))*.(%s)", ab, p, poly2ns(buf[2], 1, a,2,-3,2,"x"));
    sprintf(answ[3], "y`=(1/((%s)*ln(%d)))*.(%s)", ab, p, poly2ns(buf[2], 1, 1,2,-3,2,"x"));
}

void deriv2b1204 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", poly2ns(buf[0], 2, a,1,-1,2,"x", b,1,1,1,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=ln(%s)", ab);
    sprintf(src, "y=ln(a/sqrt(x)+b)");

    sprintf(answ[0], "y`=(1/(%s))*.(%s)", ab, poly2ns(buf[2], 1, -a,2,-3,2,"x"));
    sprintf(answ[1], "y`=(1/(%s))*.(%s)", ab, poly2ns(buf[2], 1, -1,2,-3,2,"x"));
    sprintf(answ[2], "y`=(1/(%s))*.(%s)", ab, poly2ns(buf[2], 1, a,2,-3,2,"x"));
    sprintf(answ[3], "y`=(1/(%s))*.(%s)", ab, poly2ns(buf[2], 1, 1,2,-3,2,"x"));
}

void deriv2b1205 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", poly2ns(buf[0], 2, a,1,-1,2,"x", b,1,1,1,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=sin(%s)", ab);
    sprintf(src, "y=sin(a/sqrt(x)+b)");

    sprintf(answ[0], "y`=cos(%s)*.(%s)", ab, poly2ns(buf[2], 1, -a,2,-3,2,"x"));
    sprintf(answ[1], "y`=cos(%s)*.(%s)", ab, poly2ns(buf[2], 1, -1,2,-3,2,"x"));
    sprintf(answ[2], "y`=cos(%s)*.(%s)", ab, poly2ns(buf[2], 1, a,2,-3,2,"x"));
    sprintf(answ[3], "y`=cos(%s)*.(%s)", ab, poly2ns(buf[2], 1, 1,2,-3,2,"x"));
}

void deriv2b1206 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", poly2ns(buf[0], 2, a,1,-1,2,"x", b,1,1,1,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=cos(%s)", ab);
    sprintf(src, "y=cos(a/sqrt(x)+b)");

    sprintf(answ[0], "y`=-sin(%s)*.(%s)", ab, poly2ns(buf[2], 1, -a,2,-3,2,"x"));
    sprintf(answ[1], "y`=-sin(%s)*.(%s)", ab, poly2ns(buf[2], 1, -1,2,-3,2,"x"));
    sprintf(answ[2], "y`=-sin(%s)*.(%s)", ab, poly2ns(buf[2], 1, a,2,-3,2,"x"));
    sprintf(answ[3], "y`=-sin(%s)*.(%s)", ab, poly2ns(buf[2], 1, 1,2,-3,2,"x"));
}

void deriv2b1207 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", poly2ns(buf[0], 2, a,1,-1,2,"x", b,1,1,1,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=tg(%s)", ab);
    sprintf(src, "y=tg(a/sqrt(x)+b)");

    sprintf(answ[0], "y`=(1/(cos(%s)^2))*.(%s)", ab, poly2ns(buf[2], 1, -a,2,-3,2,"x"));
    sprintf(answ[1], "y`=(1/(cos(%s)^2))*.(%s)", ab, poly2ns(buf[2], 1, -1,2,-3,2,"x"));
    sprintf(answ[2], "y`=(1/(cos(%s)^2))*.(%s)", ab, poly2ns(buf[2], 1, a,2,-3,2,"x"));
    sprintf(answ[3], "y`=(1/(cos(%s)^2))*.(%s)", ab, poly2ns(buf[2], 1, 1,2,-3,2,"x"));
}

void deriv2b1208 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", poly2ns(buf[0], 2, a,1,-1,2,"x", b,1,1,1,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=ctg(%s)", ab);
    sprintf(src, "y=ctg(a/sqrt(x)+b)");

    sprintf(answ[0], "y`=(-1/(sin(%s)^2))*.(%s)", ab, poly2ns(buf[2], 1, -a,2,-3,2,"x"));
    sprintf(answ[1], "y`=(-1/(sin(%s)^2))*.(%s)", ab, poly2ns(buf[2], 1, -1,2,-3,2,"x"));
    sprintf(answ[2], "y`=(-1/(sin(%s)^2))*.(%s)", ab, poly2ns(buf[2], 1, a,2,-3,2,"x"));
    sprintf(answ[3], "y`=(-1/(sin(%s)^2))*.(%s)", ab, poly2ns(buf[2], 1, 1,2,-3,2,"x"));
}

void deriv2b1209 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", poly2ns(buf[0], 2, a,1,-1,2,"x", b,1,1,1,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=arcsin(%s)", ab);
    sprintf(src, "y=arcsin(a/sqrt(x)+b)");

    sprintf(answ[0], "y`=(1/sqrt(1-(%s)^2))*.(%s)", ab, poly2ns(buf[2], 1, -a,2,-3,2,"x"));
    sprintf(answ[1], "y`=(1/sqrt(1-(%s)^2))*.(%s)", ab, poly2ns(buf[2], 1, -1,2,-3,2,"x"));
    sprintf(answ[2], "y`=(1/sqrt(1-(%s)^2))*.(%s)", ab, poly2ns(buf[2], 1, a,2,-3,2,"x"));
    sprintf(answ[3], "y`=(1/sqrt(1-(%s)^2))*.(%s)", ab, poly2ns(buf[2], 1, 1,2,-3,2,"x"));
}

void deriv2b1210 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", poly2ns(buf[0], 2, a,1,-1,2,"x", b,1,1,1,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=arccos(%s)", ab);
    sprintf(src, "y=arccos(a/sqrt(x)+b)");

    sprintf(answ[0], "y`=(-1/sqrt(1-(%s)^2))*.(%s)", ab, poly2ns(buf[2], 1, -a,2,-3,2,"x"));
    sprintf(answ[1], "y`=(-1/sqrt(1-(%s)^2))*.(%s)", ab, poly2ns(buf[2], 1, -1,2,-3,2,"x"));
    sprintf(answ[2], "y`=(-1/sqrt(1-(%s)^2))*.(%s)", ab, poly2ns(buf[2], 1, a,2,-3,2,"x"));
    sprintf(answ[3], "y`=(-1/sqrt(1-(%s)^2))*.(%s)", ab, poly2ns(buf[2], 1, 1,2,-3,2,"x"));
}

void deriv2b1211 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", poly2ns(buf[0], 2, a,1,-1,2,"x", b,1,1,1,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=arctg(%s)", ab);
    sprintf(src, "y=arctg(a/sqrt(x)+b)");

    sprintf(answ[0], "y`=(1/(1+(%s)^2))*.(%s)", ab, poly2ns(buf[2], 1, -a,2,-3,2,"x"));
    sprintf(answ[1], "y`=(1/(1+(%s)^2))*.(%s)", ab, poly2ns(buf[2], 1, -1,2,-3,2,"x"));
    sprintf(answ[2], "y`=(1/(1+(%s)^2))*.(%s)", ab, poly2ns(buf[2], 1, a,2,-3,2,"x"));
    sprintf(answ[3], "y`=(1/(1+(%s)^2))*.(%s)", ab, poly2ns(buf[2], 1, 1,2,-3,2,"x"));
}

void deriv2b1212 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
    chprintf(task, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char ab[BUFSZ];
    chprintf(ab, "(%s)", poly2ns(buf[0], 2, a,1,-1,2,"x", b,1,1,1,""));

    catprintf(task, "String(\"Найти производную указанной функции:\")");
    catprintf(task, "\ny=arcctg(%s)", ab);
    sprintf(src, "y=arcctg(a/sqrt(x)+b)");

    sprintf(answ[0], "y`=(-1/(1+(%s)^2))*.(%s)", ab, poly2ns(buf[2], 1, -a,2,-3,2,"x"));
    sprintf(answ[1], "y`=(-1/(1+(%s)^2))*.(%s)", ab, poly2ns(buf[2], 1, -1,2,-3,2,"x"));
    sprintf(answ[2], "y`=(-1/(1+(%s)^2))*.(%s)", ab, poly2ns(buf[2], 1, a,2,-3,2,"x"));
    sprintf(answ[3], "y`=(-1/(1+(%s)^2))*.(%s)", ab, poly2ns(buf[2], 1, 1,2,-3,2,"x"));
}




