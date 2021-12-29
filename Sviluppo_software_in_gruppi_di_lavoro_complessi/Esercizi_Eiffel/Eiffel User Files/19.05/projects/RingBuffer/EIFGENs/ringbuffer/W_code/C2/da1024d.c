/*
 * Class DATE_VALIDITY_CHECKER
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
static const EIF_TYPE_INDEX egt_16_1024 [] = {0xFF01,248,0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_17_1024 [] = {0xFF01,248,0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_18_1024 [] = {0xFF01,248,0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_19_1024 [] = {0xFF01,248,0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_20_1024 [] = {0xFF01,546,218,0xFFFF};
static const EIF_TYPE_INDEX egt_21_1024 [] = {0xFF01,158,0xFFFF};
static const EIF_TYPE_INDEX egt_22_1024 [] = {0xFF01,232,0xFFFF};


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
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13661, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13662, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_1024), 13663, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_1024), 13664, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13694, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13695, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13696, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13697, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13698, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13699, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_1024), 13700, 0xFFFFFFFF},
	{EIF_GENERIC(egt_16_1024), 13701, 0xFFFFFFFF},
	{EIF_GENERIC(egt_17_1024), 13702, 0xFFFFFFFF},
	{EIF_GENERIC(egt_18_1024), 13703, 0xFFFFFFFF},
	{EIF_GENERIC(egt_19_1024), 13690, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13691, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13692, 0xFFFFFFFF},
	{EIF_GENERIC(egt_20_1024), 13693, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14162, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14163, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14164, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14167, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14168, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14169, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14170, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13704, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14173, 0xFFFFFFFF},
	{EIF_GENERIC(egt_21_1024), 6565, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14165, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14166, 0},
	{EIF_GENERIC(NULL), 14171, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14172, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14174, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14175, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14156, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14157, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14158, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14159, 0xFFFFFFFF},
	{EIF_GENERIC(egt_22_1024), 14160, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14161, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14525, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14526, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14527, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14528, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14529, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14530, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14531, 0xFFFFFFFF},
};
void Init1024(void)
{
	IDSC(desc_1024, 0, 1023);
	IDSC(desc_1024 + 1, 1, 1023);
	IDSC(desc_1024 + 32, 433, 1023);
	IDSC(desc_1024 + 36, 426, 1023);
	IDSC(desc_1024 + 50, 428, 1023);
	IDSC(desc_1024 + 58, 127, 1023);
	IDSC(desc_1024 + 60, 419, 1023);
	IDSC(desc_1024 + 72, 420, 1023);
}


#ifdef __cplusplus
}
#endif
