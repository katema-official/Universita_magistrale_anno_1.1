/*
 * Class TIME_VALIDITY_CHECKER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_1024 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_1_1024 [] = {0xFF01,245,1023,0xFFFF};
static const EIF_TYPE_INDEX egt_2_1024 [] = {0xFF01,1023,0xFFFF};
static const EIF_TYPE_INDEX egt_3_1024 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_1024 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_1024 [] = {0xFF01,1023,0xFFFF};
static const EIF_TYPE_INDEX egt_6_1024 [] = {0xFF01,1023,0xFFFF};
static const EIF_TYPE_INDEX egt_7_1024 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_1024 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_1024 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_10_1024 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_11_1024 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_1024 [] = {0xFF01,1023,0xFFFF};
static const EIF_TYPE_INDEX egt_13_1024 [] = {0xFF01,970,0xFFFF};
static const EIF_TYPE_INDEX egt_14_1024 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_15_1024 [] = {0xFF01,232,0xFFFF};


static const struct desc_info desc_1024[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_1024), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_1024), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_1024), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_1024), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_1024), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_1024), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_1024), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_1024), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_1024), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_1024), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_1024), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_1024), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x07FF /*1023*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01C7 /*227*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_1024), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13691, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13692, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_1024), 13693, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_1024), 13694, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13695, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13696, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13697, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13698, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13699, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_1024), 13700, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13708, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13709, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13710, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 13713, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13719, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13701, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13702, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13718, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13717, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 13711, 4},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13712, 0},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13714, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13715, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13716, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13703, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13704, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13705, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13706, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13707, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14496, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14497, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14498, 0xFFFFFFFF},
};
void Init1024(void)
{
	IDSC(desc_1024, 0, 1023);
	IDSC(desc_1024 + 1, 1, 1023);
	IDSC(desc_1024 + 32, 433, 1023);
	IDSC(desc_1024 + 36, 432, 1023);
	IDSC(desc_1024 + 42, 418, 1023);
	IDSC(desc_1024 + 51, 426, 1023);
	IDSC(desc_1024 + 61, 427, 1023);
}


#ifdef __cplusplus
}
#endif
