//============================================================================
// GEOXTOOL - Geosoft External Tool Interface
//============================================================================
//
// The GEOXTOOL interface is designed to allow 3rd party developers to build
// tools that will work inside Oasis Montaj. This file describes the functions
// required to make those tools.
//
//============================================================================

#ifndef GEOSOFT_GEOXTOOL
#define GEOSOFT_GEOXTOOL



// --- Main Function Pointers ---

typedef struct {

    // ---------------------------- Required Functions ---------------------------

    void   (_cdecl *Destr_GEOXTOOL)(void*);
    
    
    // ---------------------------- Optional Functions ---------------------------
    
    void   (_cdecl *Flush_GEOXTOOL)(void*);
    void   (_cdecl *ShowHelp_GEOXTOOL)(void*);
    
    
    // ----------------------- Optional Message Handlers ------------------------
 
    void   (_cdecl *HandleChangeProjection_GEOXTOOL)(void*,long);
    void   (_cdecl *HandleChangeLocation_GEOXTOOL)(void*,double,double,double);
    void   (_cdecl *HandleChangeArea_GEOXTOOL)(void*,double,double,double,double);
    void   (_cdecl *HandleCommand_GEOXTOOL)(void*,long,const wchar_t*);
    void   (_cdecl *HandleGeneralInfo_GEOXTOOL)(void*,const wchar_t*,const wchar_t*);

} GEOXTOOL_INTERFACE;




//============================================================================
//                            CORE FUNCTIONS
//============================================================================

//----------------------------------------------------------------------------
// hCreate_GEOXTOOL  Create your external Tool
//
// Returns           x - Handle to external tool
//
// void * _cdecl
// hCreate_GEOXTOOL(void *,  // Geosoft Handle
//                  HWND ,   // Parent Window
//                  long ,   // META object to get info from
//                  HWND *,  // Filled with new HWND of your tool
//            const GEOXTOOL_API *,        // API functions you can call
//                  GEOXTOOL_INTERFACE *); // Filled with function pointers

//----------------------------------------------------------------------------
// Destr_GEOXTOOL  Destroy the tool and all its resources
//
// Returns         Nothing
//
// void  _cdecl  
// Destr_GEOXTOOL(void *);  // Geosoft Handle






//============================================================================
//                            OPTIONAL FUNCTIONS
//============================================================================


//----------------------------------------------------------------------------
// Flush_GEOXTOOL  Flush all tool settings to the tool META
//
// Returns         Nothing
//
// void  _cdecl  
// Flush_GEOXTOOL(void *);  // Tool Handle







//============================================================================
//                              MESSAGE FUNCTIONS
//============================================================================

//----------------------------------------------------------------------------
// HandleChangeProjection_GEOXTOOL  The projection changes.
//
// Notes                            The IPJ handle should not be changed.
//
// Returns                          Nothing
//
// void  _cdecl  
// HandleChangeProjection_GEOXTOOL(void *,  // Tool Handle
//                                 long);   // IPJ object
    

//----------------------------------------------------------------------------
// HandleChangeLocation_GEOXTOOL  The location pointer has changed locations.
//
// Notes                          The points are related to the projection set.
//
// Returns                        Nothing
//
// void  _cdecl  
// HandleChangeLocation_GEOXTOOL(void *,  // Tool Handle
//                               double,  // X Location
//                               double,  // Y Location
//                               double); // Z Location



//----------------------------------------------------------------------------
// HandleChangeArea_GEOXTOOL  The visible area has changed.
//
// Notes                      The visible area is related to the current projection.
//
// Returns                    Nothing
//
// void  _cdecl  
// HandleChangeArea_GEOXTOOL(void *,  // Tool Handle
//                           double,  // X Min
//                           double,  // Y Min
//                           double,  // X Max
//                           double); // Y Max


//----------------------------------------------------------------------------
// HandleCommand_GEOXTOOL     Handle a direct command
//
// Returns                    Nothing
//
// void  _cdecl  
// HandleCommand_GEOXTOOL(void *,  // Tool Handle
//                        long  ,  // Command ID
//                  const char *); // Command Name


//----------------------------------------------------------------------------
// HandleGeneralInfo_GEOXTOOL     Handle a general Information message
//
// Returns                        Nothing
//
// void  _cdecl  
// HandleCommand_GEOXTOOL(void *,  // Tool Handle
//                  const char *,  // Class
//                  const char *); // Info




//============================================================================
//
// The GEOXTOOL API defines functions that can be used to interact with 
// oasis montaj that are not available in the general GX API.
//
//============================================================================


// --- API Functions ---

typedef struct {

    void   *pHandle;            // Handle to be passed to all functions in this structure
    
    void   (_cdecl *ChangeProjection_GEOXTOOLAPI)(void*,long);
    void   (_cdecl *ChangeLocation_GEOXTOOLAPI)(void*,double,double,double);
    void   (_cdecl *ChangeArea_GEOXTOOLAPI)(void*,double,double,double,double);

} GEOXTOOL_API;



//----------------------------------------------------------------------------
// ChangeProjection_GEOXTOOLAPI  Change the projection
//
// Notes                         This affects only points you are sending out
//                               not the points you will be receiving.
//
// Returns                       Nothing
//
// void  _cdecl  
// ChangeProjection_GEOXTOOLAPI(void *,  // API Handle
//                              long);   // IPJ object
    

//----------------------------------------------------------------------------
// ChangeLocation_GEOXTOOLAPI  Change the location.
//
// Notes                       The points are based on the projection you set
//                             with ChangeProject_GEOXTOOLAPI.
//
// Returns                     Nothing
//
// void  _cdecl  
// ChangeLocation_GEOXTOOLAPI(void *,  // API Handle
//                            double,  // X Location
//                            double,  // Y Location
//                            double); // Z Location



//----------------------------------------------------------------------------
// ChangeArea_GEOXTOOLAPI   The visible area has changed.
//
// Notes                    The visible area is related to the current projection.
//
// Returns                  Nothing
//
// void  _cdecl  
// ChangeArea_GEOXTOOLAPI(void *,  // API Handle
//                        double,  // X Min
//                        double,  // Y Min
//                        double,  // X Max
//                        double); // Y Max



#endif