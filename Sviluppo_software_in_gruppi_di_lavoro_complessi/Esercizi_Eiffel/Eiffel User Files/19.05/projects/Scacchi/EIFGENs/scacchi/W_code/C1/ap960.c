/*
 * Code for class APPLICATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F960_7209(EIF_REFERENCE);
extern void EIF_Minit960(void);

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

/* {APPLICATION}.make */
void F960_7209 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,loc3);
	RTLR(6,Current);
	RTLR(7,ur2);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 959, Current, 3, 0, 13510);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(959, Current, 13510);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80003C0, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(960, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5001, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF80003C3, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(963, 0x01).id);
	tr2 = RTMS_EX_H("WHITE",5,1213433413);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5017, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF80003C3, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(963, 0x01).id);
	tr2 = RTMS_EX_H("BLACK",5,1279852363);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5017, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(3,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("\012***********************************************\012",49,1522867210);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("a5",2,24885);
	ur1 = tr1;
	ur2 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5006, "put", loc1))(loc1, ur1x, ur2x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("h3",2,26675);
	ur1 = tr1;
	ur2 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5006, "put", loc1))(loc1, ur1x, ur2x);
	RTHOOK(7);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("a5",2,24885);
	ur1 = tr1;
	tr2 = RTMS_EX_H("b6",2,25142);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5009, "move", loc1))(loc1, ur1x, ur2x);
	RTHOOK(9);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ur1
#undef ur2
}

void EIF_Minit960 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
