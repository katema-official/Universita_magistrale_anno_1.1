/*
 * Class TEST_CASE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_2 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_1_2 [] = {0xFF01,245,1,0xFFFF};
static const EIF_TYPE_INDEX egt_2_2 [] = {0xFF01,1,0xFFFF};
static const EIF_TYPE_INDEX egt_3_2 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_2 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_2 [] = {0xFF01,1,0xFFFF};
static const EIF_TYPE_INDEX egt_6_2 [] = {0xFF01,1,0xFFFF};
static const EIF_TYPE_INDEX egt_7_2 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_2 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_2 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_10_2 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_11_2 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_2 [] = {0xFF01,1,0xFFFF};


static const struct desc_info desc_2[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_2), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_2), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_2), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_2), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_2), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_2), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_2), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_2), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_2), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_2), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_2), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_2), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x03 /*1*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01C7 /*227*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_2), 30, 0xFFFFFFFF},
};
void Init2(void)
{
	IDSC(desc_2, 0, 1);
	IDSC(desc_2 + 1, 1, 1);
}


#ifdef __cplusplus
}
#endif
