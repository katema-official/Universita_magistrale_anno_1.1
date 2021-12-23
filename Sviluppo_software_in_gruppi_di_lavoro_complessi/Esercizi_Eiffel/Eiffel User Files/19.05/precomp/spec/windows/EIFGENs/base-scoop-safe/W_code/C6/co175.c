/*
 * Code for class CONDITION_VARIABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F175_4620(EIF_REFERENCE);
extern EIF_TYPED_VALUE F175_4621(EIF_REFERENCE);
extern void F175_4622(EIF_REFERENCE);
extern void F175_4623(EIF_REFERENCE);
extern void F175_4624(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F175_4625(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F175_4626(EIF_REFERENCE);
extern EIF_TYPED_VALUE F175_4627(EIF_REFERENCE);
extern void F175_4628(EIF_REFERENCE);
extern EIF_TYPED_VALUE F175_4629(EIF_REFERENCE);
extern void F175_4630(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F175_4631(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F175_4632(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F175_4633(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F175_4634(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit175(void);

#ifdef __cplusplus
}
#endif

#include "eif_threads.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CONDITION_VARIABLE}.make */
void F175_4620 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 174, Current, 0, 0, 9498);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(174, Current, 9498);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3428, 0x40000000, 1); /* cond_pointer */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3429, dtype))(Current)).it_p);
	*(EIF_POINTER *)(Current + RTWA(3428, dtype)) = (EIF_POINTER) tp1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3422, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
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

/* {CONDITION_VARIABLE}.is_set */
EIF_TYPED_VALUE F175_4621 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_set";
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	
	RTEAA(l_feature_name, 174, Current, 0, 0, 9499);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(174, Current, 9499);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tp1 = *(EIF_POINTER *)(Current + RTWA(3428, dtype));
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	if (!(EIF_BOOLEAN)(tp1 != tp2)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1617, 123))(Current)).it_b);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
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

/* {CONDITION_VARIABLE}.signal */
void F175_4622 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "signal";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 174, Current, 0, 0, 9500);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(174, Current, 9500);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_set", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3422, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(3428, dtype));
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3431, dtype))(Current, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {CONDITION_VARIABLE}.broadcast */
void F175_4623 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "broadcast";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 174, Current, 0, 0, 9501);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(174, Current, 9501);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_set", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3422, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(3428, dtype));
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3430, dtype))(Current, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {CONDITION_VARIABLE}.wait */
void F175_4624 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "wait";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 174, Current, 0, 1, 9502);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(174, Current, 9502);
	RTCC(arg1, 174, l_feature_name, 1, eif_new_type(177, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_set", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3422, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_mutex_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + RTWA(3428, dtype));
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(arg1 + RTVA(3515, "mutex_pointer", arg1));
	up2 = tp2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3432, dtype))(Current, up1x, up2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef arg1
}

/* {CONDITION_VARIABLE}.wait_with_timeout */
EIF_TYPED_VALUE F175_4625 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "wait_with_timeout";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 174, Current, 0, 2, 9503);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(174, Current, 9503);
	RTCC(arg1, 174, l_feature_name, 1, eif_new_type(177, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_set", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3422, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_mutex_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("timeout_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(3428, dtype));
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(arg1 + RTVA(3515, "mutex_pointer", arg1));
	up2 = tp2;
	ui4_1 = arg2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3433, dtype))(Current, up1x, up2x, ui4_1x)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ui4_1
#undef arg2
#undef arg1
}

/* {CONDITION_VARIABLE}.destroy */
void F175_4626 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "destroy";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 174, Current, 0, 0, 9504);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(174, Current, 9504);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_set", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3422, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(3428, dtype));
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3434, dtype))(Current, up1x);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 3428, 0x40000000, 1); /* cond_pointer */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	*(EIF_POINTER *)(Current + RTWA(3428, dtype)) = (EIF_POINTER) tp1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("not_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3422, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
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
}

/* {CONDITION_VARIABLE}.cond_pointer */
EIF_TYPED_VALUE F175_4627 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(3428,Dtype(Current)));
	return r;
}


/* {CONDITION_VARIABLE}.dispose */
void F175_4628 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dispose";
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
	
	RTEAA(l_feature_name, 174, Current, 0, 0, 9506);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(174, Current, 9506);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3422, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3427, dtype))(Current);
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

/* {CONDITION_VARIABLE}.eif_thr_cond_create */
EIF_TYPED_VALUE F175_4629 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "eif_thr_cond_create";
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
	
	RTEAA(l_feature_name, 174, Current, 0, 0, 9507);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(174, Current, 9507);
	RTIV(Current, RTAL);Result = (EIF_POINTER) eif_thr_cond_create();
	
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

/* {CONDITION_VARIABLE}.eif_thr_cond_broadcast */
void F175_4630 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "eif_thr_cond_broadcast";
	RTEX;
#define arg1 arg1x.it_p
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 174, Current, 0, 1, 9508);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(174, Current, 9508);
	RTIV(Current, RTAL);eif_thr_cond_broadcast(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {CONDITION_VARIABLE}.eif_thr_cond_signal */
void F175_4631 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "eif_thr_cond_signal";
	RTEX;
#define arg1 arg1x.it_p
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 174, Current, 0, 1, 9509);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(174, Current, 9509);
	RTIV(Current, RTAL);eif_thr_cond_signal(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {CONDITION_VARIABLE}.eif_thr_cond_wait */
void F175_4632 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "eif_thr_cond_wait";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 174, Current, 0, 2, 9510);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(174, Current, 9510);
	RTIV(Current, RTAL);
	EIF_ENTER_C;eif_thr_cond_wait(arg1, arg2);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {CONDITION_VARIABLE}.eif_thr_cond_wait_with_timeout */
EIF_TYPED_VALUE F175_4633 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "eif_thr_cond_wait_with_timeout";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 174, Current, 0, 3, 9511);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(174, Current, 9511);
	RTIV(Current, RTAL);
	EIF_ENTER_C;Result = (EIF_INTEGER_32) eif_thr_cond_wait_with_timeout((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER) arg3);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* {CONDITION_VARIABLE}.eif_thr_cond_destroy */
void F175_4634 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "eif_thr_cond_destroy";
	RTEX;
#define arg1 arg1x.it_p
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 174, Current, 0, 1, 9512);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(174, Current, 9512);
	RTIV(Current, RTAL);eif_thr_cond_destroy(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

void EIF_Minit175 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
