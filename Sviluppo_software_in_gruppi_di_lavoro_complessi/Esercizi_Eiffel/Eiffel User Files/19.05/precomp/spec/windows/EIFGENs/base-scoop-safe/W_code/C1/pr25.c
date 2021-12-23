/*
 * Code for class PROFILING_SETTING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F25_695(EIF_REFERENCE);
extern EIF_TYPED_VALUE F25_696(EIF_REFERENCE);
extern void F25_697(EIF_REFERENCE);
extern void F25_698(EIF_REFERENCE);
extern EIF_TYPED_VALUE F25_699(EIF_REFERENCE);
extern EIF_TYPED_VALUE F25_700(EIF_REFERENCE);
extern void F25_701(EIF_REFERENCE);
extern void F25_702(EIF_REFERENCE);
extern void EIF_Minit25(void);

#ifdef __cplusplus
}
#endif

#include "eif_eiffel.h"
#include "eif_project.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PROFILING_SETTING}.make */
void F25_695 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 24, Current, 0, 0, 795);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(24, Current, 795);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(703, dtype))(Current)).it_b);
	RTNHOOK(1,1);
	eif_do_nothing_value.it_b = tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {PROFILING_SETTING}.is_profiling */
EIF_TYPED_VALUE F25_696 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_profiling";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 24, Current, 0, 0, 796);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(24, Current, 796);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(704, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {PROFILING_SETTING}.start_profiling */
void F25_697 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "start_profiling";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 24, Current, 0, 0, 797);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(24, Current, 797);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(703, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(705, dtype))(Current);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {PROFILING_SETTING}.stop_profiling */
void F25_698 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "stop_profiling";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 24, Current, 0, 0, 798);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(24, Current, 798);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(703, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(706, dtype))(Current);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {PROFILING_SETTING}.is_profiler_enabled */
RTOID (F25_699)
EIF_TYPED_VALUE F25_699 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_profiler_enabled";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_BOOLEAN)
	RTOTDB(EIF_BOOLEAN, F25_699);
	dtype = Dtype(Current);

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 24, Current, 0, 0, 799);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(24, Current, 799);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(700, dtype))(Current)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef Result
}

/* {PROFILING_SETTING}.c_prof_enabled */
EIF_TYPED_VALUE F25_700 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_prof_enabled";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 24, Current, 0, 0, 800);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(24, Current, 800);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) egc_prof_enabled;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {PROFILING_SETTING}.set_prof_enabled */
void F25_701 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_prof_enabled";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 24, Current, 0, 0, 801);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(24, Current, 801);
	RTIV(Current, RTAL);
	egc_prof_enabled = 3;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {PROFILING_SETTING}.set_prof_disabled */
void F25_702 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_prof_disabled";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 24, Current, 0, 0, 802);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(24, Current, 802);
	RTIV(Current, RTAL);
	egc_prof_enabled = 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit25 (void)
{
	GTCX
	RTOTS (699,F25_699)
}


#ifdef __cplusplus
}
#endif
