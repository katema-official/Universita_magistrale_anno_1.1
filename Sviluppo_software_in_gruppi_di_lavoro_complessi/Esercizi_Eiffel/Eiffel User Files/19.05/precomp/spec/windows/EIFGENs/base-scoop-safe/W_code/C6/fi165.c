/*
 * Code for class FIBONACCI
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F165_4290(EIF_REFERENCE);
extern EIF_TYPED_VALUE F165_4291(EIF_REFERENCE);
extern EIF_TYPED_VALUE F165_4292(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F165_4293(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F165_4294(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F165_4295(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F165_4296(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F165_4297(EIF_REFERENCE);
extern void EIF_Minit165(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FIBONACCI}.first */
EIF_TYPED_VALUE F165_4290 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {FIBONACCI}.second */
EIF_TYPED_VALUE F165_4291 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {FIBONACCI}.higher_fibonacci */
EIF_TYPED_VALUE F165_4292 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "higher_fibonacci";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 164, Current, 0, 1, 8363);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(164, Current, 8363);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3187, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) (arg1 <= ti4_1)) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3187, dtype))(Current)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) arg1;
		for (;;) {
			RTHOOK(4);
			ui4_1 = Result;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2209, dtype))(Current, ui4_1x)).it_b);
			if (tb1) break;
			RTHOOK(5);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {FIBONACCI}.lower_fibonacci */
EIF_TYPED_VALUE F165_4293 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "lower_fibonacci";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 164, Current, 0, 1, 8364);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(164, Current, 8364);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_big_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3188, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN) (arg1 >= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3188, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3188, dtype))(Current)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(4);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L));
		for (;;) {
			RTHOOK(5);
			ui4_1 = Result;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2209, dtype))(Current, ui4_1x)).it_b);
			if (tb1) break;
			RTHOOK(6);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result--;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {FIBONACCI}.all_lower_fibonacci */
EIF_TYPED_VALUE F165_4294 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "all_lower_fibonacci";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 164, Current, 2, 1, 8365);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(164, Current, 8365);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000318, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,792,203,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ub1 = (EIF_BOOLEAN) 0;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2628, Dtype(tr1)))(tr1, ub1x, ui4_1x, ui4_2x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ui4_1 = loc2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2268, dtype))(Current, ui4_1x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > arg1)) break;
		RTHOOK(5);
		ub1 = (EIF_BOOLEAN) 1;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2255, "put", Result))(Result, ub1x, ui4_1x);
		RTHOOK(6);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(7);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ui4_1 = loc2;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2268, dtype))(Current, ui4_1x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef ui4_2
#undef ub1
#undef arg1
}

/* {FIBONACCI}.is_fibonacci */
EIF_TYPED_VALUE F165_4295 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_fibonacci";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 164, Current, 2, 1, 8366);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(164, Current, 8366);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3187, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) (arg1 <= ti4_1)) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(3);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3187, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
			RTHOOK(4);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(5);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3187, dtype))(Current)).it_i4);
			loc2 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(6);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			ui4_1 = loc2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2268, dtype))(Current, ui4_1x)).it_i4);
			loc1 = (EIF_INTEGER_32) ti4_1;
			for (;;) {
				RTHOOK(7);
				if ((EIF_BOOLEAN) (loc1 >= arg1)) break;
				RTHOOK(8);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2++;
				RTHOOK(9);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				ui4_1 = loc2;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2268, dtype))(Current, ui4_1x)).it_i4);
				loc1 = (EIF_INTEGER_32) ti4_1;
			}
			RTHOOK(10);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc1 == arg1);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("not_found_in_empty", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2210, dtype))(Current)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {FIBONACCI}.i_th */
EIF_TYPED_VALUE F165_4296 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "i_th";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 164, Current, 3, 1, 8367);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(164, Current, 8367);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_argument", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3187, dtype))(Current)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 2L))) {
			RTHOOK(5);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3188, dtype))(Current)).it_i4);
			Result = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(6);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3188, dtype))(Current)).it_i4);
			loc2 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(7);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3187, dtype))(Current)).it_i4);
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(8);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			for (;;) {
				RTHOOK(9);
				if ((EIF_BOOLEAN)(loc1 == arg1)) break;
				RTHOOK(10);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc3);
				RTHOOK(11);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3 = (EIF_INTEGER_32) loc2;
				RTHOOK(12);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) Result;
				RTHOOK(13);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1++;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {FIBONACCI}.new_cursor */
EIF_TYPED_VALUE F165_4297 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "new_cursor";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 164, Current, 0, 0, 8368);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(164, Current, 8368);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000A4, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(164, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2292, "start", Result))(Result);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

void EIF_Minit165 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
