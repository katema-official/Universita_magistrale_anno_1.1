/*
 * Code for class CLASS_NAME_TRANSLATIONS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F160_4055(EIF_REFERENCE);
extern void F160_4056(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F160_4057(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F160_4058(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F160_4059(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F160_4060(EIF_REFERENCE);
extern EIF_TYPED_VALUE F160_4061(EIF_REFERENCE);
extern void F160_4062(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F160_4063(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F160_4064(EIF_REFERENCE);
extern EIF_TYPED_VALUE F160_4065(EIF_REFERENCE);
extern EIF_TYPED_VALUE F160_4066(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F160_4067(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit160(void);

#ifdef __cplusplus
}
#endif

#include "eif_retrieve.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CLASS_NAME_TRANSLATIONS}.default_create */
void F160_4055 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_create";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,tr2);
	RTLR(4,ur2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 159, Current, 2, 0, 7228);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(159, Current, 7228);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3077, dtype))(Current)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	ui4_1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2970, dtype))(Current, ui4_1x);
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(5);
		tr1 = RTLN(eif_new_type(232, 0x01).id);
		ui4_1 = loc1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3079, dtype))(Current, ui4_1x)).it_p);
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4739, Dtype(tr1)))(tr1, up1x);
		RTNHOOK(5,1);
		ur1 = RTCCL(tr1);
		tr2 = RTLN(eif_new_type(232, 0x01).id);
		ui4_1 = loc1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3078, dtype))(Current, ui4_1x)).it_p);
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4739, Dtype(tr2)))(tr2, up1x);
		RTNHOOK(5,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2255, dtype))(Current, ur1x, ur2x);
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
}

/* {CLASS_NAME_TRANSLATIONS}.put */
void F160_4056 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "put";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(8,ur2);
	RTLR(9,tr5);
	RTLR(10,tr6);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 159, Current, 0, 2, 7229);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(159, Current, 7229);
	RTCC(arg1, 159, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTCC(arg2, 159, l_feature_name, 2, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		ur1 = RTCCL(arg2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2254, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTJB;
label_2:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		ti4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		ti4_2 = ti4_3;
		RTE_OT
		ur1 = RTCCL(arg2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = tr2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ur1 = RTCCL(arg2);
		tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr3 = tr4;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
		tb1 = tb2;
		in_assertion = 0;
	}
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2255, 412))(Current, ur1x, ur2x);
	RTHOOK(4);
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2986, dtype))(Current)).it_b);
	if (tb2) {
		RTHOOK(5);
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3074, dtype))(Current, ur1x, ur2x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("conflict_or_inserted", EX_POST);
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2985, dtype))(Current)).it_b);
		if (!tb3) {
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2986, dtype))(Current)).it_b);
			tb2 = tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("insertion_done", EX_POST);
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2986, dtype))(Current)).it_b);
		if (tb3) {
			ur1 = RTCCL(arg2);
			tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb2 = RTCEQ(tr5, arg1);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("now_present", EX_POST);
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2986, dtype))(Current)).it_b);
		if (tb3) {
			ur1 = RTCCL(arg2);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2254, dtype))(Current, ur1x)).it_b);
			tb2 = tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("one_more_if_inserted", EX_POST);
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2986, dtype))(Current)).it_b);
		if (tb3) {
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
			tb2 = (EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("unchanged_if_conflict", EX_POST);
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2985, dtype))(Current)).it_b);
		if (tb3) {
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
			tb2 = (EIF_BOOLEAN)(ti4_3 == ti4_2);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("same_item_if_conflict", EX_POST);
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2985, dtype))(Current)).it_b);
		if (tb3) {
			ur1 = RTCCL(arg2);
			tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTCO(tr2);
			tb2 = (RTCEQ(tr5, tr1));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("found_item_associated_with_key", EX_POST);
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2973, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(arg2);
		tr6 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		if (RTCEQ(tr5, tr6)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("new_item_if_inserted", EX_POST);
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2986, dtype))(Current)).it_b);
		if (tb3) {
			tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2973, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb2 = RTCEQ(tr5, arg1);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("old_item_if_conflict", EX_POST);
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2985, dtype))(Current)).it_b);
		if (tb3) {
			tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2973, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTCO(tr4);
			tb2 = (RTCEQ(tr5, tr3));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("default_property", EX_POST);
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
		tb3 = '\01';
		tb4 = '\0';
		tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2986, dtype))(Current)).it_b);
		if (tb5) {
			tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3037, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb4 = RTCEQ(arg2, tr5);
		}
		if (!(tb4)) {
			tb4 = '\0';
			tb5 = '\01';
			tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2985, dtype))(Current)).it_b);
			if (!tb6) {
				tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3037, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tb5 = !RTCEQ(arg2, tr5);
			}
			if (tb5) {
				tb4 = tb1;
			}
			tb3 = tb4;
		}
		if ((EIF_BOOLEAN)(tb2 == tb3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef arg2
#undef arg1
}

/* {CLASS_NAME_TRANSLATIONS}.force */
void F160_4057 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "force";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,ur2);
	RTLR(8,tr4);
	RTLR(9,tr5);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 159, Current, 0, 2, 7230);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(159, Current, 7230);
	RTCC(arg1, 159, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTCC(arg2, 159, l_feature_name, 2, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		ur1 = RTCCL(arg2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2254, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTJB;
label_2:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ur1 = RTCCL(arg2);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2254, dtype))(Current, ur1x)).it_b);
		tb1 = tb2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		ti4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		ti4_2 = ti4_3;
		RTE_OT
		ur1 = RTCCL(arg2);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = tr3;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		tb3 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
		tb2 = tb3;
		in_assertion = 0;
	}
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2256, 412))(Current, ur1x, ur2x);
	RTHOOK(4);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3074, dtype))(Current, ur1x, ur2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("inserted", EX_POST);
		ur1 = RTCCL(arg2);
		tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2252, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr4, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("insertion_done", EX_POST);
		ur1 = RTCCL(arg2);
		tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr4, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("now_present", EX_POST);
		ur1 = RTCCL(arg2);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2254, dtype))(Current, ur1x)).it_b);
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("found_or_not_found", EX_POST);
		tb3 = '\01';
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2989, dtype))(Current)).it_b);
		if (!tb4) {
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2990, dtype))(Current)).it_b);
			tb3 = tb4;
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("not_found_if_was_not_present", EX_POST);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2990, dtype))(Current)).it_b);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(tb3 == (EIF_BOOLEAN) !tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("same_count_or_one_more", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_3 == ti4_1) || (EIF_BOOLEAN)(ti4_4 == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("found_item_is_old_item", EX_POST);
		tb3 = '\01';
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2989, dtype))(Current)).it_b);
		if (tb4) {
			tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2973, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTCO(tr3);
			tb3 = (RTCEQ(tr4, tr2));
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("default_value_if_not_found", EX_POST);
		tb3 = '\01';
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2990, dtype))(Current)).it_b);
		if (tb4) {
			tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2973, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr5 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3038, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tb3 = RTCEQ(tr4, tr5);
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("default_property", EX_POST);
		tb3 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
		tb4 = '\01';
		tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3037, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (!(RTCEQ(arg2, tr4))) {
			tb5 = '\0';
			tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3037, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if (!RTCEQ(arg2, tr4)) {
				tb5 = tb2;
			}
			tb4 = tb5;
		}
		if ((EIF_BOOLEAN)(tb3 == tb4)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef arg2
#undef arg1
}

/* {CLASS_NAME_TRANSLATIONS}.extend */
void F160_4058 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "extend";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,ur2);
	RTLR(5,tr1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 159, Current, 0, 2, 7231);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(159, Current, 7231);
	RTCC(arg1, 159, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTCC(arg2, 159, l_feature_name, 2, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_present", EX_PRE);
		ur1 = RTCCL(arg2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2254, dtype))(Current, ur1x)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		ti4_1 = ti4_2;
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
		tb1 = tb2;
		in_assertion = 0;
	}
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3002, 412))(Current, ur1x, ur2x);
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3074, dtype))(Current, ur1x, ur2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2986, dtype))(Current)).it_b);
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("insertion_done", EX_POST);
		ur1 = RTCCL(arg2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("one_more", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("default_property", EX_POST);
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
		tb3 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3037, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (!(RTCEQ(arg2, tr1))) {
			tb3 = tb1;
		}
		if ((EIF_BOOLEAN)(tb2 == tb3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef arg2
#undef arg1
}

/* {CLASS_NAME_TRANSLATIONS}.replace */
void F160_4059 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "replace";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(8,ur2);
	RTLR(9,tr5);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 159, Current, 0, 2, 7232);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(159, Current, 7232);
	RTCC(arg1, 159, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTCC(arg2, 159, l_feature_name, 2, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ur1 = RTCCL(arg2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = tr2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ur1 = RTCCL(arg2);
		tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr3 = tr4;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	ur1 = RTCCL(arg2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2254, dtype))(Current, ur1x)).it_b);
	if (tb1) {
		RTHOOK(2);
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3003, 412))(Current, ur1x, ur2x);
		RTHOOK(3);
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3074, dtype))(Current, ur1x, ur2x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("replaced_or_not_found", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2987, dtype))(Current)).it_b);
		if (!tb2) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2990, dtype))(Current)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("insertion_done", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2987, dtype))(Current)).it_b);
		if (tb2) {
			ur1 = RTCCL(arg2);
			tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = RTCEQ(tr5, arg1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("no_change_if_not_found", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2990, dtype))(Current)).it_b);
		if (tb2) {
			ur1 = RTCCL(arg2);
			tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTCO(tr2);
			tb1 = RTCEQ(tr5, tr1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("found_item_is_old_item", EX_POST);
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2973, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTCO(tr4);
		if (RTCEQ(tr5, tr3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef arg2
#undef arg1
}

/* {CLASS_NAME_TRANSLATIONS}.wipe_out */
void F160_4060 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "wipe_out";
	RTEX;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 159, Current, 0, 0, 7233);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(159, Current, 7233);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2219, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2226, 412))(Current);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3076, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("wiped_out", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2210, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("position_equal_to_zero", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3014, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("count_equal_to_zero", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("has_default_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("no_status", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3057, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {CLASS_NAME_TRANSLATIONS}.out */
EIF_TYPED_VALUE F160_4061 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "out";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 159, Current, 2, 0, 7221);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(159, Current, 7221);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(232, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
	ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 25L) + (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 40L)));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4642, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("Class name translations:\012",25,846225162);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2995, dtype))(Current);
	for (;;) {
		RTHOOK(4);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2991, dtype))(Current)).it_b);
		if (tb1) break;
		RTHOOK(5);
		RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(7);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
		}
		RTHOOK(8);
		tr1 = RTMS_EX_H(" -> ",4,539835936);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
		RTHOOK(9);
		RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2978, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(11);
			ur1 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
		}
		RTHOOK(12);
		uc1 = (EIF_CHARACTER_8) '\012';
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", Result))(Result, uc1x);
		RTHOOK(13);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2996, dtype))(Current);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
}

/* {CLASS_NAME_TRANSLATIONS}.add_translation */
void F160_4062 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "add_translation";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 159, Current, 2, 2, 7222);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(159, Current, 7222);
	if (arg1) {
		RTCC(arg1, 159, l_feature_name, 1, eif_new_type(232, 0x00), 0x00);
	}
	if (arg2) {
		RTCC(arg2, 159, l_feature_name, 2, eif_new_type(232, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 != NULL) && (EIF_BOOLEAN)(arg2 != NULL))) {
		RTHOOK(2);
		RTDBGAL(1, 0xF8000000, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4839, "to_c", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(3);
		RTDBGAL(2, 0xF8000000, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4839, "to_c", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		up1 = loc1;
		up2 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3075, dtype))(Current, up1x, up2x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef arg2
#undef arg1
}

/* {CLASS_NAME_TRANSLATIONS}.class_translation_put */
void F160_4063 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "class_translation_put";
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
	
	RTEAA(l_feature_name, 159, Current, 0, 2, 7223);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(159, Current, 7223);
	RTIV(Current, RTAL);class_translation_put(arg1, arg2);
	
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

/* {CLASS_NAME_TRANSLATIONS}.class_translation_clear */
void F160_4064 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "class_translation_clear";
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
	
	RTEAA(l_feature_name, 159, Current, 0, 0, 7224);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(159, Current, 7224);
	RTIV(Current, RTAL);class_translation_clear();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {CLASS_NAME_TRANSLATIONS}.class_translation_count */
EIF_TYPED_VALUE F160_4065 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "class_translation_count";
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
	
	RTEAA(l_feature_name, 159, Current, 0, 0, 7225);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(159, Current, 7225);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) class_translation_count();
	
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

/* {CLASS_NAME_TRANSLATIONS}.class_translation_old */
EIF_TYPED_VALUE F160_4066 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "class_translation_old";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 159, Current, 0, 1, 7226);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(159, Current, 7226);
	RTIV(Current, RTAL);Result = (EIF_POINTER) class_translation_old(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg1
}

/* {CLASS_NAME_TRANSLATIONS}.class_translation_new */
EIF_TYPED_VALUE F160_4067 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "class_translation_new";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 159, Current, 0, 1, 7227);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(159, Current, 7227);
	RTIV(Current, RTAL);Result = (EIF_POINTER) class_translation_new(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg1
}

void EIF_Minit160 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
