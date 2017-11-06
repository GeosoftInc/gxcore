//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file du_gxlib.h
* @date 2017-11-06
* @brief File containing DU GX C API constant and function declarations
*/

/**
* @defgroup DU_Module DU
* DU functions provide a variety of common utilities that can be applied
* efficiently to the contents of a database. Most DU library functions take
* as their first argument a DB object, and apply standard processes to data
* stored in an OASIS database, including import and export functions.
*
* Notes:
*
* The following defines are used by GX functions but are not required
* for any methods:
* 
* DU_LINES
*
* @{
*/

#pragma once
#ifndef HDU_H_DEFINED
#define HDU_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name DB_DUP Definitions
* 
* Duplicate Types
*/
///@{
/** 
* DB_DUP_FIRST
*/
#define DB_DUP_FIRST 1
/** 
* DB_DUP_AVERAGE
*/
#define DB_DUP_AVERAGE 2
/** 
* DB_DUP_MINIMUM
*/
#define DB_DUP_MINIMUM 3
/** 
* DB_DUP_MAXIMUM
*/
#define DB_DUP_MAXIMUM 4
/** 
* DB_DUP_MEDIAN
*/
#define DB_DUP_MEDIAN 5
/** 
* DB_DUP_LAST
*/
#define DB_DUP_LAST 6
///@}

/**
* @name DB_DUPEDIT Definitions
* 
* Duplicate Edit Flags
*/
///@{
/** 
* DB_DUPEDIT_SINGLE
*/
#define DB_DUPEDIT_SINGLE 0
/** 
* DB_DUPEDIT_ALL
*/
#define DB_DUPEDIT_ALL 1
///@}

/**
* @name DU_CHANNELS Definitions
* 
* Channels to Display
*/
///@{
/** 
* DU_CHANNELS_DISPLAYED
*/
#define DU_CHANNELS_DISPLAYED 0
/** 
* DU_CHANNELS_ALL
*/
#define DU_CHANNELS_ALL 1
///@}

/**
* @name DU_EXPORT Definitions
* 
* Export Type
*/
///@{
/** 
* DU_EXPORT_CSV
*/
#define DU_EXPORT_CSV 0
/** 
* DU_EXPORT_ODDF
*/
#define DU_EXPORT_ODDF 1
/** 
* DU_EXPORT_POST_PC
*/
#define DU_EXPORT_POST_PC 2
/** 
* DU_EXPORT_POST_UNIX
*/
#define DU_EXPORT_POST_UNIX 3
///@}

/**
* @name DU_FILL Definitions
* 
* Filling Options
*/
///@{
/** 
* DU_FILL_INSIDE
*/
#define DU_FILL_INSIDE 0
/** 
* DU_FILL_OUTSIDE
*/
#define DU_FILL_OUTSIDE 1
///@}

/**
* @name DU_IMPORT Definitions
* 
* Import Mode
*/
///@{
/** 
* DU_IMPORT_APPEND
*/
#define DU_IMPORT_APPEND 0
/** 
* DU_IMPORT_REPLACE
*/
#define DU_IMPORT_REPLACE 1
/** 
* DU_IMPORT_MERGE
*/
#define DU_IMPORT_MERGE 2
/** 
* DU_IMPORT_MERGE_APPEND
*/
#define DU_IMPORT_MERGE_APPEND 3
///@}

/**
* @name DU_INTERP Definitions
* 
* Inside Interpolation Method
*/
///@{
/** 
* DU_INTERP_NEAREST
*/
#define DU_INTERP_NEAREST 1
/** 
* DU_INTERP_LINEAR
*/
#define DU_INTERP_LINEAR 2
/** 
* DU_INTERP_CUBIC
*/
#define DU_INTERP_CUBIC 3
/** 
* DU_INTERP_AKIMA
*/
#define DU_INTERP_AKIMA 4
/** 
* DU_INTERP_PREDICT
*/
#define DU_INTERP_PREDICT 5
///@}

/**
* @name DU_INTERP_EDGE Definitions
* 
* Edge Interpolation Method
*/
///@{
/** 
* DU_INTERP_EDGE_NONE
*/
#define DU_INTERP_EDGE_NONE 0
/** 
* DU_INTERP_EDGE_SAME
*/
#define DU_INTERP_EDGE_SAME 1
/** 
* DU_INTERP_EDGE_NEAREST
*/
#define DU_INTERP_EDGE_NEAREST 2
/** 
* DU_INTERP_EDGE_LINEAR
*/
#define DU_INTERP_EDGE_LINEAR 3
///@}

/**
* @name DU_LAB_TYPE Definitions
* 
* File Types
*/
///@{
/** 
* DU_LAB_TYPE_FREE
* 
* The delimiter string identifies
* characters to be used as delimiters.  Use C style escape
* sequences to identify non-printable characters.  The
* default delimiters for FREE format files are " \t,".
*/
#define DU_LAB_TYPE_FREE 1
/** 
* DU_LAB_TYPE_COMMA
* 
* For COMMA type files, the delimiter string identifies
* characters to be removed before comma delimiting.  The
* default for COMMA delimited files is " \t".
*/
#define DU_LAB_TYPE_COMMA 2
///@}

/**
* @name DU_LEVEL Definitions
* 
* Leveling Options
*/
///@{
/** 
* DU_LEVEL_LINES
* 
* Extract line corrections
*/
#define DU_LEVEL_LINES 0
/** 
* DU_LEVEL_TIES
* 
* Extract tie corrections
*/
#define DU_LEVEL_TIES 1
/** 
* DU_LEVEL_ALL
* 
* Extract all corrections
*/
#define DU_LEVEL_ALL 2
///@}

/**
* @name DU_LINEOUT Definitions
* 
* Lineout Options (du.h)
*/
///@{
/** 
* DU_LINEOUT_SINGLE
*/
#define DU_LINEOUT_SINGLE 0
/** 
* DU_LINEOUT_MULTIPLE
*/
#define DU_LINEOUT_MULTIPLE 1
///@}

/**
* @name DU_FEATURE_TYPE_OUTPUT Definitions
* 
* Export to geodatabase feature type (du.h)
*/
///@{
/** 
* DU_FEATURE_TYPE_OUTPUT_POINT
*/
#define DU_FEATURE_TYPE_OUTPUT_POINT 0
/** 
* DU_FEATURE_TYPE_OUTPUT_LINE
*/
#define DU_FEATURE_TYPE_OUTPUT_LINE 1
///@}

/**
* @name DU_GEODATABASE_EXPORT_TYPE Definitions
* 
* Export to geodatabase overwrite mode(du.h)
*/
///@{
/** 
* DU_GEODATABASE_EXPORT_TYPE_OVERWRITE_GEODATABASE
*/
#define DU_GEODATABASE_EXPORT_TYPE_OVERWRITE_GEODATABASE 0
/** 
* DU_GEODATABASE_EXPORT_TYPE_OVERWRITE_FEATURECLASS
*/
#define DU_GEODATABASE_EXPORT_TYPE_OVERWRITE_FEATURECLASS 1
/** 
* DU_GEODATABASE_EXPORT_TYPE_APPEND
*/
#define DU_GEODATABASE_EXPORT_TYPE_APPEND 2
///@}

/**
* @name DU_LINES Definitions
* 
* Lines to display
*/
///@{
/** 
* DU_LINES_DISPLAYED
*/
#define DU_LINES_DISPLAYED 0
/** 
* DU_LINES_SELECTED
*/
#define DU_LINES_SELECTED 1
/** 
* DU_LINES_ALL
*/
#define DU_LINES_ALL 2
///@}

/**
* @name DU_LOADLTB Definitions
* 
* Load table options
*/
///@{
/** 
* DU_LOADLTB_REPLACE
*/
#define DU_LOADLTB_REPLACE 0
/** 
* DU_LOADLTB_APPEND
*/
#define DU_LOADLTB_APPEND 1
///@}

/**
* @name DU_LOOKUP Definitions
* 
* Lookup Mode
*/
///@{
/** 
* DU_LOOKUP_EXACT
* 
* Requires an exact match in all indexes.
* Results will dummy if Indexes are not found.
*/
#define DU_LOOKUP_EXACT 0
/** 
* DU_LOOKUP_NEAREST
* 
* Requires that the first index match exactly.
* The nearest second index will be used for the finding
* the lookup value.
* The results will be dummy only if the first index
* does not have a match.
*/
#define DU_LOOKUP_NEAREST 1
/** 
* DU_LOOKUP_INTERPOLATE
* 
* The same as _NEAREST, except that the value will
* be interpolated between the two nearest
* framing values in the table.
*/
#define DU_LOOKUP_INTERPOLATE 2
/** 
* DU_LOOKUP_NEARESTCLOSE
* 
* Same as _NEAREST mode except that the target
* value must be within the CLOSE distance to a
* table value.
* a) the primary index channel for single index
* lookups;
* b) the secondary index channel for
* double index lookups.
* Values not in data spacing are dummy.
*/
#define DU_LOOKUP_NEARESTCLOSE 3
/** 
* DU_LOOKUP_INTERPCLOSE
* 
* Same as _INTERPOLATE mode except that the target
* value must be within the CLOSE distance to a
* table value.
* a) the primary index channel for single index
* lookups;
* b) the secondary index channel for
* double index lookups.
* Values not in data spacing are dummy.
*/
#define DU_LOOKUP_INTERPCLOSE 4
/** 
* DU_LOOKUP_INTERPOLATE_DUMMYOUTSIDE
* 
* Interpolate between values, dummy beyond two ends
*/
#define DU_LOOKUP_INTERPOLATE_DUMMYOUTSIDE 5
/** 
* DU_LOOKUP_INTERPOLATE_CONSTOUTSIDE
* 
* Interpolate between values, constant end values beyond two ends
*/
#define DU_LOOKUP_INTERPOLATE_CONSTOUTSIDE 6
/** 
* DU_LOOKUP_INTERPOLATE_EXTPLOUTSIDE
* 
* Interpolate between values, extrapolate beyond two ends
*/
#define DU_LOOKUP_INTERPOLATE_EXTPLOUTSIDE 7
/** 
* DU_LOOKUP_MAXOPTION
* 
* Maximum option value
*/
#define DU_LOOKUP_MAXOPTION 8
///@}

/**
* @name DU_MASK Definitions
* 
* Masking Options
*/
///@{
/** 
* DU_MASK_INSIDE
*/
#define DU_MASK_INSIDE 0
/** 
* DU_MASK_OUTSIDE
*/
#define DU_MASK_OUTSIDE 1
///@}

/**
* @name DU_MERGE Definitions
* 
* Merge flags
*/
///@{
/** 
* DU_MERGE_APPEND
*/
#define DU_MERGE_APPEND 0
///@}

/**
* @name DU_MODFID Definitions
* 
* Fid Update Options
*/
///@{
/** 
* DU_MODFID_INSERT
* 
* Will insert fid range by moving data.  Inserted
* range will always be dummied out.  If the insertion point
* is before start of data, the fid start is changed.
*/
#define DU_MODFID_INSERT 0
/** 
* DU_MODFID_DELETE
* 
* Will delete the range of fids.
*/
#define DU_MODFID_DELETE 1
/** 
* DU_MODFID_APPEND
* 
* Is like INSERT, except that it is only used to
* add fids to the start or end of the existing data.  The
* data is not moved with repect to the current fid locations.
*/
#define DU_MODFID_APPEND 2
///@}

/**
* @name DU_MOVE Definitions
* 
* Move Style
*/
///@{
/** 
* DU_MOVE_ABSOLUTE
* 
* Move input to absolute value in control channel
*/
#define DU_MOVE_ABSOLUTE 0
/** 
* DU_MOVE_MINUS
* 
* Subtract control channel from input channel
*/
#define DU_MOVE_MINUS 1
/** 
* DU_MOVE_PLUS
* 
* Add control channel to input channel
*/
#define DU_MOVE_PLUS 2
/** 
* DU_MOVE_INTERP
* 
* data is NOT moved, but dummies in the input are interpolated
* based on the control channel, assuming both the input and control
* vary linearly inside the gaps
*/
#define DU_MOVE_INTERP 3
///@}

/**
* @name DU_REFID Definitions
* 
* Interpolation mode
*/
///@{
/** 
* DU_REFID_LINEAR
* 
* 0
*/
#define DU_REFID_LINEAR 0
/** 
* DU_REFID_MINCUR
* 
* 1
*/
#define DU_REFID_MINCUR 1
/** 
* DU_REFID_AKIMA
* 
* 2
*/
#define DU_REFID_AKIMA 2
/** 
* DU_REFID_NEAREST
* 
* 3
*/
#define DU_REFID_NEAREST 3
///@}

/**
* @name DU_SORT Definitions
* 
* Sort Direction
*/
///@{
/** 
* DU_SORT_ASCENDING
*/
#define DU_SORT_ASCENDING 0
/** 
* DU_SORT_DESCENDING
*/
#define DU_SORT_DESCENDING 1
///@}

/**
* @name DU_SPLITLINE Definitions
* 
* Sort Direction
*/
///@{
/** 
* DU_SPLITLINE_XYPOSITION
*/
#define DU_SPLITLINE_XYPOSITION 0
/** 
* DU_SPLITLINE_SEQUENTIAL
*/
#define DU_SPLITLINE_SEQUENTIAL 1
/** 
* DU_SPLITLINE_TOVERSIONS
*/
#define DU_SPLITLINE_TOVERSIONS 2
///@}

/**
* @name DU_STORAGE Definitions
* 
* Storage Type
*/
///@{
/** 
* DU_STORAGE_LINE
*/
#define DU_STORAGE_LINE 0
/** 
* DU_STORAGE_GROUP
*/
#define DU_STORAGE_GROUP 1
///@}

/**
* @name QC_PLAN_TYPE Definitions
* 
* Type Plan
*/
///@{
/** 
* QC_PLAN_SURVEYLINE
*/
#define QC_PLAN_SURVEYLINE 0
/** 
* QC_PLAN_TIELINE
*/
#define QC_PLAN_TIELINE 1
/** 
* QC_PLAN_BOTHLINES
*/
#define QC_PLAN_BOTHLINES 2
///@}

/**
* @name DU_DISTANCE_CHANNEL_TYPE Definitions
* 
* Distance channel direction type
*/
///@{
/** 
* DU_DISTANCE_CHANNEL_MAINTAIN_DIRECTION
* 
* Zero distance is always at the start of the line.
*/
#define DU_DISTANCE_CHANNEL_MAINTAIN_DIRECTION 0
/** 
* DU_DISTANCE_CHANNEL_CARTESIAN_COORDINATES
* 
* Put zero at the end of the line with min X if X changes most, or min Y if Y changes most
*/
#define DU_DISTANCE_CHANNEL_CARTESIAN_COORDINATES 1
///@}

/**
* @name DU_DIRECTGRID_METHOD Definitions
* 
* How to calculate the cell values for direct gridding.
*/
///@{
/** 
* DU_DIRECTGRID_MIN
*/
#define DU_DIRECTGRID_MIN 0
/** 
* DU_DIRECTGRID_MAX
*/
#define DU_DIRECTGRID_MAX 1
/** 
* DU_DIRECTGRID_MEAN
*/
#define DU_DIRECTGRID_MEAN 2
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Create a new channel using a single reference table
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  i_ch TODO
* @param[in]  o_ch TODO
* @param[in]  ref_field TODO
* @param[in]  l_field TODO
* @param[in]  mode TODO
* @param[in]  close TODO
* @param[in]  tb TODO
**
* @par Note 
*      Fails if table does not contain requested fields.
*      The nominal data sample spacing for the CLOSE options is
*      calculated by finding the fiducial increment the
*      - primary index channel for Lookup1C_DU;
*      - secondary index channel for Lookup2C_DU, LookupIValC_DU
*      and LookupRValC_DU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void _TableLook1_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* i_ch, const int32_t* o_ch, const char* ref_field, const char* l_field, const int32_t* mode, const double* close, const int32_t* tb);

/**
* Create a new channel using a double reference  table.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  r1_ch TODO
* @param[in]  r2_ch TODO
* @param[in]  o_ch TODO
* @param[in]  r1_field TODO
* @param[in]  r2_field TODO
* @param[in]  l_field TODO
* @param[in]  mode TODO
* @param[in]  close TODO
* @param[in]  tb TODO
**
* @par Note 
*      Fails if table does not contain requested fields.
*      The nominal data sample spacing for the CLOSE options is
*      calculated by finding the fiducial increment the
*      - primary index channel for Lookup1C_DU;
*      - secondary index channel for Lookup2C_DU, LookupIValC_DU
*      and LookupRValC_DU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void _TableLook2_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* r1_ch, const int32_t* r2_ch, const int32_t* o_ch, const char* r1_field, const char* r2_field, const char* l_field, const int32_t* mode, const double* close, const int32_t* tb);

/**
* Create a new channel using constant integer primary
* reference and a secondary reference table.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  val TODO
* @param[in]  i_ch TODO
* @param[in]  o_ch TODO
* @param[in]  r1 TODO
* @param[in]  r2 TODO
* @param[in]  field TODO
* @param[in]  mode TODO
* @param[in]  dist TODO
* @param[in]  tb TODO
**
* @par Note 
*      Fails if table does not contain requested fields.
*      The nominal data sample spacing for the CLOSE options is
*      calculated by finding the fiducial increment the
*      - primary index channel for Lookup1C_DU;
*      - secondary index channel for Lookup2C_DU, LookupIValC_DU
*      and LookupRValC_DU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void _TableLookI2_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* val, const int32_t* i_ch, const int32_t* o_ch, const char* r1, const char* r2, const char* field, const int32_t* mode, const double* dist, const int32_t* tb);

/**
* Create a new channel using a constant real primary
* reference and a secondary reference table.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  val TODO
* @param[in]  i_ch TODO
* @param[in]  o_ch TODO
* @param[in]  r1 TODO
* @param[in]  r2 TODO
* @param[in]  field TODO
* @param[in]  mode TODO
* @param[in]  dist TODO
* @param[in]  tb TODO
**
* @par Note 
*      Fails if table does not contain requested fields.
*      The nominal data sample spacing for the CLOSE options is
*      calculated by finding the fiducial increment the
*      - primary index channel for Lookup1C_DU;
*      - secondary index channel for Lookup2C_DU, LookupIValC_DU
*      and LookupRValC_DU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void _TableLookR2_DU(void* p_geo, const int32_t* db, const int32_t* line, const double* val, const int32_t* i_ch, const int32_t* o_ch, const char* r1, const char* r2, const char* field, const int32_t* mode, const double* dist, const int32_t* tb);

/**
* Scans a ADO-compliant database and returns the table names in a VV
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  connect TODO
* @param[in]  vv TODO
**
* @par Note 
*      The VV must be created to hold strings of length
*      STR_DB_SYMBOL; i.e. use
*      Creat_VV(-STR_DB_SYMBOL, 0), or it will assert.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.8
*/
GX_EXPORT void ADOTableNames_DU(void* p_geo, const char* connect, const int32_t* vv);

/**
* Calculate the Analytic Signal of a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  i_ch TODO
* @param[in]  o_ch TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void AnSig_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* i_ch, const int32_t* o_ch);

/**
* Append a source database onto a destination database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  d_bi TODO
* @param[in]  d_bo TODO
* @param[in]  ignore TODO
**
* @par Note 
*      If the source database and destination database have channels
*      with the same name, then data is appended onto the end
*      of the channel in lines which have the same number.
*      
*      If a channel in the destination database is not also in the source
*      database, it is ignored.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Append_DU(void* p_geo, const int32_t* d_bi, const int32_t* d_bo, const int32_t* ignore);

/**
* Returns average azimuth of selected lines.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  precision TODO
* @param[out] azimuth TODO
**
* @par Note 
*      Direction in degrees azimuth (clockwise relative
*      the +Y direction). The result is in the range
*      -90 < azimuth <= 90. The method handles lines going
*      in opposite directions (they do not average to 0!)
*      The method takes a precision, which is used to generate
*      a series of "test" angles.
*      The dot product of the line directions is taken
*      with each of the test angles, and the absolute values summed.
*      The maximum value occurs at the angle which most closely
*      approximates the trend direction of the lines.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void AvgAzimuth_DU(void* p_geo, const int32_t* db, const double* precision, double* azimuth);

/**
* This method corrects an entire database line using a
* time-based correction table. It is given 2 input channel
* tokens and 1 output channel token as well as the table
* object to use.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  in_ch TODO
* @param[in]  time_ch TODO
* @param[in]  out_ch TODO
* @param[in]  tb TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void BaseData_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* in_ch, const int32_t* time_ch, const int32_t* out_ch, const int32_t* tb);

/**
* This method corrects an entire database line using a
* time-based correction table. It is given 2 input channel
* tokens and 1 output channel token as well as the table
* object to use (table sort flag=1 for sort, =0 for no sort).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  in_ch TODO
* @param[in]  time_ch TODO
* @param[in]  out_ch TODO
* @param[in]  tb TODO
* @param[in]  flag TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void BaseDataEx_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* in_ch, const int32_t* time_ch, const int32_t* out_ch, const int32_t* tb, const int32_t* flag);

/**
* Set map boundary clip limits.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  x_chan TODO
* @param[in]  y_chan TODO
* @param[in]  pply TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void BoundLine_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* x_chan, const int32_t* y_chan, const int32_t* pply);

/**
* This method applies a band-pass filter to the specified
* line/channel and places the output in the output channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  i_ch TODO
* @param[in]  o_ch TODO
* @param[in]  sw TODO
* @param[in]  lw TODO
* @param[in]  filt_len TODO
**
* @par Note 
*      If the short and long wavelengths are <= 0, the input channel
*      is simply copied to the output channel without filtering.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void BPFilt_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* i_ch, const int32_t* o_ch, const double* sw, const double* lw, const int32_t* filt_len);

/**
* Break up a line based on line numbers in a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void BreakLine_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* chan);

/**
* Break up a line based on line numbers in a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
* @param[in]  reset_fi_ds TODO
**
* @par Note 
*      The same as BreakLine, but with an option to reset each line's starting fiducial to zero.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.4
*/
GX_EXPORT void BreakLine2_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* chan, const int32_t* reset_fi_ds);

/**
* Break up a line into group-lines based on a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
* @param[in]  cl TODO
**
* @par Note 
*      The original line will be deleted.
*      This is similar to BreakLine_DU, but the output lines
*      are "group" lines, without the line type letters at the
*      start. (See db.gxh for information of Group Lines).
*      All channels are associated with each group line, and the
*      input class name is assigned to each group.
*      Class names for
*      groups ensure that (for instance) if you add a new channel to
*      one group of a given class, it will get added to all other
*      groups in the same class. If the class name is left empty, then
*      this will NOT be true. (Groups without class names are treated
*      as isolated entities for the purposes of channel loading).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void BreakLineToGroups_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* chan, const char* cl);

/**
* Break up a line into group-lines based on a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
* @param[in]  cl TODO
* @param[in]  reset_fi_ds TODO
**
* @par Note 
*      The same as BreakLineToGroups, but with an option to reset each line's starting fiducial to zero.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.4
*/
GX_EXPORT void BreakLineToGroups2_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* chan, const char* cl, const int32_t* reset_fi_ds);

/**
* B-spline Interpolate a Channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  i_ch TODO
* @param[in]  o_ch TODO
* @param[in]  sd TODO
* @param[in]  rou TODO
* @param[in]  tau TODO
*
* @par See also 
*      Trend_DU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void BSpline_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* i_ch, const int32_t* o_ch, const double* sd, const double* rou, const double* tau);

/**
* Return closest data point to input location.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[out] xp TODO
* @param[out] yp TODO
* @param[out] line TODO
* @param[out] fid TODO
**
* @par Note 
*      Selected lines are scanned for the (X, Y) location
*      which is closest to the input location.
*      The line and fiducial of the point are returned.
*      
*      Will register an error if no valid (X, Y) locations
*      are found.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.2
*/
GX_EXPORT void ClosestPoint_DU(void* p_geo, const int32_t* db, const double* x, const double* y, double* xp, double* yp, int32_t* line, double* fid);

/**
* Copy a line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  i_line TODO
* @param[in]  o_line TODO
**
* @par Note 
*      Existing channels in the output line will be replaced
*      by copied channels.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void CopyLine_DU(void* p_geo, const int32_t* db, const int32_t* i_line, const int32_t* o_line);

/**
* Copy a line from one database to another.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  idb TODO
* @param[in]  i_line TODO
* @param[in]  odb TODO
* @param[in]  o_line TODO
**
* @par Note 
*      Existing channels in the output line will be replaced
*      by copied channels.
*
* @par See also 
*      CopyLineChanAcross_DU function
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void CopyLineAcross_DU(void* p_geo, const int32_t* idb, const int32_t* i_line, const int32_t* odb, const int32_t* o_line);

/**
* Copy a list of channels in a line from one database to another.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  idb TODO
* @param[in]  i_line TODO
* @param[in]  vv_chan TODO
* @param[in]  odb TODO
* @param[in]  o_line TODO
**
* @par Note 
*      Existing channels in the output line will be replaced
*      by copied channels.
*
* @par See also 
*      CopyLineAcross_DU function
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void CopyLineChanAcross_DU(void* p_geo, const int32_t* idb, const int32_t* i_line, const int32_t* vv_chan, const int32_t* odb, const int32_t* o_line);

/**
* Copy a line, prune items based on a mask channel
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  i_line TODO
* @param[in]  mask TODO
* @param[in]  prune TODO
* @param[in]  o_line TODO
**
* @par Note 
*      The input line's channel data is ReFidded to the mask
*      channel, and then pruned from the output line data,
*      based on the value of the VVU_PRUNE_XXX variable.
*      For VVU_PRUNE_DUMMY, only those items where the mask channel
*      value is not a dummy are retained, while the complement
*      is retained for VV_PRUNE_VALID.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT void CopyLineMasked_DU(void* p_geo, const int32_t* db, const int32_t* i_line, const int32_t* mask, const int32_t* prune, const int32_t* o_line);

/**
* Scans a DAO-compliant database and returns the table names in a VV
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  type TODO
* @param[in]  vv TODO
**
* @par Note 
*      The VV must be created to hold strings of length
*      STR_DB_SYMBOL; i.e. use
*      Creat_VV(-STR_DB_SYMBOL, 0), or it will assert.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void DAOTableNames_DU(void* p_geo, const char* file, const char* type, const int32_t* vv);

/**
* Copy and decimate a channel
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  i_ch TODO
* @param[in]  o_ch TODO
* @param[in]  n TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Decimate_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* i_ch, const int32_t* o_ch, const int32_t* n);

/**
* Calculate differences within a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  i_ch TODO
* @param[in]  o_ch TODO
* @param[in]  n TODO
**
* @par Note 
*      Differences with dummies result in dummies.
*      An even number of differences locates data accurately.
*      An odd number of differences locates result 1/2 element lower
*      in the VV.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Diff_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* i_ch, const int32_t* o_ch, const int32_t* n);

/**
* Create a distance channel from X and Y.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  x_ch TODO
* @param[in]  y_ch TODO
* @param[in]  o_ch TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Distance_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* x_ch, const int32_t* y_ch, const int32_t* o_ch);

/**
* Create a distance channel from XY or XYZ with direction options.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  x_ch TODO
* @param[in]  y_ch TODO
* @param[in]  z_ch TODO
* @param[in]  type TODO
* @param[in]  o_ch TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.1
*/
GX_EXPORT void Distance3D_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* x_ch, const int32_t* y_ch, const int32_t* z_ch, const int32_t* type, const int32_t* o_ch);

/**
* Calculate cummulative distance for a line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  x_ch TODO
* @param[in]  y_ch TODO
* @param[out] dist TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Distline_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* x_ch, const int32_t* y_ch, double* dist);

/**
* Duplicate all channels protect-info from input DB.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  d_bi TODO
* @param[in]  d_bo TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void DupChanLocks_DU(void* p_geo, const int32_t* d_bi, const int32_t* d_bo);

/**
* Duplicate all channels from input DB.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  d_bi TODO
* @param[in]  d_bo TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void DupChans_DU(void* p_geo, const int32_t* d_bi, const int32_t* d_bo);

/**
* Edit duplicate readings at individual location
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  x_ch TODO
* @param[in]  y_ch TODO
* @param[in]  option TODO
* @param[in]  single TODO
* @param[in]  fid_num TODO
**
* @par Note 
*      All the channels must be of the same fid incr/start and length.
*      Protected channels are modified automatically.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void EditDuplicates_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* x_ch, const int32_t* y_ch, const int32_t* option, const int32_t* single, const double* fid_num);

/**
* Export to a specific format.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  format TODO
* @param[in]  cur_line TODO
* @param[in]  chan_vv TODO
* @param[in]  chan TODO
* @param[in]  data TODO
* @param[in]  dummies TODO
* @param[in]  header TODO
**
* @par Note 
*      For databases with both groups and lines:
*      If both lines and groups are selected, save only the lines.
*      If no lines are selected, (only groups), save the current line
*      if it is (1) a group and (2) selected, else save the first selected
*      group. ---
*      Option to filter out data where one of the channels has a dummy in it.
*      Option to allow a header with the channel names.
*      
*      The DU_CHANNELS_DISPLAYED option can be used to export any selection of
*      channels, listed by the symbols (DB_SYMB) values, cast to int values and
*      stored in a VV.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Export_DU(void* p_geo, const int32_t* db, const int32_t* format, const char* cur_line, const int32_t* chan_vv, const int32_t* chan, const char* data, const int32_t* dummies, const int32_t* header);

/**
* Like Export_DU, but include line names as data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  format TODO
* @param[in]  cur_line TODO
* @param[in]  chan_vv TODO
* @param[in]  chan TODO
* @param[in]  data TODO
* @param[in]  dummies TODO
* @param[in]  header TODO
* @param[in]  line_names TODO
**
* @par Note 
*      See Export_DU.
*      The line names are printed as the first column of data exported.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void Export2_DU(void* p_geo, const int32_t* db, const int32_t* format, const char* cur_line, const int32_t* chan_vv, const int32_t* chan, const char* data, const int32_t* dummies, const int32_t* header, const int32_t* line_names);

/**
* Export to database an AMIRA data file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  wa TODO
* @param[in]  one_cols_ch TODO
* @param[in]  array_ch TODO
* @param[in]  time_ch TODO
* @param[in]  errors_ch TODO
* @param[in]  datatype TODO
* @param[in]  units TODO
* @param[in]  config TODO
* @param[in]  instrument TODO
* @param[in]  frequency TODO
**
* @par Note 
*      Other defined FIELDS stored in the database (see ImportAMIRA_DU function)
*      will be automatically included in the export
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ExportAMIRA_DU(void* p_geo, const int32_t* db, const int32_t* wa, const char* one_cols_ch, const char* array_ch, const char* time_ch, const char* errors_ch, const char* datatype, const char* units, const char* config, const char* instrument, const char* frequency);

/**
* Export to ASEG-GDF format file(s).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  cur_line TODO
* @param[in]  chan_vv TODO
* @param[in]  chan TODO
* @param[in]  defn TODO
* @param[in]  data TODO
**
* @par Note 
*      At least one of the header file
*      or data file names must be set. (Unset names will get the
*      same file name, but with the extensions .dfn (header) or
*      .dat (data).
*      For databases with both groups and lines:
*      If both lines and groups are selected, save only the lines.
*      If no lines are selected, (only groups), save the current line
*      if it is (1) a group and (2) selected, else save the first selected
*      group. ---
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ExportAseg_DU(void* p_geo, const int32_t* db, const char* cur_line, const int32_t* chan_vv, const int32_t* chan, const char* defn, const char* data);

/**
* Export to ASEG-GDF format file(s) (supports projections).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  cur_line TODO
* @param[in]  chan_vv TODO
* @param[in]  chan TODO
* @param[in]  defn TODO
* @param[in]  data TODO
* @param[in]  proj TODO
* @param[in]  ipj TODO
**
* @par Note 
*      At least one of the header file
*      or data file names must be set. (Unset names will get the
*      same file name, but with the extensions .dfn (header) or
*      .dat (data).
*      For databases with both groups and lines:
*      If both lines and groups are selected, save only the lines.
*      If no lines are selected, (only groups), save the current line
*      if it is (1) a group and (2) selected, else save the first selected
*      group. ---
*      
*      This version supports projections
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.1
*/
GX_EXPORT void ExportAsegProj_DU(void* p_geo, const int32_t* db, const char* cur_line, const int32_t* chan_vv, const int32_t* chan, const char* defn, const char* data, const char* proj, const int32_t* ipj);

/**
* Export a channel as XML and compute a CRC value.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  symb TODO
* @param[out] crc TODO
* @param[in]  file TODO
**
* @par Note 
*      The output file is an XML describing the channel. The
*      CRC is of the channel data ONLY. To compute a CRC of the
*      full channel (include metadata) do a CRC of the generated
*      file.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT void ExportChanCRC_DU(void* p_geo, const int32_t* db, const int32_t* symb, int32_t* crc, const char* file);

/**
* Export to a CSV file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  cur_line TODO
* @param[in]  chan_vv TODO
* @param[in]  chan TODO
* @param[in]  data TODO
* @param[in]  dummies TODO
* @param[in]  header TODO
**
* @par Note 
*      For databases with both groups and lines:
*      If both lines and groups are selected, save only the lines.
*      If no lines are selected, (only groups), save the current line
*      if it is (1) a group and (2) selected, else save the first selected
*      group. ---
*      Option to filter out data where one of the channels has a dummy in it.
*      Option to allow a header with the channel names.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void ExportCSV_DU(void* p_geo, const int32_t* db, const char* cur_line, const int32_t* chan_vv, const int32_t* chan, const char* data, const int32_t* dummies, const int32_t* header);

/**
* Export a channel as XML and compute a CRC value.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[out] crc TODO
* @param[in]  file TODO
**
* @par Note 
*      The output file is an XML describing the channel. The
*      CRC is of the channel data ONLY. To compute a CRC of the
*      full channel (include metadata) do a CRC of the generated
*      file.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT void ExportDatabaseCRC_DU(void* p_geo, const int32_t* db, int32_t* crc, const char* file);

/**
* Export to a GBN data file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  vv TODO
* @param[in]  data TODO
**
* @par Note 
*      The iDispChanList_DBE or iSymbList_DB methods can be
*      used to obtain a list of channels.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ExportGBN_DU(void* p_geo, const int32_t* db, const int32_t* vv, const char* data);

/**
* Export to a Microsoft Access Database (MDB) file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  cur_line TODO
* @param[in]  chan_vv TODO
* @param[in]  chan TODO
* @param[in]  single TODO
* @param[in]  data TODO
**
* @par Note 
*      Similar to ExportGBN_DU, with the addition that
*      Groups go to individual tables, and lines go to
*      a single table, or individual tables, based on the
*      value of DU_LINEOUT
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ExportMDB_DU(void* p_geo, const int32_t* db, const char* cur_line, const int32_t* chan_vv, const int32_t* chan, const int32_t* single, const char* data);

/**
* Export to a ESRI Geodatabase file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  feature_class_name TODO
* @param[in]  cur_line TODO
* @param[in]  chan_vv TODO
* @param[in]  chan TODO
* @param[in]  output TODO
* @param[in]  single TODO
* @param[in]  data TODO
**
* @par Note 
*      Similar to ExportGBN_DU, with the addition that
*      Groups go to individual tables, and lines go to
*      a single table, or individual tables, based on the
*      value of DU_LINEOUT
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.0
*/
GX_EXPORT void ExportGeodatabase_DU(void* p_geo, const int32_t* db, const char* feature_class_name, const char* cur_line, const int32_t* chan_vv, const int32_t* chan, const int32_t* output, const int32_t* single, const char* data);

/**
* Searches the geodatabases for an existing Feature class.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  geodatabase TODO
* @param[in]  lst TODO
* @param[in]  vv TODO
* @return 0 - Feature class does not exist
* 1 - Feature class exists
**
* @par Note 
*      Searches the geodatabases for an existing Feature class
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.0
*/
GX_EXPORT int32_t GetExistingFeatureClassesInGeodatabase_DU(void* p_geo, const int32_t* db, const char* geodatabase, const int32_t* lst, const int32_t* vv);

/**
* Export to a shape file or files.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  cur_line TODO
* @param[in]  chan_vv TODO
* @param[in]  chan TODO
* @param[in]  single TODO
* @param[in]  data TODO
* @param[in]  lst TODO
**
* @par Note 
*      Similar to ExportMDB_DU, with the addition that groups go to indiviual files
*      with group name suffixes, and lines go to a single file, or multiple files
*      with line name suffixes, based on the value of DU_LINEOUT.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.1
*/
GX_EXPORT void ExportSHP_DU(void* p_geo, const int32_t* db, const char* cur_line, const int32_t* chan_vv, const int32_t* chan, const int32_t* single, const char* data, const int32_t* lst);

/**
* Export XYZdata from a database to an XYZ file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  data TODO
* @param[in]  template TODO
**
* @par Note 
*      1. The export template can be in the local directory or the GEOSOFT
*      directory.  The import data file must include the path if it is not
*      in the local directory.
*      
*      2. Both the import template and data file must exist.
*      
*      3. Sample Template file
*      
*      [EXPORT XYZ]
*      EXPORT     CHAN {,FORMAT} {,WIDTH} {,DECIMAL}
*      WRITEDUMMY YES
*      CLIPMAP    YES
*      MAXPOINTS  1000
*      INCREMENT  .5
*      
*      4. This can be used to export a group, but the group must be the
*      currently displayed line, and only that group will be exported.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ExportXYZ_DU(void* p_geo, const int32_t* db, const char* data, const char* template);

/**
* Export XYZdata from a database to an XYZ file, using file handles.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  wa TODO
* @param[in]  ra TODO
*
* @par See also 
*      ExportXYZ_DU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ExportXYZ2_DU(void* p_geo, const int32_t* db, const int32_t* wa, const int32_t* ra);

/**
* Apply an FFT to space data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  s_ch TODO
* @param[in]  r_ch TODO
* @param[in]  i_ch TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void FFT_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* s_ch, const int32_t* r_ch, const int32_t* i_ch);

/**
* Apply a convolution filter to a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  i_ch TODO
* @param[in]  o_ch TODO
* @param[in]  flt TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Filter_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* i_ch, const int32_t* o_ch, const int32_t* flt);

/**
* Generate a Level table from an Intersection Table.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  in_file TODO
* @param[in]  out_file TODO
* @param[in]  max_dz TODO
* @param[in]  m0 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GenLev_DU(void* p_geo, const int32_t* db, const char* in_file, const char* out_file, const double* max_dz, const int32_t* m0);

/**
* Generate a Level table from an Intersection Database
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  out_file TODO
* @param[in]  max_dz TODO
* @param[in]  m0 TODO
**
* @par Note 
*      Requires channels with the following names:
*      
*      ine, TFid, TZ, TDZ
*      Line, LFid, LZ, LDZ
*      Mask
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.1
*/
GX_EXPORT void GenLevDB_DU(void* p_geo, const int32_t* db, const char* out_file, const double* max_dz, const int32_t* m0);

/**
* Generate default XYZ template for a XYZ file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  xyz TODO
* @param[in]  temp TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GenXYZTemp_DU(void* p_geo, const char* xyz, const char* temp);

/**
* Get the number of fields in the XYZ file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  xyz TODO
* @param[out] num_fields TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.1
*/
GX_EXPORT void GetXYZNumFields_DU(void* p_geo, const char* xyz, int32_t* num_fields);

/**
* Populate a LST with unique items in a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  mask TODO
* @param[in]  lst TODO
**
* @par Note 
*      Items from all selected lines are collected,
*      sorted, and duplicates removed. The output
*      LST name and value are set to the item values.
*      Non-string channels are converted internally to
*      string values using Copy_VV,
*      so results may differ from what
*      you may expect given the current channel's display
*      width and number of decimals.
*      If a mask channel is selected, then only those items
*      where the mask channel is not a dummy are collected.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.1
*/
GX_EXPORT void GetChanDataLST_DU(void* p_geo, const int32_t* db, const int32_t* chan, const int32_t* mask, const int32_t* lst);

/**
* Populate a VV with unique items in a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  mask TODO
* @param[in]  vv TODO
**
* @par Note 
*      Items from all selected lines are collected,
*      sorted, and duplicates removed.
*      The data is collected in the channel's data type,
*      so normal Sort_VV rules apply.
*      If the output VV and channel type are not the
*      same, then the data is converted using the
*      Copy_VV function, so see that for conversion rules.
*      If a mask channel is selected, then only those items
*      where the mask channel is not a dummy are collected.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.1
*/
GX_EXPORT void GetChanDataVV_DU(void* p_geo, const int32_t* db, const int32_t* chan, const int32_t* mask, const int32_t* vv);

/**
* This method takes 4 channels from input database and
* duplicats each line twice to output database)
* (input and Output can be the same channel).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dbi TODO
* @param[in]  dbo TODO
* @param[in]  ix_ch TODO
* @param[in]  iy_ch TODO
* @param[in]  iz_ch TODO
* @param[in]  ig_ch TODO
* @param[in]  ox_ch TODO
* @param[in]  oy_ch TODO
* @param[in]  oz_ch TODO
* @param[in]  angle TODO
* @param[in]  width TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Gradient_DU(void* p_geo, const int32_t* dbi, const int32_t* dbo, const int32_t* ix_ch, const int32_t* iy_ch, const int32_t* iz_ch, const int32_t* ig_ch, const int32_t* ox_ch, const int32_t* oy_ch, const int32_t* oz_ch, const double* angle, const double* width);

/**
* Calculate base loop closure and correct for drift.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  date TODO
* @param[in]  time TODO
* @param[in]  read TODO
* @param[in]  base TODO
* @param[in]  clos TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GravDrift_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* date, const int32_t* time, const int32_t* read, const int32_t* base, const int32_t* clos);

/**
* Calculate earth tide gravity correction.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  lat TODO
* @param[in]  lon TODO
* @param[in]  date TODO
* @param[in]  time TODO
* @param[in]  gmt TODO
* @param[in]  tide TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GravTide_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* lat, const int32_t* lon, const int32_t* date, const int32_t* time, const double* gmt, const int32_t* tide);

/**
* Load grid data to a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  img TODO
* @param[in]  xdec TODO
* @param[in]  ydec TODO
* @param[in]  trim_dum TODO
* @param[in]  create_index TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GridLoad_DU(void* p_geo, const int32_t* db, const int32_t* img, const int32_t* xdec, const int32_t* ydec, const int32_t* trim_dum, const int32_t* create_index);

/**
* Load grid data to a database using specified channels
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  img TODO
* @param[in]  ch_x TODO
* @param[in]  ch_y TODO
* @param[in]  ch_z TODO
* @param[in]  ch_data TODO
* @param[in]  xdec TODO
* @param[in]  ydec TODO
* @param[in]  trim_dum TODO
* @param[in]  index_ch TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GridLoadXYZ_DU(void* p_geo, const int32_t* db, const int32_t* img, const int32_t* ch_x, const int32_t* ch_y, const int32_t* ch_z, const int32_t* ch_data, const int32_t* xdec, const int32_t* ydec, const int32_t* trim_dum, const int32_t* index_ch);

/**
* Applies a heading correction.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  i_ch TODO
* @param[in]  o_ch TODO
* @param[in]  tb TODO
* @param[in]  dir TODO
**
* @par Note 
*      Updates channel with Direction in degrees azimuth (counter-clockwise
*      relative the +Y direction).
*      GS_R8DM if the line has no data, or if there is a
*      problem.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Head_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* i_ch, const int32_t* o_ch, const int32_t* tb, const double* dir);

/**
* Same as ImportBIN2_DU, but returns the name of the imported line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  data TODO
* @param[in]  template TODO
* @param[out] line TODO
* @param[in]  line_size TODO
* @param[in]  flight TODO
* @param[in]  date TODO
* @param[in]  wa TODO
**
* @par Note 
*      See ImportBIN2_DU. Because the name of the created line is
*      not necessarily the value passed in (and the value passed in
*      can be blank), this version returns the name of the line
*      to which the data is actually imported.
*
* @par See also 
*      ImportBIN2_DU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.1
*/
GX_EXPORT void IImportBIN3_DU(void* p_geo, const int32_t* db, const char* data, const char* template, char* line, const int32_t* line_size, const int32_t* flight, const double* date, const int32_t* wa);

/**
* Import concession boundary polygon file into a database
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  pj TODO
* @param[in]  file TODO
* @param[in]  x_chan TODO
* @param[in]  y_chan TODO
**
* @par Note 
*      The polygon file is provided by Ana Christina in Brazil.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void ImpCBPly_DU(void* p_geo, const int32_t* db, const int32_t* pj, const char* file, const int32_t* x_chan, const int32_t* y_chan);

/**
* Import an external database table into a group using ADO.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  connect TODO
* @param[in]  table TODO
* @param[in]  template TODO
* @param[in]  line TODO
**
* @par Note 
*      1. The import template can be in the local directory or the GEOSOFT
*      directory.
*      
*      2. Only the import template must be specified. The database connection string,
*      the database table and Oasis line name are normally taken from the template
*      file itself, but if these values are provided, they will override those found in the template.
*      
*      3. If the line already exists, the data will overwrite the existing data.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT void ImportADO_DU(void* p_geo, const int32_t* db, const char* connect, const char* table, const char* template, const char* line);

/**
* Import an entire external database using ADO.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  connect TODO
* @param[in]  storage TODO
**
* @par Note 
*      1. For group storage, the table names are imported "as is". For line storage,
*      if the table names are valid Geosoft line names, they are used as is.
*      Otherwise, line names will be created with type LINE_NORMAL, starting at
*      L0 and incrementing by 10 (L10, L20 etc.)
*      
*      2. If the line exists, the data will overwrite the existing data.
*      
*      3. All tables and fields will be imported.
*      
*      4. If connection string is of type "FILENAME=..." the connection will attempt to resolve
*      it as a file database. (see also ODBCFileConnect_GUI)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT void ImportAllADO_DU(void* p_geo, const int32_t* db, const char* connect, const int32_t* storage);

/**
* Import an entire external database using DAO.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  data TODO
* @param[in]  type TODO
* @param[in]  storage TODO
**
* @par Note 
*      1. The file is assumed to be a DAO compliant database.
*      
*      2. The import data file must include the path if it is not
*      in the local directory.
*      
*      3. For group storage, the table names are imported "as is". For line storage,
*      if the table names are valid Geosoft line names, they are used as is.
*      Otherwise, line names will be created with type LINE_NORMAL, starting at
*      L0 and incrementing by 10 (L10, L20 etc.)
*      
*      4. If the line exists, the data will overwrite the existing data.
*      
*      5. All tables and fields will be imported.
*      
*      6. The following are valid type strings for DAO:
*      
*      MSJET       : Microsoft Access
*      ODBC        : ODBC source
*      dBASE III
*      dBASE IV
*      dBASE 5
*      FoxPro 2.0
*      FoxPro 2.5
*      FoxPro 2.6
*      Paradox 3.x
*      Paradox 4.x
*      Paradox 5.x
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ImportAllDAO_DU(void* p_geo, const int32_t* db, const char* data, const char* type, const int32_t* storage);

/**
* Import an AMIRA data file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  ra TODO
* @param[in]  wa TODO
**
* @par Note 
*      All the constant declarations are stored within the database
*      under \TEM\CONSTANTS. The format is as follows:
*      
*          1. Lines stored in the file beginning with "/" are comments
*          2. Each constant occupies a line in the file. It uses the format: CONSTANT=VALUE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ImportAMIRA_DU(void* p_geo, const int32_t* db, const int32_t* ra, const int32_t* wa);

/**
* Import an ASEG-GDF data file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  template TODO
* @param[in]  file TODO
* @param[in]  data TODO
* @param[in]  flc TODO
* @param[in]  chans TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ImportAseg_DU(void* p_geo, const int32_t* db, const char* template, const char* file, const char* data, const char* flc, const int32_t* chans);

/**
* Import an ASEG-GDF data file (supports projections).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  template TODO
* @param[in]  file TODO
* @param[in]  data TODO
* @param[in]  flc TODO
* @param[in]  chans TODO
* @param[in]  proj TODO
* @param[in]  x_ch TODO
* @param[in]  y_ch TODO
**
* @par Note 
*      This version supports projections
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.1
*/
GX_EXPORT void ImportAsegProj_DU(void* p_geo, const int32_t* db, const char* template, const char* file, const char* data, const char* flc, const int32_t* chans, const char* proj, const char* x_ch, const char* y_ch);

/**
* Import blocked binary or archive ASCII data
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  data TODO
* @param[in]  template TODO
* @param[in]  line TODO
* @param[in]  flight TODO
* @param[in]  date TODO
**
* @par Note 
*      1. Binary import templates have extension .I2 by convention.  See
*      BINARY.I2 for a description of the template format.
*      Archive import templates have extension .I3 by convention. See
*      ARCHIVE.I3 for a description of the template format.
*      
*      2. Both the import template and data file must exist.
*      
*      3. If a line already exists in the database, a new version is created
*      unless a line name is passed in.  In this case, the specified name
*      is used and the imported channels on the previous line will be
*      destroyed.
*
* @par See also 
*      LabTemplate_DU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ImportBIN_DU(void* p_geo, const int32_t* db, const char* data, const char* template, const char* line, const int32_t* flight, const double* date);

/**
* Import blocked binary or archive ASCII data with data error display
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  data TODO
* @param[in]  template TODO
* @param[in]  line TODO
* @param[in]  flight TODO
* @param[in]  date TODO
* @param[in]  wa TODO
**
* @par Note 
*      1. Binary import templates have extension .I2 by convention.  See
*      BINARY.I2 for a description of the template format.
*      Archive import templates have extension .I3 by convention. See
*      ARCHIVE.I3 for a description of the template format.
*      
*      2. Both the import template and data file must exist.
*      
*      3. If a line already exists in the database, a new version is created
*      unless a line name is passed in.  In this case, the specified name
*      is used and the imported channels on the previous line will be
*      destroyed.
*
* @par See also 
*      LabTemplate_DU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void ImportBIN2_DU(void* p_geo, const int32_t* db, const char* data, const char* template, const char* line, const int32_t* flight, const double* date, const int32_t* wa);

/**
* Same as ImportBIN2_DU but with an import mode
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  mode TODO
* @param[in]  data TODO
* @param[in]  template TODO
* @param[in]  line TODO
* @param[in]  flight TODO
* @param[in]  date TODO
* @param[in]  wa TODO
**
* @par Note 
*      Same as ImportBIN2_DU but with an import mode
*
* @par See also 
*      ImportBIN2_DU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.1
*/
GX_EXPORT void ImportBIN4_DU(void* p_geo, const int32_t* db, const int32_t* mode, const char* data, const char* template, const char* line, const int32_t* flight, const double* date, const int32_t* wa);

/**
* Import Serial data from the RMS Instruments DAARC500.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  file TODO
* @param[in]  channel TODO
* @param[in]  type TODO
**
* @par Note 
*      Imports data stored in a serial channel recorded
*      by the RMS Instruments DAARC500 instrument, and outputs the data to
*      a line in the database. The channels created depend on the input data type
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT void ImportDAARC500Serial_DU(void* p_geo, const int32_t* db, const int32_t* line, const char* file, const int32_t* channel, const int32_t* type);

/**
* Import Serial GPS data from the RMS Instruments DAARC500.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  file TODO
* @param[in]  channel TODO
**
* @par Note 
*      Imports GPS data stored in a serial channel recorded
*      by the RMS Instruments DAARC500 instrument, and outputs the data to
*      a line in the database. Makes the following channels:
*      
*      Fid, UTC_Time, Latitude, Longitude, Altitude, GPS_Quality,
*      NumSat (Number of satellites), GPS_HDOP (Horizontal Dilution of Position),
*      Undulation, GPS_DiffAge (Age of differential channel).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT void ImportDAARC500SerialGPS_DU(void* p_geo, const int32_t* db, const int32_t* line, const char* file, const int32_t* channel);

/**
* Import an external database table into a group using DAO.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  data TODO
* @param[in]  type TODO
* @param[in]  table TODO
* @param[in]  template TODO
* @param[in]  line TODO
**
* @par Note 
*      1. The import template can be in the local directory or the GEOSOFT
*      directory.  The import data file must include the path if it is not
*      in the local directory.
*      
*      2. Only the import template must be specified. The database file name,
*      file type, the database table and Oasis line name are normally
*      taken from the template file itself, but if these values are provided,
*      they will override those found in the template.
*      
*      3. If the line already exists, the data will overwrite the existing data.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ImportDAO_DU(void* p_geo, const int32_t* db, const char* data, const char* type, const char* table, const char* template, const char* line);

/**
* Import an ArcGIS Geodatabase table or feature class into a GDB group
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  connect TODO
* @param[in]  template TODO
* @param[in]  line TODO
**
* @par Note 
*      1. The import template can be in the local directory or the GEOSOFT
*      directory.
*      
*      2. Only the import template must be specified. The Geodatabase connection string
*      and Oasis line name are normally taken from the template file itself,
*      but if these values are provided, they will override those found in the template.
*      
*      3. If the line already exists, the data will overwrite the existing data.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.1
*/
GX_EXPORT void ImportESRI_DU(void* p_geo, const int32_t* db, const char* connect, const char* template, const char* line);

/**
* Import GBN data file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ImportGBN_DU(void* p_geo, const int32_t* db, const char* file);

/**
* Import ODDF data file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ImportODDF_DU(void* p_geo, const int32_t* db, const char* file);

/**
* Import a Picodas data file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  template TODO
* @param[in]  data TODO
* @param[in]  chans TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ImportPico_DU(void* p_geo, const int32_t* db, const char* template, const char* data, const int32_t* chans);

/**
* Import UBC Mod and Msh files.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  mesh TODO
* @param[in]  mods TODO
* @param[in]  dir TODO
* @param[in]  dummy TODO
**
* @par Note 
*      Each slice in X,Y or Z is imported to its own line in the database
*      beginning with L0.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void ImportUBCModMsh_DU(void* p_geo, const int32_t* db, const char* mesh, const char* mods, const int32_t* dir, const double* dummy);

/**
* Import USGS Post data file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ImportUSGSPost_DU(void* p_geo, const int32_t* db, const char* file);

/**
* Import XYZ data into the database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  mode TODO
* @param[in]  data TODO
* @param[in]  template TODO
**
* @par Note 
*      1. The import template can be in the local directory or the GEOSOFT
*      directory.  The import data file must include the path if it is not
*      in the local directory.
*      
*      2. Both the import template and data file must exist.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ImportXYZ_DU(void* p_geo, const int32_t* db, const int32_t* mode, const char* data, const char* template);

/**
* Import XYZ data into the database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  mode TODO
* @param[in]  data TODO
* @param[in]  template TODO
* @param[in]  wa TODO
**
* @par Note 
*      1. The import template can be in the local directory or the GEOSOFT
*      directory.  The import data file must include the path if it is not
*      in the local directory.
*      
*      2. Both the import template and data file must exist.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void ImportXYZ2_DU(void* p_geo, const int32_t* db, const int32_t* mode, const char* data, const char* template, const int32_t* wa);

/**
* Import data columns from an ioGAS data file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  data_csv TODO
* @param[in]  template TODO
**
* @par Note 
*      1. All columns in the speficied ioGAS data file will be imported.
*      2. If a line already exists, the data will overwrite the existing data.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT void ImportIoGAS_DU(void* p_geo, const int32_t* db, const char* data_csv, const char* template);

/**
* Change the order of a channel using an index channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  in_ch TODO
* @param[in]  ch TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void IndexOrder_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* in_ch, const int32_t* ch);

/**
* Replace all dummies by interpolating from valid data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  i_ch TODO
* @param[in]  o_ch TODO
* @param[in]  inside TODO
* @param[in]  outside TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Interp_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* i_ch, const int32_t* o_ch, const int32_t* inside, const int32_t* outside);

/**
* Replace all dummies by interpolating from valid data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  i_ch TODO
* @param[in]  o_ch TODO
* @param[in]  inside TODO
* @param[in]  outside TODO
* @param[in]  gap TODO
* @param[in]  extend TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.4
*/
GX_EXPORT void InterpGap_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* i_ch, const int32_t* o_ch, const int32_t* inside, const int32_t* outside, const int32_t* gap, const int32_t* extend);

/**
* Create Tie Line & Normal Line intersect table.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  x_chan TODO
* @param[in]  y_chan TODO
* @param[in]  z_chan TODO
* @param[in]  tol TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Intersect_DU(void* p_geo, const int32_t* db, const int32_t* x_chan, const int32_t* y_chan, const int32_t* z_chan, const double* tol, const char* file);

/**
* Create line intersect table from all lines.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  x_chan TODO
* @param[in]  y_chan TODO
* @param[in]  z_chan TODO
* @param[in]  tol TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void IntersectAll_DU(void* p_geo, const int32_t* db, const int32_t* x_chan, const int32_t* y_chan, const int32_t* z_chan, const double* tol, const char* file);

/**
* Create a new intersection table from an intersection database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  tbl TODO
**
* @par Note 
*      If the TBL exists, it is overwritten.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.1
*/
GX_EXPORT void IntersectGDBtoTBL_DU(void* p_geo, const char* db, const char* tbl);

/**
* Use existing intersection table and re-calculate miss-ties.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  x_chan TODO
* @param[in]  y_chan TODO
* @param[in]  z_chan TODO
* @param[in]  in_file TODO
* @param[in]  out_file TODO
**
* @par Note 
*      Reads intersection information from an existing intersect
*      table and looks up the values at the intersections for the
*      input Z channel. This makes it unnecessary to re-calculate
*      the intersections every time if you want to determine
*      miss-ties using different Z channels, or the same Z channel
*      after processing levelling corrections. Existing intersections
*      whose locations do not exist in the database are ignored.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.4
*/
GX_EXPORT void IntersectOld_DU(void* p_geo, const int32_t* db, const int32_t* x_chan, const int32_t* y_chan, const int32_t* z_chan, const char* in_file, const char* out_file);

/**
* Create a new intersection database from an intersection table.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tbl TODO
* @param[in]  db TODO
**
* @par Note 
*      If the GDB exists, it is deleted, so it should not
*      be loaded.
*      The database is split by Tie lines (or whatever lines are found in column 3
*      of the TBL file.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.1
*/
GX_EXPORT void IntersectTBLtoGDB_DU(void* p_geo, const char* tbl, const char* db);

/**
* Makes a default template from a lab assay file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  data TODO
* @param[in]  template TODO
* @param[in]  type TODO
* @param[in]  delimit TODO
* @param[in]  name_off TODO
* @param[in]  unit_off TODO
* @param[in]  data_off TODO
* @param[in]  sample_type TODO
* @param[in]  data_type TODO
**
* @par Note 
*      The template can be used to import the file using
*      sImportBIN_DU.
*      
*      The first column is assumed to be the sample number.
*      
*      If the unit label line is the same as the column label
*      line, column labels are assummed to be followed by
*      unit labels using the format "Au-ppm", "Au ppm" or
*      "Au(ppm)".
*      
*      The number of channels is determined from the number of
*      columns in the data channel.  If there are more column
*      labels or unit labels, the last labels are assumed to
*      be correct.  If there are fewer line labels, default
*      labels "Col_n", where n is the column number, will be
*      created and no unit labels will be defined.
*
* @par See also 
*      ImportBIN_DU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void LabTemplate_DU(void* p_geo, const char* data, const char* template, const int32_t* type, const char* delimit, const int32_t* name_off, const int32_t* unit_off, const int32_t* data_off, const int32_t* sample_type, const int32_t* data_type);

/**
* Load a gravity survey file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  reg TODO
* @param[in]  line TODO
* @param[in]  data TODO
**
* @par Note 
*      See GRAVITY.DAT for a description of the file format.
*      
*      Existing data in the line will be replaced.
*      
*      The following REG parameters will be set if they appear
*      in the data file:
*      default
*      OPERATOR             ""
*      DATE                 none
*      INSTRUMENT           ""
*      INSTRUMENT_SCALE     "1.0"
*      BASE_GRAVITY         "0.0"
*      FORMULA              "1967"
*      GMT_DIFF             "0.0"
*      DISTANCE_UNITS       "m"
*      DENSITY_EARTH        "2.67"
*      DENSITY_WATER        "1.0"
*      DENSITY_ICE          "0.95"
*      MAP_PROJECTION       ""
*      
*      If the corresponding constant is not specified and the
*      REG already has the constant defined, it is not changed.
*      If the constant is not defined and it is not already in
*      the REG, the indicated default will be set.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void LoadGravity_DU(void* p_geo, const int32_t* db, const int32_t* reg, const int32_t* line, const char* data);

/**
* Load LTB into a database line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  ltb TODO
* @param[in]  mode TODO
**
* @par Note 
*      A new channel will be created for all LTB fields
*      that do not already exist.
*      The LTB field type will be double if all entries can be
*      converted to double, otherwise it will be a string type
*      set to the larger of 16 characters or the longest string
*      in the field.
*      
*      For _APPEND, the LTB data is simply added the end of each
*      channel.  ReFidAllCh_DU can be used to re-fid data to
*      match a specifc channel and there-by case all channels to be
*      the same length before appending data.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void LoadLTB_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* ltb, const int32_t* mode);

/**
* Make a fiducial channel based on an existing channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  i_ch TODO
* @param[in]  o_ch TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void MakeFid_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* i_ch, const int32_t* o_ch);

/**
* Mask dummies in one channel against another.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  i_ch TODO
* @param[in]  m_ch TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Mask_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* i_ch, const int32_t* m_ch);

/**
* Apply an expression to the database
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  exp TODO
**
* @par Note 
*      The MATH_DU method will READWRITE lock channels on the left
*      side of expressions and READONLY lock channels on the right
*      side of expressions.  Channels are unlocked before returning.
*      Therefore, channels on the left side of an expression cannot
*      be locked READONLY because the Math_DU attempt to lock the
*      channel READWRITE will fail.  Similarly, channels on the right
*      side of an expression cannot be locked READWRITE because
*      Math_DU's attempt to lock the channels READONLY will fail.
*      
*      If this is confusing, just make sure no channels used in the
*      expression are locked before calling Math_DU.
*
* @par See also 
*      EXP
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Math_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* exp);

/**
* Merge a line a the fiducial and copies any data past
* that fiducial into the new line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  i_line TODO
* @param[in]  m_line TODO
* @param[in]  o_line TODO
* @param[in]  mode TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void MergeLine_DU(void* p_geo, const int32_t* db, const int32_t* i_line, const int32_t* m_line, const int32_t* o_line, const int32_t* mode);

/**
* Insert/Append/Delete a range of fids.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  ln TODO
* @param[in]  fid_start TODO
* @param[in]  incr TODO
* @param[in]  start_index TODO
* @param[in]  num TODO
* @param[in]  opt TODO
**
* @par Note 
*      Channels that do not have the same fid start or fid
*      increment are not processed.
*      
*      Protected channels are modified automatically.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void ModFidRange_DU(void* p_geo, const int32_t* db, const int32_t* ln, const double* fid_start, const double* incr, const int32_t* start_index, const int32_t* num, const int32_t* opt);

/**
* Move/correct a channel to a control channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  i_ch TODO
* @param[in]  c_ch TODO
* @param[in]  o_ch TODO
* @param[in]  mode TODO
**
* @par Note 
*      The input channel is moved to the absolute location
*      of the control channel.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Move_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* i_ch, const int32_t* c_ch, const int32_t* o_ch, const int32_t* mode);

/**
* This method applies a non-linear filter to the specified
* line/channel and places the output in the output channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  i_ch TODO
* @param[in]  o_ch TODO
* @param[in]  width TODO
* @param[in]  tol TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void NLFilt_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* i_ch, const int32_t* o_ch, const int32_t* width, const double* tol);

/**
* Set fid of all channels to match a specified channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  ch TODO
* @param[in]  ignore TODO
*
* @par See also 
*      ReFidAllCh_DU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Normal_DU(void* p_geo, const int32_t* db, const int32_t* ch, const int32_t* ignore);

/**
* Fill using a polygon with a value of 1.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  x_chan TODO
* @param[in]  y_chan TODO
* @param[in]  r_chan TODO
* @param[in]  pply TODO
* @param[in]  dummy TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void PolyFill_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* x_chan, const int32_t* y_chan, const int32_t* r_chan, const int32_t* pply, const int32_t* dummy);

/**
* Mask against a polygon.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  x_chan TODO
* @param[in]  y_chan TODO
* @param[in]  r_chan TODO
* @param[in]  pply TODO
* @param[in]  dummy TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void PolyMask_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* x_chan, const int32_t* y_chan, const int32_t* r_chan, const int32_t* pply, const int32_t* dummy);

/**
* Project X,Y channels
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  ix_ch TODO
* @param[in]  iy_ch TODO
* @param[in]  ox_ch TODO
* @param[in]  oy_ch TODO
* @param[in]  pj TODO
**
* @par Note 
*      Output channels can be the same as input channels
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void ProjectData_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* ix_ch, const int32_t* iy_ch, const int32_t* ox_ch, const int32_t* oy_ch, const int32_t* pj);

/**
* Project X,Y,Z channels from one system to another.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  ix_ch TODO
* @param[in]  iy_ch TODO
* @param[in]  iz_ch TODO
* @param[in]  ox_ch TODO
* @param[in]  oy_ch TODO
* @param[in]  oz_ch TODO
* @param[in]  pj TODO
**
* @par Note 
*      Output channels can be the same as input channels
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void ProjectXYZ_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* ix_ch, const int32_t* iy_ch, const int32_t* iz_ch, const int32_t* ox_ch, const int32_t* oy_ch, const int32_t* oz_ch, const int32_t* pj);

/**
* Project X,Y(Z) channels with different projections
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  ix_ch TODO
* @param[in]  iy_ch TODO
* @param[in]  iz_ch TODO
* @param[in]  ox_ch TODO
* @param[in]  oy_ch TODO
* @param[in]  oz_ch TODO
* @param[in]  i_name_chan TODO
* @param[in]  i_datum_chan TODO
* @param[in]  i_method_chan TODO
* @param[in]  i_unit_chan TODO
* @param[in]  il_datum_chan TODO
* @param[in]  o_name_chan TODO
* @param[in]  o_datum_chan TODO
* @param[in]  o_method_chan TODO
* @param[in]  o_unit_chan TODO
* @param[in]  ol_datum_chan TODO
* @param[in]  error_chan TODO
* @param[in]  force_local_datum TODO
**
* @par Note 
*      Output channels can be the same as input channels
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT void ProjPoints_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* ix_ch, const int32_t* iy_ch, const int32_t* iz_ch, const int32_t* ox_ch, const int32_t* oy_ch, const int32_t* oz_ch, const int32_t* i_name_chan, const int32_t* i_datum_chan, const int32_t* i_method_chan, const int32_t* i_unit_chan, const int32_t* il_datum_chan, const int32_t* o_name_chan, const int32_t* o_datum_chan, const int32_t* o_method_chan, const int32_t* o_unit_chan, const int32_t* ol_datum_chan, const int32_t* error_chan, const int32_t* force_local_datum);

/**
* Creates the nearest line channels for line separation QC.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  sep TODO
* @param[in]  dir TODO
**
* @par Note 
*      This must be called before QCSeparation_DU. It uses a pager to
*      establish the relative positions of the selected lines, then,
*      for every point determines the closest point in another line to
*      the left and to the right (as determined by looking in the
*      direction of the line.) These distances are stored to two new
*      channels in the database, "Closest_Left" and "Closest_Right"
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void QCInitSeparation_DU(void* p_geo, const int32_t* db, const double* sep, const double* dir);

/**
* Create a database containing proposed survey plan in a PLY
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  wa TODO
* @param[in]  pply TODO
* @param[in]  sl_spa TODO
* @param[in]  sl_azi TODO
* @param[in]  slx TODO
* @param[in]  sly TODO
* @param[in]  sl_sta TODO
* @param[in]  sl_inc TODO
* @param[in]  tl_spa TODO
* @param[in]  tl_azi TODO
* @param[in]  tlx TODO
* @param[in]  tly TODO
* @param[in]  tl_sta TODO
* @param[in]  tl_inc TODO
* @param[in]  type TODO
* @param[in]  sample_spacing TODO
* @param[in]  extend_outside TODO
**
* @par Note 
*      The LINE on which has the reference (X,Y) will have the starting Line number
*      The lines on the right hand side of the reference line (while looking
*      into azimuth of ref. line) have increasing line numbers. The lines
*      on the left hand side have the decreasing line numbers from the starting
*      number. Returns an error code or 0 (if successful)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t QCSurveyPlan_DU(void* p_geo, const int32_t* db, const int32_t* wa, const int32_t* pply, const double* sl_spa, const double* sl_azi, const double* slx, const double* sly, const int32_t* sl_sta, const int32_t* sl_inc, const double* tl_spa, const double* tl_azi, const double* tlx, const double* tly, const int32_t* tl_sta, const int32_t* tl_inc, const int32_t* type, const double* sample_spacing, const double* extend_outside);

/**
* Returns the direction of a line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  x_ch TODO
* @param[in]  y_ch TODO
* @return direction in degrees azimuth (clockwise relative
* the +Y direction).
* GS_R8DM if the line has no data, or if there is a
* problem.  Problems will register errors.
**
* @par Note 
*      The direction is calculated from the first and last
*      non-dummy locations in the X and Y reference channels.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rDirection_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* x_ch, const int32_t* y_ch);

/**
* Re-fid a channel based on a reference channel
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  in_ch TODO
* @param[in]  ref_ch TODO
* @param[in]  out_ch TODO
* @param[in]  mode TODO
* @param[in]  start TODO
* @param[in]  incr TODO
* @param[in]  gap TODO
**
* @par Note 
*      The original channel can be an array channel, in which case
*      the columns (up to the number of columns available in the output)
*      are individually interpolated. If the number of
*      columns in the output channel is more than the input channel,
*      the remaining columns are dummied.
*      
*      This function is fundamentally different in behaviour from ReFidCh_DU.
*      The values in the Reference channel in ReFid_DU are the "X" locations
*      corresponding to the "Y" locations in the "Original Channel". Output
*      Channel values are calculated at the new "X" locations specified by
*      the Start Fid and the Fid Increment.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ReFid_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* in_ch, const int32_t* ref_ch, const int32_t* out_ch, const int32_t* mode, const double* start, const double* incr, const double* gap);

/**
* Simple re-fid of all channels based on a reference channel
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  ref_ch TODO
**
* @par Note 
*      Channels can be array channels, in which case
*      the columns are individually re-fidded.
*
* @par See also 
*      Normal_DU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ReFidAllCh_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* ref_ch);

/**
* Simple re-fid of a channel based on a reference channel
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  ref_ch TODO
* @param[in]  ch TODO
**
* @par Note 
*      The original channel can be an array channel, in which case
*      the columns are individually re-fidded.
*      
*      ReFidCh_DU resamples the "Channel to refid" to the "Reference Channel" Fid
*      range and increment.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ReFidCh_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* ref_ch, const int32_t* ch);

/**
* Rotate coordinates.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  in_x_ch TODO
* @param[in]  in_y_ch TODO
* @param[in]  out_x_ch TODO
* @param[in]  out_y_ch TODO
* @param[in]  x0 TODO
* @param[in]  y0 TODO
* @param[in]  deg TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Rotate_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* in_x_ch, const int32_t* in_y_ch, const int32_t* out_x_ch, const int32_t* out_y_ch, const double* x0, const double* y0, const double* deg);

/**
* Sample a GD at a specified X and Y.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  ix_ch TODO
* @param[in]  iy_ch TODO
* @param[in]  o_ch TODO
* @param[in]  img TODO
**
* @par Note 
*      Values in result channel
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SampleGD_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* ix_ch, const int32_t* iy_ch, const int32_t* o_ch, const int32_t* img);

/**
* Sample a IMG at a specified X and Y.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  ix_ch TODO
* @param[in]  iy_ch TODO
* @param[in]  o_ch TODO
* @param[in]  img TODO
**
* @par Note 
*      Values in result channel
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SampleIMG_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* ix_ch, const int32_t* iy_ch, const int32_t* o_ch, const int32_t* img);

/**
* Sample an IMG at a specified X and Y, for a LST of lines.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  lst TODO
* @param[in]  ix_ch TODO
* @param[in]  iy_ch TODO
* @param[in]  o_ch TODO
* @param[in]  img TODO
**
* @par Note 
*      Values in result channel
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.3
*/
GX_EXPORT void SampleIMGLineLST_DU(void* p_geo, const int32_t* db, const int32_t* lst, const int32_t* ix_ch, const int32_t* iy_ch, const int32_t* o_ch, const int32_t* img);

/**
* Scans an external ADO database and generates a default template.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  connect TODO
* @param[in]  table TODO
* @param[in]  template TODO
**
* @par Note 
*      All the channels are listed
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.8
*/
GX_EXPORT void ScanADO_DU(void* p_geo, const char* connect, const char* table, const char* template);

/**
* This method scans an ASEG-GDF file and generates a default
* template listing all the channels and all the ALIAS lines.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  data TODO
* @param[in]  flc TODO
* @param[in]  template TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ScanAseg_DU(void* p_geo, const char* file, const char* data, const char* flc, const char* template);

/**
* Scans an external DAO database and generates a default template.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  type TODO
* @param[in]  table TODO
* @param[in]  template TODO
**
* @par Note 
*      All the channels are listed
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ScanDAO_DU(void* p_geo, const char* file, const char* type, const char* table, const char* template);

/**
* This method scans a picodas file and generates a default
* template listing all the channels and all the ALIAS lines.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  data TODO
* @param[in]  template TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void ScanPico_DU(void* p_geo, const char* data, const char* template);

/**
* Sort the contents of a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  ch TODO
* @param[in]  sort TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Sort_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* ch, const int32_t* sort);

/**
* Create an ordered index of the contents of a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  ch TODO
* @param[in]  in_ch TODO
* @param[in]  sort TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SortIndex_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* ch, const int32_t* in_ch, const int32_t* sort);

/**
* Create an ordered index from two channels
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  ch1 TODO
* @param[in]  sort1 TODO
* @param[in]  ch2 TODO
* @param[in]  sort2 TODO
* @param[in]  in_ch TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SortIndex2_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* ch1, const int32_t* sort1, const int32_t* ch2, const int32_t* sort2, const int32_t* in_ch);

/**
* Splits a line a the fiducial and copies any data past
* that fiducial into the new line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  i_line TODO
* @param[in]  o_line TODO
* @param[in]  fid TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SplitLine_DU(void* p_geo, const int32_t* db, const int32_t* i_line, const int32_t* o_line, const double* fid);

/**
* Splits a line a the fiducial and copies any data past
* that fiducial into the new line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  i_line TODO
* @param[in]  o_line TODO
* @param[in]  fid TODO
* @param[in]  reset_fi_ds TODO
**
* @par Note 
*      The same as SplitLine, but with an option to reset each line's starting fiducial to zero.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.4
*/
GX_EXPORT void SplitLine2_DU(void* p_geo, const int32_t* db, const int32_t* i_line, const int32_t* o_line, const double* fid, const int32_t* reset_fi_ds);

/**
* Break up a line based on tolerance of lateral and horizontal distance, with
* options for the output line names.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  x_ch TODO
* @param[in]  y_ch TODO
* @param[in]  dirctn TODO
* @param[in]  tolrnc TODO
* @param[in]  down_tol TODO
* @param[in]  method TODO
* @param[out] first_line TODO
* @param[in]  line_inc TODO
**
* @par Note 
*      The original line will be deleted.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.3
*/
GX_EXPORT void SplitLineXY_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* x_ch, const int32_t* y_ch, const int32_t* dirctn, const double* tolrnc, const double* down_tol, const int32_t* method, int32_t* first_line, const int32_t* line_inc);

/**
* Break up a line based on tolerance of lateral and horizontal distance, with
* options for the output line names.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  x_ch TODO
* @param[in]  y_ch TODO
* @param[in]  dirctn TODO
* @param[in]  tolrnc TODO
* @param[in]  down_tol TODO
* @param[in]  method TODO
* @param[out] first_line TODO
* @param[in]  line_inc TODO
* @param[in]  reset_fi_ds TODO
**
* @par Note 
*      The same as SplitLineXY, but with an option to reset each line's starting fiducial to zero.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.4
*/
GX_EXPORT void SplitLineXY2_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* x_ch, const int32_t* y_ch, const int32_t* dirctn, const double* tolrnc, const double* down_tol, const int32_t* method, int32_t* first_line, const int32_t* line_inc, const int32_t* reset_fi_ds);

/**
* Break up a line based on tolerance of lateral and horizontal distance, with
* options for the output line names.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  x_ch TODO
* @param[in]  y_ch TODO
* @param[in]  dirctn TODO
* @param[in]  tolrnc TODO
* @param[in]  down_tol TODO
* @param[in]  method TODO
* @param[out] first_line TODO
* @param[in]  line_inc TODO
* @param[in]  retain_line_type TODO
* @param[in]  reset_fi_ds TODO
**
* @par Note 
*      The same as SplitLineXY2, but with the option to maintain line types when outputting sequentially numbered lines.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 9.0
*/
GX_EXPORT void SplitLineXY3_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* x_ch, const int32_t* y_ch, const int32_t* dirctn, const double* tolrnc, const double* down_tol, const int32_t* method, int32_t* first_line, const int32_t* line_inc, const int32_t* retain_line_type, const int32_t* reset_fi_ds);

/**
* The line is split when the heading (calculated from the current X and Y channels) changes by more than a specified amount over
* a specified distance. Additional options to discard too-short lines
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  x_ch TODO
* @param[in]  y_ch TODO
* @param[in]  angular_change TODO
* @param[in]  over_a_distance_of TODO
* @param[in]  minimum_line_length TODO
* @param[in]  break_on_separation_distance TODO
* @param[in]  save_discards TODO
* @param[in]  method TODO
* @param[out] first_line TODO
* @param[in]  line_inc TODO
* @param[in]  reset_fi_ds TODO
**
* @par Note 
*      Split a line based on changes in heading.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.5
*/
GX_EXPORT void SplitLineByDirection_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* x_ch, const int32_t* y_ch, const double* angular_change, const double* over_a_distance_of, const double* minimum_line_length, const double* break_on_separation_distance, const int32_t* save_discards, const int32_t* method, int32_t* first_line, const int32_t* line_inc, const int32_t* reset_fi_ds);

/**
* The same as SplitLineByDirection, but with the option to maintain line types when outputting sequentially numbered lines.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  x_ch TODO
* @param[in]  y_ch TODO
* @param[in]  angular_change TODO
* @param[in]  over_a_distance_of TODO
* @param[in]  minimum_line_length TODO
* @param[in]  break_on_separation_distance TODO
* @param[in]  save_discards TODO
* @param[in]  method TODO
* @param[out] first_line TODO
* @param[in]  line_inc TODO
* @param[in]  retain_line_type TODO
* @param[in]  reset_fi_ds TODO
**
* @par Note 
*      Split a line based on changes in heading.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 9.0
*/
GX_EXPORT void SplitLineByDirection2_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* x_ch, const int32_t* y_ch, const double* angular_change, const double* over_a_distance_of, const double* minimum_line_length, const double* break_on_separation_distance, const int32_t* save_discards, const int32_t* method, int32_t* first_line, const int32_t* line_inc, const int32_t* retain_line_type, const int32_t* reset_fi_ds);

/**
* Add a data channel to a statistics object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  i_ch TODO
* @param[in]  st TODO
**
* @par Note 
*      If the input channel is a VA (array) channel, then the columns set using
*      SetVAWindows_DB are used in the statistics; all columns are used by default.
*
* @par See also 
*      ST
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Stat_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* i_ch, const int32_t* st);

/**
* Place a Line/Fid information into a Channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  ref TODO
* @param[in]  tb TODO
* @param[in]  field TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void TableLineFid_DU(void* p_geo, const int32_t* db, const int32_t* chan, const int32_t* ref, const int32_t* tb, const int32_t* field);

/**
* Place a Line/Fid information into a Channel for the selected lines in the database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  ref TODO
* @param[in]  tb TODO
* @param[in]  field TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 9.1
*/
GX_EXPORT void TableSelectedLinesFid_DU(void* p_geo, const int32_t* db, const int32_t* chan, const int32_t* ref, const int32_t* tb, const int32_t* field);

/**
* Calculate TEM time constant (Tau)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  resp_chan TODO
* @param[in]  time_chan TODO
* @param[in]  tau_chan TODO
* @param[in]  intercept_chan TODO
* @param[in]  fit_chan TODO
* @param[in]  log_opt TODO
**
* @par Note 
*      When DU_TIME_LOG option is used, Time channel will be converted
*      with logarithmic before calculating time constant.
*      Logarthmic conversion is always applied to the response channel.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void TimeConstant_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* resp_chan, const int32_t* time_chan, const int32_t* tau_chan, const int32_t* intercept_chan, const int32_t* fit_chan, const int32_t* log_opt);

/**
* Calculates an n'th order trend of a data channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  i_ch TODO
* @param[in]  o_ch TODO
* @param[in]  order TODO
*
* @par See also 
*      BSpline_DU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Trend_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* i_ch, const int32_t* o_ch, const int32_t* order);

/**
* Update the Z and DZ values in an intersection database, using the current database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  x_chan TODO
* @param[in]  z_chan TODO
* @param[in]  int_db TODO
**
* @par Note 
*      Updates the TZ, TDZ, LZ and LDZ channels at the intersections,
*      using the current flight database.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.1
*/
GX_EXPORT void UpdateIntersectDB_DU(void* p_geo, const int32_t* db, const int32_t* x_chan, const int32_t* z_chan, const int32_t* int_db);

/**
* Slice a voxel to a grid under a database line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  x_ch TODO
* @param[in]  y_ch TODO
* @param[in]  vox TODO
* @param[in]  grid TODO
* @param[in]  cell_x TODO
* @param[in]  cell_y TODO
* @param[in]  interp TODO
**
* @par Note 
*      Takes the first and XY locations in a line (using the
*      current X and Y channels) and defines a section grid
*      as a slice through a voxel file.
*      The grid cell sizes can be left as GS_R8DM, in which
*      case an attempt will be made to match the voxel cell
*      size, based on the line azimuth, voxel rotation, etc.
*      
*      If the slice does NOT intersect the voxel, or if
*      there are fewer than 2 valid locations in the line,
*      then no grid file is created, but there is no error.
*      (This is to simplify creating multiple grids from
*      at once, where not all may intersect).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.4
*/
GX_EXPORT void VoxelSection_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* x_ch, const int32_t* y_ch, const int32_t* vox, const char* grid, const double* cell_x, const double* cell_y, const int32_t* interp);

/**
* Write data to an ASCII file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  lst TODO
* @param[in]  wa TODO
**
* @par Note 
*      Channels to be written should be placed in a LST object.
*      
*      Channels are written in the order of the list.  Only the
*      channel names in the list are used.
*      
*      Data is formated as in the channel definition and
*      channels are separated by a single space character.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void WriteWA_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* lst, const int32_t* wa);

/**
* Break up a line based on tolerance of lateral distance.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  x_ch TODO
* @param[in]  y_ch TODO
* @param[in]  dirctn TODO
* @param[in]  tolrnc TODO
**
* @par Note 
*      The original line will be deleted.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void XyzLine_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* x_ch, const int32_t* y_ch, const int32_t* dirctn, const double* tolrnc);

/**
* Break up a line based on tolerance of lateral and horizontal distance.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  x_ch TODO
* @param[in]  y_ch TODO
* @param[in]  dirctn TODO
* @param[in]  tolrnc TODO
* @param[in]  down_tol TODO
**
* @par Note 
*      The original line will be deleted.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void XyzLine2_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* x_ch, const int32_t* y_ch, const int32_t* dirctn, const double* tolrnc, const double* down_tol);

/**
* Break up a line based on tolerance of lateral and horizontal distance.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  x_ch TODO
* @param[in]  y_ch TODO
* @param[in]  dirctn TODO
* @param[in]  tolrnc TODO
* @param[in]  down_tol TODO
* @param[in]  reset_fi_ds TODO
**
* @par Note 
*      The same as XyzLine2, but with an option to reset each line's starting fiducial to zero.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.4
*/
GX_EXPORT void XyzLine3_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* x_ch, const int32_t* y_ch, const int32_t* dirctn, const double* tolrnc, const double* down_tol, const int32_t* reset_fi_ds);

/**
* Mask dummies in one channel against another(Z) with the range Zmin/Zmax.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
* @param[in]  z_chan TODO
* @param[in]  zmin TODO
* @param[in]  zmax TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void ZMask_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* chan, const int32_t* z_chan, const double* zmin, const double* zmax);

/**
* Find the range of X, and Y in the selected lines.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[out] x_min TODO
* @param[out] y_min TODO
* @param[out] x_max TODO
* @param[out] y_max TODO
**
* @par Note 
*      Returns the range in X and Y of the current X and Y channels.
*      Returned values are dummy if no valid items are found.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.5
*/
GX_EXPORT void RangeXY_DU(void* p_geo, const int32_t* db, double* x_min, double* y_min, double* x_max, double* y_max);

/**
* Find the range of X, Y and Z in selected lines.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  x_ch TODO
* @param[in]  y_ch TODO
* @param[in]  z_ch TODO
* @param[out] x_min TODO
* @param[out] y_min TODO
* @param[out] z_min TODO
* @param[out] x_max TODO
* @param[out] y_max TODO
* @param[out] z_max TODO
* @param[out] n_tot TODO
**
* @par Note 
*      The X, Y and Z channels should be normal (not array) channels.
*      Only locations where all values are non-dummy are included in the calculation.
*      If no non-dummy values are found, Dummy values are returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.5
*/
GX_EXPORT void RangeXYZ_DU(void* p_geo, const int32_t* db, const int32_t* x_ch, const int32_t* y_ch, const int32_t* z_ch, double* x_min, double* y_min, double* z_min, double* x_max, double* y_max, double* z_max, int32_t* n_tot);

/**
* Find the range of X, Y, Z and Data values in selected lines.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  x_ch TODO
* @param[in]  y_ch TODO
* @param[in]  z_ch TODO
* @param[in]  d_ch TODO
* @param[out] x_min TODO
* @param[out] y_min TODO
* @param[out] z_min TODO
* @param[out] d_min TODO
* @param[out] x_max TODO
* @param[out] y_max TODO
* @param[out] z_max TODO
* @param[out] d_max TODO
* @param[out] n_tot TODO
**
* @par Note 
*      The Z and Data channels may be array channels, but both must have
*      the same number of columns.
*      Only values where all channels are non-dummy (or, for VA channels,
*      where the Z or Data value are defined) are included in the calculation.
*      If no non-dummy values are found, Dummy values are returned.
*      This function is optimized for cases where Z and Data are array channels
*      with many columns (e.g. 32 or more columns).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.1
*/
GX_EXPORT void RangeXYZData_DU(void* p_geo, const int32_t* db, const int32_t* x_ch, const int32_t* y_ch, const int32_t* z_ch, const int32_t* d_ch, double* x_min, double* y_min, double* z_min, double* d_min, double* x_max, double* y_max, double* z_max, double* d_max, int32_t* n_tot);

/**
* Used for weighting inversion models.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  ch TODO
* @param[in]  reg TODO
* @param[in]  database TODO
**
* @par Note 
*      Control parameters are passed in the REG (to allow for future expansion without
*      the need to modify the wrappers).
*      The input drillhole database must contain current X, Y and Z channels.
*      Drillhole data should be equally spaced (or nearly so) down the hole.
*      Weights are calculated on a circle perpendicular to the hole at each point.
*      
*      RADIUS - Maximum radius from drillhole to create weighting points (Default = 100).
*      INCRMENENT - Grid cell size in weighting circle (Default = 10).
*      MINIMUM - the minimum weighting value to apply, at the radius (Default = 0.0001).
*      POWER - Exponential power to use in the weighting function (negative of this is used) (Default = 2).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.2
*/
GX_EXPORT void CreateDrillholeParameterWeightConstraintDatabase_DU(void* p_geo, const int32_t* db, const int32_t* ch, const int32_t* reg, const char* database);

/**
* Calculate a draped flight path, enforcing maximum descent and ascent rates.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  x_ch TODO
* @param[in]  y_ch TODO
* @param[in]  img TODO
* @param[in]  z_ch TODO
* @param[in]  ascent TODO
* @param[in]  descent TODO
* @param[in]  drape_height TODO
* @param[in]  n_hanning TODO
* @param[in]  hanning_width TODO
* @param[in]  min_curvature TODO
**
* @par Note 
*      Calculate a draped flight path, enforcing maximum descent and ascent rates. Additional Inputs are the sample distance along the line
*      and a topography grid.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.3
*/
GX_EXPORT void CalculateDrapedSurveyAltitude_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* x_ch, const int32_t* y_ch, const int32_t* img, const int32_t* z_ch, const double* ascent, const double* descent, const double* drape_height, const int32_t* n_hanning, const double* hanning_width, const double* min_curvature);

/**
* Calculate a draped flight path, enforcing maximum descent and ascent rates.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  x_ch TODO
* @param[in]  y_ch TODO
* @param[in]  img TODO
* @param[in]  dem_ch TODO
* @param[in]  z_ch TODO
* @param[in]  ascent TODO
* @param[in]  descent TODO
* @param[in]  drape_height TODO
* @param[in]  min_drape_height TODO
* @param[in]  n_hanning TODO
* @param[in]  hanning_width TODO
* @param[in]  min_curvature TODO
**
* @par Note 
*      Calculate a draped flight path, enforcing maximum descent and ascent rates.
*      Set both a nominal and minimum drape height.
*      Additional Inputs are the sample distance along the line
*      and a topography grid.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.4
*/
GX_EXPORT void CalculateDrapedSurveyAltitude2_DU(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* x_ch, const int32_t* y_ch, const int32_t* img, const int32_t* dem_ch, const int32_t* z_ch, const double* ascent, const double* descent, const double* drape_height, const double* min_drape_height, const int32_t* n_hanning, const double* hanning_width, const double* min_curvature);

/**
* Create a voxel using direct gridding.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  x_channel TODO
* @param[in]  y_channel TODO
* @param[in]  z_channel TODO
* @param[in]  data_channel TODO
* @param[in]  output_voxel_filename TODO
* @param[in]  origin_x TODO
* @param[in]  origin_y TODO
* @param[in]  origin_z TODO
* @param[in]  cell_count_x TODO
* @param[in]  cell_count_y TODO
* @param[in]  cell_count_z TODO
* @param[in]  cell_size_x TODO
* @param[in]  cell_size_y TODO
* @param[in]  cell_size_z TODO
* @param[in]  method TODO
**
* @par Note 
*      The Z and Data channels may be array channels. If they are, the array sizes must match.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.4
*/
GX_EXPORT void DirectGridDataToVoxel_DU(void* p_geo, const int32_t* db, const int32_t* x_channel, const int32_t* y_channel, const int32_t* z_channel, const int32_t* data_channel, const char* output_voxel_filename, const double* origin_x, const double* origin_y, const double* origin_z, const int32_t* cell_count_x, const int32_t* cell_count_y, const int32_t* cell_count_z, const double* cell_size_x, const double* cell_size_y, const double* cell_size_z, const int32_t* method);

/**
* Create a voxel using direct gridding containing the number of data points in each cell.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  x_channel TODO
* @param[in]  y_channel TODO
* @param[in]  z_channel TODO
* @param[in]  data_channel TODO
* @param[in]  output_voxel_filename TODO
* @param[in]  origin_x TODO
* @param[in]  origin_y TODO
* @param[in]  origin_z TODO
* @param[in]  cell_count_x TODO
* @param[in]  cell_count_y TODO
* @param[in]  cell_count_z TODO
* @param[in]  cell_size_x TODO
* @param[in]  cell_size_y TODO
* @param[in]  cell_size_z TODO
* @param[in]  pb_replace_zeroes_with_dummy TODO
**
* @par Note 
*      The Z and Data channels may be array channels. If they are, the array sizes must match.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.4
*/
GX_EXPORT void DirectGridItemCountsToVoxel_DU(void* p_geo, const int32_t* db, const int32_t* x_channel, const int32_t* y_channel, const int32_t* z_channel, const int32_t* data_channel, const char* output_voxel_filename, const double* origin_x, const double* origin_y, const double* origin_z, const int32_t* cell_count_x, const int32_t* cell_count_y, const int32_t* cell_count_z, const double* cell_size_x, const double* cell_size_y, const double* cell_size_z, const int32_t* pb_replace_zeroes_with_dummy);

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
