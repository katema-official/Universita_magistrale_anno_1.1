/*
 * Code for class SED_INDEPENDENT_DESERIALIZER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F116_1683(EIF_REFERENCE);
extern EIF_TYPED_VALUE F116_1684(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F116_1685(EIF_REFERENCE);
extern EIF_TYPED_VALUE F116_1686(EIF_REFERENCE);
extern void F116_1687(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F116_1688(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F116_1689(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F116_1690(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F116_1691(EIF_REFERENCE);
extern void EIF_Minit116(void);

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

/* {SED_INDEPENDENT_DESERIALIZER}.attributes_mapping */
EIF_TYPED_VALUE F116_1683 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(1499,Dtype(Current)));
	return r;
}


/* {SED_INDEPENDENT_DESERIALIZER}.new_attribute_offset */
EIF_TYPED_VALUE F116_1684 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "new_attribute_offset";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 115, Current, 2, 2, 1614);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(115, Current, 1614);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_new_type_id_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_old_offset_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1499, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		ui4_1 = arg1;
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2081, "valid_index", loc1))(loc1, ui4_1x)).it_b);
		tb3 = tb4;
	}
	if (tb3) {
		ui4_1 = arg1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2556, "item", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = tr1;
		tb2 = EIF_TEST(loc2);
	}
	if (tb2) {
		ui4_1 = arg2;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2081, "valid_index", loc2))(loc2, ui4_1x)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ui4_1 = arg2;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2556, "item", loc2))(loc2, ui4_1x)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("new_attribute_offset_non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {SED_INDEPENDENT_DESERIALIZER}.is_transient_retrieval_required */
EIF_TYPED_VALUE F116_1685 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_transient_retrieval_required";
	RTEX;
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
	
	RTEAA(l_feature_name, 115, Current, 0, 0, 1615);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(115, Current, 1615);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
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

/* {SED_INDEPENDENT_DESERIALIZER}.is_store_settings_enabled */
EIF_TYPED_VALUE F116_1686 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_store_settings_enabled";
	RTEX;
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
	
	RTEAA(l_feature_name, 115, Current, 0, 0, 1616);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(115, Current, 1616);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
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

/* {SED_INDEPENDENT_DESERIALIZER}.read_header */
void F116_1687 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "read_header";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(9);
	RTLR(0,loc5);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc6);
	RTLR(5,ur1);
	RTLR(6,loc9);
	RTLR(7,ur2);
	RTLR(8,tr2);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_REF, &loc9);
	
	RTEAA(l_feature_name, 115, Current, 9, 1, 1617);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(115, Current, 1617);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(5, 0xF8000081, 0, 0); /* loc5 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1455, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(4, 0xF8000026, 0, 0); /* loc4 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1448, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1471, dtype))(Current);
	RTHOOK(4);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1016, "read_compressed_natural_32", loc4))(loc4)).it_n4);
	RTNHOOK(4,1);
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAL(6, 0xF8000219, 0, 0); /* loc6 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = loc3;
	if (ui4_2< 0) {
		eraise ("non_negative_argument", EN_RT_CHECK);
	}
	tr1 = RTLNSP2(RTWCT(1463, dtype, Dftype(Current)).id,0,ui4_2,sizeof(EIF_INTEGER_32), EIF_TRUE);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2562, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(5,1);
	loc6 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 1499, 0xF8000114, 0); /* attributes_mapping */
	ur1 = NULL;
	ui4_1 = loc3;
	if (ui4_1< 0) {
		eraise ("non_negative_argument", EN_RT_CHECK);
	}
	tr1 = RTLNSP2(RTWCT(1499, dtype, Dftype(Current)).id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2562, Dtype(tr1)))(tr1, ur1x, ui4_1x);
	RTNHOOK(6,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1499, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(8);
		if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 2L))) break;
		RTHOOK(9);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(10);
			if ((EIF_BOOLEAN)(loc1 == loc3)) break;
			RTHOOK(11);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1016, "read_compressed_natural_32", loc4))(loc4)).it_n4);
			RTNHOOK(11,1);
			ti4_1 = (EIF_INTEGER_32) tu4_1;
			loc7 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(12);
			RTDBGAL(9, 0xF80000E8, 0, 0); /* loc9 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(999, "read_string_8", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc9 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(13);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			ur1 = RTCCL(loc9);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1759, "dynamic_type_from_string", loc5))(loc5, ur1x)).it_i4);
			loc8 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(14);
			if ((EIF_BOOLEAN) (loc8 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(15);
				ui4_1 = loc7;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2081, "valid_index", loc6))(loc6, ui4_1x)).it_b);
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(16);
					RTDBGAL(6, 0xF8000219, 0, 0); /* loc6 */
					ui4_1 = ((EIF_INTEGER_32) 0L);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", loc6))(loc6)).it_i4);
					ui4_2 = (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 2L));
					ti4_1 = eif_max_int32 ((EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L)),ui4_2);
					ui4_2 = ti4_1;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2590, "aliased_resized_area_with_default", loc6))(loc6, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc6 = (EIF_REFERENCE) tr1;
				}
				RTHOOK(17);
				ui4_1 = loc8;
				ui4_2 = loc7;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2572, "put", loc6))(loc6, ui4_1x, ui4_2x);
			} else {
				RTHOOK(18);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1461, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(18,1);
				ur1 = RTCCL(loc9);
				ur2 = RTCCL(loc9);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(213, "new_missing_type_error", tr1))(tr1, ur1x, ur2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1466, dtype))(Current, ur1x);
			}
			RTHOOK(19);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
		RTHOOK(20);
		if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(21);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1016, "read_compressed_natural_32", loc4))(loc4)).it_n4);
			RTNHOOK(21,1);
			ti4_1 = (EIF_INTEGER_32) tu4_1;
			loc3 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(22);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTHOOK(23);
	RTDBGAA(Current, dtype, 1463, 0xF8000219, 0); /* dynamic_type_table */
	RTAR(Current, loc6);
	*(EIF_REFERENCE *)(Current + RTWA(1463, dtype)) = (EIF_REFERENCE) loc6;
	RTHOOK(24);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(25);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1016, "read_compressed_natural_32", loc4))(loc4)).it_n4);
	RTNHOOK(25,1);
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	loc3 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(26);
		if ((EIF_BOOLEAN)(loc1 == loc3)) break;
		RTHOOK(27);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1016, "read_compressed_natural_32", loc4))(loc4)).it_n4);
		RTNHOOK(27,1);
		ti4_1 = (EIF_INTEGER_32) tu4_1;
		loc7 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(28);
		ui4_1 = loc7;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2081, "valid_index", loc6))(loc6, ui4_1x)).it_b);
		if (tb1) {
			RTHOOK(29);
			ui4_1 = loc7;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2556, "item", loc6))(loc6, ui4_1x)).it_i4);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1500, dtype))(Current, ui4_1x);
		} else {
			RTHOOK(30);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1461, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(30,1);
			tr2 = RTMS_EX_H("Cannot read attributes data",27,474705505);
			ur1 = tr2;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(205, "new_internal_error", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1467, dtype))(Current, ur1x);
		}
		RTHOOK(31);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTHOOK(32);
	uu4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1472, dtype))(Current, uu4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef arg1
}

/* {SED_INDEPENDENT_DESERIALIZER}.read_persistent_field_count */
EIF_TYPED_VALUE F116_1688 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "read_persistent_field_count";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,tr2);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 115, Current, 3, 1, 1618);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(115, Current, 1618);
	RTCC(arg1, 115, l_feature_name, 1, eif_new_type(132, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(1854, "dynamic_type", arg1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	tb1 = '\0';
	tb2 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1499, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		ui4_1 = loc1;
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2081, "valid_index", loc2))(loc2, ui4_1x)).it_b);
		tb2 = tb3;
	}
	if (tb2) {
		ui4_1 = loc1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2556, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = tr1;
		tb1 = EIF_TEST(loc3);
	}
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", loc3))(loc3)).it_i4);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
	} else {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1461, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		tr2 = RTMS_EX_H("Cannot retrieve stored count",28,283762292);
		ur1 = tr2;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(205, "new_internal_error", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1467, dtype))(Current, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

/* {SED_INDEPENDENT_DESERIALIZER}.read_attributes */
void F116_1689 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "read_attributes";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(10);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,loc11);
	RTLR(7,ur1);
	RTLR(8,tr2);
	RTLR(9,loc9);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_REF, &loc11);
	
	RTEAA(l_feature_name, 115, Current, 11, 1, 1619);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(115, Current, 1619);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_dtype_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("attributes_mapping_not_void", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1499, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0xF8000026, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1448, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1016, "read_compressed_natural_32", loc1))(loc1)).it_n4);
	RTNHOOK(4,1);
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	loc8 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1455, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	ui4_1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1783, "persistent_field_count_of_type", tr1))(tr1, ui4_1x)).it_i4);
	if ((EIF_BOOLEAN)(loc8 == ti4_1)) {
		RTHOOK(6);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(7);
		RTDBGAL(2, 0xF800019C, 0, 0); /* loc2 */
		ui4_1 = arg1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1501, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(8);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		loc8++;
		RTHOOK(9);
		RTDBGAL(3, 0xF8000219, 0, 0); /* loc3 */
		ui4_1 = loc8;
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,537,218,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			if (ui4_1< 0) {
				eraise ("non_negative_argument", EN_RT_CHECK);
			}
			tr1 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
			RT_SPECIAL_COUNT(tr1) = 0;
		}
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(10);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", loc3))(loc3, ui4_2x);
		for (;;) {
			RTHOOK(11);
			if ((EIF_BOOLEAN)(loc7 == loc8)) break;
			RTHOOK(12);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1016, "read_compressed_natural_32", loc1))(loc1)).it_n4);
			RTNHOOK(12,1);
			ti4_1 = (EIF_INTEGER_32) tu4_1;
			loc5 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(13);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			ui4_2 = loc5;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1464, dtype))(Current, ui4_2x)).it_i4);
			loc6 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(14);
			RTDBGAL(4, 0xF80000E8, 0, 0); /* loc4 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(999, "read_string_8", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(15);
			if ((EIF_BOOLEAN) (loc6 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(16);
				ur1 = RTCCL(loc4);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2974, "item", loc2))(loc2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc11 = RTCCL(tr1);
				if (EIF_TEST(loc11)) {
					RTHOOK(17);
					RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
					ti4_1 = eif_integer_32_item(loc11,2);
					loc10 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(18);
					if ((EIF_BOOLEAN)(loc10 == loc6)) {
						RTHOOK(19);
						ti4_1 = eif_integer_32_item(loc11,1);
						ui4_2 = ti4_1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", loc3))(loc3, ui4_2x);
					} else {
						RTHOOK(20);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1461, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(20,1);
						ui4_2 = arg1;
						ur1 = RTCCL(loc4);
						ui4_3 = loc10;
						ui4_4 = loc6;
						tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(218, "new_attribute_mismatch", tr1))(tr1, ui4_2x, ur1x, ui4_3x, ui4_4x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
						ur1 = RTCCL(tr2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1466, dtype))(Current, ur1x);
					}
				} else {
					RTHOOK(21);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1461, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(21,1);
					ui4_2 = arg1;
					ur1 = RTCCL(loc4);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(214, "new_missing_attribute_error", tr1))(tr1, ui4_2x, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					ur1 = RTCCL(tr2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1466, dtype))(Current, ur1x);
				}
			} else {
				RTHOOK(22);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1461, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(22,1);
				ui4_2 = arg1;
				ur1 = RTCCL(loc4);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(215, "new_unknown_attribute_type_error", tr1))(tr1, ui4_2x, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1466, dtype))(Current, ur1x);
			}
			RTHOOK(23);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			loc7++;
		}
		RTHOOK(24);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1452, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(25);
			RTDBGAL(9, 0xF8000114, 0, 0); /* loc9 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1499, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc9 = (EIF_REFERENCE) tr1;
			RTHOOK(26);
			if ((EIF_BOOLEAN)(loc9 != NULL)) {
				RTHOOK(27);
				ui4_2 = arg1;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2081, "valid_index", loc9))(loc9, ui4_2x)).it_b);
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(28);
					RTDBGAL(9, 0xF8000114, 0, 0); /* loc9 */
					ur1 = NULL;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", loc9))(loc9)).it_i4);
					ui4_2 = (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 2L));
					ti4_1 = eif_max_int32 ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),ui4_2);
					ui4_2 = ti4_1;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2590, "aliased_resized_area_with_default", loc9))(loc9, ur1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc9 = (EIF_REFERENCE) tr1;
					RTHOOK(29);
					RTDBGAA(Current, dtype, 1499, 0xF8000114, 0); /* attributes_mapping */
					RTAR(Current, loc9);
					*(EIF_REFERENCE *)(Current + RTWA(1499, dtype)) = (EIF_REFERENCE) loc9;
				}
				RTHOOK(30);
				ur1 = loc3;
				ui4_2 = arg1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2572, "put", loc9))(loc9, ur1x, ui4_2x);
			}
		}
	} else {
		RTHOOK(31);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1461, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(31,1);
		ui4_2 = arg1;
		ui4_3 = loc8;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(217, "new_attribute_count_mismatch", tr1))(tr1, ui4_2x, ui4_3x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1466, dtype))(Current, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {SED_INDEPENDENT_DESERIALIZER}.attributes_map */
EIF_TYPED_VALUE F116_1690 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "attributes_map";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,ur1);
	RTLR(5,tr2);
	RTLR(6,ur2);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 115, Current, 3, 1, 1620);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(115, Current, 1620);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_dtype_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF8000081, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1455, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ui4_1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1782, "field_count_of_type", loc1))(loc1, ui4_1x)).it_i4);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAL(0, 0xF800019C, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,412,0xFF01,0xFFF9,2,186,218,218,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(5,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3++;
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc2 == loc3)) break;
		RTHOOK(8);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,218,218,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_i4 = loc2;
		ui4_1 = loc2;
		ui4_2 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1780, "field_static_type_of_type", loc1))(loc1, ui4_1x, ui4_2x)).it_i4);
		((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ti4_1;
		ur1 = RTCCL(tr1);
		ui4_1 = loc2;
		ui4_2 = arg1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1778, "field_name_of_type", loc1))(loc1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2255, "put", Result))(Result, ur1x, ur2x);
		RTHOOK(9);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("attributes_map_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {SED_INDEPENDENT_DESERIALIZER}.clear_internal_data */
void F116_1691 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "clear_internal_data";
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
	
	RTEAA(l_feature_name, 115, Current, 0, 0, 1621);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(115, Current, 1621);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1469, 114))(Current);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 1499, 0xF8000114, 0); /* attributes_mapping */
	*(EIF_REFERENCE *)(Current + RTWA(1499, dtype)) = (EIF_REFERENCE) NULL;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit116 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
