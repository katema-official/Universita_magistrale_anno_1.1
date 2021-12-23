/*
 * Code for class READ_WRITE_LOCK
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F171_4452(EIF_REFERENCE);
extern EIF_TYPED_VALUE F171_4453(EIF_REFERENCE);
extern void F171_4454(EIF_REFERENCE);
extern void F171_4455(EIF_REFERENCE);
extern void F171_4456(EIF_REFERENCE);
extern void F171_4457(EIF_REFERENCE);
extern void F171_4458(EIF_REFERENCE);
extern void F171_4459(EIF_REFERENCE);
extern void F171_4460(EIF_REFERENCE);
extern EIF_TYPED_VALUE F171_4461(EIF_REFERENCE);
extern void F171_4462(EIF_REFERENCE);
extern EIF_TYPED_VALUE F171_4463(EIF_REFERENCE);
extern void F171_4464(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F171_4465(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F171_4466(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F171_4467(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit171(void);

#ifdef __cplusplus
}
#endif

#include "eif_threads.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {READ_WRITE_LOCK}.make */
void F171_4452 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 170, Current, 0, 0, 9332);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(170, Current, 9332);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3270, 0x40000000, 1); /* item */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3271, dtype))(Current)).it_p);
	*(EIF_POINTER *)(Current + RTWA(3270, dtype)) = (EIF_POINTER) tp1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("item_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3262, dtype))(Current)).it_b);
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

/* {READ_WRITE_LOCK}.is_set */
EIF_TYPED_VALUE F171_4453 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_set";
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	
	RTEAA(l_feature_name, 170, Current, 0, 0, 9333);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(170, Current, 9333);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tp1 = *(EIF_POINTER *)(Current + RTWA(3270, dtype));
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	if (!(EIF_BOOLEAN)(tp1 != tp2)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1617, 123))(Current)).it_b);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
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

/* {READ_WRITE_LOCK}.acquire_read_lock */
void F171_4454 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "acquire_read_lock";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 170, Current, 0, 0, 9334);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(170, Current, 9334);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_set", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3262, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(3270, dtype));
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3272, dtype))(Current, up1x);
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

/* {READ_WRITE_LOCK}.acquire_write_lock */
void F171_4455 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "acquire_write_lock";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 170, Current, 0, 0, 9335);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(170, Current, 9335);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_set", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3262, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(3270, dtype));
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3274, dtype))(Current, up1x);
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

/* {READ_WRITE_LOCK}.release_read_lock */
void F171_4456 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "release_read_lock";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 170, Current, 0, 0, 9336);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(170, Current, 9336);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_set", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3262, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(3270, dtype));
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3273, dtype))(Current, up1x);
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

/* {READ_WRITE_LOCK}.release_write_lock */
void F171_4457 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "release_write_lock";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 170, Current, 0, 0, 9337);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(170, Current, 9337);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_set", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3262, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(3270, dtype));
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3273, dtype))(Current, up1x);
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

/* {READ_WRITE_LOCK}.destroy */
void F171_4458 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "destroy";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 170, Current, 0, 0, 9338);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(170, Current, 9338);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_set", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3262, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(3270, dtype));
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3275, dtype))(Current, up1x);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 3270, 0x40000000, 1); /* item */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	*(EIF_POINTER *)(Current + RTWA(3270, dtype)) = (EIF_POINTER) tp1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("not_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3262, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
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
#undef up1
}

/* {READ_WRITE_LOCK}.release_reader_lock */
void F171_4459 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "release_reader_lock";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 170, Current, 0, 0, 9339);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(170, Current, 9339);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_set", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3262, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(3270, dtype));
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3273, dtype))(Current, up1x);
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

/* {READ_WRITE_LOCK}.release_writer_lock */
void F171_4460 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "release_writer_lock";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 170, Current, 0, 0, 9340);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(170, Current, 9340);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_set", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3262, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(3270, dtype));
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3273, dtype))(Current, up1x);
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

/* {READ_WRITE_LOCK}.item */
EIF_TYPED_VALUE F171_4461 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(3270,Dtype(Current)));
	return r;
}


/* {READ_WRITE_LOCK}.dispose */
void F171_4462 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dispose";
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
	
	RTEAA(l_feature_name, 170, Current, 0, 0, 9342);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(170, Current, 9342);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3262, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3267, dtype))(Current);
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

/* {READ_WRITE_LOCK}.eif_thr_rwl_create */
EIF_TYPED_VALUE F171_4463 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "eif_thr_rwl_create";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 170, Current, 0, 0, 9343);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(170, Current, 9343);
	RTIV(Current, RTAL);Result = (EIF_POINTER) eif_thr_rwl_create();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {READ_WRITE_LOCK}.eif_thr_rwl_rdlock */
void F171_4464 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "eif_thr_rwl_rdlock";
	RTEX;
#define arg1 arg1x.it_p
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 170, Current, 0, 1, 9328);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(170, Current, 9328);
	RTIV(Current, RTAL);
	EIF_ENTER_C;eif_thr_rwl_rdlock(arg1);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {READ_WRITE_LOCK}.eif_thr_rwl_unlock */
void F171_4465 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "eif_thr_rwl_unlock";
	RTEX;
#define arg1 arg1x.it_p
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 170, Current, 0, 1, 9329);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(170, Current, 9329);
	RTIV(Current, RTAL);eif_thr_rwl_unlock(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {READ_WRITE_LOCK}.eif_thr_rwl_wrlock */
void F171_4466 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "eif_thr_rwl_wrlock";
	RTEX;
#define arg1 arg1x.it_p
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 170, Current, 0, 1, 9330);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(170, Current, 9330);
	RTIV(Current, RTAL);
	EIF_ENTER_C;eif_thr_rwl_wrlock(arg1);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {READ_WRITE_LOCK}.eif_thr_rwl_destroy */
void F171_4467 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "eif_thr_rwl_destroy";
	RTEX;
#define arg1 arg1x.it_p
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 170, Current, 0, 1, 9331);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(170, Current, 9331);
	RTIV(Current, RTAL);eif_thr_rwl_destroy(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

void EIF_Minit171 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
