/*
 * Code for class INET4_ADDRESS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F997_7548(EIF_REFERENCE);
extern void F997_7549(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F997_7550(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F997_7551(EIF_REFERENCE);
extern EIF_TYPED_VALUE F997_7552(EIF_REFERENCE);
extern EIF_TYPED_VALUE F997_7553(EIF_REFERENCE);
extern EIF_TYPED_VALUE F997_7554(EIF_REFERENCE);
extern EIF_TYPED_VALUE F997_7555(EIF_REFERENCE);
extern EIF_TYPED_VALUE F997_7556(EIF_REFERENCE);
extern EIF_TYPED_VALUE F997_7557(EIF_REFERENCE);
extern EIF_TYPED_VALUE F997_7558(EIF_REFERENCE);
extern EIF_TYPED_VALUE F997_7559(EIF_REFERENCE);
extern EIF_TYPED_VALUE F997_7560(EIF_REFERENCE);
extern EIF_TYPED_VALUE F997_7561(EIF_REFERENCE);
extern EIF_TYPED_VALUE F997_7562(EIF_REFERENCE);
extern EIF_TYPED_VALUE F997_7563(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F997_7564(EIF_REFERENCE);
extern EIF_TYPED_VALUE F997_7565(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F997_7566(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);extern void en_socket_address_fill_ipv4(EIF_POINTER, EIF_INTEGER_32, EIF_INTEGER_32);

extern EIF_TYPED_VALUE F997_7567(EIF_REFERENCE, EIF_TYPED_VALUE);extern EIF_INTEGER_32 en_sockaddr_get_ipv4_address(EIF_POINTER);

extern void EIF_Minit997(void);

#ifdef __cplusplus
}
#endif

#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INET4_ADDRESS}.inaddrsz */
EIF_TYPED_VALUE F997_7548 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {INET4_ADDRESS}.make_from_host_and_address */
void F997_7549 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_from_host_and_address";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 996, Current, 0, 2, 13803);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(996, Current, 13803);
	if (arg1) {
		RTCC(arg1, 996, l_feature_name, 1, eif_new_type(232, 0x00), 0x00);
	}
	if (arg2) {
		{
			static EIF_TYPE_INDEX typarr0[] = {453,209,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			RTCC(arg2, 996, l_feature_name, 2, typres0, 0x00);
		}
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_address_count_valid", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2269, "count", arg2))(arg2)).it_i4);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5295, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5277, 0xF80000E8, 0); /* internal_host_name */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5277, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5262, 0x10000000, 1); /* family */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5260, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(5262, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2269, "count", arg2))(arg2)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5295, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
	if (tb1) {
		RTHOOK(5);
		RTDBGAA(Current, dtype, 5299, 0x10000000, 1); /* the_address */
		ui4_1 = ((EIF_INTEGER_32) 4L);
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", arg2))(arg2, ui4_1x)).it_n1);
		RTNHOOK(5,1);
		ti4_1 = (EIF_INTEGER_32) tu1_1;
		ui4_1 = ((EIF_INTEGER_32) 255L);
		ti4_2 = eif_bit_and(ti4_1,ui4_1);
		*(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype)) = (EIF_INTEGER_32) ti4_2;
		RTHOOK(6);
		RTDBGAA(Current, dtype, 5299, 0x10000000, 1); /* the_address */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
		ui4_1 = ((EIF_INTEGER_32) 3L);
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", arg2))(arg2, ui4_1x)).it_n1);
		RTNHOOK(6,1);
		ti4_2 = (EIF_INTEGER_32) tu1_1;
		ui4_1 = ((EIF_INTEGER_32) 8L);
		ti4_3 = eif_bit_shift_left(ti4_2,ui4_1);
		ui4_1 = ((EIF_INTEGER_32) 65280L);
		ti4_2 = eif_bit_and((ti4_3),ui4_1);
		ui4_1 = ti4_2;
		ti4_2 = eif_bit_or(ti4_1,ui4_1);
		*(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype)) = (EIF_INTEGER_32) ti4_2;
		RTHOOK(7);
		RTDBGAA(Current, dtype, 5299, 0x10000000, 1); /* the_address */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
		ui4_1 = ((EIF_INTEGER_32) 2L);
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", arg2))(arg2, ui4_1x)).it_n1);
		RTNHOOK(7,1);
		ti4_2 = (EIF_INTEGER_32) tu1_1;
		ui4_1 = ((EIF_INTEGER_32) 16L);
		ti4_3 = eif_bit_shift_left(ti4_2,ui4_1);
		ui4_1 = ((EIF_INTEGER_32) 16711680L);
		ti4_2 = eif_bit_and((ti4_3),ui4_1);
		ui4_1 = ti4_2;
		ti4_2 = eif_bit_or(ti4_1,ui4_1);
		*(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype)) = (EIF_INTEGER_32) ti4_2;
		RTHOOK(8);
		RTDBGAA(Current, dtype, 5299, 0x10000000, 1); /* the_address */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", arg2))(arg2, ui4_1x)).it_n1);
		RTNHOOK(8,1);
		ti4_2 = (EIF_INTEGER_32) tu1_1;
		ui4_1 = ((EIF_INTEGER_32) 24L);
		ti4_3 = eif_bit_shift_left(ti4_2,ui4_1);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_64) RTI64C(4278190080));
		ti4_2 = eif_bit_and((ti4_3),ui4_1);
		ui4_1 = ti4_2;
		ti4_2 = eif_bit_or(ti4_1,ui4_1);
		*(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype)) = (EIF_INTEGER_32) ti4_2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ui4_1
#undef arg2
#undef arg1
}

/* {INET4_ADDRESS}.make_from_host_and_pointer */
void F997_7550 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_from_host_and_pointer";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 996, Current, 0, 2, 13804);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(996, Current, 13804);
	if (arg1) {
		RTCC(arg1, 996, l_feature_name, 1, eif_new_type(232, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5277, 0xF80000E8, 0); /* internal_host_name */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5277, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5262, 0x10000000, 1); /* family */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5260, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(5262, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(arg2 != tp1)) {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 5299, 0x10000000, 1); /* the_address */
		up1 = arg2;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5302, dtype))(Current, up1x)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype)) = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef arg2
#undef arg1
}

/* {INET4_ADDRESS}.host_address */
EIF_TYPED_VALUE F997_7551 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "host_address";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 996, Current, 0, 0, 13805);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(996, Current, 13805);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5275, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5300, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
}

/* {INET4_ADDRESS}.is_multicast_address */
EIF_TYPED_VALUE F997_7552 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_multicast_address";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 996, Current, 0, 0, 13806);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(996, Current, 13806);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
	ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_64) RTI64C(4026531840));
	ti4_2 = eif_bit_and(ti4_1,ui4_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) ((EIF_INTEGER_64) RTI64C(3758096384)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
}

/* {INET4_ADDRESS}.is_any_local_address */
EIF_TYPED_VALUE F997_7553 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_any_local_address";
	RTEX;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 996, Current, 0, 0, 13807);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(996, Current, 13807);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
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

/* {INET4_ADDRESS}.is_loopback_address */
EIF_TYPED_VALUE F997_7554 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_loopback_address";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 996, Current, 0, 0, 13808);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(996, Current, 13808);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
	ui4_1 = ((EIF_INTEGER_32) 24L);
	ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
	ui4_1 = ((EIF_INTEGER_32) 255L);
	ti4_1 = eif_bit_and((ti4_2),ui4_1);
	Result = (EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 127L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
}

/* {INET4_ADDRESS}.is_link_local_address */
EIF_TYPED_VALUE F997_7555 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_link_local_address";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 996, Current, 0, 0, 13809);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(996, Current, 13809);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
	ui4_1 = ((EIF_INTEGER_32) 24L);
	ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
	ui4_1 = ((EIF_INTEGER_32) 255L);
	ti4_1 = eif_bit_and((ti4_2),ui4_1);
	if (((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 169L)))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
		ui4_1 = ((EIF_INTEGER_32) 16L);
		ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
		ui4_1 = ((EIF_INTEGER_32) 255L);
		ti4_1 = eif_bit_and((ti4_2),ui4_1);
		tb1 = ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 254L)));
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
#undef ui4_1
}

/* {INET4_ADDRESS}.is_site_local_address */
EIF_TYPED_VALUE F997_7556 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_site_local_address";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
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
	
	RTEAA(l_feature_name, 996, Current, 0, 0, 13810);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(996, Current, 13810);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\01';
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
	ui4_1 = ((EIF_INTEGER_32) 24L);
	ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
	ui4_1 = ((EIF_INTEGER_32) 255L);
	ti4_1 = eif_bit_and((ti4_2),ui4_1);
	if (!(((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 10L))))) {
		tb3 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
		ui4_1 = ((EIF_INTEGER_32) 24L);
		ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
		ui4_1 = ((EIF_INTEGER_32) 255L);
		ti4_1 = eif_bit_and((ti4_2),ui4_1);
		if (((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 172L)))) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
			ui4_1 = ((EIF_INTEGER_32) 16L);
			ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
			ui4_1 = ((EIF_INTEGER_32) 240L);
			ti4_1 = eif_bit_and((ti4_2),ui4_1);
			tb3 = ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 16L)));
		}
		tb2 = tb3;
	}
	if (!tb2) {
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
		ui4_1 = ((EIF_INTEGER_32) 24L);
		ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
		ui4_1 = ((EIF_INTEGER_32) 255L);
		ti4_1 = eif_bit_and((ti4_2),ui4_1);
		if (((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 192L)))) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
			ui4_1 = ((EIF_INTEGER_32) 16L);
			ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
			ui4_1 = ((EIF_INTEGER_32) 255L);
			ti4_1 = eif_bit_and((ti4_2),ui4_1);
			tb2 = ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 168L)));
		}
		tb1 = tb2;
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
#undef ui4_1
}

/* {INET4_ADDRESS}.is_mc_global */
EIF_TYPED_VALUE F997_7557 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_mc_global";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 996, Current, 3, 0, 13811);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(996, Current, 13811);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
	ui4_1 = ((EIF_INTEGER_32) 24L);
	ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
	ui4_1 = ((EIF_INTEGER_32) 255L);
	ti4_1 = eif_bit_and((ti4_2),ui4_1);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
	ui4_1 = ((EIF_INTEGER_32) 16L);
	ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
	ui4_1 = ((EIF_INTEGER_32) 255L);
	ti4_1 = eif_bit_and((ti4_2),ui4_1);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
	ui4_1 = ((EIF_INTEGER_32) 8L);
	ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
	ui4_1 = ((EIF_INTEGER_32) 255L);
	ti4_1 = eif_bit_and((ti4_2),ui4_1);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 224L)) && (EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 238L))) && (EIF_BOOLEAN) !(EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 224L)) && (EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
}

/* {INET4_ADDRESS}.is_mc_node_local */
EIF_TYPED_VALUE F997_7558 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_mc_node_local";
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
	
	RTEAA(l_feature_name, 996, Current, 0, 0, 13812);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(996, Current, 13812);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
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

/* {INET4_ADDRESS}.is_mc_link_local */
EIF_TYPED_VALUE F997_7559 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_mc_link_local";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 996, Current, 0, 0, 13813);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(996, Current, 13813);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
	ui4_1 = ((EIF_INTEGER_32) 24L);
	ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
	ui4_1 = ((EIF_INTEGER_32) 255L);
	ti4_1 = eif_bit_and((ti4_2),ui4_1);
	if (((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 224L)))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
		ui4_1 = ((EIF_INTEGER_32) 16L);
		ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
		ui4_1 = ((EIF_INTEGER_32) 255L);
		ti4_1 = eif_bit_and((ti4_2),ui4_1);
		tb2 = ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)));
	}
	if (tb2) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
		ui4_1 = ((EIF_INTEGER_32) 8L);
		ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
		ui4_1 = ((EIF_INTEGER_32) 255L);
		ti4_1 = eif_bit_and((ti4_2),ui4_1);
		tb1 = ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)));
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
#undef ui4_1
}

/* {INET4_ADDRESS}.is_mc_site_local */
EIF_TYPED_VALUE F997_7560 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_mc_site_local";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 996, Current, 0, 0, 13814);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(996, Current, 13814);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
	ui4_1 = ((EIF_INTEGER_32) 24L);
	ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
	ui4_1 = ((EIF_INTEGER_32) 255L);
	ti4_1 = eif_bit_and((ti4_2),ui4_1);
	if (((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 239L)))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
		ui4_1 = ((EIF_INTEGER_32) 16L);
		ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
		ui4_1 = ((EIF_INTEGER_32) 255L);
		ti4_1 = eif_bit_and((ti4_2),ui4_1);
		tb1 = ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 255L)));
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
#undef ui4_1
}

/* {INET4_ADDRESS}.is_mc_org_local */
EIF_TYPED_VALUE F997_7561 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_mc_org_local";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 996, Current, 0, 0, 13815);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(996, Current, 13815);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
	ui4_1 = ((EIF_INTEGER_32) 24L);
	ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
	ui4_1 = ((EIF_INTEGER_32) 255L);
	ti4_1 = eif_bit_and((ti4_2),ui4_1);
	if (((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 239L)))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
		ui4_1 = ((EIF_INTEGER_32) 16L);
		ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
		ui4_1 = ((EIF_INTEGER_32) 255L);
		ti4_1 = eif_bit_and((ti4_2),ui4_1);
		tb2 = ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 192L)));
	}
	if (tb2) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
		ui4_1 = ((EIF_INTEGER_32) 16L);
		ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
		ui4_1 = ((EIF_INTEGER_32) 255L);
		ti4_1 = eif_bit_and((ti4_2),ui4_1);
		tb1 = ((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 195L)));
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
#undef ui4_1
}

/* {INET4_ADDRESS}.raw_address */
EIF_TYPED_VALUE F997_7562 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "raw_address";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 996, Current, 0, 0, 13816);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(996, Current, 13816);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80001C5, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,453,209,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu1_1 = ((EIF_NATURAL_8) 0U);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5295, dtype))(Current)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2628, Dtype(tr1)))(tr1, uu1_1x, ui4_1x, ui4_2x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
	ui4_1 = ((EIF_INTEGER_32) 24L);
	ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
	ui4_1 = ((EIF_INTEGER_32) 255L);
	ti4_1 = eif_bit_and((ti4_2),ui4_1);
	tu1_1 = (EIF_NATURAL_8) ti4_1;
	uu1_1 = tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2255, "put", Result))(Result, uu1_1x, ui4_1x);
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
	ui4_1 = ((EIF_INTEGER_32) 16L);
	ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
	ui4_1 = ((EIF_INTEGER_32) 255L);
	ti4_1 = eif_bit_and((ti4_2),ui4_1);
	tu1_1 = (EIF_NATURAL_8) ti4_1;
	uu1_1 = tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2255, "put", Result))(Result, uu1_1x, ui4_1x);
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
	ui4_1 = ((EIF_INTEGER_32) 8L);
	ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
	ui4_1 = ((EIF_INTEGER_32) 255L);
	ti4_1 = eif_bit_and((ti4_2),ui4_1);
	tu1_1 = (EIF_NATURAL_8) ti4_1;
	uu1_1 = tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2255, "put", Result))(Result, uu1_1x, ui4_1x);
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
	ui4_1 = ((EIF_INTEGER_32) 255L);
	ti4_2 = eif_bit_and(ti4_1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) ti4_2;
	uu1_1 = tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2255, "put", Result))(Result, uu1_1x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef ui4_2
#undef uu1_1
}

/* {INET4_ADDRESS}.sockaddr */
EIF_TYPED_VALUE F997_7563 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "sockaddr";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 996, Current, 0, 1, 13817);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(996, Current, 13817);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000AB, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(171, 0x01).id);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5278, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3276, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Result + RTVA(3282, "item", Result));
	up1 = tp1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5299, dtype));
	ui4_1 = ti4_1;
	ui4_2 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5301, dtype))(Current, up1x, ui4_1x, ui4_2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {INET4_ADDRESS}.the_address */
EIF_TYPED_VALUE F997_7564 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5299,Dtype(Current)));
	return r;
}


/* {INET4_ADDRESS}.numeric_to_text */
EIF_TYPED_VALUE F997_7565 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "numeric_to_text";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 996, Current, 0, 1, 13799);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(996, Current, 13799);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,453,209,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 996, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("addr /= Void and then addr.count = inaddrsz", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2269, "count", arg1))(arg1)).it_i4);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5295, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(232, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4643, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", arg1))(arg1, ui4_1x)).it_n1);
	ti4_1 = (EIF_INTEGER_32) tu1_1;
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4776, "append_integer", Result))(Result, ui4_1x);
	RTHOOK(4);
	uc1 = (EIF_CHARACTER_8) '.';
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", Result))(Result, uc1x);
	RTHOOK(5);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", arg1))(arg1, ui4_1x)).it_n1);
	ti4_1 = (EIF_INTEGER_32) tu1_1;
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4776, "append_integer", Result))(Result, ui4_1x);
	RTHOOK(6);
	uc1 = (EIF_CHARACTER_8) '.';
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", Result))(Result, uc1x);
	RTHOOK(7);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", arg1))(arg1, ui4_1x)).it_n1);
	ti4_1 = (EIF_INTEGER_32) tu1_1;
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4776, "append_integer", Result))(Result, ui4_1x);
	RTHOOK(8);
	uc1 = (EIF_CHARACTER_8) '.';
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", Result))(Result, uc1x);
	RTHOOK(9);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", arg1))(arg1, ui4_1x)).it_n1);
	ti4_1 = (EIF_INTEGER_32) tu1_1;
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4776, "append_integer", Result))(Result, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef uc1
#undef arg1
}

/* {INET4_ADDRESS}.fill_ipv4 */
void F997_7566 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "fill_ipv4";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 996, Current, 0, 3, 13800);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(996, Current, 13800);
	RTIV(Current, RTAL);en_socket_address_fill_ipv4(arg1, arg2, arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {INET4_ADDRESS}.c_sockaddr_get_ipv4_address */
EIF_TYPED_VALUE F997_7567 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_sockaddr_get_ipv4_address";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 996, Current, 0, 1, 13801);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(996, Current, 13801);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) en_sockaddr_get_ipv4_address(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

void EIF_Minit997 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
