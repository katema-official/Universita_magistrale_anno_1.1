/*
 * Code for class SED_MULTI_OBJECT_SERIALIZATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F245_7107(EIF_REFERENCE);
extern EIF_TYPED_VALUE F245_7108(EIF_REFERENCE);
extern EIF_TYPED_VALUE F245_7109(EIF_REFERENCE);
extern EIF_TYPED_VALUE F245_7110(EIF_REFERENCE);
extern EIF_TYPED_VALUE F245_7111(EIF_REFERENCE);
extern void F245_7112(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F245_7113(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F245_7114(EIF_REFERENCE);
extern void EIF_Minit245(void);

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

/* {SED_MULTI_OBJECT_SERIALIZATION}.default_create */
void F245_7107 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_create";
	RTEX;
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
	
	RTEAA(l_feature_name, 244, Current, 0, 0, 13502);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(244, Current, 13502);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4993, 0xF80000EE, 0); /* error_message */
	tr1 = RTLNSMART(RTWCT(4993, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4643, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4993, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {SED_MULTI_OBJECT_SERIALIZATION}.deserialized_object */
EIF_TYPED_VALUE F245_7108 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4991,Dtype(Current)));
	return r;
}


/* {SED_MULTI_OBJECT_SERIALIZATION}.last_file_position */
EIF_TYPED_VALUE F245_7109 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4992,Dtype(Current)));
	return r;
}


/* {SED_MULTI_OBJECT_SERIALIZATION}.error_message */
EIF_TYPED_VALUE F245_7110 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4993,Dtype(Current)));
	return r;
}


/* {SED_MULTI_OBJECT_SERIALIZATION}.successful */
EIF_TYPED_VALUE F245_7111 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(4994,Dtype(Current)));
	return r;
}


/* {SED_MULTI_OBJECT_SERIALIZATION}.deserialize */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F245_7112 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "deserialize";
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	RTS_SDX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,Current);
	RTLR(6,saved_except);
	RTLIU(7);
	RTXSLS;
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLXL;
	
	RTEAA(l_feature_name, 244, Current, 3, 2, 13507);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(244, Current, 13507);
	RTCC(arg1, 244, l_feature_name, 1, eif_new_type(229, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_void_path", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_path", EX_PRE);
		tr1 = RTLN(eif_new_type(182, 0x01).id);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3631, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(2,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3549, "exists", tr1))(tr1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(3);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(4);
		RTDBGAL(2, 0xF80000B6, 0, 0); /* loc2 */
		tr1 = RTLN(eif_new_type(182, 0x01).id);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3631, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(4,1);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3549, "exists", loc2))(loc2)).it_b);
		if (tb1) {
			RTHOOK(6);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3681, "open_read", loc2))(loc2);
			RTHOOK(7);
			ui4_1 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3699, "go", loc2))(loc2, ui4_1x);
			RTHOOK(8);
			RTDBGAL(3, 0xF800007D, 0, 0); /* loc3 */
			tr1 = RTLN(eif_new_type(125, 0x01).id);
			ur1 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1671, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(8,1);
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1038, "set_for_reading", loc3))(loc3);
			RTHOOK(10);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(993, "is_ready_for_reading", loc3))(loc3)).it_b);
			if (tb1) {
				RTHOOK(11);
				RTDBGAA(Current, dtype, 4991, 0xF8000000, 0); /* deserialized_object */
				ur1 = RTCCL(loc3);
				ub1 = (EIF_BOOLEAN) 1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(964, dtype))(Current, ur1x, ub1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr1 = RTCCL(tr1);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + RTWA(4991, dtype)) = (EIF_REFERENCE) tr1;
				RTHOOK(12);
				RTDBGAA(Current, dtype, 4994, 0x04000000, 1); /* successful */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4991, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				*(EIF_BOOLEAN *)(Current + RTWA(4994, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
			} else {
				RTHOOK(13);
				RTDBGAA(Current, dtype, 4994, 0x04000000, 1); /* successful */
				*(EIF_BOOLEAN *)(Current + RTWA(4994, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		} else {
			RTHOOK(14);
			RTDBGAA(Current, dtype, 4994, 0x04000000, 1); /* successful */
			*(EIF_BOOLEAN *)(Current + RTWA(4994, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	} else {
		RTHOOK(15);
		RTDBGAA(Current, dtype, 4994, 0x04000000, 1); /* successful */
		*(EIF_BOOLEAN *)(Current + RTWA(4994, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTHOOK(16);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3557, "is_closed", loc2))(loc2)).it_b);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(17);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3559, "close", loc2))(loc2);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("deserialized_object_set_if_no_error", EX_POST);
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(4994, dtype));
		if (tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4991, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	if (
		WDBG(244,"log_exceptions")
	) {
		RTHOOK(19);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(4997, dtype))(Current);
	}
	RTHOOK(20);
	RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(21);
	RTTS;
	RTPS;
	RTER;
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(22);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(7);
#undef up1
#undef ur1
#undef ui4_1
#undef ub1
#undef arg2
#undef arg1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {SED_MULTI_OBJECT_SERIALIZATION}.serialize */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F245_7113 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "serialize";
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_b
	RTS_SDX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_b = * (EIF_BOOLEAN *) arg3x.it_r;
	
	RTLI(10);
	RTLR(0,arg2);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,loc2);
	RTLR(6,ur2);
	RTLR(7,Current);
	RTLR(8,tr2);
	RTLR(9,saved_except);
	RTLIU(10);
	RTXSLS;
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_BOOL,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_BOOL, &loc3);
	RTLXL;
	
	RTEAA(l_feature_name, 244, Current, 3, 3, 13508);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(244, Current, 13508);
	RTCC(arg2, 244, l_feature_name, 2, eif_new_type(229, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_void_object", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("non_void_path", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(3);
	if ((EIF_BOOLEAN) !loc3) {
		RTHOOK(4);
		RTDBGAL(1, 0xF80000B6, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(182, 0x01).id);
		ur1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3631, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(4,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		if (arg3) {
			RTHOOK(6);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3683, "open_append", loc1))(loc1);
		} else {
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3682, "open_write", loc1))(loc1);
		}
		RTHOOK(8);
		RTDBGAL(2, 0xF800007D, 0, 0); /* loc2 */
		tr1 = RTLN(eif_new_type(125, 0x01).id);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1671, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(8,1);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1039, "set_for_writing", loc2))(loc2);
		RTHOOK(10);
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(962, dtype))(Current, ur1x, ur2x);
		RTHOOK(11);
		RTDBGAA(Current, dtype, 4992, 0x10000000, 1); /* last_file_position */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2269, "count", loc1))(loc1)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(4992, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(12);
		RTDBGAA(Current, dtype, 4994, 0x04000000, 1); /* successful */
		*(EIF_BOOLEAN *)(Current + RTWA(4994, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(13);
		RTDBGAA(Current, dtype, 4994, 0x04000000, 1); /* successful */
		*(EIF_BOOLEAN *)(Current + RTWA(4994, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(14);
		RTDBGAA(Current, dtype, 4993, 0xF80000EE, 0); /* error_message */
		tr1 = RTLNSMART(RTWCT(4993, dtype, Dftype(Current)).id);
		ui4_1 = ((EIF_INTEGER_32) 100L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4642, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(14,1);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(4993, dtype)) = (EIF_REFERENCE) tr1;
		RTHOOK(15);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4993, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(15,1);
		tr2 = RTMS_EX_H("Cannot store into ",18,780561184);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4784, "append_string_general", tr1))(tr1, ur1x);
		RTHOOK(16);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4993, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(16,1);
		ur1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4784, "append_string_general", tr1))(tr1, ur1x);
	}
	RTHOOK(17);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3557, "is_closed", loc1))(loc1)).it_b);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(18);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3559, "close", loc1))(loc1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	if (
		WDBG(244,"log_exceptions")
	) {
		RTHOOK(19);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(4997, dtype))(Current);
	}
	RTHOOK(20);
	RTDBGAL(3, 0x04000000, 1, 0); /* loc3 */
	loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(21);
	RTTS;
	RTPS;
	RTER;
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(22);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(8);
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef arg3
#undef arg2
#undef arg1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {SED_MULTI_OBJECT_SERIALIZATION}.log_last_exception */
void F245_7114 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "log_last_exception";
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
	
	RTEAA(l_feature_name, 244, Current, 0, 0, 13509);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(244, Current, 13509);
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

void EIF_Minit245 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
