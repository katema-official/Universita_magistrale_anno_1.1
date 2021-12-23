/*
 * Class SED_VERSIONS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_20 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_1_20 [] = {0xFF01,245,19,0xFFFF};
static const EIF_TYPE_INDEX egt_2_20 [] = {0xFF01,19,0xFFFF};
static const EIF_TYPE_INDEX egt_3_20 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_20 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_20 [] = {0xFF01,19,0xFFFF};
static const EIF_TYPE_INDEX egt_6_20 [] = {0xFF01,19,0xFFFF};
static const EIF_TYPE_INDEX egt_7_20 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_20 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_20 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_10_20 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_11_20 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_20 [] = {0xFF01,19,0xFFFF};


static const struct desc_info desc_20[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_20), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_20), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_20), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_20), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_20), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_20), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_20), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_20), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_20), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_20), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_20), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_20), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x27 /*19*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01C7 /*227*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_20), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A9 /*212*/), 372, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A9 /*212*/), 373, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A9 /*212*/), 374, 0xFFFFFFFF},
};
void Init20(void)
{
	IDSC(desc_20, 0, 19);
	IDSC(desc_20 + 1, 1, 19);
	IDSC(desc_20 + 32, 133, 19);
}


#ifdef __cplusplus
}
#endif