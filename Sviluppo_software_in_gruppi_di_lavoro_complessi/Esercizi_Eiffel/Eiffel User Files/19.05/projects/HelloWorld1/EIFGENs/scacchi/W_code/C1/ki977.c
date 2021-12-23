/*
 * Code for class KING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F977_7372(EIF_REFERENCE);
extern void F977_7373(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F977_7374(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F977_7375(EIF_REFERENCE);
extern void EIF_Minit977(void);

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

/* {KING}.repr */
EIF_TYPED_VALUE F977_7372 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5146,Dtype(Current)));
	return r;
}


/* {KING}.make */
void F977_7373 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 976, Current, 0, 1, 13653);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(976, Current, 13653);
	RTCC(arg1, 976, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("player_valid", EX_PRE);
		tb1 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "as_upper", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		tr2 = RTMS_EX_H("WHITE",5,1213433413);
		ur1 = tr2;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
		if (!tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "as_upper", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(1,2);
			tr2 = RTMS_EX_H("BLACK",5,1279852363);
			ur1 = tr2;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("can_be_single", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "as_upper", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		tr2 = RTMS_EX_H("SINGLE",6,1477040709);
		ur1 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
		RTTE(tb1, label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5143, 0xF80000E8, 0); /* name */
	tr1 = RTMS_EX_H("KING",4,1263095367);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5143, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5146, 0xF80000E8, 0); /* repr */
	tr1 = RTMS_EX_H("UNICODE",7,1115487813);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5146, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "as_upper", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	tr2 = RTMS_EX_H("SINGLE",6,1477040709);
	ur1 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
	if (tb1) {
		RTHOOK(6);
		RTDBGAA(Current, dtype, 5146, 0xF80000E8, 0); /* repr */
		tr1 = RTMS_EX_H("ASCII",5,1397417801);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(5146, dtype)) = (EIF_REFERENCE) tr1;
		RTHOOK(7);
		RTDBGAA(Current, dtype, 5144, 0xF80000E8, 0); /* color */
		tr1 = RTMS_EX_H("WHITE",5,1213433413);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(5144, dtype)) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(8);
		RTDBGAA(Current, dtype, 5144, 0xF80000E8, 0); /* color */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "as_upper", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(5144, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {KING}.is_valid_move */
EIF_TYPED_VALUE F977_7374 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "is_valid_move";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,ur1);
	RTLR(4,tr1);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 976, Current, 2, 3, 13654);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(976, Current, 13654);
	RTCC(arg1, 976, l_feature_name, 1, eif_new_type(968, 0x01), 0x01);
	RTCC(arg2, 976, l_feature_name, 2, eif_new_type(232, 0x01), 0x01);
	RTCC(arg3, 976, l_feature_name, 3, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("board.is_valid_code (from_code) and board.is_valid_code (to_code)", EX_PRE);
		tb1 = '\0';
		ur1 = RTCCL(arg2);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5098, "is_valid_code", arg1))(arg1, ur1x)).it_b);
		if (tb2) {
			ur1 = RTCCL(arg3);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5098, "is_valid_code", arg1))(arg1, ur1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4744, "at", arg3))(arg3, ui4_1x)).it_c1);
	RTNHOOK(2,1);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4744, "at", arg2))(arg2, ui4_1x)).it_c1);
	uc1 = tc2;
	tr1 = RTLN(eif_new_type(197, 0x00).id);
	*(EIF_CHARACTER_8 *)tr1 = tc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4146, "difference", tr1))(tr1, uc1x)).it_i4);
	RTNHOOK(2,2);
	ti4_2 = eif_abs_int32 (ti4_1);
	loc1 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(3);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4744, "at", arg3))(arg3, ui4_1x)).it_c1);
	RTNHOOK(3,1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4744, "at", arg2))(arg2, ui4_1x)).it_c1);
	uc1 = tc2;
	tr1 = RTLN(eif_new_type(197, 0x00).id);
	*(EIF_CHARACTER_8 *)tr1 = tc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4146, "difference", tr1))(tr1, uc1x)).it_i4);
	RTNHOOK(3,2);
	ti4_2 = eif_abs_int32 (ti4_1);
	loc2 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(4);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	ur1 = RTCCL(arg3);
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5097, "is_empty", arg1))(arg1, ur1x)).it_b);
	if (tb2) {
		tb1 = ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 1L)) || (EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 1L))));
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef ui4_1
#undef uc1
#undef arg3
#undef arg2
#undef arg1
}

/* {KING}.out */
EIF_TYPED_VALUE F977_7375 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "out";
	RTEX;
	struct eif_ex_22 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + 0);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(22, 0x00).id);
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLR(5,tr2);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 976, Current, 1, 0, 13655);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(976, Current, 13655);
	RTIV(Current, RTAL);
	wstdinit(loc1,loc1);
	RTLXI(loc1);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTMS32_EX_H("K\000\000\000",1,75);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(638, "string_32_to_utf_8_string_8", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5144, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr2 = RTMS_EX_H("BLACK",5,1279852363);
	ur1 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
		tr1 = RTMS32_EX_H("k\000\000\000",1,107);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(638, "string_32_to_utf_8_string_8", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5146, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	tr2 = RTMS_EX_H("ASCII",5,1397417801);
	ur1 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
	if (tb1) {
		RTHOOK(5);
		RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
		tr1 = RTMS_EX_H("K",1,75);
		Result = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
}

void EIF_Minit977 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
