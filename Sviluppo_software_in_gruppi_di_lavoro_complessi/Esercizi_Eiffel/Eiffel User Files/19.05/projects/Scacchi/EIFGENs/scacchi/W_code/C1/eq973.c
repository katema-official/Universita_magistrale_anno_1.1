/*
 * Code for class EQA_TEST_SET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F973_7313(EIF_REFERENCE);
extern EIF_TYPED_VALUE F973_7314(EIF_REFERENCE);
extern EIF_TYPED_VALUE F973_7315(EIF_REFERENCE);
extern EIF_TYPED_VALUE F973_7316(EIF_REFERENCE);
extern EIF_TYPED_VALUE F973_7317(EIF_REFERENCE);
extern EIF_TYPED_VALUE F973_7318(EIF_REFERENCE);
extern EIF_TYPED_VALUE F973_7319(EIF_REFERENCE);
extern void F973_7320(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F973_7321(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F973_7322(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F973_7323(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F973_7324(EIF_REFERENCE);
extern void F973_7325(EIF_REFERENCE);
extern EIF_TYPED_VALUE F973_7326(EIF_REFERENCE);
extern EIF_TYPED_VALUE F973_7327(EIF_REFERENCE);
extern EIF_TYPED_VALUE F973_7328(EIF_REFERENCE);
extern EIF_TYPED_VALUE F973_7329(EIF_REFERENCE);
extern EIF_TYPED_VALUE F973_7330(EIF_REFERENCE);
extern EIF_TYPED_VALUE F973_7331(EIF_REFERENCE);
extern EIF_TYPED_VALUE F973_7332(EIF_REFERENCE);
extern void F973_8498(EIF_REFERENCE, int);
extern void EIF_Minit973(void);

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

/* {EQA_TEST_SET}.default_create */
void F973_7313 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_create";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
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
	
	RTLI(13);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc5);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,loc4);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,loc2);
	RTLR(10,tr3);
	RTLR(11,ur2);
	RTLR(12,loc3);
	RTLIU(13);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 972, Current, 7, 0, 13642);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(972, Current, 13642);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5095, 0xF80003CD, 0); /* environment */
	tr1 = RTLNSMART(RTWCT(5095, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5095, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5094, 0xF80003C9, 0); /* file_system */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5107, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5094, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAL(1, 0xF8000099, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(153, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5095, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5110, 972))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "item", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	loc5 = tr2;
	if (EIF_TEST(loc5)) {
		RTHOOK(5);
		RTDBGAL(4, 0xF80000B9, 0, 0); /* loc4 */
		tr1 = RTLN(eif_new_type(185, 0x01).id);
		ur1 = loc5;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3820, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(5,1);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(6);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5095, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5109, 972))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "item", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc6 = tr2;
		if (EIF_TEST(loc6)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5095, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,2);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5108, 972))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr2);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "item", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			loc7 = tr2;
			tb1 = EIF_TEST(loc7);
		}
		if (tb1) {
			RTHOOK(7);
			RTDBGAL(2, 0xF80000B9, 0, 0); /* loc2 */
			tr1 = RTLN(eif_new_type(185, 0x01).id);
			ur1 = loc6;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3820, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(7,1);
			loc2 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(8);
			RTDBGAL(4, 0xF80000B9, 0, 0); /* loc4 */
			ur1 = loc7;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3846, "extended", loc2))(loc2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5095, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3854, "name", loc4))(loc4)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = tr2;
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5110, 972))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur2 = RTCCL(tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5119, "put", tr1))(tr1, ur1x, ur2x);
		}
	}
	RTHOOK(10);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		RTHOOK(11);
		RTDBGAL(3, 0xF80000AF, 0, 0); /* loc3 */
		tr1 = RTLN(eif_new_type(175, 0x01).id);
		ur1 = RTCCL(loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3437, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(11,1);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(12);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3460, "exists", loc3))(loc3)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(13);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3440, "recursive_create_dir", loc3))(loc3);
		} else {
			RTHOOK(14);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3465, "delete_content", loc3))(loc3);
		}
		RTHOOK(15);
		tr1 = RTMS32_EX_H("t\000\000\000e\000\000\000s\000\000\000t\000\000\000i\000\000\000n\000\000\000g\000\000\000_\000\000\000d\000\000\000i\000\000\000r\000\000\000e\000\000\000c\000\000\000t\000\000\000o\000\000\000r\000\000\000y\000\000\000_\000\000\000e\000\000\000x\000\000\000i\000\000\000s\000\000\000t\000\000\000s\000\000\000 \000\000\000",25,1829787168);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3854, "name", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = tr2;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3460, "exists", loc3))(loc3)).it_b);
		ub1 = tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5101, dtype))(Current, ur1x, ub1x);
	}
	RTHOOK(16);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5103, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("prepared", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5097, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("not_failed", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5098, dtype));
		if ((EIF_BOOLEAN) !tb1) {
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
	RTLO(9);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ub1
}

/* {EQA_TEST_SET}.asserter */
EIF_TYPED_VALUE F973_7314 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "asserter";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 972, Current, 1, 0, 13643);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(972, Current, 13643);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5105, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		RTDBGAL(0, 0xF80003CA, 0,0); /* Result */
		Result = (EIF_REFERENCE) RTCCL(loc1);
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0xF80003CA, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5106, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 5105, 0xF80003CA, 0); /* internal_asserter */
		tr1 = RTCCL(Result);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(5105, dtype)) = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("asserter_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {EQA_TEST_SET}.file_system */
EIF_TYPED_VALUE F973_7315 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5094,Dtype(Current)));
	return r;
}


/* {EQA_TEST_SET}.environment */
EIF_TYPED_VALUE F973_7316 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5095,Dtype(Current)));
	return r;
}


/* {EQA_TEST_SET}.current_test_name */
EIF_TYPED_VALUE F973_7317 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "current_test_name";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 972, Current, 1, 0, 13625);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(972, Current, 13625);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5095, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5108, 972))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "item", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		RTDBGAL(0, 0xF80000F1, 0,0); /* Result */
		Result = (EIF_REFERENCE) loc1;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0xF80000F1, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(241, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4643, Dtype(tr1)))(tr1);
		RTNHOOK(3,1);
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
}

/* {EQA_TEST_SET}.is_prepared */
EIF_TYPED_VALUE F973_7318 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_prepared";
	RTEX;
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
	
	RTEAA(l_feature_name, 972, Current, 0, 0, 13626);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(972, Current, 13626);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
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

/* {EQA_TEST_SET}.has_failed */
EIF_TYPED_VALUE F973_7319 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5098,Dtype(Current)));
	return r;
}


/* {EQA_TEST_SET}.set_asserter */
void F973_7320 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_asserter";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 972, Current, 0, 1, 13628);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(972, Current, 13628);
	RTCC(arg1, 972, l_feature_name, 1, RTWCT(5093, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5105, 0xF80003CA, 0); /* internal_asserter */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5105, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("asserter_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5093, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
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
#undef up1
#undef arg1
}

/* {EQA_TEST_SET}.clean */
void F973_7321 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "clean";
	RTEX;
#define arg1 arg1x.it_b
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 972, Current, 0, 1, 13629);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(972, Current, 13629);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5098, 0x04000000, 1); /* has_failed */
	*(EIF_BOOLEAN *)(Current + RTWA(5098, dtype)) = (EIF_BOOLEAN) arg1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5104, dtype))(Current);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5098, 0x04000000, 1); /* has_failed */
	*(EIF_BOOLEAN *)(Current + RTWA(5098, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("not_failed", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5098, dtype));
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
	RTLO(3);
	RTEE;
#undef arg1
}

/* {EQA_TEST_SET}.assert_32 */
void F973_7322 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "assert_32";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 972, Current, 0, 2, 13630);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(972, Current, 13630);
	RTCC(arg1, 972, l_feature_name, 1, eif_new_type(229, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5093, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ur1 = RTCCL(arg1);
	ub1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5083, "assert", tr1))(tr1, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ub1
#undef arg2
#undef arg1
}

/* {EQA_TEST_SET}.assert */
void F973_7323 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "assert";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 972, Current, 0, 2, 13631);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(972, Current, 13631);
	RTCC(arg1, 972, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5093, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ur1 = RTCCL(arg1);
	ub1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5083, "assert", tr1))(tr1, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ub1
#undef arg2
#undef arg1
}

/* {EQA_TEST_SET}.on_prepare */
void F973_7324 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "on_prepare";
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
	
	RTEAA(l_feature_name, 972, Current, 0, 0, 13632);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(972, Current, 13632);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		RTHOOK(1);
		RTCT("prepared", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5097, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EQA_TEST_SET}.on_clean */
void F973_7325 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "on_clean";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 972, Current, 0, 0, 13633);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(972, Current, 13633);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EQA_TEST_SET}.internal_asserter */
EIF_TYPED_VALUE F973_7326 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5105,Dtype(Current)));
	return r;
}


/* {EQA_TEST_SET}.new_asserter */
EIF_TYPED_VALUE F973_7327 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "new_asserter";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 972, Current, 0, 0, 13635);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(972, Current, 13635);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80003CA, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(970, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

/* {EQA_TEST_SET}.new_file_system */
EIF_TYPED_VALUE F973_7328 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "new_file_system";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 972, Current, 0, 0, 13636);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(972, Current, 13636);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80003C9, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(969, 0x01).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5093, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5068, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("result_valid", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5069, "asserter", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5093, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, tr2)) {
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
#undef up1
#undef ur1
}

/* {EQA_TEST_SET}.test_name_key */
RTOID (F973_7329)


EIF_TYPED_VALUE F973_7329 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F973_7329,13638,RTMS_EX_H("TEST_NAME",9,979914053));
}

/* {EQA_TEST_SET}.testing_directory_key */
RTOID (F973_7330)


EIF_TYPED_VALUE F973_7330 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F973_7330,13639,RTMS_EX_H("TESTING_DIRECTORY",17,639283033));
}

/* {EQA_TEST_SET}.target_path_key */
RTOID (F973_7331)


EIF_TYPED_VALUE F973_7331 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F973_7331,13640,RTMS_EX_H("TARGET_PATH",11,941446728));
}

/* {EQA_TEST_SET}.source_path_key */
RTOID (F973_7332)


EIF_TYPED_VALUE F973_7332 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F973_7332,13641,RTMS_EX_H("SOURCE_PATH",11,1017792584));
}

/* {EQA_TEST_SET}._invariant */
void F973_8498 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 972, Current, 0, 8497);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("internal_file_system_valid", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5094, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5069, "asserter", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5093, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTCEQ(tr2, tr1)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
#undef up2
}

void EIF_Minit973 (void)
{
	GTCX
	RTOTS (7329,F973_7329)
	RTOTS (7330,F973_7330)
	RTOTS (7331,F973_7331)
	RTOTS (7332,F973_7332)
}


#ifdef __cplusplus
}
#endif
