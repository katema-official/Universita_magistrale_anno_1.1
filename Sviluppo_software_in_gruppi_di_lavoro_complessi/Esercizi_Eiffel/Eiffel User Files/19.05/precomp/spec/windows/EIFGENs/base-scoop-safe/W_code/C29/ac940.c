/*
 * Code for class ACTION_SEQUENCE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F940_4196(EIF_REFERENCE);
extern void F940_4197(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F940_4198(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F940_4199(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F940_4200(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F940_4201(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_4202(EIF_REFERENCE);
extern void F940_4203(EIF_REFERENCE);
extern void F940_4204(EIF_REFERENCE);
extern void F940_4205(EIF_REFERENCE);
extern void F940_4206(EIF_REFERENCE);
extern void F940_4207(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_4208(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_4209(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_4210(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_4211(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_4212(EIF_REFERENCE);
extern void F940_4213(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F940_4214(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F940_4215(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F940_4216(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_4217(EIF_REFERENCE);
extern void F940_4218(EIF_REFERENCE);
extern void F940_4219(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F940_4220(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F940_4221(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_4222(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_4223(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_4224(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_4225(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_4226(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_4227(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_4228(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_4229(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_4230(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_4231(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_4232(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F940_7184(EIF_REFERENCE, int);
extern void EIF_Minit940(void);

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

/* {ACTION_SEQUENCE}.default_create */
void F940_4196 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_create";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 939, Current, 0, 0, 8270);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 8270);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3081, dtype))(Current, ui4_1x);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 3121, 0x10000000, 1); /* state */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3122, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(3121, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
}

/* {ACTION_SEQUENCE}.on_item_added_at */
void F940_4197 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "on_item_added_at";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 939, Current, 0, 2, 8271);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 8271);
	RTCC(arg1, 939, l_feature_name, 1, RTWCT(2258, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("item_index_valid", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2)) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2269, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN) (arg2 <= ti4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\0';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2269, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3142, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb1 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if (tb1) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3128, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3132, dtype))(Current, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef arg2
#undef arg1
}

/* {ACTION_SEQUENCE}.on_item_removed_at */
void F940_4198 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "on_item_removed_at";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 939, Current, 0, 2, 8272);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 8272);
	RTCC(arg1, 939, l_feature_name, 1, RTWCT(2258, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("item_index_valid", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2)) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2269, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\0';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2269, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3143, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb1 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if (tb1) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3129, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3132, dtype))(Current, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef arg2
#undef arg1
}

/* {ACTION_SEQUENCE}.call */
void F940_4199 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "call";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,loc1);
	RTLR(5,tr3);
	RTLR(6,ur1);
	RTLR(7,loc5);
	RTLR(8,loc4);
	RTLR(9,loc6);
	RTLR(10,loc3);
	RTLR(11,tr4);
	RTLIU(12);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_INT32, &loc7);
	
	RTEAA(l_feature_name, 939, Current, 7, 1, 8273);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 8273);
	RTCC(arg1, 939, l_feature_name, 1, RTWCT(3144, dtype, Dftype(Current)), 0x02);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3133, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = tr2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2269, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		RTDBGAL(1, 0xF8000114, 0, 0); /* loc1 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2269, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,276,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(2258, dtype, Dftype(Current));
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(Dftype(Current), typarr0);
			if (ui4_1< 0) {
				eraise ("non_negative_argument", EN_RT_CHECK);
			}
			tr3 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
			RT_SPECIAL_COUNT(tr3) = 0;
		}
		loc1 = (EIF_REFERENCE) tr3;
		RTHOOK(3);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3085, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = tr3;
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ui4_3 = ((EIF_INTEGER_32) 0L);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2269, dtype))(Current)).it_i4);
		ui4_4 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2579, "copy_data", loc1))(loc1, ur1x, ui4_2x, ui4_3x, ui4_4x);
		RTHOOK(4);
		RTDBGAL(5, 0xF800010E, 0, 0); /* loc5 */
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc5 = (EIF_REFERENCE) RTCCL(tr3);
		RTHOOK(5);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2210, "is_empty", loc5))(loc5)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTHOOK(6);
			RTDBGAL(4, 0xF8000114, 0, 0); /* loc4 */
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3085, "area", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = (EIF_REFERENCE) tr3;
			RTHOOK(7);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2269, "count", loc5))(loc5)).it_i4);
			loc2 = (EIF_INTEGER_32) ti4_2;
			RTHOOK(8);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			for (;;) {
				RTHOOK(9);
				if ((EIF_BOOLEAN)(loc7 == loc2)) break;
				RTHOOK(10);
				ui4_2 = loc7;
				tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2564, "at", loc4))(loc4, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2225, dtype))(Current, ur1x);
				RTHOOK(11);
				RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
				loc7++;
			}
			RTHOOK(12);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2226, "wipe_out", loc5))(loc5);
		}
		RTHOOK(13);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3121, dtype));
		switch (ti4_2) {
			case 1L:
				RTHOOK(14);
				RTDBGAL(6, 0xF800037A, 0, 0); /* loc6 */
				tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3133, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc6 = (EIF_REFERENCE) RTCCL(tr3);
				RTHOOK(15);
				ub1 = (EIF_BOOLEAN) 0;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", loc6))(loc6, ub1x);
				RTHOOK(16);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", loc1))(loc1)).it_i4);
				loc2 = (EIF_INTEGER_32) ti4_2;
				RTHOOK(17);
				RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
				loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				if (RTAL & CK_LOOP) {
					RTHOOK(18);
					RTCT("l_count - i", EX_VAR);
					ti4_3 = (EIF_INTEGER_32) (loc2 - loc7);
					if (ti4_3 >= 0) {
						RTCK;
					} else {
						RTCF;
					}
				}
				for (;;) {
					RTHOOK(19);
					tb1 = '\01';
					if (!(EIF_BOOLEAN)(loc7 == loc2)) {
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2258, "item", loc6))(loc6)).it_b);
						tb1 = tb2;
					}
					if (tb1) break;
					RTHOOK(20);
					RTDBGAL(3, 0xF80000FA, 0, 0); /* loc3 */
					ui4_2 = loc7;
					tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2564, "at", loc1))(loc1, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc3 = (EIF_REFERENCE) RTCCL(tr3);
					RTHOOK(21);
					if ((EIF_BOOLEAN)(loc3 != NULL)) {
						RTHOOK(22);
						ur1 = RTCCL(arg1);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4611, "call", loc3))(loc3, ur1x);
					}
					RTHOOK(23);
					RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
					loc7++;
					if (RTAL & CK_LOOP) {
						RTHOOK(18);
						RTCT("l_count - i", EX_VAR);
						ti4_2 = (EIF_INTEGER_32) (loc2 - loc7);
						if ((ti4_3 > ti4_2) && ti4_2 >= 0) {
							RTCK;
							ti4_3 = ti4_2;
						} else {
							RTCF;
						}
					}
				}
				RTHOOK(24);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2263, "remove", loc6))(loc6);
				break;
			case 2L:
				RTHOOK(25);
				tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3135, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(25,1);
				ur1 = RTCCL(arg1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", tr3))(tr3, ur1x);
				break;
			case 3L:
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(26);
		RTCT("is_aborted_stack_unchanged", EX_POST);
		RTCO(tr2);
		tr3 = tr1;
		tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3133, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTEQ(tr3, tr4)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ub1
#undef arg1
}

/* {ACTION_SEQUENCE}.extend_kamikaze */
void F940_4200 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "extend_kamikaze";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 939, Current, 0, 1, 8274);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 8274);
	RTCC(arg1, 939, l_feature_name, 1, RTWCT(2258, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2222, dtype))(Current, ur1x);
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3126, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

/* {ACTION_SEQUENCE}.name */
EIF_TYPED_VALUE F940_4201 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "name";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 939, Current, 1, 0, 8275);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 8275);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3137, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(3);
		RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("equal_to_name_internal", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3137, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTEQ(Result, tr1)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {ACTION_SEQUENCE}.event_data_names */
EIF_TYPED_VALUE F940_4202 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "event_data_names";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 939, Current, 1, 0, 8276);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 8276);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80000F8, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3138, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(3);
		RTDBGAL(0, 0xF80000F8, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(23, "deep_twin", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("equal_to_event_data_names_internal", EX_POST);
		ur1 = RTCCL(Result);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3138, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur2 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16, dtype))(Current, ur1x, ur2x)).it_b);
		if (tb1) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
}

/* {ACTION_SEQUENCE}.abort */
void F940_4203 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "abort";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 939, Current, 0, 0, 8277);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 8277);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("call_is_underway", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3125, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3133, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2262, "replace", tr1))(tr1, ub1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_aborted_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3133, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2258, "item", tr1))(tr1)).it_b);
		if (tb1) {
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
#undef up1
#undef ub1
}

/* {ACTION_SEQUENCE}.block */
void F940_4204 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "block";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 939, Current, 0, 0, 8278);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 8278);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3121, 0x10000000, 1); /* state */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3124, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(3121, dtype)) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("blocked_state", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3121, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3124, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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

/* {ACTION_SEQUENCE}.pause */
void F940_4205 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "pause";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 939, Current, 0, 0, 8279);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 8279);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3121, 0x10000000, 1); /* state */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3123, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(3121, dtype)) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("paused_state", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3121, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3123, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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

/* {ACTION_SEQUENCE}.resume */
void F940_4206 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "resume";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 939, Current, 1, 0, 8280);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 8280);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3121, 0x10000000, 1); /* state */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3122, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(3121, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(1, 0xF80003AC, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3135, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		RTHOOK(3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2210, "is_empty", loc1))(loc1)).it_b);
		if (tb1) break;
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2258, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3112, dtype))(Current, ur1x);
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2263, "remove", loc1))(loc1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("normal_state", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3121, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3122, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
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
#undef up1
#undef ur1
}

/* {ACTION_SEQUENCE}.flush */
void F940_4207 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "flush";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 939, Current, 0, 0, 8281);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 8281);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3135, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2226, "wipe_out", tr1))(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("call_buffer_empty", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3135, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2210, "is_empty", tr1))(tr1)).it_b);
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
#undef up1
}

/* {ACTION_SEQUENCE}.state */
EIF_TYPED_VALUE F940_4208 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3121,Dtype(Current)));
	return r;
}


/* {ACTION_SEQUENCE}.normal_state */
EIF_TYPED_VALUE F940_4209 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {ACTION_SEQUENCE}.paused_state */
EIF_TYPED_VALUE F940_4210 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {ACTION_SEQUENCE}.blocked_state */
EIF_TYPED_VALUE F940_4211 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	return r;
}

/* {ACTION_SEQUENCE}.call_is_underway */
EIF_TYPED_VALUE F940_4212 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "call_is_underway";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 939, Current, 0, 0, 8286);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 8286);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3133, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2210, "is_empty", tr1))(tr1)).it_b);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("Result = not is_aborted_stack.is_empty", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3133, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2210, "is_empty", tr1))(tr1)).it_b);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) !tb1)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {ACTION_SEQUENCE}.prune */
void F940_4213 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "prune";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 939, Current, 2, 1, 8287);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 8287);
	RTCC(arg1, 939, l_feature_name, 1, RTWCT(2258, dtype, Dftype(Current)), 0x00);
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
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2224, 941))(Current, ur1x);
	RTHOOK(3);
	RTDBGAL(2, 0xF800010E, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(5);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2212, dtype));
		if (tb1) {
			RTHOOK(6);
			RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
			tb1 = *(EIF_BOOLEAN *)(loc2 + RTVA(2212, "object_comparison", loc2));
			loc1 = (EIF_BOOLEAN) tb1;
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2214, "compare_objects", loc2))(loc2);
			RTHOOK(8);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2292, "start", loc2))(loc2);
			RTHOOK(9);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2224, "prune", loc2))(loc2, ur1x);
			RTHOOK(10);
			if ((EIF_BOOLEAN) !loc1) {
				RTHOOK(11);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2215, "compare_references", loc2))(loc2);
			}
		} else {
			RTHOOK(12);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2224, "prune", loc2))(loc2, ur1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {ACTION_SEQUENCE}.prune_when_called */
void F940_4214 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "prune_when_called";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 939, Current, 0, 1, 8288);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 8288);
	RTCC(arg1, 939, l_feature_name, 1, RTWCT(2258, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("has (an_action)", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2209, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3140, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", tr1))(tr1, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {ACTION_SEQUENCE}.has_kamikaze_action */
EIF_TYPED_VALUE F940_4215 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "has_kamikaze_action";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 939, Current, 0, 1, 8289);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 8289);
	RTCC(arg1, 939, l_feature_name, 1, RTWCT(2258, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("has (an_action)", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2209, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	ur1 = RTCCL(arg1);
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2209, dtype))(Current, ur1x)).it_b);
	if (tb2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3140, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2209, "has", tr1))(tr1, ur1x)).it_b);
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {ACTION_SEQUENCE}.not_empty_actions */
EIF_TYPED_VALUE F940_4216 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "not_empty_actions";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 939, Current, 0, 0, 8290);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 8290);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800010E, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3142, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(Result == NULL)) {
		RTHOOK(3);
		RTDBGAL(0, 0xF800010E, 0,0); /* Result */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,270,0xFF01,250,0xFF01,0xFFF9,0,186,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLN(typres0.id);
		}
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3081, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(3,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 3142, 0xF800010E, 0); /* not_empty_actions_internal */
		tr1 = RTCCL(Result);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(3142, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
}

/* {ACTION_SEQUENCE}.empty_actions */
EIF_TYPED_VALUE F940_4217 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "empty_actions";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 939, Current, 0, 0, 8291);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 8291);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800010E, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3143, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(Result == NULL)) {
		RTHOOK(3);
		RTDBGAL(0, 0xF800010E, 0,0); /* Result */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,270,0xFF01,250,0xFF01,0xFFF9,0,186,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLN(typres0.id);
		}
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3081, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(3,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 3143, 0xF800010E, 0); /* empty_actions_internal */
		tr1 = RTCCL(Result);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(3143, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
}

/* {ACTION_SEQUENCE}.make */
void F940_4218 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
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
	
	RTEAA(l_feature_name, 939, Current, 0, 0, 8292);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 8292);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(32, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {ACTION_SEQUENCE}.set_source_connection_agent */
void F940_4219 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_source_connection_agent";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 939, Current, 0, 1, 8293);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 8293);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,250,0xFF01,0xFFF9,0,186,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 939, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3128, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", tr1))(tr1, ur1x);
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2210, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		ur1 = NULL;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4611, "call", arg1))(arg1, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {ACTION_SEQUENCE}.call_action_list */
void F940_4220 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "call_action_list";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 939, Current, 2, 1, 8294);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 8294);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,270,0xFF01,250,0xFF01,0xFFF9,0,186,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 939, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("actions_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2210, "is_empty", arg1))(arg1)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		RTDBGAL(1, 0xF800010E, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(5);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2269, "count", loc1))(loc1)).it_i4);
			if ((EIF_BOOLEAN) (loc2 > ti4_1)) break;
			RTHOOK(6);
			ui4_1 = loc2;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2253, "at", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				RTHOOK(7);
				ui4_1 = loc2;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "i_th", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(7,1);
				ur1 = NULL;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4611, "call", tr1))(tr1, ur1x);
			}
			RTHOOK(8);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {ACTION_SEQUENCE}.is_aborted_stack */
EIF_TYPED_VALUE F940_4221 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_aborted_stack";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 939, Current, 0, 0, 8295);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 8295);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800037A, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3134, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(Result == NULL)) {
		RTHOOK(3);
		RTDBGAL(0, 0xF800037A, 0,0); /* Result */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,890,203,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLN(typres0.id);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2763, Dtype(tr1)))(tr1);
		RTNHOOK(3,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 3134, 0xF800037A, 0); /* is_aborted_stack_internal */
		tr1 = RTCCL(Result);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(3134, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {ACTION_SEQUENCE}.is_aborted_stack_internal */
EIF_TYPED_VALUE F940_4222 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3134,Dtype(Current)));
	return r;
}


/* {ACTION_SEQUENCE}.call_buffer */
EIF_TYPED_VALUE F940_4223 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "call_buffer";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 939, Current, 0, 0, 8297);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 8297);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80003AC, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3136, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(Result == NULL)) {
		RTHOOK(3);
		RTDBGAL(0, 0xF80003AC, 0,0); /* Result */
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,940,0xFF02,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(3144, dtype, Dftype(Current));
				typarr0[3] = l_type.annotations | 0xFF00;
				typarr0[4] = l_type.id;
			}
			
			typres0 = eif_compound_id(Dftype(Current), typarr0);
			tr1 = RTLN(typres0.id);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2779, Dtype(tr1)))(tr1);
		RTNHOOK(3,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 3136, 0xF80003AC, 0); /* call_buffer_internal */
		tr1 = RTCCL(Result);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(3136, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {ACTION_SEQUENCE}.call_buffer_internal */
EIF_TYPED_VALUE F940_4224 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3136,Dtype(Current)));
	return r;
}


/* {ACTION_SEQUENCE}.name_internal */
EIF_TYPED_VALUE F940_4225 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3137,Dtype(Current)));
	return r;
}


/* {ACTION_SEQUENCE}.event_data_names_internal */
EIF_TYPED_VALUE F940_4226 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3138,Dtype(Current)));
	return r;
}


/* {ACTION_SEQUENCE}.dummy_event_data_internal */
EIF_TYPED_VALUE F940_4227 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3139,Dtype(Current)));
	return r;
}


/* {ACTION_SEQUENCE}.kamikazes */
EIF_TYPED_VALUE F940_4228 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "kamikazes";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 939, Current, 0, 0, 8302);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 8302);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800010E, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(Result == NULL)) {
		RTHOOK(3);
		RTDBGAL(0, 0xF800010E, 0,0); /* Result */
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,270,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(2258, dtype, Dftype(Current));
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(Dftype(Current), typarr0);
			tr1 = RTLN(typres0.id);
		}
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3081, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(3,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 3141, 0xF800010E, 0); /* kamikazes_internal */
		tr1 = RTCCL(Result);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(3141, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
}

/* {ACTION_SEQUENCE}.kamikazes_internal */
EIF_TYPED_VALUE F940_4229 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3141,Dtype(Current)));
	return r;
}


/* {ACTION_SEQUENCE}.not_empty_actions_internal */
EIF_TYPED_VALUE F940_4230 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3142,Dtype(Current)));
	return r;
}


/* {ACTION_SEQUENCE}.empty_actions_internal */
EIF_TYPED_VALUE F940_4231 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3143,Dtype(Current)));
	return r;
}


/* {ACTION_SEQUENCE}.new_filled_list */
EIF_TYPED_VALUE F940_4232 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "new_filled_list";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 939, Current, 0, 1, 8306);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 8306);
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
	RTDBGAL(0, 0xF80003AB, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3082, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("new_filled_list_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("new_filled_list_count_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2210, "is_empty", Result))(Result)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("new_filled_list_before", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2359, "before", Result))(Result)).it_b);
		if (tb1) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {ACTION_SEQUENCE}._invariant */
void F940_7184 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 939, Current, 0, 7183);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("is_aborted_stack_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3133, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("call_buffer_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3135, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_state", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3121, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3122, dtype))(Current)).it_i4);
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(3121, dtype));
	ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3123, dtype))(Current)).it_i4);
	ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(3121, dtype));
	ti4_6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3124, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ti4_2) || (EIF_BOOLEAN)(ti4_3 == ti4_4)) || (EIF_BOOLEAN)(ti4_5 == ti4_6))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("call_buffer_consistent", Current);
	tb1 = '\01';
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3121, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3122, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3135, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2210, "is_empty", tr1))(tr1)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("not_empty_actions_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3128, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("empty_actions_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3129, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
}

void EIF_Minit940 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
