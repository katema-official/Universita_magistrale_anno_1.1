/*
 * Code for class SED_MEMORY_READER_WRITER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F41_1120(EIF_REFERENCE);
extern void F41_1121(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F41_1122(EIF_REFERENCE);
extern EIF_TYPED_VALUE F41_1123(EIF_REFERENCE);
extern void F41_1124(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F41_1125(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit41(void);

#ifdef __cplusplus
}
#endif

#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SED_MEMORY_READER_WRITER}.make */
void F41_1120 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 40, Current, 0, 0, 1063);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(40, Current, 1063);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 1040, 0xF80000AB, 0); /* buffer */
	tr1 = RTLN(eif_new_type(171, 0x01).id);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1044, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3276, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1040, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 1042, 0x10000000, 1); /* buffer_size */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1044, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(1042, dtype)) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("buffer_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1040, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("buffer_size_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1042, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1044, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ui4_1
}

/* {SED_MEMORY_READER_WRITER}.make_with_buffer */
void F41_1121 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_with_buffer";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 40, Current, 0, 1, 1064);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(40, Current, 1064);
	RTCC(arg1, 40, l_feature_name, 1, RTWCT(1040, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_buffer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 1040, 0xF80000AB, 0); /* buffer */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1040, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 1042, 0x10000000, 1); /* buffer_size */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3283, "count", arg1));
	*(EIF_INTEGER_32 *)(Current + RTWA(1042, dtype)) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("buffer_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1040, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("buffer_size_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1042, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3283, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
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
#undef up1
#undef arg1
}

/* {SED_MEMORY_READER_WRITER}.data */
EIF_TYPED_VALUE F41_1122 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "data";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 40, Current, 0, 0, 1065);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(40, Current, 1065);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000AB, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(171, 0x01).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1040, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tp1 = *(EIF_POINTER *)(tr2 + RTVA(3282, "item", tr2));
	up1 = tp1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1043, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3278, Dtype(tr1)))(tr1, up1x, ui4_1x);
	RTNHOOK(1,2);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("data_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("valid_data_size", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(3283, "count", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1043, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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
#undef up1
#undef ui4_1
}

/* {SED_MEMORY_READER_WRITER}.count */
EIF_TYPED_VALUE F41_1123 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "count";
	RTEX;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 40, Current, 0, 0, 1066);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(40, Current, 1066);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1043, dtype));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SED_MEMORY_READER_WRITER}.set_position */
void F41_1124 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_position";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 40, Current, 0, 1, 1067);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(40, Current, 1067);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_pos_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_pos_not_too_big", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1040, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(3283, "count", tr1));
		RTTE((EIF_BOOLEAN) (arg1 < ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 1043, 0x10000000, 1); /* buffer_position */
	*(EIF_INTEGER_32 *)(Current + RTWA(1043, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("position_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1043, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {SED_MEMORY_READER_WRITER}.check_buffer */
void F41_1125 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "check_buffer";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 40, Current, 0, 1, 1068);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(40, Current, 1068);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1043, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1042, dtype));
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ti4_1) > ti4_2)) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1040, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1043, dtype));
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1040, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(3,2);
		ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(3283, "count", tr2));
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1040, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(3,3);
		ti4_3 = *(EIF_INTEGER_32 *)(tr2 + RTVA(3283, "count", tr2));
		ui4_1 = (EIF_INTEGER_32) (ti4_2 + (EIF_INTEGER_32) (ti4_3 / ((EIF_INTEGER_32) 2L)));
		ti4_2 = eif_max_int32 ((EIF_INTEGER_32) (arg1 + ti4_1),ui4_1);
		ui4_1 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3364, "resize", tr1))(tr1, ui4_1x);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 1042, 0x10000000, 1); /* buffer_size */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1040, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(3283, "count", tr1));
		*(EIF_INTEGER_32 *)(Current + RTWA(1042, dtype)) = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("buffer_adapted", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1043, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1042, dtype));
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ti4_1) <= ti4_2)) {
			RTCK;
		} else {
			RTCF;
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
#undef up1
#undef up2
#undef ui4_1
#undef arg1
}

void EIF_Minit41 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
