/*
 * Code for class TRACING_SETTING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F26_703(EIF_REFERENCE);
extern void F26_704(EIF_REFERENCE);
extern void F26_705(EIF_REFERENCE);
extern void EIF_Minit26(void);

#ifdef __cplusplus
}
#endif

#include "eif_eiffel.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F26_703
static int inline_F26_703 (void)
{
	return eif_is_tracing_enabled();
	;
}
#define INLINE_F26_703
#endif
#ifndef INLINE_F26_704
static void inline_F26_704 (void)
{
	eif_enable_tracing();
	;
}
#define INLINE_F26_704
#endif
#ifndef INLINE_F26_705
static void inline_F26_705 (void)
{
	eif_disable_tracing();
	;
}
#define INLINE_F26_705
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TRACING_SETTING}.is_tracing */
EIF_TYPED_VALUE F26_703 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_tracing";
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
	
	RTEAA(l_feature_name, 25, Current, 0, 0, 803);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(25, Current, 803);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_platform", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1619, 123))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = EIF_TEST(inline_F26_703 ());
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {TRACING_SETTING}.enable_tracing */
void F26_704 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_tracing";
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
	
	RTEAA(l_feature_name, 25, Current, 0, 0, 804);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(25, Current, 804);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_platform", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1619, 123))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	inline_F26_704 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {TRACING_SETTING}.disable_tracing */
void F26_705 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_tracing";
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
	
	RTEAA(l_feature_name, 25, Current, 0, 0, 805);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(25, Current, 805);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_platform", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1619, 123))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	inline_F26_705 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit26 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
