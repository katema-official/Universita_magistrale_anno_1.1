/*
 * Class EQA_EXTERNALS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_1000 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_1_1000 [] = {0xFF01,245,999,0xFFFF};
static const EIF_TYPE_INDEX egt_2_1000 [] = {0xFF01,999,0xFFFF};
static const EIF_TYPE_INDEX egt_3_1000 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_1000 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_1000 [] = {0xFF01,999,0xFFFF};
static const EIF_TYPE_INDEX egt_6_1000 [] = {0xFF01,999,0xFFFF};
static const EIF_TYPE_INDEX egt_7_1000 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_1000 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_1000 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_10_1000 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_11_1000 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_1000 [] = {0xFF01,999,0xFFFF};


static const struct desc_info desc_1000[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_1000), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_1000), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_1000), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_1000), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_1000), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_1000), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_1000), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_1000), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_1000), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_1000), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_1000), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_1000), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x07CF /*999*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01C7 /*227*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_1000), 30, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13844, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13843, 0xFFFFFFFF},
};
void Init1000(void)
{
	IDSC(desc_1000, 0, 999);
	IDSC(desc_1000 + 1, 1, 999);
	IDSC(desc_1000 + 32, 374, 999);
}


#ifdef __cplusplus
}
#endif