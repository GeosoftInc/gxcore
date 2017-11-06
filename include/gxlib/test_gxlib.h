//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file test_gxlib.h
* @date 2017-11-06
* @brief File containing TEST GX C API constant and function declarations
*/

/**
* @defgroup TEST_Module TEST
* Used to place special testing methods
* @{
*/

#pragma once
#ifndef HTEST_H_DEFINED
#define HTEST_H_DEFINED

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
* Forcefully disable ArEngine license availability for testing purposes
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  enable TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4.2
*/
GX_EXPORT void EnableDisableArcEngineLicense_TEST(void* p_geo, const int32_t* enable);

/**
* Test availability of an ArEngine license on this system
*
* @param[in]  p_geo GX Context Pointer
* @return 0 - Not available, 1 - Available
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT int32_t iArcEngineLicense_TEST(void* p_geo);

/**
* Checks to see if we are running inside testing system
*
* @param[in]  p_geo GX Context Pointer
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4.2
*/
GX_EXPORT int32_t iTestMode_TEST(void* p_geo);

/**
* Test to make sure all wrappers are valid linking
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  funcs TODO
* @param[in]  log TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.1
*/
GX_EXPORT void WrapperTest_TEST(void* p_geo, const char* funcs, const char* log);

/**
* Generic Class Test Wrapper
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  cl TODO
* @param[in]  log TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.2
*/
GX_EXPORT void CoreClass_TEST(void* p_geo, const char* cl, const char* log);

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
