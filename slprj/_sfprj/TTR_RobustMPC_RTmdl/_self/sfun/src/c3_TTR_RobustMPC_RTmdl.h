#ifndef __c3_TTR_RobustMPC_RTmdl_h__
#define __c3_TTR_RobustMPC_RTmdl_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_c3_ResolvedFunctionInfo
#define typedef_c3_ResolvedFunctionInfo

typedef struct {
  const char * context;
  const char * name;
  const char * dominantType;
  const char * resolved;
  uint32_T fileTimeLo;
  uint32_T fileTimeHi;
  uint32_T mFileTimeLo;
  uint32_T mFileTimeHi;
} c3_ResolvedFunctionInfo;

#endif                                 /*typedef_c3_ResolvedFunctionInfo*/

#ifndef typedef_SFc3_TTR_RobustMPC_RTmdlInstanceStruct
#define typedef_SFc3_TTR_RobustMPC_RTmdlInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c3_sfEvent;
  boolean_T c3_isStable;
  boolean_T c3_doneDoubleBufferReInit;
  uint8_T c3_is_active_c3_TTR_RobustMPC_RTmdl;
} SFc3_TTR_RobustMPC_RTmdlInstanceStruct;

#endif                                 /*typedef_SFc3_TTR_RobustMPC_RTmdlInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c3_TTR_RobustMPC_RTmdl_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c3_TTR_RobustMPC_RTmdl_get_check_sum(mxArray *plhs[]);
extern void c3_TTR_RobustMPC_RTmdl_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
