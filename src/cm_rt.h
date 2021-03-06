/*
 * Copyright © 2014 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sub license, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial portions
 * of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.
 * IN NO EVENT SHALL PRECISION INSIGHT AND/OR ITS SUPPLIERS BE LIABLE FOR
 * ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * Authors:
 *     Wei Lin<wei.w.lin@intel.com>
 *     Yuting Yang<yuting.yang@intel.com>
 *     Lina Sun<lina.sun@intel.com>
 *     Zhao Yakui <yakui.zhao@intel.com>
 */

#pragma once
#ifndef _Cm_H_
#define _Cm_H_

#ifdef __cplusplus
#define EXTERN_C     extern "C"
#else
#define EXTERN_C
#endif

#include "cm_rt_linux.h"

#ifndef CM_1_0
#define CM_1_0          100
#endif

#ifndef CM_2_0
#define CM_2_0          200
#endif

#ifndef CM_2_1
#define CM_2_1          201
#endif
#ifndef CM_2_2
#define CM_2_2          202
#endif
#ifndef CM_2_3
#define CM_2_3          203
#endif
#ifndef CM_2_4
#define CM_2_4          204
#endif
#ifndef CM_3_0
#define CM_3_0          300
#endif
#ifndef CM_4_0
#define CM_4_0          400
#endif

#ifndef __INTEL_MDF
#define __INTEL_MDF     CM_4_0
#endif

#define CM_SUCCESS                                  0
#define CM_FAILURE                                  -1
#define CM_NOT_IMPLEMENTED                          -2
#define CM_SURFACE_ALLOCATION_FAILURE               -3
#define CM_OUT_OF_HOST_MEMORY                       -4
#define CM_SURFACE_FORMAT_NOT_SUPPORTED             -5
#define CM_EXCEED_SURFACE_AMOUNT                    -6
#define CM_EXCEED_KERNEL_ARG_AMOUNT                 -7
#define CM_EXCEED_KERNEL_ARG_SIZE_IN_BYTE           -8
#define CM_INVALID_ARG_INDEX                        -9
#define CM_INVALID_ARG_VALUE                        -10
#define CM_INVALID_ARG_SIZE                         -11
#define CM_INVALID_THREAD_INDEX                     -12
#define CM_INVALID_WIDTH                            -13
#define CM_INVALID_HEIGHT                           -14
#define CM_INVALID_DEPTH                            -15
#define CM_INVALID_COMMON_ISA                       -16
#define CM_EXCEED_MAX_KERNEL_PER_ENQUEUE            -21
#define CM_EXCEED_MAX_KERNEL_SIZE_IN_BYTE           -22
#define CM_EXCEED_MAX_THREAD_AMOUNT_PER_ENQUEUE     -23
#define CM_INVALID_THREAD_SPACE                     -25
#define CM_EXCEED_MAX_TIMEOUT                       -26
#define CM_JITDLL_LOAD_FAILURE                      -27
#define CM_JIT_COMPILE_FAILURE                      -28
#define CM_JIT_COMPILESIM_FAILURE                   -29
#define CM_INVALID_THREAD_GROUP_SPACE               -30
#define CM_THREAD_ARG_NOT_ALLOWED                   -31
#define CM_INVALID_GLOBAL_BUFFER_INDEX              -32
#define CM_INVALID_BUFFER_HANDLER                   -33
#define CM_EXCEED_MAX_SLM_SIZE                      -34
#define CM_JITDLL_OLDER_THAN_ISA                    -35
#define CM_INVALID_HARDWARE_THREAD_NUMBER           -36
#define CM_GTPIN_INVOKE_FAILURE                     -37
#define CM_INVALIDE_L3_CONFIGURATION                -38
#define CM_INTEL_GFX_NOTFOUND                       -40
#define CM_GPUCOPY_INVALID_SYSMEM                   -41
#define CM_GPUCOPY_INVALID_WIDTH                    -42
#define CM_GPUCOPY_INVALID_STRIDE                   -43
#define CM_EVENT_DRIVEN_FAILURE                     -44
#define CM_LOCK_SURFACE_FAIL                        -45
#define CM_INVALID_GENX_BINARY                      -46
#define CM_FEATURE_NOT_SUPPORTED_IN_DRIVER          -47
#define CM_QUERY_DLL_VERSION_FAILURE                -48
#define CM_KERNELPAYLOAD_PERTHREADARG_MUTEX_FAIL    -49
#define CM_KERNELPAYLOAD_PERKERNELARG_MUTEX_FAIL    -50
#define CM_KERNELPAYLOAD_SETTING_FAILURE            -51
#define CM_KERNELPAYLOAD_SURFACE_INVALID_BTINDEX    -52
#define CM_NOT_SET_KERNEL_ARGUMENT                  -53
#define CM_GPUCOPY_INVALID_SURFACES                 -54
#define CM_GPUCOPY_INVALID_SIZE                     -55
#define CM_GPUCOPY_OUT_OF_RESOURCE                  -56
#define CM_SURFACE_DELAY_DESTROY                    -58
#define CM_FEATURE_NOT_SUPPORTED_BY_HARDWARE	    -61
#define CM_RESOURCE_USAGE_NOT_SUPPORT_READWRITE     -62
#define CM_MULTIPLE_MIPLEVELS_NOT_SUPPORTED         -63
#define CM_INVALID_UMD_CONTEXT                      -64
#define CM_INVALID_LIBVA_SURFACE                    -65
#define CM_INVALID_LIBVA_INITIALIZE                 -66
#define CM_KERNEL_THREADSPACE_NOT_SET               -67
#define CM_INVALID_KERNEL_THREADSPACE               -68
#define CM_KERNEL_THREADSPACE_THREADS_NOT_ASSOCIATED -69
#define CM_KERNEL_THREADSPACE_INTEGRITY_FAILED      -70
#define CM_INVALID_USERPROVIDED_GENBINARY           -71
#define CM_INVALID_PRIVATE_DATA                     -72
#define CM_VA_SURFACE_NOT_SUPPORTED                 -73
#define CM_SURFACE_CACHED                           -74
#define CM_SURFACE_IN_USE                           -75
#define CM_INVALID_GPUCOPY_KERNEL                   -76
#define CM_INVALID_DEPENDENCY_WITH_WALKING_PATTERN  -77
#define CM_INVALID_MEDIA_WALKING_PATTERN            -78
#define CM_EXCEED_MAX_POWER_OPTION_FOR_PLATFORM     -80
#define CM_INVALID_KERNEL_THREADGROUPSPACE          -81
#define CM_INVALID_KERNEL_SPILL_CODE                -82
#define CM_UMD_DRIVER_NOT_SUPPORTED                 -83
#define CM_INVALID_GPU_FREQUENCY_VALUE              -84
#define CM_SYSTEM_MEMORY_NOT_4KPAGE_ALIGNED         -85
#define CM_KERNEL_ARG_SETTING_FAILED                -86
#define CM_NO_AVAILABLE_SURFACE                     -87
#define CM_PLATFORM_NOT_SUPPORTED                   -88

#define CM_MIN_SURF_WIDTH   1
#define CM_MIN_SURF_HEIGHT  1
#define CM_MIN_SURF_DEPTH   2

#define CM_MAX_1D_SURF_WIDTH 0X8000000

#define CM_MAX_2D_SURF_WIDTH_IVB_PLUS   16384
#define CM_MAX_2D_SURF_HEIGHT_IVB_PLUS  16384

#define CM_MAX_2D_SURF_WIDTH    CM_MAX_2D_SURF_WIDTH_IVB_PLUS
#define CM_MAX_2D_SURF_HEIGHT   CM_MAX_2D_SURF_HEIGHT_IVB_PLUS

#define CM_MAX_3D_SURF_WIDTH    2048
#define CM_MAX_3D_SURF_HEIGHT   2048
#define CM_MAX_3D_SURF_DEPTH    2048

#define CM_MAX_OPTION_SIZE_IN_BYTE          512
#define CM_MAX_KERNEL_NAME_SIZE_IN_BYTE     256
#define CM_MAX_ISA_FILE_NAME_SIZE_IN_BYTE   256

#define CM_MAX_THREADSPACE_WIDTH        511
#define CM_MAX_THREADSPACE_HEIGHT       511

#define IVB_MAX_SLM_SIZE_PER_GROUP   16

#define CM_MAX_TIMEOUT 2
#define CM_MAX_TIMEOUT_MS CM_MAX_TIMEOUT*1000

#define CM_NO_EVENT  ((CmEvent *)(-1))

typedef enum _CM_STATUS {
	CM_STATUS_QUEUED,
	CM_STATUS_FLUSHED = 1,
	CM_STATUS_FINISHED = 2,
	CM_STATUS_STARTED = 3
} CM_STATUS;

typedef struct _CM_DLL_FILE_VERSION {
	WORD wMANVERSION;
	WORD wMANREVISION;
	WORD wSUBREVISION;
	WORD wBUILD_NUMBER;
} CM_DLL_FILE_VERSION, *PCM_DLL_FILE_VERSION;

#define CM_DEVICE_CREATE_OPTION_SCRATCH_SPACE_ENABLE        0
#define CM_DEVICE_CREATE_OPTION_SCRATCH_SPACE_DISABLE       1
#define CM_DEVICE_CREATE_OPTION_SCRATCH_SPACE_MASK          1

#define CM_DEVICE_CREATE_OPTION_TDR_DISABLE                 64

#define CM_DEVICE_CREATE_OPTION_SURFACE_REUSE_ENABLE        1024
#define CM_DEVICE_CONFIG_SLM_MODE_OFFSET                    13
#define CM_DEVICE_CONFIG_SLM_MODE_ENABLE                   (1 << CM_DEVICE_CONFIG_SLM_MODE_OFFSET)

#define CM_DEVICE_CREATE_OPTION_DEFAULT                     ((CM_DEVICE_CREATE_OPTION_SCRATCH_SPACE_ENABLE) \
                                                             | (CM_DEVICE_CONFIG_SLM_MODE_ENABLE))

#define CM_DEVICE_CONFIG_SCRATCH_SPACE_SIZE_OFFSET     1
#define CM_DEVICE_CONFIG_SCRATCH_SPACE_SIZE_MASK       (7 << CM_DEVICE_CONFIG_SCRATCH_SPACE_SIZE_OFFSET)
#define CM_DEVICE_CONFIG_SCRATCH_SPACE_SIZE_16K_STEP   16384
#define CM_DEVICE_CONFIG_SCRATCH_SPACE_SIZE_16K        1
#define CM_DEVICE_CONFIG_SCRATCH_SPACE_SIZE_32K        2
#define CM_DEVICE_CONFIG_SCRATCH_SPACE_SIZE_48K        3
#define CM_DEVICE_CONFIG_SCRATCH_SPACE_SIZE_64K        4
#define CM_DEVICE_CONFIG_SCRATCH_SPACE_SIZE_80K        5
#define CM_DEVICE_CONFIG_SCRATCH_SPACE_SIZE_96K        6
#define CM_DEVICE_CONFIG_SCRATCH_SPACE_SIZE_112K       7
#define CM_DEVICE_CONFIG_SCRATCH_SPACE_SIZE_128K       0
#define CM_DEVICE_CONFIG_SCRATCH_SPACE_SIZE_DEFAULT    CM_DEVICE_CONFIG_SCRATCH_SPACE_SIZE_128K

#define CM_DEVICE_CONFIG_TASK_NUM_OFFSET               4
#define CM_DEVICE_CONFIG_TASK_NUM_MASK                (3 << CM_DEVICE_CONFIG_TASK_NUM_OFFSET)
#define CM_DEVICE_CONFIG_TASK_NUM_DEFAULT              0
#define CM_DEVICE_CONFIG_TASK_NUM_8                    1
#define CM_DEVICE_CONFIG_TASK_NUM_12                   2
#define CM_DEVICE_CONFIG_TASK_NUM_16                   3
#define CM_DEVICE_CONFIG_TASK_NUM_STEP                 4

#define CM_DEVICE_CONFIG_MEDIA_RESET_OFFSET            7
#define CM_DEVICE_CONFIG_MEDIA_RESET_ENABLE           (1 << CM_DEVICE_CONFIG_MEDIA_RESET_OFFSET)

#define CM_DEVICE_CONFIG_EXTRA_TASK_NUM_OFFSET         8
#define CM_DEVICE_CONFIG_EXTRA_TASK_NUM_MASK          (3 << CM_DEVICE_CONFIG_EXTRA_TASK_NUM_OFFSET)
#define CM_DEVICE_CONFIG_EXTRA_TASK_NUM_4              3

#define CM_DEVICE_CONFIG_SLICESHUTDOWN_OFFSET          10
#define CM_DEVICE_CONFIG_SLICESHUTDOWN_ENABLE         (1 << CM_DEVICE_CONFIG_SLICESHUTDOWN_OFFSET)

#define CM_DEVICE_CONFIG_SURFACE_REUSE_ENABLE          11

#define CM_DEVICE_CONFIG_GPUCONTEXT_OFFSET             12
#define CM_DEVICE_CONFIG_GPUCONTEXT_ENABLE             (1 << CM_DEVICE_CONFIG_GPUCONTEXT_OFFSET)

// VP9 config:
// Scratch space size :16k
// Number of task: 16
// Media Reset Option : TRUE
// Extra task num: 4
#define CM_DEVICE_CREATE_OPTION_FOR_VP9  ((CM_DEVICE_CREATE_OPTION_SCRATCH_SPACE_ENABLE) \
                                           | (CM_DEVICE_CONFIG_SCRATCH_SPACE_SIZE_16K << CM_DEVICE_CONFIG_SCRATCH_SPACE_SIZE_OFFSET) \
                                           | (CM_DEVICE_CONFIG_TASK_NUM_16 << CM_DEVICE_CONFIG_TASK_NUM_OFFSET) \
                                           | (CM_DEVICE_CONFIG_MEDIA_RESET_ENABLE) \
                                           | (CM_DEVICE_CONFIG_EXTRA_TASK_NUM_4 << CM_DEVICE_CONFIG_EXTRA_TASK_NUM_OFFSET)\
                                           | (CM_DEVICE_CONFIG_GPUCONTEXT_ENABLE))

#define CM_MAX_DEPENDENCY_COUNT         8

#define CM_KERNEL_FUNCTION2(...) #__VA_ARGS__
#define CM_KERNEL_FUNCTION(...) CM_KERNEL_FUNCTION2(__VA_ARGS__)
#define _NAME(...) #__VA_ARGS__

#define CM_DEFAULT_THREAD_DEPENDENCY_MASK          0xFF

typedef enum _CM_DEPENDENCY_PATTERN {
	CM_NONE_DEPENDENCY,
	CM_WAVEFRONT = 1,
	CM_WAVEFRONT26 = 2,
	CM_VERTICAL_DEPENDENCY = 3,
	CM_HORIZONTAL_DEPENDENCY = 4,
	CM_WAVEFRONT26Z = 5,
	CM_WAVEFRONT26ZI = 8
} CM_DEPENDENCY_PATTERN;

typedef enum _CM_WALKING_PATTERN {
	CM_WALK_DEFAULT,
	CM_WALK_WAVEFRONT = 1,
	CM_WALK_WAVEFRONT26 = 2,
	CM_WALK_VERTICAL = 3,
	CM_WALK_HORIZONTAL = 4
} CM_WALKING_PATTERN;

typedef struct _CM_DEPENDENCY {
	UINT count;
	INT deltaX[CM_MAX_DEPENDENCY_COUNT];
	INT deltaY[CM_MAX_DEPENDENCY_COUNT];
} CM_DEPENDENCY;

typedef enum _CM_26ZI_DISPATCH_PATTERN {
	VVERTICAL_HVERTICAL_26 = 0,
	VVERTICAL_HHORIZONTAL_26 = 1,
	VVERTICAL26_HHORIZONTAL26 = 2,
	VVERTICAL1X26_HHORIZONTAL1X26 = 3
} CM_26ZI_DISPATCH_PATTERN;

typedef enum _GPU_PLATFORM {
	PLATFORM_INTEL_UNKNOWN = 0,
	PLATFORM_INTEL_SNB = 1,
	PLATFORM_INTEL_IVB = 2,
	PLATFORM_INTEL_HSW = 3,
	PLATFORM_INTEL_BDW = 4,
	PLATFORM_INTEL_CHV = 6,
	PLATFORM_INTEL_SKL = 7,
} GPU_PLATFORM;

typedef enum _GPU_GT_PLATFORM {
	PLATFORM_INTEL_GT_UNKNOWN = 0,
	PLATFORM_INTEL_GT1 = 1,
	PLATFORM_INTEL_GT2 = 2,
	PLATFORM_INTEL_GT3 = 3,
	PLATFORM_INTEL_GTCHV = 7,
	PLATFORM_INTEL_GTA = 8,
	PLATFORM_INTEL_GTC = 9,
} GPU_GT_PLATFORM;

typedef enum _CM_DEVICE_CAP_NAME
{
	CAP_KERNEL_COUNT_PER_TASK,
	CAP_KERNEL_BINARY_SIZE,
	CAP_SAMPLER_COUNT ,
	CAP_SAMPLER_COUNT_PER_KERNEL,
	CAP_BUFFER_COUNT ,
	CAP_SURFACE2D_COUNT,
	CAP_SURFACE3D_COUNT,
	CAP_SURFACE_COUNT_PER_KERNEL,
	CAP_ARG_COUNT_PER_KERNEL,
	CAP_ARG_SIZE_PER_KERNEL ,
	CAP_USER_DEFINED_THREAD_COUNT_PER_TASK,
	CAP_HW_THREAD_COUNT,
	CAP_SURFACE2D_FORMAT_COUNT,
	CAP_SURFACE2D_FORMATS,
	CAP_SURFACE3D_FORMAT_COUNT,
	CAP_SURFACE3D_FORMATS,
	CAP_VME_STATE_G6_COUNT,
	CAP_GPU_PLATFORM,
	CAP_GT_PLATFORM,
	CAP_MIN_FREQUENCY,
	CAP_MAX_FREQUENCY,
	CAP_L3_CONFIG,
	CAP_GPU_CURRENT_FREQUENCY,
	CAP_USER_DEFINED_THREAD_COUNT_PER_TASK_NO_THREAD_ARG,
	CAP_USER_DEFINED_THREAD_COUNT_PER_MEDIA_WALKER,
	CAP_USER_DEFINED_THREAD_COUNT_PER_THREAD_GROUP,
	CAP_SURFACE2DUP_COUNT
} CM_DEVICE_CAP_NAME;

#define SKL_L3_CONFIG_NUM 8
#define CHV_L3_CONFIG_NUM 8
#define BDW_L3_CONFIG_NUM 8
#define HSW_L3_CONFIG_NUM 12
#define IVB_2_L3_CONFIG_NUM 12
#define IVB_1_L3_CONFIG_NUM 12

typedef struct _L3_CONFIG_REGISTER_VALUES{
	UINT SQCREG1_VALUE;
	UINT CNTLREG2_VALUE;
	UINT CNTLREG3_VALUE;
	UINT CNTLREG_VALUE;
} L3_CONFIG_REGISTER_VALUES;

typedef enum _L3_SUGGEST_CONFIG{
	IVB_L3_PLANE_DEFAULT,
	IVB_L3_PLANE_1,
	IVB_L3_PLANE_2,
	IVB_L3_PLANE_3,
	IVB_L3_PLANE_4,
	IVB_L3_PLANE_5,
	IVB_L3_PLANE_6,
	IVB_L3_PLANE_7,
	IVB_L3_PLANE_8,
	IVB_L3_PLANE_9,
	IVB_L3_PLANE_10,
	IVB_L3_PLANE_11,

	HSW_L3_PLANE_DEFAULT = IVB_L3_PLANE_DEFAULT,
	HSW_L3_PLANE_1,
	HSW_L3_PLANE_2,
	HSW_L3_PLANE_3,
	HSW_L3_PLANE_4,
	HSW_L3_PLANE_5,
	HSW_L3_PLANE_6,
	HSW_L3_PLANE_7,
	HSW_L3_PLANE_8,
	HSW_L3_PLANE_9,
	HSW_L3_PLANE_10,
	HSW_L3_PLANE_11,

	BDW_L3_PLANE_DEFAULT = IVB_L3_PLANE_DEFAULT,
	BDW_L3_PLANE_1,
	BDW_L3_PLANE_2,
	BDW_L3_PLANE_3,
	BDW_L3_PLANE_4,
	BDW_L3_PLANE_5,
	BDW_L3_PLANE_6,
	BDW_L3_PLANE_7,

	CHV_L3_PLANE_DEFAULT = IVB_L3_PLANE_DEFAULT,
	CHV_L3_PLANE_1,
	CHV_L3_PLANE_2,
	CHV_L3_PLANE_3,
	CHV_L3_PLANE_4,
	CHV_L3_PLANE_5,
	CHV_L3_PLANE_6,
	CHV_L3_PLANE_7,

	SKL_L3_PLANE_DEFAULT = IVB_L3_PLANE_DEFAULT,
        SKL_L3_PLANE_1,
        SKL_L3_PLANE_2,
        SKL_L3_PLANE_3,
        SKL_L3_PLANE_4,
        SKL_L3_PLANE_5,
        SKL_L3_PLANE_6,
        SKL_L3_PLANE_7,

	IVB_SLM_PLANE_DEFAULT = IVB_L3_PLANE_9,
	HSW_SLM_PLANE_DEFAULT = HSW_L3_PLANE_9,
	BDW_SLM_PLANE_DEFAULT = BDW_L3_PLANE_5,
	CHV_SLM_PLANE_DEFAULT = CHV_L3_PLANE_5
} L3_SUGGEST_CONFIG;

static const L3_CONFIG_REGISTER_VALUES IVB_L3_PLANE[ IVB_1_L3_CONFIG_NUM ] =
{
	{ 0x01730000, 0x00080040, 0x00000000 },
	{ 0x00730000, 0x02040040, 0x00000000 },
	{ 0x00730000, 0x00800040, 0x00080410 },
	{ 0x00730000, 0x01000038, 0x00080410 },
	{ 0x00730000, 0x02000038, 0x00040410 },
	{ 0x00730000, 0x01000038, 0x00040420 },
	{ 0x01730000, 0x00000038, 0x00080420 },
	{ 0x01730000, 0x00000040, 0x00080020 },
	{ 0x00730000, 0x020400a1, 0x00000000 },
	{ 0x00730000, 0x010000a1, 0x00040810 },
	{ 0x00730000, 0x008000a1, 0x00080410 },
	{ 0x00730000, 0x008000a1, 0x00040420 }
};

static const L3_CONFIG_REGISTER_VALUES HSW_L3_PLANE[ HSW_L3_CONFIG_NUM ] =
{
	{ 0x01610000, 0x00080040, 0x00000000 },
	{ 0x00610000, 0x02040040, 0x00000000 },
	{ 0x00610000, 0x00800040, 0x00080410 },
	{ 0x00610000, 0x01000038, 0x00080410 },
	{ 0x00610000, 0x02000038, 0x00040410 },
	{ 0x00610000, 0x01000038, 0x00040420 },
	{ 0x01610000, 0x00000038, 0x00080420 },
	{ 0x01610000, 0x00000040, 0x00080020 },
	{ 0x00610000, 0x020400a1, 0x00000000 },
	{ 0x00610000, 0x010000a1, 0x00040810 },
	{ 0x00610000, 0x008000a1, 0x00080410 },
	{ 0x00610000, 0x008000a1, 0x00040420 }
};

static const L3_CONFIG_REGISTER_VALUES BDW_L3_PLANE[ BDW_L3_CONFIG_NUM ] =
{
	{ 0, 0, 0, 0x60000060 },
	{ 0, 0, 0, 0x00410060 },
	{ 0, 0, 0, 0x00418040 },
	{ 0, 0, 0, 0x00020040 },
	{ 0, 0, 0, 0x80000040 },
	{ 0, 0, 0, 0x60000021 },
	{ 0, 0, 0, 0x00410021 },
	{ 0, 0, 0, 0x00808021 }
};

static const L3_CONFIG_REGISTER_VALUES CHV_L3_PLANE[ CHV_L3_CONFIG_NUM ] =
{
	{ 0, 0, 0, 0x60000060 },
	{ 0, 0, 0, 0x00410060 },
	{ 0, 0, 0, 0x00418040 },
	{ 0, 0, 0, 0x00020040 },
	{ 0, 0, 0, 0x80000040 },
	{ 0, 0, 0, 0x60000021 },
	{ 0, 0, 0, 0x00410021 },
	{ 0, 0, 0, 0x00808021 }
};

static const L3_CONFIG_REGISTER_VALUES SKL_L3_PLANE[SKL_L3_CONFIG_NUM] =
{
        { 0x60000060, 0x00000000, 0x00000000 },
        { 0x00808060, 0x00000000, 0x00000000 },
        { 0x00818040, 0x00000000, 0x00000000 },
        { 0x00030040, 0x00000000, 0x00000000 },
        { 0x80000040, 0x00000000, 0x00000000 },
        { 0x60000121, 0x00000000, 0x00000000 },
        { 0x00410121, 0x00000000, 0x00000000 },
        { 0x00808121, 0x00000000, 0x00000000 }
};

#ifndef SURFACE_INDEX
#define SURFACE_INDEX
class SurfaceIndex {
 public:
	SurfaceIndex() {
		index = 0;
	};
	SurfaceIndex(const SurfaceIndex & _src) {
		index = _src.index;
	};
	SurfaceIndex(const unsigned int &_n) {
		index = _n;
	};
	SurfaceIndex & operator =(const unsigned int &_n) {
		this->index = _n;
		return *this;
	};
	SurfaceIndex & operator +(const unsigned int &_n) {
		this->index += _n;
		return *this;
	};
	virtual unsigned int get_data(void) {
		return index;
	};
	virtual ~ SurfaceIndex() {};

 private:
	unsigned int index;
	unsigned char extra_byte;
};
#endif

class CmEvent {
 public:
	virtual INT GetStatus(CM_STATUS & status) = 0;
	virtual INT GetExecutionTime(UINT64 & time) = 0;
	virtual INT WaitForTaskFinished(DWORD dwTimeOutMs = CM_MAX_TIMEOUT_MS) = 0;

};

class CmThreadSpace;
class CmThreadGroupSpace {
 public:
	INT GetThreadGroupSpaceSize(UINT & threadSpaceWidth,
				    UINT & threadSpaceHeight,
				    UINT & groupSpaceWidth,
				    UINT & groupSpaceHeight);

};

class CmKernel {
 public:
	virtual INT SetThreadCount(UINT count) = 0;
	virtual INT SetKernelArg(UINT index, size_t size, const void *pValue) = 0;

	virtual INT SetThreadArg(UINT threadId, UINT index, size_t size, const void *pValue) = 0;
	virtual INT SetStaticBuffer(UINT index, const void *pValue) = 0;

	virtual INT AssociateThreadSpace(CmThreadSpace * &pTS) = 0;
	virtual INT AssociateThreadGroupSpace(CmThreadGroupSpace * &pTGS) = 0;
	virtual INT SetSurfaceBTI(SurfaceIndex * pSurface, UINT BTIndex) = 0;

};

class CmTask {
 public:
	virtual INT AddKernel(CmKernel * pKernel) = 0;
	virtual INT Reset(void) = 0;
	virtual INT AddSync(void) = 0;
};

class CmProgram {
 public:
	virtual INT GetKernelCount(UINT & kernelCount) = 0;
};

class CmBuffer {
 public:
	virtual INT GetIndex(SurfaceIndex * &pIndex) = 0;
	virtual INT ReadSurface(unsigned char *pSysMem, CmEvent * pEvent,
				UINT64 sysMemSize = 0xFFFFFFFFFFFFFFFFULL) = 0;
	virtual INT WriteSurface(const unsigned char *pSysMem, CmEvent * pEvent,
				 UINT64 sysMemSize = 0xFFFFFFFFFFFFFFFFULL) = 0;
};

class CmBufferUP {
 public:
	virtual INT GetIndex(SurfaceIndex * &pIndex) = 0;
};

class CmSurface2D {
 public:
	virtual INT GetIndex(SurfaceIndex * &pIndex) = 0;
	virtual INT SetSurfaceStateDimensions(UINT iWidth, UINT iHeight,
				      SurfaceIndex * pSurfIndex = NULL) = 0;

	/* The following Read/Write of 2D surface is not required as when it is
	 * shared between Cm and other component.
	 */

	virtual INT ReadSurface(unsigned char *pSysMem, CmEvent * pEvent,
			UINT64 sysMemSize = 0xFFFFFFFFFFFFFFFFULL) = 0;
	virtual INT WriteSurface(const unsigned char *pSysMem, CmEvent * pEvent,
			 UINT64 sysMemSize = 0xFFFFFFFFFFFFFFFFULL) = 0;
	virtual INT ReadSurfaceStride(unsigned char *pSysMem, CmEvent * pEvent,
			      const UINT stride, UINT64 sysMemSize =
			      0xFFFFFFFFFFFFFFFFULL) = 0;
	virtual INT WriteSurfaceStride(const unsigned char *pSysMem, CmEvent * pEvent,
			       const UINT stride, UINT64 sysMemSize =
			       0xFFFFFFFFFFFFFFFFULL) = 0;
};

class CmSurface2DUP {
 public:
	virtual INT GetIndex(SurfaceIndex * &pIndex) = 0;

	virtual INT GetSurfaceDesc(UINT & width, UINT & height,
			   CM_SURFACE_FORMAT & format, UINT & sizeperpixel) = 0;

};

class CmThreadSpace {
 public:
	INT SelectThreadDependencyPattern(CM_DEPENDENCY_PATTERN pattern);
	INT AssociateThread(UINT x, UINT y, CmKernel * pKernel, UINT threadId,
			    BYTE nDependencyMask =
			    CM_DEFAULT_THREAD_DEPENDENCY_MASK);
	INT Set26ZIDispatchPattern(CM_26ZI_DISPATCH_PATTERN pattern);
	INT Set26ZIMacroBlockSize(UINT width, UINT height);
};

class CmThreadGroupSpace;

class CmQueue {
 public:
	virtual INT Enqueue(CmTask * pTask, CmEvent * &pEvent,
		    const CmThreadSpace * pTS = NULL) = 0;
	virtual INT DestroyEvent(CmEvent * &pEvent) = 0;

	virtual INT EnqueueWithGroup(CmTask * pTask, CmEvent * &pEvent,
			const CmThreadGroupSpace * pTGS = NULL) = 0;
	virtual INT EnqueueWithHints(CmTask * pTask, CmEvent * &pEvent, UINT hints) = 0;
};

class CmDevice {
 public:

	virtual INT CreateBuffer(UINT size, CmBuffer * &pSurface) = 0;
	virtual INT CreateSurface2D(UINT width, UINT height, CM_SURFACE_FORMAT format,
			    CmSurface2D * &pSurface) = 0;

	virtual INT CreateSurface2D(CmOsResource * pOsResource,
			    CmSurface2D * &pSurface) = 0;
	virtual INT CreateBuffer(CmOsResource * pOsResource, CmBuffer * &pSurface) = 0;

	virtual INT CreateBufferUP(UINT size, void *pSystMem, CmBufferUP * &pSurface) = 0;
	virtual INT DestroyBufferUP(CmBufferUP * &pSurface) = 0;

	virtual INT CreateSurface2DUP(UINT width, UINT height,
			      CM_SURFACE_FORMAT format, void *pSysMem,
			      CmSurface2DUP * &pSurface) = 0;
	virtual INT DestroySurface(CmSurface2DUP * &pSurface) = 0;

	virtual INT DestroySurface(CmBuffer * &pSurface) = 0;
	virtual INT DestroySurface(CmSurface2D * &pSurface) = 0;

	virtual INT GetSurface2DInfo(UINT width, UINT height, CM_SURFACE_FORMAT format,
			     UINT & pitch, UINT & physicalSize) = 0;

	virtual INT CreateQueue(CmQueue * &pQueue) = 0;
	virtual INT LoadProgram(void *pCommonISACode, const UINT size,
			CmProgram * &pProgram, const char *options = NULL) = 0;
	virtual INT CreateKernel(CmProgram * pProgram, const char *kernelName,
			 CmKernel * &pKernel, const char *options = NULL) = 0;
	virtual INT DestroyKernel(CmKernel * &pKernel) = 0;
	virtual INT DestroyProgram(CmProgram * &pProgram) = 0;

	virtual INT CreateTask(CmTask * &pTask) = 0;
	virtual INT DestroyTask(CmTask * &pTask) = 0;

	virtual INT CreateThreadGroupSpace(UINT thrdSpaceWidth, UINT thrdSpaceHeight,
				   UINT grpSpaceWidth, UINT grpSpaceHeight,
				   CmThreadGroupSpace * &pTGS) = 0;
	virtual INT DestroyThreadGroupSpace(CmThreadGroupSpace * &pTGS) = 0;

	virtual INT CreateThreadSpace(UINT width, UINT height, CmThreadSpace * &pTS) = 0;
	virtual INT DestroyThreadSpace(CmThreadSpace * &pTS) = 0;

	virtual INT SetSuggestedL3Config( L3_SUGGEST_CONFIG l3_s_c) = 0;

	virtual INT GetRTDllVersion(CM_DLL_FILE_VERSION * pFileVersion) = 0;

	virtual INT GetCaps(CM_DEVICE_CAP_NAME capName, size_t & capValueSize,
		    void *pCapValue) = 0;
};

EXTERN_C INT CreateCmDevice(CmDevice * &pDevice, UINT & version,
			    CmDriverContext * drivercontext =
			    NULL, UINT DevCreateOption =
			    CM_DEVICE_CREATE_OPTION_DEFAULT);

EXTERN_C INT DestroyCmDevice(CmDevice * &pDevice);

#endif				/* _Cm_H_ */
