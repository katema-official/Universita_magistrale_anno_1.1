/*
 * Code for class CHARACTER_8_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F197_5645(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5646(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5647(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5648(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5649(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5650(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5651(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5652(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F197_5653(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F197_5654(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F197_5655(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F197_5656(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F197_5657(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5658(EIF_REFERENCE);
extern void F197_5659(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F197_5660(EIF_REFERENCE);
extern void F197_5661(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F197_5662(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5663(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5664(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5665(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5666(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5667(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5668(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5669(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5670(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5671(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5672(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5673(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5674(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5675(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5676(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5677(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5678(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5679(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5680(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F197_5681(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5682(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5683(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5684(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5685(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5686(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5687(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5688(EIF_REFERENCE);
extern EIF_TYPED_VALUE F197_5689(EIF_REFERENCE);
extern void EIF_Minit197(void);

#ifdef __cplusplus
}
#endif

#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CHARACTER_8_REF}.item */
EIF_TYPED_VALUE F197_5645 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138,Dtype(Current)));
	return r;
}


/* {CHARACTER_8_REF}.code */
EIF_TYPED_VALUE F197_5646 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "code";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_8 tc1;
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
	
	RTEAA(l_feature_name, 196, Current, 0, 0, 11866);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11866);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("code_non_negatif", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("code_in_range", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, dtype))(Current)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4142, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (Result >= ti4_1) && (EIF_BOOLEAN) (Result <= ti4_2))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {CHARACTER_8_REF}.natural_32_code */
EIF_TYPED_VALUE F197_5647 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "natural_32_code";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_8 tc1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 196, Current, 0, 0, 11867);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11867);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	RTNHOOK(1,1);
	tu4_1 = (EIF_NATURAL_32) ti4_1;
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
}

/* {CHARACTER_8_REF}.hash_code */
EIF_TYPED_VALUE F197_5648 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "hash_code";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
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
	
	RTEAA(l_feature_name, 196, Current, 0, 0, 11868);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11868);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4140, dtype))(Current)).it_n4);
	RTNHOOK(1,1);
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu4_1)));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {CHARACTER_8_REF}.min_value */
EIF_TYPED_VALUE F197_5649 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	return r;
}

/* {CHARACTER_8_REF}.max_value */
EIF_TYPED_VALUE F197_5650 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 255L);
	return r;
}

/* {CHARACTER_8_REF}.max_ascii_value */
EIF_TYPED_VALUE F197_5651 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 127L);
	return r;
}

/* {CHARACTER_8_REF}.is_less */
EIF_TYPED_VALUE F197_5652 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_less";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 196, Current, 0, 1, 11872);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11872);
	RTCC(arg1, 196, l_feature_name, 1, eif_new_type(196, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4140, dtype))(Current)).it_n4);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4140, "natural_32_code", arg1))(arg1)).it_n4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu4_1 < tu4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("asymmetric", EX_POST);
		tb1 = '\01';
		if (Result) {
			ur1 = RTCCL(Current);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1384, "is_less", arg1))(arg1, ur1x)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("definition", EX_POST);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4140, dtype))(Current)).it_n4);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4140, "natural_32_code", arg1))(arg1)).it_n4);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) (tu4_1 < tu4_2))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {CHARACTER_8_REF}.is_equal */
EIF_TYPED_VALUE F197_5653 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_equal";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 196, Current, 0, 1, 11873);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11873);
	RTCC(arg1, 196, l_feature_name, 1, eif_new_type(196, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(arg1 + RTVA(4138, "item", arg1));
	tc2 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == tc2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12, dtype))(Current, ur1x)).it_b);
		if (tb2) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("trichotomy", EX_POST);
		tb1 = '\0';
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1384, "is_less", Current))(Current, ur1x)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			ur1 = RTCCL(Current);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1384, "is_less", arg1))(arg1, ur1x)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {CHARACTER_8_REF}.plus */
EIF_TYPED_VALUE F197_5654 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "plus";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR8, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 196, Current, 0, 1, 11874);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11874);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_increment", EX_PRE);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tr1 = RTLN(eif_new_type(218, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = (EIF_INTEGER_32) (ti4_1 + arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4429, "is_valid_character_8_code", tr1))(tr1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tc1 = (EIF_CHARACTER_8) (EIF_INTEGER_32) (ti4_1 + arg1);
	Result = (EIF_CHARACTER_8) tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_result", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
		uc1 = tc1;
		tr1 = RTLN(eif_new_type(197, 0x00).id);
		*(EIF_CHARACTER_8 *)tr1 = Result;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4146, "difference", tr1))(tr1, uc1x)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef uc1
#undef arg1
}

/* {CHARACTER_8_REF}.minus */
EIF_TYPED_VALUE F197_5655 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "minus";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR8, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 196, Current, 0, 1, 11875);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11875);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_decrement", EX_PRE);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tr1 = RTLN(eif_new_type(218, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = (EIF_INTEGER_32) (ti4_1 - arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4429, "is_valid_character_8_code", tr1))(tr1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tc1 = (EIF_CHARACTER_8) (EIF_INTEGER_32) (ti4_1 - arg1);
	Result = (EIF_CHARACTER_8) tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_result", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
		uc1 = Result;
		tr1 = RTLN(eif_new_type(197, 0x00).id);
		*(EIF_CHARACTER_8 *)tr1 = tc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4146, "difference", tr1))(tr1, uc1x)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef uc1
#undef arg1
}

/* {CHARACTER_8_REF}.difference */
EIF_TYPED_VALUE F197_5656 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "difference";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 196, Current, 0, 1, 11876);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11876);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ti4_2 = (EIF_INTEGER_32) (arg1);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("valid_result", EX_POST);
		ui4_1 = Result;
		tc1 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) arg1) + ui4_1);
		tc2 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
		if ((EIF_BOOLEAN)(tc1 == tc2)) {
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {CHARACTER_8_REF}.next */
EIF_TYPED_VALUE F197_5657 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "next";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 196, Current, 0, 0, 11877);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11877);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tr1 = RTLN(eif_new_type(218, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4429, "is_valid_character_8_code", tr1))(tr1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tc2 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) tc1) + ui4_1);
	Result = (EIF_CHARACTER_8) tc2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_result", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
		uc1 = tc1;
		tr1 = RTLN(eif_new_type(197, 0x00).id);
		*(EIF_CHARACTER_8 *)tr1 = Result;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4146, "difference", tr1))(tr1, uc1x)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef ui4_1
#undef uc1
}

/* {CHARACTER_8_REF}.previous */
EIF_TYPED_VALUE F197_5658 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "previous";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 196, Current, 0, 0, 11878);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11878);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tr1 = RTLN(eif_new_type(218, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4429, "is_valid_character_8_code", tr1))(tr1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tc2 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) tc1) - ui4_1);
	Result = (EIF_CHARACTER_8) tc2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_result", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
		uc1 = tc1;
		tr1 = RTLN(eif_new_type(197, 0x00).id);
		*(EIF_CHARACTER_8 *)tr1 = Result;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4146, "difference", tr1))(tr1, uc1x)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -1L))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef ui4_1
#undef uc1
}

/* {CHARACTER_8_REF}.set_item */
void F197_5659 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_item";
	RTEX;
#define arg1 arg1x.it_c1
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 196, Current, 0, 1, 11879);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11879);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4138, 0x08000000, 1); /* item */
	*(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype)) = (EIF_CHARACTER_8) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {CHARACTER_8_REF}.out */
EIF_TYPED_VALUE F197_5660 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "out";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
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
	
	RTEAA(l_feature_name, 196, Current, 0, 0, 11880);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11880);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(232, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4642, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
	uc1 = tc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", Result))(Result, uc1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("out_not_void", EX_POST);
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
#undef ui4_1
#undef uc1
}

/* {CHARACTER_8_REF}.make_from_reference */
void F197_5661 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_reference";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
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
	
	RTEAA(l_feature_name, 196, Current, 0, 1, 11881);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11881);
	RTCC(arg1, 196, l_feature_name, 1, eif_new_type(196, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tc1 = *(EIF_CHARACTER_8 *)(arg1 + RTVA(4138, "item", arg1));
	uc1 = tc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4149, dtype))(Current, uc1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("item_set", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
		tc2 = *(EIF_CHARACTER_8 *)(arg1 + RTVA(4138, "item", arg1));
		if ((EIF_BOOLEAN)(tc1 == tc2)) {
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
	RTLO(3);
	RTEE;
#undef uc1
#undef arg1
}

/* {CHARACTER_8_REF}.to_reference */
EIF_TYPED_VALUE F197_5662 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_reference";
	RTEX;
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
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
	
	RTEAA(l_feature_name, 196, Current, 0, 0, 11882);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11882);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000C4, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(196, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
	uc1 = tc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4149, "set_item", Result))(Result, uc1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("to_reference_not_void", EX_POST);
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
#undef uc1
}

/* {CHARACTER_8_REF}.to_character_8 */
EIF_TYPED_VALUE F197_5663 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_character_8";
	RTEX;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 196, Current, 0, 0, 11883);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11883);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
}

/* {CHARACTER_8_REF}.to_character_32 */
EIF_TYPED_VALUE F197_5664 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_character_32";
	RTEX;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_CHAR32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 196, Current, 0, 0, 11884);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11884);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x1C000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
	tw1 = (EIF_CHARACTER_32) tc1;
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR32; r.it_c4 = Result; return r; }
}

/* {CHARACTER_8_REF}.as_upper */
EIF_TYPED_VALUE F197_5665 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_upper";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 196, Current, 0, 0, 11885);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11885);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4160, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(0, 0x08000000, 1,0); /* Result */
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'a');
		ti4_3 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'A');
		tc1 = (EIF_CHARACTER_8) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ti4_3);
		Result = (EIF_CHARACTER_8) tc1;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x08000000, 1,0); /* Result */
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
		Result = (EIF_CHARACTER_8) tc1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
}

/* {CHARACTER_8_REF}.upper */
EIF_TYPED_VALUE F197_5666 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "upper";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 196, Current, 0, 0, 11886);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11886);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4160, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(0, 0x08000000, 1,0); /* Result */
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'a');
		ti4_3 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'A');
		tc1 = (EIF_CHARACTER_8) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ti4_3);
		Result = (EIF_CHARACTER_8) tc1;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x08000000, 1,0); /* Result */
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
		Result = (EIF_CHARACTER_8) tc1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
}

/* {CHARACTER_8_REF}.as_lower */
EIF_TYPED_VALUE F197_5667 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_lower";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 196, Current, 0, 0, 11887);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11887);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4159, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(0, 0x08000000, 1,0); /* Result */
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'A');
		ti4_3 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'a');
		tc1 = (EIF_CHARACTER_8) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ti4_3);
		Result = (EIF_CHARACTER_8) tc1;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x08000000, 1,0); /* Result */
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
		Result = (EIF_CHARACTER_8) tc1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
}

/* {CHARACTER_8_REF}.lower */
EIF_TYPED_VALUE F197_5668 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "lower";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 196, Current, 0, 0, 11888);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11888);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4159, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(0, 0x08000000, 1,0); /* Result */
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'A');
		ti4_3 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'a');
		tc1 = (EIF_CHARACTER_8) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ti4_3);
		Result = (EIF_CHARACTER_8) tc1;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x08000000, 1,0); /* Result */
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
		Result = (EIF_CHARACTER_8) tc1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
}

/* {CHARACTER_8_REF}.is_alpha */
EIF_TYPED_VALUE F197_5669 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_alpha";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_CHARACTER_8 tc1;
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
	
	RTEAA(l_feature_name, 196, Current, 0, 0, 11889);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11889);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ui4_1 = ti4_1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4169, dtype))(Current, ui4_1x)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	tu1_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	uu1_1 = tu1_3;
	tu1_3 = eif_bit_or(tu1_2,uu1_1);
	uu1_1 = tu1_3;
	tu1_2 = eif_bit_and(tu1_1,uu1_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef uu1_1
}

/* {CHARACTER_8_REF}.is_upper */
EIF_TYPED_VALUE F197_5670 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_upper";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
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
	
	RTEAA(l_feature_name, 196, Current, 0, 0, 11890);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11890);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ui4_1 = ti4_1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4169, dtype))(Current, ui4_1x)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_and(tu1_1,uu1_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef uu1_1
}

/* {CHARACTER_8_REF}.is_lower */
EIF_TYPED_VALUE F197_5671 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_lower";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
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
	
	RTEAA(l_feature_name, 196, Current, 0, 0, 11891);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11891);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ui4_1 = ti4_1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4169, dtype))(Current, ui4_1x)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_and(tu1_1,uu1_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef uu1_1
}

/* {CHARACTER_8_REF}.is_digit */
EIF_TYPED_VALUE F197_5672 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_digit";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
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
	
	RTEAA(l_feature_name, 196, Current, 0, 0, 11892);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11892);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ui4_1 = ti4_1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4169, dtype))(Current, ui4_1x)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4173, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_and(tu1_1,uu1_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef uu1_1
}

/* {CHARACTER_8_REF}.is_hexa_digit */
EIF_TYPED_VALUE F197_5673 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_hexa_digit";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_CHARACTER_8 tc1;
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
	
	RTEAA(l_feature_name, 196, Current, 0, 0, 11893);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11893);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ui4_1 = ti4_1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4169, dtype))(Current, ui4_1x)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4177, dtype))(Current)).it_n1);
	tu1_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4173, dtype))(Current)).it_n1);
	uu1_1 = tu1_3;
	tu1_3 = eif_bit_or(tu1_2,uu1_1);
	uu1_1 = tu1_3;
	tu1_2 = eif_bit_and(tu1_1,uu1_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef uu1_1
}

/* {CHARACTER_8_REF}.is_space */
EIF_TYPED_VALUE F197_5674 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_space";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
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
	
	RTEAA(l_feature_name, 196, Current, 0, 0, 11894);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11894);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ui4_1 = ti4_1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4169, dtype))(Current, ui4_1x)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4174, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_and(tu1_1,uu1_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef uu1_1
}

/* {CHARACTER_8_REF}.is_punctuation */
EIF_TYPED_VALUE F197_5675 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_punctuation";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
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
	
	RTEAA(l_feature_name, 196, Current, 0, 0, 11895);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11895);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ui4_1 = ti4_1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4169, dtype))(Current, ui4_1x)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_and(tu1_1,uu1_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef uu1_1
}

/* {CHARACTER_8_REF}.is_alpha_numeric */
EIF_TYPED_VALUE F197_5676 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_alpha_numeric";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_CHARACTER_8 tc1;
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
	
	RTEAA(l_feature_name, 196, Current, 0, 0, 11896);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11896);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ui4_1 = ti4_1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4169, dtype))(Current, ui4_1x)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	tu1_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	uu1_1 = tu1_3;
	tu1_3 = eif_bit_or(tu1_2,uu1_1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4173, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_or(tu1_3,uu1_1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_and(tu1_1,uu1_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef uu1_1
}

/* {CHARACTER_8_REF}.is_printable */
EIF_TYPED_VALUE F197_5677 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_printable";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_CHARACTER_8 tc1;
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
	
	RTEAA(l_feature_name, 196, Current, 0, 0, 11897);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11897);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ui4_1 = ti4_1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4169, dtype))(Current, ui4_1x)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	tu1_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	uu1_1 = tu1_3;
	tu1_3 = eif_bit_or(tu1_2,uu1_1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4173, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_or(tu1_3,uu1_1);
	tu1_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_3;
	tu1_3 = eif_bit_or(tu1_2,uu1_1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4178, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_or(tu1_3,uu1_1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_and(tu1_1,uu1_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef uu1_1
}

/* {CHARACTER_8_REF}.is_graph */
EIF_TYPED_VALUE F197_5678 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_graph";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_CHARACTER_8 tc1;
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
	
	RTEAA(l_feature_name, 196, Current, 0, 0, 11898);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11898);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ui4_1 = ti4_1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4169, dtype))(Current, ui4_1x)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	tu1_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	uu1_1 = tu1_3;
	tu1_3 = eif_bit_or(tu1_2,uu1_1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4173, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_or(tu1_3,uu1_1);
	tu1_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_3;
	tu1_3 = eif_bit_or(tu1_2,uu1_1);
	uu1_1 = tu1_3;
	tu1_2 = eif_bit_and(tu1_1,uu1_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef uu1_1
}

/* {CHARACTER_8_REF}.is_control */
EIF_TYPED_VALUE F197_5679 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_control";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
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
	
	RTEAA(l_feature_name, 196, Current, 0, 0, 11899);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11899);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4138, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ui4_1 = ti4_1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4169, dtype))(Current, ui4_1x)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_and(tu1_1,uu1_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef uu1_1
}

/* {CHARACTER_8_REF}.character_types */
EIF_TYPED_VALUE F197_5680 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "character_types";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_UINT8, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 196, Current, 0, 1, 11855);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11855);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 256L))) {
		RTHOOK(2);
		RTDBGAL(0, 0x30000000, 1,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4170, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ui4_1 = arg1;
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2556, "item", tr1))(tr1, ui4_1x)).it_n1);
		Result = (EIF_NATURAL_8) tu1_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {CHARACTER_8_REF}.internal_character_types */
RTOID (F197_5681)
EIF_TYPED_VALUE F197_5681 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "internal_character_types";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F197_5681);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 196, Current, 0, 0, 11856);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(196, Current, 11856);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF80001D9, 0,0); /* Result */
	ui4_1 = ((EIF_INTEGER_32) 256L);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,473,209,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(3);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(4);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(5);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(6);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(7);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(8);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(9);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(10);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(11);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4174, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(12);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4174, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(13);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4174, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(14);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4174, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(15);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4174, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(16);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(17);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(18);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(19);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(20);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(21);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(22);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(23);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(24);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(25);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(26);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(27);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(28);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(29);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(30);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(31);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(32);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(33);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(34);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4174, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4178, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(35);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(36);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(37);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(38);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(39);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(40);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(41);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(42);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(43);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(44);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(45);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(46);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(47);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(48);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(49);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(50);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4173, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(51);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4173, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(52);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4173, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(53);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4173, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(54);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4173, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(55);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4173, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(56);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4173, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(57);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4173, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(58);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4173, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(59);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4173, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(60);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(61);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(62);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(63);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(64);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(65);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(66);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(67);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4177, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(68);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4177, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(69);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4177, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(70);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4177, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(71);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4177, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(72);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4177, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(73);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(74);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(75);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(76);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(77);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(78);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(79);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(80);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(81);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(82);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(83);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(84);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(85);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(86);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(87);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(88);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(89);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(90);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(91);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(92);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4171, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(93);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(94);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(95);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(96);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(97);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(98);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(99);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4177, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(100);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4177, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(101);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4177, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(102);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4177, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(103);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4177, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(104);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4177, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(105);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(106);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(107);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(108);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(109);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(110);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(111);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(112);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(113);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(114);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(115);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(116);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(117);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(118);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(119);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(120);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(121);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(122);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(123);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(124);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4172, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(125);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(126);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(127);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(128);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4175, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(129);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4176, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "extend", Result))(Result, uu1_1x);
	RTHOOK(130);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 128L);
	ui4_3 = ((EIF_INTEGER_32) 255L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2576, "fill_with", Result))(Result, uu1_1x, ui4_2x, ui4_3x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(131);
		RTCT("internal_character_types_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(132);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu1_1
#undef Result
}

/* {CHARACTER_8_REF}.is_upper_flag */
EIF_TYPED_VALUE F197_5682 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 1U);
	return r;
}

/* {CHARACTER_8_REF}.is_lower_flag */
EIF_TYPED_VALUE F197_5683 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 2U);
	return r;
}

/* {CHARACTER_8_REF}.is_digit_flag */
EIF_TYPED_VALUE F197_5684 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 4U);
	return r;
}

/* {CHARACTER_8_REF}.is_white_space_flag */
EIF_TYPED_VALUE F197_5685 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 8U);
	return r;
}

/* {CHARACTER_8_REF}.is_punctuation_flag */
EIF_TYPED_VALUE F197_5686 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 16U);
	return r;
}

/* {CHARACTER_8_REF}.is_control_flag */
EIF_TYPED_VALUE F197_5687 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 32U);
	return r;
}

/* {CHARACTER_8_REF}.is_hexa_digit_flag */
EIF_TYPED_VALUE F197_5688 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 64U);
	return r;
}

/* {CHARACTER_8_REF}.is_space_flag */
EIF_TYPED_VALUE F197_5689 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 128U);
	return r;
}

void EIF_Minit197 (void)
{
	GTCX
	RTOTS (5681,F197_5681)
}


#ifdef __cplusplus
}
#endif
