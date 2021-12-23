/*
 * Code for class NEW_TEST_SET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F980_7403(EIF_REFERENCE);
extern EIF_TYPED_VALUE F980_7404(EIF_REFERENCE);
extern EIF_TYPED_VALUE F980_7405(EIF_REFERENCE);
extern void F980_7406(EIF_REFERENCE);
extern void F980_7407(EIF_REFERENCE);
extern void F980_7408(EIF_REFERENCE);
extern void EIF_Minit980(void);

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

/* {NEW_TEST_SET}.b */
EIF_TYPED_VALUE F980_7403 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5173,Dtype(Current)));
	return r;
}


/* {NEW_TEST_SET}.wk */
EIF_TYPED_VALUE F980_7404 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5174,Dtype(Current)));
	return r;
}


/* {NEW_TEST_SET}.bk */
EIF_TYPED_VALUE F980_7405 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5175,Dtype(Current)));
	return r;
}


/* {NEW_TEST_SET}.on_prepare */
void F980_7406 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "on_prepare";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 979, Current, 0, 0, 13687);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(979, Current, 13687);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5173, 0xF80003C8, 0); /* b */
	tr1 = RTLNSMART(RTWCT(5173, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5094, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5173, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5174, 0xF80003D0, 0); /* wk */
	tr1 = RTLNSMART(RTWCT(5174, dtype, Dftype(Current)).id);
	tr2 = RTMS_EX_H("WHITE",5,1213433413);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5145, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5174, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5175, 0xF80003D0, 0); /* bk */
	tr1 = RTLNSMART(RTWCT(5175, dtype, Dftype(Current)).id);
	tr2 = RTMS_EX_H("BLACK",5,1279852363);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5145, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(3,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5175, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("prepared", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5158, dtype))(Current)).it_b);
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
	RTLO(2);
	RTEE;
#undef ur1
}

/* {NEW_TEST_SET}.test_valid_move */
void F980_7407 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_valid_move";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,tr4);
	RTLR(7,ur3);
	RTLR(8,tr5);
	RTLR(9,ur4);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 979, Current, 0, 0, 13688);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(979, Current, 13688);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5173, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = RTMS_EX_H("b5",2,25141);
	ur1 = tr2;
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5174, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5099, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(2);
	tr1 = RTMS_EX_H("b6",2,25142);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5174, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5173, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	tr4 = RTMS_EX_H("b5",2,25141);
	ur3 = tr4;
	tr5 = RTMS_EX_H("b6",2,25142);
	ur4 = tr5;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5142, "is_valid_move", tr2))(tr2, ur2x, ur3x, ur4x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5163, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("c6",2,25398);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5174, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5173, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	tr4 = RTMS_EX_H("b5",2,25141);
	ur3 = tr4;
	tr5 = RTMS_EX_H("c6",2,25398);
	ur4 = tr5;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5142, "is_valid_move", tr2))(tr2, ur2x, ur3x, ur4x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5163, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("c5",2,25397);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5174, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5173, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	tr4 = RTMS_EX_H("b5",2,25141);
	ur3 = tr4;
	tr5 = RTMS_EX_H("c5",2,25397);
	ur4 = tr5;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5142, "is_valid_move", tr2))(tr2, ur2x, ur3x, ur4x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5163, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("c4",2,25396);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5174, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5173, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	tr4 = RTMS_EX_H("b5",2,25141);
	ur3 = tr4;
	tr5 = RTMS_EX_H("c4",2,25396);
	ur4 = tr5;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5142, "is_valid_move", tr2))(tr2, ur2x, ur3x, ur4x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5163, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("b4",2,25140);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5174, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5173, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	tr4 = RTMS_EX_H("b5",2,25141);
	ur3 = tr4;
	tr5 = RTMS_EX_H("b4",2,25140);
	ur4 = tr5;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5142, "is_valid_move", tr2))(tr2, ur2x, ur3x, ur4x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5163, dtype))(Current, ur1x, ub1x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("a4",2,24884);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5174, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(7,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5173, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	tr4 = RTMS_EX_H("b5",2,25141);
	ur3 = tr4;
	tr5 = RTMS_EX_H("a4",2,24884);
	ur4 = tr5;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5142, "is_valid_move", tr2))(tr2, ur2x, ur3x, ur4x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5163, dtype))(Current, ur1x, ub1x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("a5",2,24885);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5174, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(8,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5173, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	tr4 = RTMS_EX_H("b5",2,25141);
	ur3 = tr4;
	tr5 = RTMS_EX_H("a5",2,24885);
	ur4 = tr5;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5142, "is_valid_move", tr2))(tr2, ur2x, ur3x, ur4x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5163, dtype))(Current, ur1x, ub1x);
	RTHOOK(9);
	tr1 = RTMS_EX_H("a6",2,24886);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5174, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(9,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5173, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	tr4 = RTMS_EX_H("b5",2,25141);
	ur3 = tr4;
	tr5 = RTMS_EX_H("a6",2,24886);
	ur4 = tr5;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5142, "is_valid_move", tr2))(tr2, ur2x, ur3x, ur4x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5163, dtype))(Current, ur1x, ub1x);
	RTHOOK(10);
	tr1 = RTMS_EX_H("b5",2,25141);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5174, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(10,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5173, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	tr4 = RTMS_EX_H("b5",2,25141);
	ur3 = tr4;
	tr5 = RTMS_EX_H("b5",2,25141);
	ur4 = tr5;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5142, "is_valid_move", tr2))(tr2, ur2x, ur3x, ur4x)).it_b);
	ub1 = (EIF_BOOLEAN) !tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5163, dtype))(Current, ur1x, ub1x);
	RTHOOK(11);
	tr1 = RTMS_EX_H("b7",2,25143);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5174, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(11,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5173, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	tr4 = RTMS_EX_H("b5",2,25141);
	ur3 = tr4;
	tr5 = RTMS_EX_H("b7",2,25143);
	ur4 = tr5;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5142, "is_valid_move", tr2))(tr2, ur2x, ur3x, ur4x)).it_b);
	ub1 = (EIF_BOOLEAN) !tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5163, dtype))(Current, ur1x, ub1x);
	RTHOOK(12);
	tr1 = RTMS_EX_H("b5 from b6",10,829933878);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5174, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(12,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5173, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	tr4 = RTMS_EX_H("b6",2,25142);
	ur3 = tr4;
	tr5 = RTMS_EX_H("b5",2,25141);
	ur4 = tr5;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5142, "is_valid_move", tr2))(tr2, ur2x, ur3x, ur4x)).it_b);
	ub1 = (EIF_BOOLEAN) !tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5163, dtype))(Current, ur1x, ub1x);
	RTHOOK(13);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5173, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(13,1);
	tr2 = RTMS_EX_H("b6",2,25142);
	ur1 = tr2;
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5175, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5099, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(14);
	tr1 = RTMS_EX_H("b6",2,25142);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5174, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(14,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5173, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	tr4 = RTMS_EX_H("b5",2,25141);
	ur3 = tr4;
	tr5 = RTMS_EX_H("b6",2,25142);
	ur4 = tr5;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5142, "is_valid_move", tr2))(tr2, ur2x, ur3x, ur4x)).it_b);
	ub1 = (EIF_BOOLEAN) !tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5163, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ub1
}

/* {NEW_TEST_SET}.test_board */
void F980_7408 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_board";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 979, Current, 0, 0, 13689);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(979, Current, 13689);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("Initially empty",15,1674878329);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5173, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr3 = RTMS_EX_H("b5",2,25141);
	ur2 = tr3;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5097, "is_empty", tr2))(tr2, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5163, dtype))(Current, ur1x, ub1x);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5173, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr2 = RTMS_EX_H("b5",2,25141);
	ur1 = tr2;
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5174, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5099, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("Not empty",9,486295673);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5173, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr3 = RTMS_EX_H("b5",2,25141);
	ur2 = tr3;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5097, "is_empty", tr2))(tr2, ur2x)).it_b);
	ub1 = (EIF_BOOLEAN) !tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5163, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ub1
}

void EIF_Minit980 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
