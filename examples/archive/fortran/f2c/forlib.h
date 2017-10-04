/*--------------------------------------------------------------------------*/
/* Fortran Internal Function inline definitions.*/
/**/
/*--------------------------------------------------------------------------*/

#pragma once

#define log10e 0.43429448190325182765

/* ---- String Handling ---*/

GS_EXPORT integer pascal s_cmp(char*, char*, ftnlen, ftnlen);
GS_EXPORT void pascal s_cat(char*, char**, integer*, integer*, ftnlen);
#ifndef HAVE_VANILLA_F2C
GS_EXPORT void pascal s_copy(char*, char*, ftnlen, ftnlen);
#endif
GS_EXPORT integer pascal s_rnge(char*, integer, char*, integer);


/* --- Short Math Functions ---*/

GS_EXPORT short pascal h_abs(short*);
GS_EXPORT short pascal h_dnnt(double*);
GS_EXPORT short pascal h_indx(char*, char*, ftnlen, ftnlen);
GS_EXPORT short pascal h_nint(float*);
GS_EXPORT short pascal h_sign(short*, short*);


/* --- Integer Math Functions ---*/

GS_EXPORT integer pascal i_abs(integer*);
GS_EXPORT integer pascal i_dnnt(double*);
GS_EXPORT integer pascal i_indx(char*, char*, ftnlen, ftnlen);
GS_EXPORT integer pascal i_nint(float*);
GS_EXPORT integer pascal i_sign(integer*, integer*);


/* --- Float Math Functions ---*/

GS_EXPORT double pascal f__cabs(double, double);
GS_EXPORT double pascal r_abs(float*);
GS_EXPORT double pascal r_int(float*);
GS_EXPORT double pascal r_mod(float*, float*);
GS_EXPORT double pascal r_nint(float*);
GS_EXPORT double pascal r_sign(float*, float*);


/* --- Double Math Functions ---*/

GS_EXPORT double pascal d_abs(double*);
GS_EXPORT double pascal d_int(double*);
GS_EXPORT double pascal d_mod(double*, double*);
GS_EXPORT double pascal d_nint(double*);
GS_EXPORT double pascal d_sign(double*, double*);


/* --- Complex Math Functions ---*/

GS_EXPORT void pascal c_sin(complex*, complex*);
GS_EXPORT void pascal c_cos(complex*, complex*);
GS_EXPORT void pascal c_exp(complex*, complex*);
GS_EXPORT void pascal c_log(complex*, complex*);
GS_EXPORT void pascal c_sqrt(complex*, complex*);
GS_EXPORT void pascal c_div(complex*, complex*, complex*);
GS_EXPORT void pascal r_cnjg(complex*, complex*);


/* --- Double Complex Math Functions ---*/

GS_EXPORT void pascal z_sin(doublecomplex*, doublecomplex*);
GS_EXPORT void pascal z_cos(doublecomplex*, doublecomplex*);
GS_EXPORT void pascal z_exp(doublecomplex*, doublecomplex*);
GS_EXPORT void pascal z_log(doublecomplex*, doublecomplex*);
GS_EXPORT void pascal z_sqrt(doublecomplex*, doublecomplex*);
GS_EXPORT void pascal z_div(doublecomplex*, doublecomplex*, doublecomplex*);


/* --- Power Functions ---*/

GS_EXPORT void pascal pow_ci(complex*, complex*, integer*);
GS_EXPORT double pascal pow_di(double*, integer*);
GS_EXPORT short pascal pow_hh(short*, shortint*);
GS_EXPORT integer pascal pow_ii(integer*, integer*);
GS_EXPORT double pascal pow_ri(float*, integer*);
GS_EXPORT void pascal pow_zi(doublecomplex*, doublecomplex*, integer*);
GS_EXPORT void pascal pow_zz(doublecomplex*, doublecomplex*, doublecomplex*);


/*--------------------------------------------------------------------------*/
/*                          SHORT MATH */
/*--------------------------------------------------------------------------*/

inline shortint pascal h_len(char* s, ftnlen n)
{
   return ((shortint)n);
}

inline shortint pascal h_dim(shortint* a, shortint* b)
{
   return ((shortint)(*a > *b ? *a - *b : 0));
}

inline shortint pascal h_mod(short* a, short* b)
{
   return ((shortint)(*a % *b));
}

inline shortlogical pascal hl_ge(char* a, char* b, ftnlen la, ftnlen lb)
{
   return ((shortlogical)(s_cmp(a, b, la, lb) >= 0));
}

inline shortlogical pascal hl_gt(char* a, char* b, ftnlen la, ftnlen lb)
{
   return ((shortlogical)(s_cmp(a, b, la, lb) > 0));
}

inline shortlogical pascal hl_le(char* a, char* b, ftnlen la, ftnlen lb)
{
   return ((shortlogical)(s_cmp(a, b, la, lb) <= 0));
}

inline shortlogical pascal hl_lt(char* a, char* b, ftnlen la, ftnlen lb)
{
   return ((shortlogical)(s_cmp(a, b, la, lb) < 0));
}


/*--------------------------------------------------------------------------*/
/*                           INTEGER MATH*/
/*--------------------------------------------------------------------------*/

inline integer pascal i_dim(integer* a, integer* b)
{
   return (*a > *b ? *a - *b : 0);
}

inline integer pascal i_len(char* s, ftnlen n)
{
   return ((integer)n);
}

inline integer pascal i_mod(integer* a, integer* b)
{
   return (*a % *b);
}


/*--------------------------------------------------------------------------*/
/*                             LOGIC*/
/*--------------------------------------------------------------------------*/

inline logical pascal l_ge(char* a, char* b, ftnlen la, ftnlen lb)
{
   return (s_cmp(a, b, la, lb) >= 0);
}

inline logical pascal l_gt(char* a, char* b, ftnlen la, ftnlen lb)
{
   return (s_cmp(a, b, la, lb) > 0);
}

inline logical pascal l_le(char* a, char* b, ftnlen la, ftnlen lb)
{
   return (s_cmp(a, b, la, lb) <= 0);
}

inline logical pascal l_lt(char* a, char* b, ftnlen la, ftnlen lb)
{
   return (s_cmp(a, b, la, lb) < 0);
}


/*--------------------------------------------------------------------------*/
/*                              FLOAT MATH */
/*--------------------------------------------------------------------------*/

inline double pascal r_sin(real* x)
{
   return (sin(*x));
}

inline double pascal r_asin(real* x)
{
   return (asin(*x));
}

inline double pascal r_sinh(real* x)
{
   return (sinh(*x));
}

inline double pascal r_cos(real* x)
{
   return (cos(*x));
}

inline double pascal r_acos(real* x)
{
   return (acos(*x));
}

inline double pascal r_cosh(real* x)
{
   return (cosh(*x));
}

inline double pascal r_tan(real* x)
{
   return (tan(*x));
}

inline double pascal r_atan(real* x)
{
   return (atan(*x));
}

inline double pascal r_atn2(real* x, real* y)
{
   return (atan2(*x, *y));
}

inline double pascal r_tanh(real* x)
{
   return (tanh(*x));
}

inline double pascal r_lg10(real* x)
{
   return (log10e * log(*x));
}

inline double pascal r_log(real* x)
{
   return (log(*x));
}

inline double pascal r_exp(real* x)
{
   return (exp(*x));
}

inline double pascal r_sqrt(real* x)
{
   return (sqrt(*x));
}

inline double pascal r_dim(real* a, real* b)
{
   return (*a > *b ? *a - *b : 0);
}

inline double pascal r_imag(complex* z)
{
   return (z->i);
}


/*--------------------------------------------------------------------------*/
/*                              DOUBLE MATH */
/*--------------------------------------------------------------------------*/

inline double pascal d_sin(doublereal* x)
{
   return (sin(*x));
}

inline double pascal d_asin(doublereal* x)
{
   return (asin(*x));
}

inline double pascal d_sinh(doublereal* x)
{
   return (sinh(*x));
}

inline double pascal d_cos(doublereal* x)
{
   return (cos(*x));
}

inline double pascal d_acos(doublereal* x)
{
   return (acos(*x));
}

inline double pascal d_cosh(doublereal* x)
{
   return (cosh(*x));
}

inline double pascal d_tan(doublereal* x)
{
   return (tan(*x));
}

inline double pascal d_atan(doublereal* x)
{
   return (atan(*x));
}

inline double pascal d_atn2(doublereal* x, doublereal* y)
{
   return (atan2(*x, *y));
}

inline double pascal d_tanh(doublereal* x)
{
   return (tanh(*x));
}

inline double pascal d_lg10(doublereal* x)
{
   return (log10e * log(*x));
}

inline double pascal d_log(doublereal* x)
{
   return (log(*x));
}

inline double pascal d_exp(doublereal* x)
{
   return (exp(*x));
}

inline double pascal d_sqrt(doublereal* x)
{
   return (sqrt(*x));
}

inline double pascal d_imag(doublecomplex* z)
{
   return (z->i);
}

inline double pascal d_dim(doublereal* a, doublereal* b)
{
   return (*a > *b ? *a - *b : 0);
}

inline double pascal d_prod(real* x, real* y)
{
   return ((*x) * (*y));
}

inline double pascal d_cnjg(doublecomplex* r, doublecomplex* z)
{
   r->r = z->r;
   r->i = -z->i;
   return (0.0);
}

/*--------------------------------------------------------------------------*/
/*                             COMPLEX MATH*/
/*--------------------------------------------------------------------------*/

inline double pascal c_abs(complex* z)
{
   return (f__cabs(z->r, z->i));
}


/*--------------------------------------------------------------------------*/
/*                         DOUBLE COMPLEX MATH */
/*--------------------------------------------------------------------------*/

inline double pascal z_abs(doublecomplex* z)
{
   return (f__cabs(z->r, z->i));
}


/*--------------------------------------------------------------------------*/
/*                            POWER MATH */
/*--------------------------------------------------------------------------*/

inline double pascal pow_dd(doublereal* ap, doublereal* bp)
{
   return (pow(*ap, *bp));
}


/*--------------------------------------------------------------------------*/

GS_EXPORT double erf(double);
GS_EXPORT double erfc(double);
GS_EXPORT double erf(double);
GS_EXPORT double erfc(double);

inline double pascal erf_(real* x)
{
   return (erf(*x));
}

inline double pascal erfc_(real* x)
{
   return (erfc(*x));
}

inline double pascal derf_(doublereal* x)
{
   return (erf(*x));
}

inline double pascal derfc_(doublereal* x)
{
   return (erfc(*x));
}

inline integer pascal ef1cmc_(ftnint* a, ftnlen* la, ftnint* b, ftnlen* lb)
{
   return (s_cmp((char*)a, (char*)b, *la, *lb));
}


/*--------------------------------------------------------------------------*/
/*                            VAX EXTENSIONS                                */
/*--------------------------------------------------------------------------*/

inline logical pascal btest_(integer* j, integer* k)
{
   return ((1 << *k) && *j);
}
