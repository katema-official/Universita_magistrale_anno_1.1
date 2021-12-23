/*
 * Class TABLE [INTEGER_32, INTEGER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_565 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_1_565 [] = {0xFF01,245,564,218,218,0xFFFF};
static const EIF_TYPE_INDEX egt_2_565 [] = {0xFF01,564,218,218,0xFFFF};
static const EIF_TYPE_INDEX egt_3_565 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_565 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_565 [] = {0xFF01,564,218,218,0xFFFF};
static const EIF_TYPE_INDEX egt_6_565 [] = {0xFF01,564,218,218,0xFFFF};
static const EIF_TYPE_INDEX egt_7_565 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_565 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_565 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_10_565 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_11_565 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_565 [] = {564,218,218,0xFFFF};
static const EIF_TYPE_INDEX egt_13_565 [] = {0xFF01,564,218,218,0xFFFF};
static const EIF_TYPE_INDEX egt_14_565 [] = {0xFF01,550,0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_15_565 [] = {0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_16_565 [] = {0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_17_565 [] = {0xFFF8,2,0xFFFF};
static const EIF_TYPE_INDEX egt_18_565 [] = {0xFF01,406,0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_19_565 [] = {0xFFF8,1,0xFFFF};


static const struct desc_info desc_565[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_565), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_565), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_565), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_565), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_565), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_565), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_565), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_565), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_565), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_565), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_565), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_565), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_565), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01C7 /*227*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_565), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 3217, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 3218, 0},
	{EIF_NON_GENERIC(0x0197 /*203*/), 3219, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3220, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3221, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_565), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 3222, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 3283, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3313, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3284, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3285, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_565), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_16_565), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_17_565), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_18_565), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_19_565), 0x00, 0xFFFFFFFF},
};
void Init565(void)
{
	IDSC(desc_565, 0, 564);
	IDSC(desc_565 + 1, 1, 564);
	IDSC(desc_565 + 32, 79, 564);
	IDSC(desc_565 + 41, 297, 564);
	IDSC(desc_565 + 50, 197, 564);
	IDSC(desc_565 + 56, 240, 564);
	IDSC(desc_565 + 57, 102, 564);
}


#ifdef __cplusplus
}
#endif