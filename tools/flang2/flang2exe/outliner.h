/*
 * Copyright (c) 2015-2018, NVIDIA CORPORATION.  All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef OUTLINER_H_
#define OUTLINER_H_

/** \file
 * \brief Various definitions for the outliner module
 */

#include <stdio.h>

extern FILE *par_file1;
extern FILE *par_file2;
extern FILE *par_curfile;

int ll_has_cuda_constructor(void);
void ll_save_cuda_constructor(void);

/**
   \brief ...
 */
bool ll_ilm_is_rewriting(void);

/**
   \brief ...
 */
char *ll_get_outlined_funcname(int fileno, int lineno);

/**
   \brief ...
 */
int ll_ad_outlined_func2(int result_opc, int call_opc, int sptr, int nargs,
                         int *args);

/**
   \brief ...
 */
int ll_create_task_sptr(void);

/**
   \brief ...
 */
int ll_get_gtid_addr_ili(void);

/**
   \brief ...
 */
int ll_get_gtid_val_ili(void);

/**
   \brief ...
 */
int ll_get_gtid(void);

/**
   \brief ...
 */
int ll_get_hostprog_arg(int func_sptr, int whicharg);

/**
   \brief ...
 */
int ll_get_shared_arg(int func_sptr);

/**
   \brief ...
 */
int ll_get_uplevel_arg(void);

/**
   \brief ...
 */
int ll_get_uplevel_offset(int sptr);

/**
   \brief ...
 */
int ll_get_uplevel_sym(void);

/**
   \brief ...
 */
int ll_has_more_outlined(void);

/**
   \brief ...
 */
int ll_load_outlined_args(int scope_blk_sptr, int callee_sptr, bool clone);

/**
   \brief ...
 */
int ll_make_outlined_call2(int func_sptr, int uplevel_ili);

/**
   \brief ...
 */
int ll_make_outlined_call(int func_sptr, int arg1, int arg2, int arg3);

/**
   \brief ...
 */
int ll_make_outlined_func(int stblk_sptr, int scope_sptr);

/**
   \brief ...
 */
int ll_make_outlined_garg(int nargs, int *argili, int *arg_dtypes);

/**
   \brief ...
 */
int ll_make_outlined_gjsr(int func_sptr, int nargs, int arg1, int arg2, int arg3);

/**
   \brief ...
 */
int ll_make_outlined_task_call(int func_sptr, int task_sptr);

/**
   \brief ...
 */
int ll_make_outlined_task(int stblk_sptr, int scope_sptr);

/**
   \brief ...
 */
int *ll_make_sections_args(int lbSym, int ubSym, int stSym, int lastSym);

/**
   \brief ...
 */
int ll_make_uplevel_type(int stblk_sptr);

/**
   \brief ...
 */
int llProcessNextTmpfile(void);

/**
   \brief ...
 */
int ll_reset_parfile(void);

/**
   \brief ...
 */
int ll_rewrite_ilms(int lineno, int ilmx, int len);

/**
   \brief ...
 */
int ll_save_gtid_val(int bih);

/**
   \brief ...
 */
int llvmAddConcurEntryBlk(int bih);

/**
   \brief ...
 */
int llvmGetExpbCurIlt(void);

/**
   \brief ...
 */
int llvm_get_unique_sym(void);

/**
   \brief ...
 */
int llvm_ilms_rewrite_mode(void);

/**
   \brief Dump the list of variables for the parallel regions specified by
   'sptr'.

   These variables should be used to make the uplevel struct when making a call
   to this outlined region.
 */
void dump_parsyms(int sptr);

/**
   \brief ...
 */
void finish_taskdup_routine(int curilm, int fnsptr, INT offset);

/**
   \brief ...
 */
void ilm_outlined_pad_ilm(int curilm);

/**
   \brief ...
 */
void ll_make_ftn_outlined_params(int func_sptr, int paramct, int *argtype);

/**
   \brief ...
 */
void ll_open_parfiles(void);

/**
   \brief ...
 */
void ll_reset_gtid(void);

/**
   \brief ...
 */
void ll_reset_outlined_func(void);

/**
   \brief ...
 */
void ll_set_outlined_currsub(void);

/**
   \brief ...
 */
void ll_unlink_parfiles(void);

/**
   \brief ...
 */
void llvmAddConcurExitBlk(int bih);

/**
   \brief ...
 */
void llvmSetExpbCurIlt(void);

/**
   \brief ...
 */
void llvm_set_unique_sym(int sptr);

/**
   \brief ...
 */
void ll_write_ilm_end(void);

/**
   \brief ...
 */
void ll_write_ilm_header(int outlined_sptr, int curilm);

/**
   \brief ...
 */
void llWriteNopILM(int lineno, int ilmx, int len);

/**
   \brief ...
 */
void restartRewritingILM(int curilm);

/**
   \brief ...
 */
void setOutlinedPragma(int func_sptr, int saved);

/**
   \brief ...
 */
void setRewritingILM(void);

/**
   \brief ...
 */
void start_taskdup(int task_fnsptr, int curilm);

/**
   \brief ...
 */
void stop_taskdup(int task_fnsptr, int curilm);

/**
   \brief ...
 */
void unsetRewritingILM(void);

/**
   \brief ...
 */
void update_acc_with_fn(int fnsptr);


#endif /* OUTLINER_H_ */
