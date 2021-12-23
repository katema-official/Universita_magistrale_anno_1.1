/*
 * Code for class FORMAT_INTEGER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F30_761(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F30_762(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_763(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_764(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_765(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_766(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_767(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_768(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_769(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_770(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_771(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_772(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_773(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_774(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_775(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_776(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_777(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_778(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_779(EIF_REFERENCE);
extern void F30_780(EIF_REFERENCE);
extern void F30_781(EIF_REFERENCE);
extern void F30_782(EIF_REFERENCE);
extern void F30_783(EIF_REFERENCE);
extern void F30_784(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F30_785(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F30_786(EIF_REFERENCE);
extern void F30_787(EIF_REFERENCE);
extern void F30_788(EIF_REFERENCE);
extern void F30_789(EIF_REFERENCE);
extern void F30_790(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F30_791(EIF_REFERENCE);
extern void F30_792(EIF_REFERENCE);
extern void F30_793(EIF_REFERENCE);
extern void F30_794(EIF_REFERENCE);
extern void F30_795(EIF_REFERENCE);
extern void F30_796(EIF_REFERENCE);
extern void F30_797(EIF_REFERENCE);
extern void F30_798(EIF_REFERENCE);
extern void F30_799(EIF_REFERENCE);
extern void F30_800(EIF_REFERENCE);
extern void F30_801(EIF_REFERENCE);
extern void F30_802(EIF_REFERENCE);
extern void F30_803(EIF_REFERENCE);
extern void F30_804(EIF_REFERENCE);
extern void F30_805(EIF_REFERENCE);
extern void F30_806(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F30_807(EIF_REFERENCE);
extern void F30_808(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_809(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F30_810(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_811(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_812(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_813(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_814(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_815(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_816(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_817(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_818(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F30_819(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F30_820(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_821(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F30_822(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F30_7119(EIF_REFERENCE, int);
extern void EIF_Minit30(void);

#ifdef __cplusplus
}
#endif

#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FORMAT_INTEGER}.make */
void F30_761 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 29, Current, 0, 1, 871);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 871);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("reasonable_field", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(784, dtype))(Current);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 767, 0x10000000, 1); /* width */
	*(EIF_INTEGER_32 *)(Current + RTWA(767, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(805, dtype))(Current);
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(802, dtype))(Current);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(797, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("blank_fill", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(766, dtype));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ' ')) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("show_sign_negative", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(778, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("no_separator", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(782, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("width_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(767, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("right_justified", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(776, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("leading_sign", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(783, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {FORMAT_INTEGER}.fill_character */
EIF_TYPED_VALUE F30_762 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = *(EIF_CHARACTER_8 *)(Current + RTWA(766,Dtype(Current)));
	return r;
}


/* {FORMAT_INTEGER}.width */
EIF_TYPED_VALUE F30_763 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(767,Dtype(Current)));
	return r;
}


/* {FORMAT_INTEGER}.separator */
EIF_TYPED_VALUE F30_764 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = *(EIF_CHARACTER_8 *)(Current + RTWA(768,Dtype(Current)));
	return r;
}


/* {FORMAT_INTEGER}.justification */
EIF_TYPED_VALUE F30_765 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(769,Dtype(Current)));
	return r;
}


/* {FORMAT_INTEGER}.trailing_sign */
EIF_TYPED_VALUE F30_766 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(770,Dtype(Current)));
	return r;
}


/* {FORMAT_INTEGER}.sign_format */
EIF_TYPED_VALUE F30_767 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(771,Dtype(Current)));
	return r;
}


/* {FORMAT_INTEGER}.sign_string */
EIF_TYPED_VALUE F30_768 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(772,Dtype(Current)));
	return r;
}


/* {FORMAT_INTEGER}.bracketted_negative */
EIF_TYPED_VALUE F30_769 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(773,Dtype(Current)));
	return r;
}


/* {FORMAT_INTEGER}.centered */
EIF_TYPED_VALUE F30_770 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "centered";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 880);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 880);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(769, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(816, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("Result = (justification = Center_justification)", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(769, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(816, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(ti4_1 == ti4_2))) {
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
}

/* {FORMAT_INTEGER}.left_justified */
EIF_TYPED_VALUE F30_771 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "left_justified";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 881);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 881);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(769, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(815, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("Result = (justification = Left_justification)", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(769, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(815, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(ti4_1 == ti4_2))) {
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
}

/* {FORMAT_INTEGER}.right_justified */
EIF_TYPED_VALUE F30_772 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "right_justified";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 882);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 882);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(769, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(817, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("Result = (justification = Right_justification)", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(769, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(817, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(ti4_1 == ti4_2))) {
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
}

/* {FORMAT_INTEGER}.not_justified */
EIF_TYPED_VALUE F30_773 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "not_justified";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 883);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 883);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(769, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(814, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("Result = (justification = No_justification)", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(769, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(814, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(ti4_1 == ti4_2))) {
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
}

/* {FORMAT_INTEGER}.show_sign_negative */
EIF_TYPED_VALUE F30_774 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "show_sign_negative";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 884);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 884);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(771, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(821, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("Result = (sign_format = Sign_negative_value)", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(771, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(821, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(ti4_1 == ti4_2))) {
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
}

/* {FORMAT_INTEGER}.show_sign_positive */
EIF_TYPED_VALUE F30_775 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "show_sign_positive";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 885);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 885);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(771, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(820, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("Result = (sign_format = Sign_positive_value)", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(771, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(820, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(ti4_1 == ti4_2))) {
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
}

/* {FORMAT_INTEGER}.show_sign */
EIF_TYPED_VALUE F30_776 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "show_sign";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 886);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 886);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(771, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(818, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("Result = (sign_format = Show_sign_value)", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(771, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(818, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(ti4_1 == ti4_2))) {
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
}

/* {FORMAT_INTEGER}.ignore_sign */
EIF_TYPED_VALUE F30_777 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ignore_sign";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 887);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 887);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(771, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(819, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("Result = (sign_format = Ignore_sign_value)", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(771, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(819, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(ti4_1 == ti4_2))) {
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
}

/* {FORMAT_INTEGER}.no_separator */
EIF_TYPED_VALUE F30_778 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_separator";
	RTEX;
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 888);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 888);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(768, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\000');
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("Result = (separator = \'%U\')", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(768, dtype));
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\000'))) {
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
}

/* {FORMAT_INTEGER}.leading_sign */
EIF_TYPED_VALUE F30_779 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "leading_sign";
	RTEX;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 889);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 889);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(770, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("Result = not trailing_sign", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(770, dtype));
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
}

/* {FORMAT_INTEGER}.blank_fill */
void F30_780 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "blank_fill";
	RTEX;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 890);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 890);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 766, 0x08000000, 1); /* fill_character */
	*(EIF_CHARACTER_8 *)(Current + RTWA(766, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ' ';
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("fill_character = \' \'", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(766, dtype));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ' ')) {
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

/* {FORMAT_INTEGER}.zero_fill */
void F30_781 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "zero_fill";
	RTEX;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 891);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 891);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 766, 0x08000000, 1); /* fill_character */
	*(EIF_CHARACTER_8 *)(Current + RTWA(766, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '0';
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("fill_character = \'0\'", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(766, dtype));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '0')) {
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

/* {FORMAT_INTEGER}.dollar_fill */
void F30_782 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dollar_fill";
	RTEX;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 892);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 892);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 766, 0x08000000, 1); /* fill_character */
	*(EIF_CHARACTER_8 *)(Current + RTWA(766, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '$';
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("fill_character = \'$\'", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(766, dtype));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '$')) {
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

/* {FORMAT_INTEGER}.asterisk_fill */
void F30_783 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "asterisk_fill";
	RTEX;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 893);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 893);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 766, 0x08000000, 1); /* fill_character */
	*(EIF_CHARACTER_8 *)(Current + RTWA(766, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '*';
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("fill_character = \'*\'", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(766, dtype));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '*')) {
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

/* {FORMAT_INTEGER}.set_fill */
void F30_784 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_fill";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_CHARACTER_8 tc1;
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
	
	RTEAA(l_feature_name, 29, Current, 0, 1, 894);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 894);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 766, 0x08000000, 1); /* fill_character */
	*(EIF_CHARACTER_8 *)(Current + RTWA(766, dtype)) = (EIF_CHARACTER_8) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("fill_character = c", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(766, dtype));
		if ((EIF_BOOLEAN)(tc1 == arg1)) {
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
#undef arg1
}

/* {FORMAT_INTEGER}.set_width */
void F30_785 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_width";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 29, Current, 0, 1, 895);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 895);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("wide_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 767, 0x10000000, 1); /* width */
	*(EIF_INTEGER_32 *)(Current + RTWA(767, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("width = w", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(767, dtype));
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
#undef arg1
}

/* {FORMAT_INTEGER}.underscore_separate */
void F30_786 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "underscore_separate";
	RTEX;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 896);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 896);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 768, 0x08000000, 1); /* separator */
	*(EIF_CHARACTER_8 *)(Current + RTWA(768, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '_';
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("separator = \'_\'", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(768, dtype));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '_')) {
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

/* {FORMAT_INTEGER}.comma_separate */
void F30_787 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "comma_separate";
	RTEX;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 897);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 897);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 768, 0x08000000, 1); /* separator */
	*(EIF_CHARACTER_8 *)(Current + RTWA(768, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ',';
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("separator = \',\'", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(768, dtype));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ',')) {
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

/* {FORMAT_INTEGER}.dot_separate */
void F30_788 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dot_separate";
	RTEX;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 898);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 898);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 768, 0x08000000, 1); /* separator */
	*(EIF_CHARACTER_8 *)(Current + RTWA(768, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '.';
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("separator = \'.\'", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(768, dtype));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '.')) {
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

/* {FORMAT_INTEGER}.remove_separator */
void F30_789 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "remove_separator";
	RTEX;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 899);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 899);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 768, 0x08000000, 1); /* separator */
	*(EIF_CHARACTER_8 *)(Current + RTWA(768, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("separator = \'%U\'", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(768, dtype));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\000')) {
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

/* {FORMAT_INTEGER}.set_separator */
void F30_790 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_separator";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_CHARACTER_8 tc1;
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
	
	RTEAA(l_feature_name, 29, Current, 0, 1, 900);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 900);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 768, 0x08000000, 1); /* separator */
	*(EIF_CHARACTER_8 *)(Current + RTWA(768, dtype)) = (EIF_CHARACTER_8) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("separator = c", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(768, dtype));
		if ((EIF_BOOLEAN)(tc1 == arg1)) {
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
#undef arg1
}

/* {FORMAT_INTEGER}.left_justify */
void F30_791 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "left_justify";
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 901);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 901);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 769, 0x10000000, 1); /* justification */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(815, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(769, dtype)) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("left_justified", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(775, dtype))(Current)).it_b);
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

/* {FORMAT_INTEGER}.center_justify */
void F30_792 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "center_justify";
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 902);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 902);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 769, 0x10000000, 1); /* justification */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(816, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(769, dtype)) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("centered", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(774, dtype))(Current)).it_b);
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

/* {FORMAT_INTEGER}.right_justify */
void F30_793 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "right_justify";
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 903);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 903);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 769, 0x10000000, 1); /* justification */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(817, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(769, dtype)) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("right_justified", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(776, dtype))(Current)).it_b);
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

/* {FORMAT_INTEGER}.no_justify */
void F30_794 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_justify";
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 904);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 904);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 769, 0x10000000, 1); /* justification */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(814, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(769, dtype)) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_justified", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(777, dtype))(Current)).it_b);
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

/* {FORMAT_INTEGER}.sign_leading */
void F30_795 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sign_leading";
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 905);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 905);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 770, 0x04000000, 1); /* trailing_sign */
	*(EIF_BOOLEAN *)(Current + RTWA(770, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("leading_sign", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(783, dtype))(Current)).it_b);
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

/* {FORMAT_INTEGER}.sign_trailing */
void F30_796 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sign_trailing";
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 906);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 906);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 770, 0x04000000, 1); /* trailing_sign */
	*(EIF_BOOLEAN *)(Current + RTWA(770, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("trailing_sign", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(770, dtype));
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

/* {FORMAT_INTEGER}.sign_positive_only */
void F30_797 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sign_positive_only";
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 907);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 907);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 771, 0x10000000, 1); /* sign_format */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(820, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(771, dtype)) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("show_sign_positive", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(779, dtype))(Current)).it_b);
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

/* {FORMAT_INTEGER}.sign_negative_only */
void F30_798 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sign_negative_only";
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 908);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 908);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 771, 0x10000000, 1); /* sign_format */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(821, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(771, dtype)) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("show_sign_negative", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(778, dtype))(Current)).it_b);
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

/* {FORMAT_INTEGER}.sign_show */
void F30_799 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sign_show";
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 909);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 909);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 771, 0x10000000, 1); /* sign_format */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(818, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(771, dtype)) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("show_sign", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(780, dtype))(Current)).it_b);
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

/* {FORMAT_INTEGER}.sign_ignore */
void F30_800 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sign_ignore";
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 910);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 910);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 771, 0x10000000, 1); /* sign_format */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(819, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(771, dtype)) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("ignore_sign", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(781, dtype))(Current)).it_b);
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

/* {FORMAT_INTEGER}.sign_normal */
void F30_801 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sign_normal";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 911);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 911);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 772, 0xF80000E8, 0); /* sign_string */
	tr1 = RTMS_EX_H("- +",3,2957355);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(772, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("sign_string ~ \"- +\"", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(772, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTEQ(tr1, RTMS_EX_H("- +",3,2957355))) {
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

/* {FORMAT_INTEGER}.sign_cr_dr */
void F30_802 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sign_cr_dr";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 912);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 912);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 772, 0xF80000E8, 0); /* sign_string */
	tr1 = RTMS_EX_H("CR  DR",6,671342674);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(772, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("sign_string ~ \"CR DR\"", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(772, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTEQ(tr1, RTMS_EX_H("CR  DR",6,671342674))) {
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

/* {FORMAT_INTEGER}.sign_dr_cr */
void F30_803 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sign_dr_cr";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 913);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 913);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 772, 0xF80000E8, 0); /* sign_string */
	tr1 = RTMS_EX_H("DR  CR",6,673308498);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(772, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("sign_string ~ \"DR CR\"", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(772, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTEQ(tr1, RTMS_EX_H("DR  CR",6,673308498))) {
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

/* {FORMAT_INTEGER}.sign_floating_dollar */
void F30_804 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sign_floating_dollar";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 914);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 914);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 772, 0xF80000E8, 0); /* sign_string */
	tr1 = RTMS_EX_H("$$$",3,2368548);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(772, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(799, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("sign_string ~ \"$$$\"", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(772, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTEQ(tr1, RTMS_EX_H("$$$",3,2368548))) {
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
}

/* {FORMAT_INTEGER}.sign_floating_dollar_signed */
void F30_805 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sign_floating_dollar_signed";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 915);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 915);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 772, 0xF80000E8, 0); /* sign_string */
	tr1 = RTMS_EX_H("-$ $+$",6,627991332);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(772, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(799, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("sign_string ~ \"-$ $+$\"", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(772, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTEQ(tr1, RTMS_EX_H("-$ $+$",6,627991332))) {
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
}

/* {FORMAT_INTEGER}.set_sign */
void F30_806 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_sign";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 29, Current, 0, 1, 916);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 916);
	RTCC(arg1, 29, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s /= Void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s.count >= 3", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4768, "count", arg1));
		RTTE((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 3L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("s.count \\\\ 3 = 0", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4768, "count", arg1));
		RTTE((EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 3L)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 772, 0xF80000E8, 0); /* sign_string */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(772, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("sign_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(772, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTEQ(tr1, arg1)) {
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

/* {FORMAT_INTEGER}.bracket_negative */
void F30_807 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "bracket_negative";
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 917);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 917);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 773, 0x04000000, 1); /* bracketted_negative */
	*(EIF_BOOLEAN *)(Current + RTWA(773, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("bracketted_negative", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(773, dtype));
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

/* {FORMAT_INTEGER}.unbracket_negative */
void F30_808 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "unbracket_negative";
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
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 918);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 918);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 773, 0x04000000, 1); /* bracketted_negative */
	*(EIF_BOOLEAN *)(Current + RTWA(773, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not bracketted_negative", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(773, dtype));
		if ((EIF_BOOLEAN) !tb1) {
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

/* {FORMAT_INTEGER}.formatted */
EIF_TYPED_VALUE F30_809 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "formatted";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 29, Current, 2, 1, 919);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 919);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		RTHOOK(3);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) -arg1;
	} else {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(6);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) arg1;
		}
	}
	RTHOOK(7);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(782, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(8);
		RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
		tr1 = c_outi(loc2);
		ur1 = RTCCL(tr1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(822, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(9);
		RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
		tr1 = c_outi(loc2);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(10);
	tb1 = '\01';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(781, dtype))(Current)).it_b);
	if (!(EIF_BOOLEAN) !tb2) {
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(773, dtype));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(11);
		RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
		ur1 = RTCCL(Result);
		ui4_1 = loc1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(823, dtype))(Current, ur1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(12);
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(769, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(814, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(4768, "count", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(767, dtype));
		tb1 = (EIF_BOOLEAN) (ti4_1 < ti4_2);
	}
	if (tb1) {
		RTHOOK(13);
		RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
		ur1 = RTCCL(Result);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(826, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("correct_length", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(777, dtype))(Current)).it_b);
		if (!tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(4768, "count", Result));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(767, dtype));
			tb1 = (EIF_BOOLEAN) (ti4_1 >= ti4_2);
		}
		if (tb1) {
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
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {FORMAT_INTEGER}.no_justification */
EIF_TYPED_VALUE F30_810 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	return r;
}

/* {FORMAT_INTEGER}.left_justification */
EIF_TYPED_VALUE F30_811 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {FORMAT_INTEGER}.center_justification */
EIF_TYPED_VALUE F30_812 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {FORMAT_INTEGER}.right_justification */
EIF_TYPED_VALUE F30_813 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	return r;
}

/* {FORMAT_INTEGER}.show_sign_value */
EIF_TYPED_VALUE F30_814 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	return r;
}

/* {FORMAT_INTEGER}.ignore_sign_value */
EIF_TYPED_VALUE F30_815 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {FORMAT_INTEGER}.sign_positive_value */
EIF_TYPED_VALUE F30_816 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {FORMAT_INTEGER}.sign_negative_value */
EIF_TYPED_VALUE F30_817 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	return r;
}

/* {FORMAT_INTEGER}.split */
EIF_TYPED_VALUE F30_818 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "split";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 29, Current, 2, 1, 865);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 865);
	RTCC(arg1, 29, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("efficiency", EX_PRE);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(768, dtype));
		RTTE((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '\000'), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4768, "count", arg1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(232, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(767, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4642, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 3L))) break;
		RTHOOK(5);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 3L))) break;
			RTHOOK(7);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2556, "item", arg1))(arg1, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4816, "precede", Result))(Result, uc1x);
			RTHOOK(8);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1--;
			RTHOOK(9);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
		}
		RTHOOK(10);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(768, dtype));
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4816, "precede", Result))(Result, uc1x);
	}
	for (;;) {
		RTHOOK(11);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(12);
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2556, "item", arg1))(arg1, ui4_1x)).it_c1);
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4816, "precede", Result))(Result, uc1x);
		RTHOOK(13);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1--;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef uc1
#undef arg1
}

/* {FORMAT_INTEGER}.process_sign */
EIF_TYPED_VALUE F30_819 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "process_sign";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 29, Current, 1, 2, 866);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 866);
	RTCC(arg1, 29, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(2);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(773, dtype));
	if ((EIF_BOOLEAN) (tb1 && (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) -1L)))) {
		RTHOOK(3);
		uc1 = (EIF_CHARACTER_8) '(';
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4816, "precede", Result))(Result, uc1x);
		RTHOOK(4);
		uc1 = (EIF_CHARACTER_8) ')';
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", Result))(Result, uc1x);
	}
	RTHOOK(5);
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\0';
	tb4 = '\01';
	tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(778, dtype))(Current)).it_b);
	if (!tb5) {
		tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(780, dtype))(Current)).it_b);
		tb4 = tb5;
	}
	if (tb4) {
		tb3 = (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) -1L));
	}
	if (!(tb3)) {
		tb3 = '\0';
		tb4 = '\01';
		tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(779, dtype))(Current)).it_b);
		if (!tb5) {
			tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(780, dtype))(Current)).it_b);
			tb4 = tb5;
		}
		if (tb4) {
			tb3 = (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L));
		}
		tb2 = tb3;
	}
	if (!tb2) {
		tb2 = '\0';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(780, dtype))(Current)).it_b);
		if (tb3) {
			tb2 = (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L));
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(6);
		RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
		ui4_1 = arg2;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(825, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(7);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(8);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(770, dtype));
		if (tb1) {
			RTHOOK(9);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
		} else {
			RTHOOK(10);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4818, "prepend", Result))(Result, ur1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
#undef arg2
#undef arg1
}

/* {FORMAT_INTEGER}.sign_size */
EIF_TYPED_VALUE F30_820 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sign_size";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 29, Current, 0, 0, 867);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 867);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(772, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 3L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("Result * 3 = sign_string.count", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(772, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) (Result * ((EIF_INTEGER_32) 3L)) == ti4_1)) {
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
#undef up1
}

/* {FORMAT_INTEGER}.sign_value */
EIF_TYPED_VALUE F30_821 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "sign_value";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 29, Current, 1, 1, 868);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 868);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("correct_sign", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) -1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(824, dtype))(Current)).it_i4);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 * (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L))) + ((EIF_INTEGER_32) 1L));
	RTHOOK(3);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(772, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ui4_1 = loc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(824, dtype))(Current)).it_i4);
	ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ti4_1) - ((EIF_INTEGER_32) 1L));
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4722, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {FORMAT_INTEGER}.justify */
EIF_TYPED_VALUE F30_822 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "justify";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLR(6,loc2);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 29, Current, 4, 1, 869);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 869);
	RTCC(arg1, 29, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("room", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4768, "count", arg1));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(767, dtype));
		RTTE((EIF_BOOLEAN) (ti4_1 < ti4_2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("justification", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(769, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(814, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 != ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(4);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(774, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(5);
		RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(232, 0x01).id);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(767, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4768, "count", arg1));
		ui4_1 = (EIF_INTEGER_32) (ti4_1 - ti4_2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4642, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(5,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(7);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4682, "capacity", loc1))(loc1)).it_i4);
			if ((EIF_BOOLEAN) (loc3 > ti4_1)) break;
			RTHOOK(8);
			tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(766, dtype));
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", loc1))(loc1, uc1x);
			RTHOOK(9);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3++;
		}
		RTHOOK(10);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(775, dtype))(Current)).it_b);
		if (tb1) {
			RTHOOK(11);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
		} else {
			RTHOOK(12);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4818, "prepend", Result))(Result, ur1x);
		}
	} else {
		RTHOOK(13);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(767, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4768, "count", arg1));
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 - ti4_3) / ((EIF_INTEGER_32) 2L));
		RTHOOK(14);
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4768, "count", arg1));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(767, dtype));
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc4) + ti4_2) < ti4_3)) {
			RTHOOK(15);
			RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
			tr1 = RTLN(eif_new_type(232, 0x01).id);
			ui4_1 = (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4642, Dtype(tr1)))(tr1, ui4_1x);
			RTNHOOK(15,1);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(16);
			RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
			tr1 = RTLN(eif_new_type(232, 0x01).id);
			ui4_1 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4642, Dtype(tr1)))(tr1, ui4_1x);
			RTNHOOK(16,1);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
		}
		RTHOOK(17);
		RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
		tr1 = RTLN(eif_new_type(232, 0x01).id);
		ui4_1 = loc4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4642, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(17,1);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(18);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(19);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4682, "capacity", loc2))(loc2)).it_i4);
			if ((EIF_BOOLEAN) (loc3 > ti4_2)) break;
			RTHOOK(20);
			tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(766, dtype));
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", loc1))(loc1, uc1x);
			RTHOOK(21);
			tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(766, dtype));
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", loc2))(loc2, uc1x);
			RTHOOK(22);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3++;
		}
		RTHOOK(23);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4682, "capacity", loc1))(loc1)).it_i4);
		if ((EIF_BOOLEAN)(loc3 == ti4_3)) {
			RTHOOK(24);
			tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(766, dtype));
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", loc1))(loc1, uc1x);
		}
		RTHOOK(25);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4818, "prepend", Result))(Result, ur1x);
		RTHOOK(26);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {FORMAT_INTEGER}._invariant */
void F30_7119 (EIF_REFERENCE Current, int where)
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
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 29, Current, 0, 7118);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("sign_string_attached", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(772, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("sign_string_count", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(772, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 3L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("sign_string_equal_parts", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(772, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 3L)) == ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("wide_enough", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(767, dtype));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("no_justification <= justification and justification <= right_justification", Current);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(814, dtype))(Current)).it_i4);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(769, dtype));
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(769, dtype));
	ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(817, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (ti4_1 <= ti4_2) && (EIF_BOOLEAN) (ti4_3 <= ti4_4))) {
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

void EIF_Minit30 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
