#ifndef __OCL_H__
#define __OCL_H__
#ifdef __APPLE_CC__
#include <OpenCL/opencl.h>
#else
#include <CL/cl.h>
#endif


typedef struct {
	cl_context context;
	cl_kernel kernel;
	cl_command_queue commandQueue;
	cl_program program;
	cl_mem inputBuffer;
	cl_mem foundNonce;
} _clState;

typedef struct {
    uint32_t data[20];
	uint32_t target[8];
} dev_blk_ctx;


struct work_t {
	unsigned char	data[128];
	unsigned char	hash1[64];
	unsigned char	midstate[32];
	unsigned char	target[32];

	unsigned char	hash[32];
	uint32_t		res_nonce;
	uint32_t		valid;
    uint32_t        height;
	dev_blk_ctx		blk;
};

extern char *file_contents(const char *filename, int *length);
extern int clDevicesNum();
extern _clState *initCl(int gpu, char *name, size_t nameSize);

#endif /* __OCL_H__ */
