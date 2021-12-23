/*
 * Code for class THREAD_ENVIRONMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F43_1129(EIF_REFERENCE);
extern EIF_TYPED_VALUE F43_1130(EIF_REFERENCE);
extern void EIF_Minit43(void);

#ifdef __cplusplus
}
#endif

#include <eif_threads.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F43_1129
static EIF_POINTER inline_F43_1129 (void)
{
	return eif_thr_thread_id();
	;
}
#define INLINE_F43_1129
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {THREAD_ENVIRONMENT}.current_thread_id */
EIF_TYPED_VALUE F43_1129 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "current_thread_id";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 42, Current, 0, 0, 1072);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(42, Current, 1072);
	RTIV(Current, RTAL);
	Result = inline_F43_1129 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {THREAD_ENVIRONMENT}.get_current_id */
EIF_TYPED_VALUE F43_1130 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "get_current_id";
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 42, Current, 0, 0, 1073);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(42, Current, 1073);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x40000000, 1,0); /* Result */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1056, dtype))(Current)).it_p);
	Result = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

void EIF_Minit43 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
