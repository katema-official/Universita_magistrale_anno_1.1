/*
 * Code for class SEMAPHORE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F177_4694(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F177_4695(EIF_REFERENCE);
extern EIF_TYPED_VALUE F177_4696(EIF_REFERENCE);
extern void F177_4697(EIF_REFERENCE);
extern void F177_4698(EIF_REFERENCE);
extern void F177_4699(EIF_REFERENCE);
extern EIF_TYPED_VALUE F177_4700(EIF_REFERENCE);
extern EIF_TYPED_VALUE F177_4701(EIF_REFERENCE);
extern void F177_4702(EIF_REFERENCE);
extern EIF_TYPED_VALUE F177_4703(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F177_4704(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F177_4705(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F177_4706(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F177_4707(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit177(void);

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

/* {SEMAPHORE}.make */
void F177_4694 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 176, Current, 0, 1, 9573);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(176, Current, 9573);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("count_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 3500, 0x40000000, 1); /* sem_pointer */
	ui4_1 = arg1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3501, dtype))(Current, ui4_1x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(3500, dtype)) = (EIF_POINTER) tp1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3494, dtype))(Current)).it_b);
		if (tb1) {
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
#undef ui4_1
#undef arg1
}

/* {SEMAPHORE}.is_set */
EIF_TYPED_VALUE F177_4695 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 176, Current, 0, 0, 9574);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(176, Current, 9574);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tp1 = *(EIF_POINTER *)(Current + RTWA(3500, dtype));
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

/* {SEMAPHORE}.try_wait */
EIF_TYPED_VALUE F177_4696 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "try_wait";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 176, Current, 0, 0, 9575);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(176, Current, 9575);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_semaphore", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3494, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(3500, dtype));
	up1 = tp1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3504, dtype))(Current, up1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {SEMAPHORE}.wait */
void F177_4697 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "wait";
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
	
	RTEAA(l_feature_name, 176, Current, 0, 0, 9576);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(176, Current, 9576);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_semaphore", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3494, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(3500, dtype));
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3502, dtype))(Current, up1x);
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

/* {SEMAPHORE}.post */
void F177_4698 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "post";
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
	
	RTEAA(l_feature_name, 176, Current, 0, 0, 9577);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(176, Current, 9577);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_semaphore", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3494, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(3500, dtype));
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3503, dtype))(Current, up1x);
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

/* {SEMAPHORE}.destroy */
void F177_4699 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 176, Current, 0, 0, 9578);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(176, Current, 9578);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_semaphore", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3494, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(3500, dtype));
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3505, dtype))(Current, up1x);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 3500, 0x40000000, 1); /* sem_pointer */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	*(EIF_POINTER *)(Current + RTWA(3500, dtype)) = (EIF_POINTER) tp1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("not_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3494, dtype))(Current)).it_b);
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

/* {SEMAPHORE}.trywait */
EIF_TYPED_VALUE F177_4700 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "trywait";
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
	
	RTEAA(l_feature_name, 176, Current, 0, 0, 9579);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(176, Current, 9579);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_semaphore", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3494, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3495, dtype))(Current)).it_b);
	Result = (EIF_BOOLEAN) tb1;
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

/* {SEMAPHORE}.sem_pointer */
EIF_TYPED_VALUE F177_4701 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(3500,Dtype(Current)));
	return r;
}


/* {SEMAPHORE}.dispose */
void F177_4702 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 176, Current, 0, 0, 9581);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(176, Current, 9581);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3494, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3498, dtype))(Current);
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

/* {SEMAPHORE}.eif_thr_sem_create */
EIF_TYPED_VALUE F177_4703 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "eif_thr_sem_create";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 176, Current, 0, 1, 9582);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(176, Current, 9582);
	RTIV(Current, RTAL);Result = (EIF_POINTER) eif_thr_sem_create(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg1
}

/* {SEMAPHORE}.eif_thr_sem_wait */
void F177_4704 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "eif_thr_sem_wait";
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
	
	RTEAA(l_feature_name, 176, Current, 0, 1, 9583);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(176, Current, 9583);
	RTIV(Current, RTAL);
	EIF_ENTER_C;eif_thr_sem_wait(arg1);
	
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

/* {SEMAPHORE}.eif_thr_sem_post */
void F177_4705 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "eif_thr_sem_post";
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
	
	RTEAA(l_feature_name, 176, Current, 0, 1, 9584);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(176, Current, 9584);
	RTIV(Current, RTAL);eif_thr_sem_post(arg1);
	
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

/* {SEMAPHORE}.eif_thr_sem_trywait */
EIF_TYPED_VALUE F177_4706 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "eif_thr_sem_trywait";
	RTEX;
#define arg1 arg1x.it_p
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 176, Current, 0, 1, 9585);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(176, Current, 9585);
	RTIV(Current, RTAL);
	EIF_ENTER_C;Result = (EIF_BOOLEAN) EIF_TEST(eif_thr_sem_trywait(arg1));
	
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
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {SEMAPHORE}.eif_thr_sem_destroy */
void F177_4707 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "eif_thr_sem_destroy";
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
	
	RTEAA(l_feature_name, 176, Current, 0, 1, 9586);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(176, Current, 9586);
	RTIV(Current, RTAL);eif_thr_sem_destroy(arg1);
	
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

void EIF_Minit177 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
