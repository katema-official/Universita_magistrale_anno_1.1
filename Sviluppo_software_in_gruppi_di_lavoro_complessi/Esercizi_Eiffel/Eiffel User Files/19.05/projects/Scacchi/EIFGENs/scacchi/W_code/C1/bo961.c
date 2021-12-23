/*
 * Code for class BOARD
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F961_7210(EIF_REFERENCE);
extern void F961_7211(EIF_REFERENCE);
extern EIF_TYPED_VALUE F961_7212(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F961_7213(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F961_7214(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F961_7215(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F961_7216(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F961_7217(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F961_7218(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F961_7219(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F961_7220(EIF_REFERENCE);
extern void EIF_Minit961(void);

#ifdef __cplusplus
}
#endif

#include <ctype.h>
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

/* {BOARD}.matrix */
EIF_TYPED_VALUE F961_7210 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5000,Dtype(Current)));
	return r;
}


/* {BOARD}.make */
void F961_7211 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLR(4,loc2);
	RTLR(5,tr2);
	RTLR(6,loc3);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 960, Current, 3, 0, 13512);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(960, Current, 13512);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80003C1, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(961, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5000, 0xF80003C4, 0); /* matrix */
	tr1 = RTLNSMART(RTWCT(5000, dtype, Dftype(Current)).id);
	ur1 = RTCCL(loc1);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	ui4_2 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2666, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x);
	RTNHOOK(2,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5000, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2664, "lower", tr1));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(2669, "height", tr2));
	ui4_1 = ti4_2;
	tr1 = RTLN(eif_new_type(218, 0x00).id);
	*(EIF_INTEGER_32 *)tr1 = ti4_1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4435, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2163, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3146, "after", loc2))(loc2)).it_b);
		if (tb1) break;
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2664, "lower", tr1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(2670, "width", tr2));
		ui4_1 = ti4_2;
		tr1 = RTLN(eif_new_type(218, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = ti4_1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4435, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2163, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		for (;;) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3146, "after", loc3))(loc3)).it_b);
			if (tb2) break;
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc1))(loc1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr2);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc2))(loc2)).it_i4);
			ui4_1 = ti4_1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc3))(loc3)).it_i4);
			ui4_2 = ti4_2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2671, "put", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
			RTHOOK(6);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3147, "forth", loc3))(loc3);
		}
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3147, "forth", loc2))(loc2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
}

/* {BOARD}.to_row_col */
EIF_TYPED_VALUE F961_7212 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "to_row_col";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 960, Current, 2, 1, 13513);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(960, Current, 13513);
	RTCC(arg1, 960, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_valid_code (code)", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5005, dtype))(Current, ur1x)).it_b);
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
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4744, "at", arg1))(arg1, ui4_1x)).it_c1);
	RTNHOOK(2,1);
	uc1 = (EIF_CHARACTER_8) '1';
	tr1 = RTLN(eif_new_type(197, 0x00).id);
	*(EIF_CHARACTER_8 *)tr1 = tc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4146, "difference", tr1))(tr1, uc1x)).it_i4);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(3);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4744, "at", arg1))(arg1, ui4_1x)).it_c1);
	RTNHOOK(3,1);
	uc1 = (EIF_CHARACTER_8) 'a';
	tr1 = RTLN(eif_new_type(197, 0x00).id);
	*(EIF_CHARACTER_8 *)tr1 = tc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4146, "difference", tr1))(tr1, uc1x)).it_i4);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(4);
	RTDBGAL(0, 0xF80000BA, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,218,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = loc1;
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = loc2;
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {BOARD}.is_available */
EIF_TYPED_VALUE F961_7213 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_available";
	RTEX;
#define arg1 arg1x.it_r
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
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 960, Current, 0, 1, 13514);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(960, Current, 13514);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,218,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 960, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = eif_integer_32_item(RTCW(arg1),1);
	ui4_1 = ti4_1;
	ti4_2 = eif_integer_32_item(RTCW(arg1),2);
	ui4_2 = ti4_2;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2668, "item", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5013, "is_occupied", tr2))(tr2)).it_b);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {BOARD}.is_empty */
EIF_TYPED_VALUE F961_7214 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_empty";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 960, Current, 1, 1, 13515);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(960, Current, 13515);
	RTCC(arg1, 960, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80000BA, 0, 0); /* loc1 */
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5002, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ur1 = RTCCL(loc1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5003, dtype))(Current, ur1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {BOARD}.is_valid_code */
EIF_TYPED_VALUE F961_7215 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_valid_code";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 960, Current, 2, 1, 13516);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(960, Current, 13516);
	RTCC(arg1, 960, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tb2 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4768, "count", arg1));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4744, "at", arg1))(arg1, ui4_1x)).it_c1);
		RTNHOOK(1,1);
		tr1 = RTLN(eif_new_type(197, 0x00).id);
		*(EIF_CHARACTER_8 *)tr1 = tc1;
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4158, "is_alpha", tr1))(tr1)).it_b);
		tb2 = tb3;
	}
	if (tb2) {
		ui4_1 = ((EIF_INTEGER_32) 2L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4744, "at", arg1))(arg1, ui4_1x)).it_c1);
		RTNHOOK(1,2);
		tb2 = EIF_TEST(isdigit(tc1));
		tb1 = tb2;
	}
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(3);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ui4_1 = ((EIF_INTEGER_32) 2L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4744, "at", arg1))(arg1, ui4_1x)).it_c1);
		RTNHOOK(3,1);
		uc1 = (EIF_CHARACTER_8) '1';
		tr1 = RTLN(eif_new_type(197, 0x00).id);
		*(EIF_CHARACTER_8 *)tr1 = tc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4146, "difference", tr1))(tr1, uc1x)).it_i4);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		RTHOOK(4);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4744, "at", arg1))(arg1, ui4_1x)).it_c1);
		RTNHOOK(4,1);
		uc1 = (EIF_CHARACTER_8) 'a';
		tr1 = RTLN(eif_new_type(197, 0x00).id);
		*(EIF_CHARACTER_8 *)tr1 = tc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4146, "difference", tr1))(tr1, uc1x)).it_i4);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		RTHOOK(5);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tb1 = '\0';
		tb2 = '\0';
		tb3 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2664, "lower", tr1));
		if ((EIF_BOOLEAN) (loc1 >= ti4_1)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,2);
			ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2669, "height", tr1));
			tb3 = (EIF_BOOLEAN) (loc1 <= ti4_1);
		}
		if (tb3) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,3);
			ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2664, "lower", tr1));
			tb2 = (EIF_BOOLEAN) (loc2 >= ti4_1);
		}
		if (tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,4);
			ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2670, "width", tr1));
			tb1 = (EIF_BOOLEAN) (loc2 <= ti4_1);
		}
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {BOARD}.put */
void F961_7216 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "put";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 960, Current, 1, 2, 13517);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(960, Current, 13517);
	RTCC(arg1, 960, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTCC(arg2, 960, l_feature_name, 2, eif_new_type(962, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80000BA, 0, 0); /* loc1 */
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5002, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = eif_integer_32_item(RTCW(loc1),1);
	ui4_1 = ti4_1;
	ti4_2 = eif_integer_32_item(RTCW(loc1),2);
	ui4_2 = ti4_2;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2668, "item", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5011, "set_presence", tr2))(tr2, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {BOARD}.get */
EIF_TYPED_VALUE F961_7217 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,Result);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 960, Current, 1, 1, 13518);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(960, Current, 13518);
	RTCC(arg1, 960, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80000BA, 0, 0); /* loc1 */
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5002, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(0, 0xF80003C2, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = eif_integer_32_item(RTCW(loc1),1);
	ui4_1 = ti4_1;
	ti4_2 = eif_integer_32_item(RTCW(loc1),2);
	ui4_2 = ti4_2;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2668, "item", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5012, "get_presence", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {BOARD}.remove */
void F961_7218 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "remove";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 960, Current, 1, 1, 13519);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(960, Current, 13519);
	RTCC(arg1, 960, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80000BA, 0, 0); /* loc1 */
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5002, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = eif_integer_32_item(RTCW(loc1),1);
	ui4_1 = ti4_1;
	ti4_2 = eif_integer_32_item(RTCW(loc1),2);
	ui4_2 = ti4_2;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2668, "item", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = NULL;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5011, "set_presence", tr2))(tr2, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {BOARD}.move */
void F961_7219 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "move";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(5,tr1);
	RTLR(6,ur2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 960, Current, 1, 2, 13520);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(960, Current, 13520);
	RTCC(arg1, 960, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTCC(arg2, 960, l_feature_name, 2, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ok_from", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5004, dtype))(Current, ur1x)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("ok_to", EX_PRE);
		ur1 = RTCCL(arg2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5004, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5007, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5008, dtype))(Current, ur1x);
		RTHOOK(5);
		ur1 = RTCCL(arg2);
		ur2 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5006, dtype))(Current, ur1x, ur2x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("ok_from", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5004, dtype))(Current, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("ok_to", EX_POST);
		ur1 = RTCCL(arg2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5004, dtype))(Current, ur1x)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
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
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef arg2
#undef arg1
}

/* {BOARD}.out */
EIF_TYPED_VALUE F961_7220 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "out";
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
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
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR8, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 960, Current, 5, 0, 13521);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(960, Current, 13521);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTMS_EX_H("",0,0);
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2664, "lower", tr1));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(2669, "height", tr2));
	ui4_1 = ti4_2;
	tr1 = RTLN(eif_new_type(218, 0x00).id);
	*(EIF_INTEGER_32 *)tr1 = ti4_1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4435, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2163, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3146, "after", loc3))(loc3)).it_b);
		if (tb1) break;
		RTHOOK(3);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2669, "height", tr1));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,2);
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2664, "lower", tr1));
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc3))(loc3)).it_i4);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - ti4_3);
		RTHOOK(4);
		RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
		tr1 = c_outi(loc2);
		ur1 = RTCCL(tr1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", Result))(Result, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = RTMS_EX_H(" ",1,32);
		ur1 = tr2;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2664, "lower", tr1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(2670, "width", tr2));
		ui4_1 = ti4_2;
		tr1 = RTLN(eif_new_type(218, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = ti4_1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4435, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2163, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		for (;;) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3146, "after", loc4))(loc4)).it_b);
			if (tb2) break;
			RTHOOK(6);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = loc2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc4))(loc4)).it_i4);
			ui4_2 = ti4_1;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2668, "item", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", Result))(Result, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = RTMS_EX_H(" ",1,32);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr2);
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3147, "forth", loc4))(loc4);
		}
		RTHOOK(8);
		RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
		tr1 = RTMS_EX_H("\012",1,10);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", Result))(Result, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3147, "forth", loc3))(loc3);
	}
	RTHOOK(10);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTMS_EX_H(" ",1,32);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", Result))(Result, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(11);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2664, "lower", tr1));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(2670, "width", tr2));
	ui4_1 = ti4_2;
	tr1 = RTLN(eif_new_type(218, 0x00).id);
	*(EIF_INTEGER_32 *)tr1 = ti4_1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4435, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2163, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3146, "after", loc5))(loc5)).it_b);
		if (tb3) break;
		RTHOOK(12);
		RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
		loc1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) 'a';
		RTHOOK(13);
		RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc5))(loc5)).it_i4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(13,1);
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2664, "lower", tr1));
		ui4_1 = (EIF_INTEGER_32) (ti4_1 - ti4_2);
		tc1 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) loc1) + ui4_1);
		loc1 = (EIF_CHARACTER_8) tc1;
		RTHOOK(14);
		RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
		tr1 = RTMS_EX_H(" ",1,32);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", Result))(Result, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(15);
		uc1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", Result))(Result, uc1x);
		RTHOOK(16);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3147, "forth", loc5))(loc5);
	}
	RTHOOK(17);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTMS_EX_H("\012",1,10);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", Result))(Result, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uc1
}

void EIF_Minit961 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
