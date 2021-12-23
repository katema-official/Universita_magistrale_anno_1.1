/*
 * Code for class GAME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F961_8502(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F961_8503(EIF_REFERENCE);
extern void F961_8476(EIF_REFERENCE, int);
extern void EIF_Minit961(void);

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

/* {GAME}.roll */
void F961_8502 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "roll";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 960, Current, 0, 1, 13511);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(960, Current, 13511);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_pins", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= arg1) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 10L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6020, dtype))(Current)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("score >= old score", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6020, dtype))(Current)).it_i4);
		RTCO(tr1);
		if ((EIF_BOOLEAN) (ti4_2 >= ti4_1)) {
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

/* {GAME}.score */
EIF_TYPED_VALUE F961_8503 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "score";
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
	
	RTEAA(l_feature_name, 960, Current, 0, 0, 13512);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(960, Current, 13512);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 300L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {GAME}._invariant */
void F961_8476 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 960, Current, 0, 8475);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("valid_score", Current);
	tb1 = '\0';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6020, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= ti4_1)) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6020, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 10L));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
}

void EIF_Minit961 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
