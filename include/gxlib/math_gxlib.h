//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file math_gxlib.h
* @date 2017-11-06
* @brief File containing MATH GX C API constant and function declarations
*/

/**
* @defgroup MATH_Module MATH
* This is not a class. This is a collection of standard
* mathematical functions, including most of the common
* logarithmic and geometric functions.
* @{
*/

#pragma once
#ifndef HMATH_H_DEFINED
#define HMATH_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code



/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Cross product of two vectors.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  x1 TODO
* @param[in]  y1 TODO
* @param[in]  z1 TODO
* @param[in]  x2 TODO
* @param[in]  y2 TODO
* @param[in]  z2 TODO
* @param[out] x3 TODO
* @param[out] y3 TODO
* @param[out] z3 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void CrossProduct_MATH(void* p_geo, const double* x1, const double* y1, const double* z1, const double* x2, const double* y2, const double* z2, double* x3, double* y3, double* z3);

/**
* Calculate absolute value
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  n TODO
* @return Integer
**
* @par Note 
*      Dummy values return dummy
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iAbs_MATH(void* p_geo, const int32_t* n);

/**
* Return the unary operation result of A & B
* 
* Returns			an integer number
* 
* If A or B is a dummy, returns dummy.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pi_val1 TODO
* @param[in]  pi_val2 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iAnd_MATH(void* p_geo, const int32_t* pi_val1, const int32_t* pi_val2);

/**
* Calculates the modulus of two integers
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  a TODO
* @param[in]  b TODO
* @return Int
**
* @par Note 
*      If A or B is a dummy, returns dummy.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iMod_MATH(void* p_geo, const int32_t* a, const int32_t* b);

/**
* Return the unary operation result of A | B
* 
* Returns			an integer number
* 
* If A or B is a dummy, returns dummy.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pi_val1 TODO
* @param[in]  pi_val2 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iOr_MATH(void* p_geo, const int32_t* pi_val1, const int32_t* pi_val2);

/**
* Round to the nearest whole number
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  z TODO
* @return Integer
**
* @par Note 
*      Negative values with decimal parts larger than .5 round down (-1.5 -> 2.0)
*      Positive values with decimal parts larger than .5 round up (1.5 -> 2.0)
*      Dummy values return dummy
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iRound_MATH(void* p_geo, const double* z);

/**
* Return the unary operation result of A ^ B
* 
* Returns			an integer number
* 
* If A or B is a dummy, returns dummy.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pi_val1 TODO
* @param[in]  pi_val2 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iXor_MATH(void* p_geo, const int32_t* pi_val1, const int32_t* pi_val2);

/**
* Finds nicer min, max values for logarithmic plot scales.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] min TODO
* @param[out] max TODO
* @param[in]  fine TODO
**
* @par Note 
*      Will fail if the input upper bound is less than the lower
*      bound, but will work if the two values are equal.
*      The input bounds are overwritten.
*      
*      Input lower and upper bounds, returns "nicer" values.
*      If the Fine flag is set to TRUE, the values will have the
*      form N x 10^Y, where N is a value from 1 to 9, and 10^Y
*      is an integral power of 10. If the Fine flag is set to
*      FALSE, the scaling is coarse, and the bounding exact
*      powers of 10 are returned.
*      For example,  the values (.034, 23) return (.03, 30) for
*      fine scaling, and (0.01, 100) for coarse scaling.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT void NicerLogScale_MATH(void* p_geo, double* min, double* max, const int32_t* fine);

/**
* Compute a nicer scale for a given min and max.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] min TODO
* @param[out] max TODO
* @param[out] inc TODO
* @param[out] pow TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT void NicerScale_MATH(void* p_geo, double* min, double* max, double* inc, int32_t* pow);

/**
* Scale a vector to unit length.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] x TODO
* @param[out] y TODO
* @param[out] z TODO
**
* @par Note 
*      Divides each component by the vector
*      magnitude.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void Normalise3D_MATH(void* p_geo, double* x, double* y, double* z);

/**
* Calculate absolute value
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  z TODO
* @return Real
**
* @par Note 
*      Dummy values return dummy
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rAbs_MATH(void* p_geo, const double* z);

/**
* Calculate the arccosine
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  val TODO
* @return Real
**
* @par Note 
*      Dummy values or values < -1 or > 1 return dummy
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rArcCos_MATH(void* p_geo, const double* val);

/**
* Calculate the arcsin
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  val TODO
* @return Real
**
* @par Note 
*      Dummy values or values < -1 or > 1 return dummy
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rArcSin_MATH(void* p_geo, const double* val);

/**
* Calculate the arctan
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  val TODO
* @return Real
**
* @par Note 
*      Dummy values return dummy
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rArcTan_MATH(void* p_geo, const double* val);

/**
* Calculate ArcTan(Y/X)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  y TODO
* @param[in]  x TODO
* @return Real
**
* @par Note 
*      If either X or Y is a dummy, returns dummy
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rArcTan2_MATH(void* p_geo, const double* y, const double* x);

/**
* Calculates the ceiling of the value
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  z TODO
* @return Real
**
* @par Note 
*      Dummy values return dummy
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rCeil_MATH(void* p_geo, const double* z);

/**
* Calculate the cosine
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  val TODO
* @return Real
**
* @par Note 
*      Dummy values return dummy
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rCos_MATH(void* p_geo, const double* val);

/**
* Compute Dot product of two vectors.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  x1 TODO
* @param[in]  y1 TODO
* @param[in]  z1 TODO
* @param[in]  x2 TODO
* @param[in]  y2 TODO
* @param[in]  z2 TODO
* @return Dot product
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT double rDotProduct3D_MATH(void* p_geo, const double* x1, const double* y1, const double* z1, const double* x2, const double* y2, const double* z2);

/**
* Calculate e raised to the power of X
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  val TODO
* @return Real
**
* @par Note 
*      Dummy values return dummy
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rExp_MATH(void* p_geo, const double* val);

/**
* Calculates the floor of the value
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  z TODO
* @return Real
**
* @par Note 
*      Dummy values return dummy
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rFloor_MATH(void* p_geo, const double* z);

/**
* sqrt(X*X + Y*Y)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  x TODO
* @param[in]  y TODO
* @return Real
**
* @par Note 
*      If either X or Y is a dummy, the returned value is dummy
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rHypot_MATH(void* p_geo, const double* x, const double* y);

/**
* Performs lambda transform on a value.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  z TODO
* @param[in]  lda TODO
* @return The lambda transformed value
**
* @par Note 
*      Returns 0 for input Z = 0.
*      returns log10(Z) for lambda = 0.
*      returns (Z^lambda - 1)/lambda for Z > 0.
*      returns dummy for Z = dummy.
*
* @par See also 
*      rLambdaTransRev_MATH
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rLambdaTrans_MATH(void* p_geo, const double* z, const double* lda);

/**
* Performs a reverse lambda transform on a value.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  z TODO
* @param[in]  lda TODO
* @return The original non-lambda transformed value
**
* @par Note 
*      See rLambdaTrans.
*
* @par See also 
*      rLambdaTrans_MATH
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rLambdaTransRev_MATH(void* p_geo, const double* z, const double* lda);

/**
* Calculate the natural log
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  val TODO
* @return Real
**
* @par Note 
*      Dummy values return dummy
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rLog_MATH(void* p_geo, const double* val);

/**
* Calculate the base 10 log
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  val TODO
* @return Real
**
* @par Note 
*      Dummy values return dummy
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rLog10_MATH(void* p_geo, const double* val);

/**
* Given a Z value and the Log style and Log Minimum this
* function will return the log value.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  z TODO
* @param[in]  mode TODO
* @param[in]  min TODO
* @return The Log Value.
**
* @par Note 
*      Mode = 0 (regular log mode) returns:
*      
*      ::
*      
*          Log10(Z)  for Z > minimum
*          Log10(minimum) for Z <= minimum
*      
*      
*      Mode = 1 (log / linear / negative log mode) returns:
*      
*      ::
*      
*          minimum * ( log10( |Z| / minimum) + 1 )   for Z > minimum
*          Z for |Z| <= minimum   (the linear part of the range)
*          -minimum * ( log10( |Z| / minimum) + 1 )   for Z < -minimum
*
* @par See also 
*      rUnLogZ_MATH
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rLogZ_MATH(void* p_geo, const double* z, const int32_t* mode, const double* min);

/**
* Calculates the modulus of two reals (A mod B)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  a TODO
* @param[in]  b TODO
* @return Real
**
* @par Note 
*      The modulus of A with respect to B is defined
*      as the difference of A with the largest integral multiple of B
*      smaller than or equal to A.
*      
*      e.g.   A  mod B
*      20 mod 10 = 0
*      20 mod 9 = 2
*      
*      f A or B is a dummy, returns dummy.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rMod_MATH(void* p_geo, const double* a, const double* b);

/**
* Rotate a vector about an axis.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  x1 TODO
* @param[in]  y1 TODO
* @param[in]  z1 TODO
* @param[in]  angle TODO
* @param[in]  x2 TODO
* @param[in]  y2 TODO
* @param[in]  z2 TODO
* @param[out] x3 TODO
* @param[out] y3 TODO
* @param[out] z3 TODO
**
* @par Note 
*      Rotates a vector by the input angle around an arbitrary axis.
*      Angles are measured clockwise looking along the axis (away from the origin).
*      Assumes a right hand coordinate system.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void RotateVector_MATH(void* p_geo, const double* x1, const double* y1, const double* z1, const double* angle, const double* x2, const double* y2, const double* z2, double* x3, double* y3, double* z3);

/**
* Calculate X raised to the power of Y
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  x TODO
* @param[in]  y TODO
* @return Real
**
* @par Note 
*      If either X or Y is a dummy, returns dummy
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rPow_MATH(void* p_geo, const double* x, const double* y);

/**
* Get a  random number between 0 and 1
*
* @param[in]  p_geo GX Context Pointer
* @return A real number
**
* @par Note 
*      Use SRand_MATH to seed the random number generator before a series of
*      calls to this function are made.
*      The standard "C" function rand() is called.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT double rRand_MATH(void* p_geo);

/**
* Round to n significant digits
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  z TODO
* @param[in]  n TODO
* @return Real
**
* @par Note 
*      Negative values ending in 5XXX to n sig digits round down
*      Positive values ending in 5XXX to n sig digits round up
*      Dummy values return dummy
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rRound_MATH(void* p_geo, const double* z, const int32_t* n);

/**
* Determine return value based on value of Z1
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  z_sign TODO
* @param[in]  z_val TODO
* @return |Z2| if Z1 > 0, -|Z2| if Z1 < 0, 0 if Z1 = 0, and Z2 if Z1 = Dummy
**
* @par Note 
*      Dummy values return dummy
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rSign_MATH(void* p_geo, const double* z_sign, const double* z_val);

/**
* Calculate the sin
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  val TODO
* @return Real
**
* @par Note 
*      Dummy values return dummy
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rSin_MATH(void* p_geo, const double* val);

/**
* Calculate the square root
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  val TODO
* @return Real
**
* @par Note 
*      Dummy values return dummy
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rSqrt_MATH(void* p_geo, const double* val);

/**
* Calculate the tangent
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  val TODO
* @return Real
**
* @par Note 
*      Dummy values return dummy
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rTan_MATH(void* p_geo, const double* val);

/**
* Inverse of rLogZ
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  z TODO
* @param[in]  mode TODO
* @param[in]  min TODO
* @return The original value
**
* @par Note 
*      See Notes for rLogZ.
*
* @par See also 
*      rLogZ_MATH
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rUnLogZ_MATH(void* p_geo, const double* z, const int32_t* mode, const double* min);

/**
* Seed the random-number generator with current time
*
* @param[in]  p_geo GX Context Pointer
**
* @par Note 
*      Use the rRand_MATH function to create a random number between  0 and 1.
*      The standard "C" function srand() is called.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void SRand_MATH(void* p_geo);

///@}


//*** endblock Generated

//*** block Editable
//** NOTICE: The code generator will not replace the code in this block
//*** endblock Editable


//*** block Footer
#ifdef __cplusplus
}
#endif

/** @} */

#endif
//*** endblock Footer
