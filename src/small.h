// small.h    -*- C -*-

// A Hershey-like vector font, inspired by Borland SmallFont.
// Guido Gonzato, PhD
// February 17, 2020

// ZLib License

// this font replaces SMALL_FONT.

// "realwidth" information is redundant, as it's always 1 unit
// less than the width.

// Glyph <space>
#define small_1_width 6
#define small_1_realwidth 5
#define small_1_size 4
static const char small_1[small_1_size] = {
  0, 0, 0, 0
};

// Glyph !
#define small_2_width 2
#define small_2_realwidth 1
#define small_2_size 8
static const char small_2[small_2_size] = {
  0, 1, 0, 5,  0, 7, 0, 7
};

// Glyph "
#define small_3_width 4
#define small_3_realwidth 3
#define small_3_size 8
static const char small_3[small_3_size] = {
  0, 1, 0, 3,  2, 1, 2, 3
};

// Glyph #
#define small_4_width 6
#define small_4_realwidth 5
#define small_4_size 16
static const char small_4[small_4_size] = {
  2, 0, 0, 8,  4, 0, 2, 8,  0, 3, 4, 3,  0, 5, 4, 5
};

// Glyph $
#define small_5_width 6
#define small_5_realwidth 5
#define small_5_size 48
static const char small_5[small_5_size] = {
  4, 2, 3, 1,  3, 1, 1, 1,  1, 1, 0, 2,  0, 2, 0, 3,
  0, 3, 1, 4,  1, 4, 3, 4,  3, 4, 4, 5,  4, 5, 4, 6,
  4, 6, 3, 7,  3, 7, 1, 7,  1, 7, 0, 6,  2, 0, 2, 8
};

// Glyph %
#define small_6_width 6
#define small_6_realwidth 5
#define small_6_size 36
static const char small_6[small_6_size] = {
  4, 1, 0, 7,
  1, 1, 0, 1,  0, 1, 0, 2,  0, 2, 1, 2,  1, 2, 1, 1,
  4, 6, 3, 6,  3, 6, 3, 7,  3, 7, 4, 7,  4, 7, 4, 6
};

// Glyph &
#define small_7_width 6
#define small_7_realwidth 5
#define small_7_size 32
static const char small_7[small_7_size] = {
  4, 5, 2, 7,  2, 7, 1, 7,  1, 7, 0, 6,  0, 6, 0, 5,
  0, 5, 3, 2,  3, 2, 2, 1,  2, 1, 1, 2,  1, 2, 4, 7  
};

// Glyph '
#define small_8_width 3
#define small_8_realwidth 2
#define small_8_size 8
static const char small_8[small_8_size] = {
  1, 1, 1, 3,  1, 3, 0, 4
};

// Glyph (
#define small_9_width 3
#define small_9_realwidth 2
#define small_9_size 12
static const char small_9[small_9_size] = {
  1, 0, 0, 3,  0, 3, 0, 5,  0, 5, 1, 8
};

// Glyph )
#define small_10_width 3
#define small_10_realwidth 2
#define small_10_size 12
static const char small_10[small_10_size] = {
  0, 0, 1, 3,  1, 3, 1, 5,  1, 5, 0, 8
};

// Glyph *
#define small_11_width 6
#define small_11_realwidth 5
#define small_11_size 12
static const char small_11[small_11_size] = {
  2, 2, 2, 6,  0, 3, 4, 5,  0, 5, 4, 3
};

// Glyph +
#define small_12_width 6
#define small_12_realwidth 5
#define small_12_size 8
static const char small_12[small_12_size] = {
  0, 4, 4, 4,  2, 2, 2, 6
};

// Glyph ,
#define small_13_width 3
#define small_13_realwidth 2
#define small_13_size 8
static const char small_13[small_13_size] = {
  0, 8, 1, 7,  1, 7, 1, 6
};

// Glyph -
#define small_14_width 6
#define small_14_realwidth 5
#define small_14_size 4
static const char small_14[small_14_size] = {
  0, 4, 4, 4
};

// Glyph .
#define small_15_width 3
#define small_15_realwidth 2
#define small_15_size 16
static const char small_15[small_15_size] = {
  1, 6, 0, 6,  0, 6, 0, 7,  0, 7, 1, 7,  1, 7, 1, 6
};

// Glyph /
#define small_16_width 6
#define small_16_realwidth 5
#define small_16_size 4
static const char small_16[small_16_size] = {
  0, 8, 4, 0
};

// Glyph 0
#define small_17_width 6
#define small_17_realwidth 5
#define small_17_size 36
static const char small_17[small_17_size] = {
  4, 2, 3, 1,  3, 1, 1, 1,  1, 1, 0, 2,  0, 2, 0, 6,
  0, 6, 1, 7,  1, 7, 3, 7,  3, 7, 4, 6,  4, 6, 4, 2,
  3, 2, 1, 6
};

// all digits have the same width, for proper alignment

// Glyph 1
#define small_18_width 6
#define small_18_realwidth 3
#define small_18_size 12
static const char small_18[small_18_size] = {
  0, 2, 1, 1,  1, 1, 1, 7,  0, 7, 2, 7
};

// Glyph 2
#define small_19_width 6
#define small_19_realwidth 5
#define small_19_size 24
static const char small_19[small_19_size] = {
  0, 2, 1, 1,  1, 1, 3, 1,  3, 1, 4, 2,  4, 2, 4, 3,
  4, 3, 0, 7,  0, 7, 4, 7
};

// Glyph 3
#define small_20_width 6
#define small_20_realwidth 5
#define small_20_size 44
static const char small_20[small_20_size] = {
  0, 2, 1, 1,  1, 1, 3, 1,  3, 1, 4, 2,  4, 2, 4, 3,
  4, 3, 3, 4,  3, 4, 4, 5,  4, 5, 4, 6,  4, 6, 3, 7,
  3, 7, 1, 7,  1, 7, 0, 6,  3, 4, 2, 4
};

// Glyph 4
#define small_21_width 6
#define small_21_realwidth 5
#define small_21_size 12
static const char small_21[small_21_size] = {
  3, 1, 0, 5,  0, 5, 4, 5,  3, 1, 3, 7
};

// Glyph 5
#define small_22_width 6
#define small_22_realwidth 5
#define small_22_size 28
static const char small_22[small_22_size] = {
  4, 1, 0, 1,  0, 1, 0, 4,  0, 4, 3, 4, 3, 4, 4, 5,
  4, 5, 4, 6,  4, 6, 3, 7,  3, 7, 0, 7
};

// Glyph 6
#define small_23_width 6
#define small_23_realwidth 5
#define small_23_size 36
static const char small_23[small_23_size] = {
  4, 1, 2, 1,  2, 1, 0, 3,  0, 3, 0, 6,  0, 6, 1, 7,
  1, 7, 3, 7,  3, 7, 4, 6,  4, 6, 4, 5,  4, 5, 3, 4,
  3, 4, 0, 4
};

// Glyph 7
#define small_24_width 6
#define small_24_realwidth 5
#define small_24_size 8
static const char small_24[small_24_size] = {
  0, 1, 4, 1,  4, 1, 1, 7
};

// Glyph 8
#define small_25_width 6
#define small_25_realwidth 5
#define small_25_size 60
static const char small_25[small_25_size] = {
  3, 1, 1, 1,  1, 1, 0, 2,  0, 2, 0, 3,  0, 3, 1, 4,
  1, 4, 0, 5,  0, 5, 0, 6,  0, 6, 1, 7,  1, 7, 3, 7,
  3, 7, 4, 6,  4, 6, 4, 5,  4, 5, 3, 4,  3, 4, 4, 3,
  4, 3, 4, 2,  4, 2, 3, 1,  3, 4, 1, 4
};

// Glyph 9
#define small_26_width 6
#define small_26_realwidth 5
#define small_26_size 40
static const char small_26[small_26_size] = {
  0, 6, 1, 7,  1, 7, 3, 7,  3, 7, 4, 6,  4, 6, 4, 2,
  4, 2, 3, 1,  3, 1, 1, 1,  1, 1, 0, 2,  0, 2, 0, 3,
  0, 3, 1, 4,  1, 4, 4, 4
};

// Glyph :
#define small_27_width 3
#define small_27_realwidth 2
#define small_27_size 32
static const char small_27[small_27_size] = {
  1, 3, 0, 3,  0, 3, 0, 4,  0, 4, 1, 4,  1, 4, 1, 3,
  1, 6, 0, 6,  0, 6, 0, 7,  0, 7, 1, 7,  1, 7, 1, 6
};

// Glyph ;
#define small_28_width 3
#define small_28_realwidth 2
#define small_28_size 28
static const char small_28[small_28_size] = {
  1, 3, 0, 3,  0, 3, 0, 4,  0, 4, 1, 4,  1, 4, 1, 3,
  0, 8, 0, 6,  0, 6, 1, 6,  1, 6, 0, 8
};

// Glyph <
#define small_29_width 6
#define small_29_realwidth 5
#define small_29_size 8
static const char small_29[small_29_size] = {
  3, 1, 0, 4,  0, 4, 3, 7
};

// Glyph =
#define small_30_width 6
#define small_30_realwidth 5
#define small_30_size 8
static const char small_30[small_30_size] = {
  0, 3, 4, 3,  0, 5, 4, 5
};

// Glyph >
#define small_31_width 6
#define small_31_realwidth 5
#define small_31_size 8
static const char small_31[small_31_size] = {
  0, 1, 3, 4,  3, 4, 0, 7
};

// Glyph ?
#define small_32_width 6
#define small_32_realwidth 5
#define small_32_size 28
static const char small_32[small_32_size] = {
  0, 3, 0, 2,  0, 2, 1, 1,  1, 1, 3, 1,  3, 1, 4, 2,
  4, 2, 4, 3,  4, 3, 2, 5,  2, 7, 2, 7
};

// Glyph @
#define small_33_width 6
#define small_33_realwidth 5
#define small_33_size 40
static const char small_33[small_33_size] = {
  3, 1, 1, 1,  1, 1, 0, 2,  0, 2, 0, 6,  0, 6, 1, 7,
  1, 7, 4, 7,  4, 3, 2, 3,  2, 3, 2, 5,  2, 5, 4, 5,
  4, 5, 4, 2,  4, 2, 3, 1
};

// Glyph A
#define small_34_width 6
#define small_34_realwidth 5
#define small_34_size 20
static const char small_34[small_34_size] = {
  0, 7, 0, 3,  0, 3, 2, 1,  2, 1, 4, 3,  4, 3, 4, 7,
  0, 4, 4, 4
};

// Glyph B
#define small_35_width 6
#define small_35_realwidth 5
#define small_35_size 48
static const char small_35[small_35_size] = {
  0, 1, 0, 7,  0, 7, 3, 7,  0, 1, 3, 1,  0, 4, 3, 4,
  3, 1, 4, 2,  3, 4, 4, 3,  3, 4, 4, 5,  3, 7, 4, 6,
  3, 4, 4, 5,  3, 7, 4, 6,  4, 2, 4, 3,  4, 5, 4, 6
};

// Glyph C
#define small_36_width 6
#define small_36_realwidth 5
#define small_36_size 28
static const char small_36[small_36_size] = {
  4, 2, 3, 1,  3, 1, 1, 1,  1, 1, 0, 2,  0, 2, 0, 6,
  0, 6, 1, 7,  1, 7, 3, 7,  3, 7, 4, 6
};

// Glyph D
#define small_37_width 6
#define small_37_realwidth 5
#define small_37_size 24
static const char small_37[small_37_size] = {
  4, 2, 3, 1,  3, 1, 0, 1,  0, 1, 0, 7,  0, 7, 3, 7,
  3, 7, 4, 6,  4, 6, 4, 2
};

// Glyph E
#define small_38_width 6
#define small_38_realwidth 5
#define small_38_size 16
static const char small_38[small_38_size] = {
  4, 1, 0, 1,  0, 1, 0, 7,  0, 7, 4, 7,  0, 4, 3, 4
};

// Glyph F
#define small_39_width 6
#define small_39_realwidth 5
#define small_39_size 12
static const char small_39[small_39_size] = {
  4, 1, 0, 1,  0, 1, 0, 7,  0, 4, 3, 4
};

// Glyph G
#define small_40_width 6
#define small_40_realwidth 5
#define small_40_size 36
static const char small_40[small_40_size] = {
  4, 2, 3, 1,  3, 1, 1, 1,  1, 1, 0, 2,  0, 2, 0, 6,
  0, 6, 1, 7,  1, 7, 3, 7,  3, 7, 4, 6,
  4, 6, 4, 4,  4, 4, 2, 4
};

// Glyph H
#define small_41_width 6
#define small_41_realwidth 5
#define small_41_size 12
static const char small_41[small_41_size] = {
  0, 1, 0, 7,  4, 1, 4, 7,  0, 4, 4, 4
};

// Glyph I
#define small_42_width 3
#define small_42_realwidth 2
#define small_42_size 12
static const char small_42[small_42_size] = {
  0, 7, 2, 7,  0, 1, 2, 1,  1, 1, 1, 7
};

// Glyph J
#define small_43_width 5
#define small_43_realwidth 4
#define small_43_size 20
static const char small_43[small_43_size] = {
  0, 6, 1, 7,  1, 7, 2, 7,  2, 7, 3, 6,  3, 6, 3, 1,
  4, 1, 2, 1
};

// Glyph K
#define small_44_width 6
#define small_44_realwidth 5
#define small_44_size 12
static const char small_44[small_44_size] = {
  0, 1, 0, 7,  0, 4, 4, 1,  0, 4, 4, 7
};

// Glyph L
#define small_45_width 6
#define small_45_realwidth 5
#define small_45_size 8
static const char small_45[small_45_size] = {
  0, 1, 0, 7,  0, 7, 4, 7
};

// Glyph M
#define small_46_width 6
#define small_46_realwidth 5
#define small_46_size 16
static const char small_46[small_46_size] = {
  0, 1, 0, 7,  4, 1, 4, 7,  0, 1, 2, 4,  2, 4, 4, 1
};

// Glyph N
#define small_47_width 6
#define small_47_realwidth 5
#define small_47_size 12
static const char small_47[small_47_size] = {
  0, 7, 0, 1,  0, 1, 4, 7,  4, 7, 4, 1
};

// Glyph O
#define small_48_width 6
#define small_48_realwidth 5
#define small_48_size 32
static const char small_48[small_48_size] = {
  4, 2, 3, 1,  3, 1, 1, 1,  1, 1, 0, 2,  0, 2, 0, 6,
  0, 6, 1, 7,  1, 7, 3, 7,  3, 7, 4, 6,  4, 6, 4, 2
};

// Glyph P
#define small_49_width 6
#define small_49_realwidth 5
#define small_49_size 24
static const char small_49[small_49_size] = {
  0, 7, 0, 1,  0, 1, 3, 1,  3, 1, 4, 2,  4, 2, 4, 3,
  4, 3, 3, 4,  3, 4, 0, 4
};

// Glyph Q
#define small_50_width 6
#define small_50_realwidth 5
#define small_50_size 36
static const char small_50[small_50_size] = {
  4, 2, 3, 1,  3, 1, 1, 1,  1, 1, 0, 2,  0, 2, 0, 6,
  0, 6, 1, 7,  1, 7, 3, 7,  3, 7, 4, 6,  4, 6, 4, 2,
  4, 7, 2, 5
};

// Glyph R
#define small_51_width 6
#define small_51_realwidth 5
#define small_51_size 28
static const char small_51[small_51_size] = {
  0, 7, 0, 1,  0, 1, 3, 1,  3, 1, 4, 2,  4, 2, 4, 3,
  4, 3, 3, 4,  3, 4, 0, 4,  1, 4, 4, 7
};

// Glyph S
#define small_52_width 6
#define small_52_realwidth 5
#define small_52_size 44
static const char small_52[small_52_size] = {
  4, 2, 3, 1,  3, 1, 1, 1,  1, 1, 0, 2,  0, 2, 0, 3,
  0, 3, 1, 4,  1, 4, 3, 4,  3, 4, 4, 5,  4, 5, 4, 6,
  4, 6, 3, 7,  3, 7, 1, 7,  1, 7, 0, 6
};

// Glyph T
#define small_53_width 6
#define small_53_realwidth 5
#define small_53_size 8
static const char small_53[small_53_size] = {
  0, 1, 4, 1,  2, 1, 2, 7
};

// Glyph U
#define small_54_width 6
#define small_54_realwidth 5
#define small_54_size 20
static const char small_54[small_54_size] = {
  0, 1, 0, 6,  0, 6, 1, 7,  1, 7, 3, 7,  3, 7, 4, 6,  4, 6, 4, 1
};

// Glyph V
#define small_55_width 6
#define small_55_realwidth 5
#define small_55_size 8
static const char small_55[small_55_size] = {
  0, 1, 2, 7,  2, 7, 4, 1
};

// Glyph W
#define small_56_width 6
#define small_56_realwidth 5
#define small_56_size 16
static const char small_56[small_56_size] = {
  0, 1, 0, 7,  0, 7, 2, 4,  2, 4, 4, 7,  4, 7, 4, 1
};

// Glyph X
#define small_57_width 6
#define small_57_realwidth 5
#define small_57_size 8
static const char small_57[small_57_size] = {
  0, 1, 4, 7,  0, 7, 4, 1
};

// Glyph Y
#define small_58_width 6
#define small_58_realwidth 5
#define small_58_size 12
static const char small_58[small_58_size] = {
  0, 1, 2, 4,  2, 4, 4, 1,  2, 4, 2, 7
};

// Glyph Z
#define small_59_width 6
#define small_59_realwidth 5
#define small_59_size 12
static const char small_59[small_59_size] = {
  0, 1, 4, 1,  4, 1, 0, 7,  0, 7, 4, 7
};

// Glyph [
#define small_60_width 3
#define small_60_realwidth 2
#define small_60_size 12
static const char small_60[small_60_size] = {
  2, 0, 0, 0,  0, 0, 0, 8,  0, 8, 2, 8
};

// Glyph '\'
#define small_61_width 5
#define small_61_realwidth 4
#define small_61_size 4
static const char small_61[small_61_size] = {
  0, 0, 4, 8
};

// Glyph ]
#define small_62_width 3
#define small_62_realwidth 2
#define small_62_size 12
static const char small_62[small_62_size] = {
  0, 0, 2, 0,  2, 0, 2, 8,  2, 8, 0, 8
};

// Glyph ^
#define small_63_width 6
#define small_63_realwidth 5
#define small_63_size 8
static const char small_63[small_63_size] = {
  0, 3, 2, 1,  2, 1, 4, 3
};

// Glyph _
#define small_64_width 6
#define small_64_realwidth 5
#define small_64_size 4
static const char small_64[small_64_size] = {
  0, 8, 4, 8
};

// Glyph `
#define small_65_width 4
#define small_65_realwidth 3
#define small_65_size 4
static const char small_65[small_65_size] = {
  0, 1, 2, 3
};

// Glyph a
#define small_66_width 6
#define small_66_realwidth 5
#define small_66_size 28
static const char small_66[small_66_size] = {
  1, 3, 3, 3,  3, 3, 4, 4,  4, 4, 4, 7,  4, 7, 1, 7,
  1, 7, 0, 6,  0, 6, 1, 5,  1, 5, 4, 5
  
};

// Glyph b
#define small_67_width 6
#define small_67_realwidth 5
#define small_67_size 24
static const char small_67[small_67_size] = {
  0, 1, 0, 7,  0, 7, 3, 7,  3, 7, 4, 6,  4, 6, 4, 4,
  4, 4, 3, 3,  3, 3, 0, 3
};

// Glyph c
#define small_68_width 6
#define small_68_realwidth 5
#define small_68_size 20
static const char small_68[small_68_size] = {
  4, 3, 1, 3,  1, 3, 0, 4,  0, 4, 0, 6,  0, 6, 1, 7,
  1, 7, 4, 7
};

// Glyph d
#define small_69_width 6
#define small_69_realwidth 5
#define small_69_size 24
static const char small_69[small_69_size] = {
  4, 1, 4, 7,  4, 7, 1, 7,  1, 7, 0, 6,  0, 6, 0, 4,
  0, 4, 1, 3,  1, 3, 4, 3
};

// Glyph e
#define small_70_width 6
#define small_70_realwidth 5
#define small_70_size 32
static const char small_70[small_70_size] = {
  3, 7, 1, 7,  1, 7, 0, 6,  0, 6, 0, 4,  0, 4, 1, 3,
  1, 3, 3, 3,  3, 3, 4, 4,  4, 4, 3, 5,  3, 5, 0, 5
};

// Glyph f
#define small_71_width 4
#define small_71_realwidth 3
#define small_71_size 16
static const char small_71[small_71_size] = {
  0, 7, 0, 2,  0, 2, 1, 1,  1, 1, 2, 1,  2, 3, 0, 3
};

// Glyph g
#define small_72_width 6
#define small_72_realwidth 5
#define small_72_size 32
static const char small_72[small_72_size] = {
  4, 3, 1, 3,  1, 3, 0, 4,  0, 4, 0, 6,  0, 6, 1, 7,
  1, 7, 4, 7,  4, 3, 4, 8,  4, 8, 3, 9,  3, 9, 1, 9
};

// Glyph h
#define small_73_width 6
#define small_73_realwidth 5
#define small_73_size 16
static const char small_73[small_73_size] = {
  0, 1, 0, 7,  0, 3, 3, 3,  3, 3, 4, 4,  4, 4, 4, 7
};

// Glyph i
#define small_74_width 4
#define small_74_realwidth 3
#define small_74_size 16
static const char small_74[small_74_size] = {
  0, 7, 2, 7,  1, 7, 1, 3,  1, 3, 0, 3,  1, 1, 1, 1
};

// Glyph j
#define small_75_width 4
#define small_75_realwidth 3
#define small_75_size 16
static const char small_75[small_75_size] = {
  2, 1, 2, 1,  2, 3, 2, 8,  2, 8, 1, 9,  1, 9, 0, 9
};

// Glyph k
#define small_76_width 5
#define small_76_realwidth 4
#define small_76_size 12
static const char small_76[small_76_size] = {
  0, 1, 0, 7,  0, 5, 3, 7,  0, 5, 3, 3
};

// Glyph l
#define small_77_width 4
#define small_77_realwidth 3
#define small_77_size 12
static const char small_77[small_77_size] = {
  0, 1, 1, 1,  1, 1, 1, 7,  0, 7, 2, 7
};

// Glyph m
#define small_78_width 6
#define small_78_realwidth 7
#define small_78_size 20
static const char small_78[small_78_size] = {
  0, 3, 0, 7,  2, 3, 2, 7,  4, 3, 4, 7,  0, 4, 2, 3,
  2, 4, 4, 3
};

// Glyph n
#define small_79_width 5
#define small_79_realwidth 4
#define small_79_size 16
static const char small_79[small_79_size] = {
  0, 3, 0, 7,  3, 3, 3, 7,  0, 4, 2, 3,  2, 3, 3, 3
};

// Glyph o
#define small_80_width 6
#define small_80_realwidth 5
#define small_80_size 32
static const char small_80[small_80_size] = {
  4, 6, 3, 7,  3, 7, 1, 7,  1, 7, 0, 6,  0, 6, 0, 4,
  0, 4, 1, 3,  1, 3, 3, 3,  3, 3, 4, 4,  4, 4, 4, 6
};

// Glyph p
#define small_81_width 6
#define small_81_realwidth 5
#define small_81_size 24
static const char small_81[small_81_size] = {
  0, 3, 0, 9,  0, 7, 3, 7,  3, 7, 4, 6,  4, 6, 4, 4,
  4, 4, 3, 3,  3, 3, 0, 3
};

// Glyph q
#define small_82_width 6
#define small_82_realwidth 5
#define small_82_size 24
static const char small_82[small_82_size] = {
  4, 3, 1, 3,  1, 3, 0, 4,  0, 4, 0, 6,  0, 6, 1, 7,
  1, 7, 4, 7,  4, 3, 4, 9
};

// Glyph r
#define small_83_width 5
#define small_83_realwidth 4
#define small_83_size 12
static const char small_83[small_83_size] = {
  0, 3, 0, 7,  0, 4, 2, 3,  2, 3, 3, 3
};

// Glyph s
#define small_84_width 6
#define small_84_realwidth 5
#define small_84_size 28
static const char small_84[small_84_size] = {
  4, 3, 1, 3,  1, 3, 0, 4,  0, 4, 1, 5,  1, 5, 3, 5,
  3, 5, 4, 6,  4, 6, 3, 7,  3, 7, 0, 7
};

// Glyph t
#define small_85_width 4
#define small_85_realwidth 3
#define small_85_size 12
static const char small_85[small_85_size] = {
  1, 2, 1, 6,  1, 6, 2, 7,  0, 3, 2, 3
};

// Glyph u
#define small_86_width 6
#define small_86_realwidth 5
#define small_86_size 17
static const char small_86[small_86_size] = {
  0, 3, 0, 6,  0, 6, 1, 7,  1, 7, 4, 7,  4, 7, 4, 3
};

// Glyph v
#define small_87_width 6
#define small_87_realwidth 5
#define small_87_size 8
static const char small_87[small_87_size] = {
  0, 3, 2, 7, 2, 7, 4, 3
};

// Glyph w
#define small_88_width 6
#define small_88_realwidth 5
#define small_88_size 24
static const char small_88[small_88_size] = {
  0, 3, 0, 6,  0, 6, 1, 7,  1, 7, 2, 6,  2, 6, 3, 7,
  3, 7, 4, 6,  4, 6, 4, 3
};

// Glyph x
#define small_89_width 6
#define small_89_realwidth 5
#define small_89_size 8
static const char small_89[small_89_size] = {
  0, 3, 4, 7,  0, 7, 4, 3
};

// Glyph y
#define small_90_width 6
#define small_90_realwidth 5
#define small_90_size 28
static const char small_90[small_90_size] = {
  0, 3, 0, 6,  0, 6, 1, 7,  1, 7, 4, 7,  4, 7, 4, 3,
  4, 7, 4, 8,  4, 8, 3, 9,  3, 9, 1, 9
};

// Glyph z
#define small_91_width 6
#define small_91_realwidth 5
#define small_91_size 12
static const char small_91[small_91_size] = {
  0, 3, 4, 3,  4, 3, 0, 7,  0, 7, 4, 7
};

// Glyph {
#define small_92_width 4
#define small_92_realwidth 3
#define small_92_size 24
static const char small_92[small_92_size] = {
  2, 0, 1, 1,  1, 1, 1, 3,  1, 3, 0, 4,  0, 4, 1, 5,
  1, 5, 1, 7,  1, 7, 2, 8
};

// Glyph |
#define small_93_width 2
#define small_93_realwidth 1
#define small_93_size 4
static const char small_93[small_93_size] = {
  0, 0, 0, 8
};

// Glyph }
#define small_94_width 4
#define small_94_realwidth 3
#define small_94_size 24
static const char small_94[small_94_size] = {
  0, 0, 1, 1,  1, 1, 1, 3,  1, 3, 2, 4,  2, 4, 1, 5,
  1, 5, 1, 7,  1, 7, 0, 8
};

// Glyph ~
#define small_95_width 6
#define small_95_realwidth 5
#define small_95_size 16
static const char small_95[small_95_size] = {
  0, 4, 1, 3,  1, 3, 2, 4,  2, 4, 3, 5,  3, 5, 4, 4
};

// Glyph 96
#define small_96_width 6
#define small_96_realwidth 5
#define small_96_size 4
static const char small_96[small_96_size] = {
  0, 0, 0, 0
};


// Number of glyphs
#define NGLYPHS 96

// Font height
static const char small_height = 8;

// Widths of the glyphs
static char small_width[NGLYPHS] = {
  small_1_width,  small_2_width,  small_3_width,  small_4_width, 
  small_5_width,  small_6_width,  small_7_width,  small_8_width, 
  small_9_width,  small_10_width, small_11_width, small_12_width, 
  small_13_width, small_14_width, small_15_width, small_16_width,
  small_17_width, small_18_width, small_19_width, small_20_width,
  small_21_width, small_22_width, small_23_width, small_24_width,
  small_25_width, small_26_width, small_27_width, small_28_width,
  small_29_width, small_30_width, small_31_width, small_32_width,
  small_33_width, small_34_width, small_35_width, small_36_width,
  small_37_width, small_38_width, small_39_width, small_40_width,
  small_41_width, small_42_width, small_43_width, small_44_width,
  small_45_width, small_46_width, small_47_width, small_48_width,
  small_49_width, small_50_width, small_51_width, small_52_width,
  small_53_width, small_54_width, small_55_width, small_56_width,
  small_57_width, small_58_width, small_59_width, small_60_width,
  small_61_width, small_62_width, small_63_width, small_64_width,
  small_65_width, small_66_width, small_67_width, small_68_width,
  small_69_width, small_70_width, small_71_width, small_72_width,
  small_73_width, small_74_width, small_75_width, small_76_width,
  small_77_width, small_78_width, small_79_width, small_80_width,
  small_81_width, small_82_width, small_83_width, small_84_width,
  small_85_width, small_86_width, small_87_width, small_88_width,
  small_89_width, small_90_width, small_91_width, small_92_width,
  small_93_width, small_94_width, small_95_width, small_96_width
};

#if 0

// Real widths of the glyphs (calculated from data)
static char small_realwidth[NGLYPHS] = {
  small_1_realwidth,  small_2_realwidth,  small_3_realwidth,
  small_4_realwidth,  small_5_realwidth,  small_6_realwidth, 
  small_7_realwidth,  small_8_realwidth,  small_9_realwidth,
  small_10_realwidth, small_11_realwidth, small_12_realwidth,
  small_13_realwidth, small_14_realwidth, small_15_realwidth,
  small_16_realwidth, small_17_realwidth, small_18_realwidth,
  small_19_realwidth, small_20_realwidth, small_21_realwidth,
  small_22_realwidth, small_23_realwidth, small_24_realwidth,
  small_25_realwidth, small_26_realwidth, small_27_realwidth,
  small_28_realwidth, small_29_realwidth, small_30_realwidth,
  small_31_realwidth, small_32_realwidth, small_33_realwidth,
  small_34_realwidth, small_35_realwidth, small_36_realwidth,
  small_37_realwidth, small_38_realwidth, small_39_realwidth,
  small_40_realwidth, small_41_realwidth, small_42_realwidth,
  small_43_realwidth, small_44_realwidth, small_45_realwidth,
  small_46_realwidth, small_47_realwidth, small_48_realwidth,
  small_49_realwidth, small_50_realwidth, small_51_realwidth,
  small_52_realwidth, small_53_realwidth, small_54_realwidth,
  small_55_realwidth, small_56_realwidth, small_57_realwidth,
  small_58_realwidth, small_59_realwidth, small_60_realwidth,
  small_61_realwidth, small_62_realwidth, small_63_realwidth,
  small_64_realwidth, small_65_realwidth, small_66_realwidth,
  small_67_realwidth, small_68_realwidth, small_69_realwidth,
  small_70_realwidth, small_71_realwidth, small_72_realwidth,
  small_73_realwidth, small_74_realwidth, small_75_realwidth,
  small_76_realwidth, small_77_realwidth, small_78_realwidth,
  small_79_realwidth, small_80_realwidth, small_81_realwidth,
  small_82_realwidth, small_83_realwidth, small_84_realwidth,
  small_85_realwidth, small_86_realwidth, small_87_realwidth,
  small_88_realwidth, small_89_realwidth, small_90_realwidth,
  small_91_realwidth, small_92_realwidth, small_93_realwidth,
  small_94_realwidth, small_95_realwidth, small_96_realwidth
};

#endif

// Number of chars in each glyph
static const int small_size[NGLYPHS] = {
  small_1_size,  small_2_size,  small_3_size,  small_4_size,
  small_5_size,  small_6_size,  small_7_size,  small_8_size,
  small_9_size,  small_10_size, small_11_size, small_12_size,
  small_13_size, small_14_size, small_15_size, small_16_size,
  small_17_size, small_18_size, small_19_size, small_20_size,
  small_21_size, small_22_size, small_23_size, small_24_size,
  small_25_size, small_26_size, small_27_size, small_28_size,
  small_29_size, small_30_size, small_31_size, small_32_size,
  small_33_size, small_34_size, small_35_size, small_36_size,
  small_37_size, small_38_size, small_39_size, small_40_size,
  small_41_size, small_42_size, small_43_size, small_44_size,
  small_45_size, small_46_size, small_47_size, small_48_size,
  small_49_size, small_50_size, small_51_size, small_52_size,
  small_53_size, small_54_size, small_55_size, small_56_size,
  small_57_size, small_58_size, small_59_size, small_60_size,
  small_61_size, small_62_size, small_63_size, small_64_size,
  small_65_size, small_66_size, small_67_size, small_68_size,
  small_69_size, small_70_size, small_71_size, small_72_size,
  small_73_size, small_74_size, small_75_size, small_76_size,
  small_77_size, small_78_size, small_79_size, small_80_size,
  small_81_size, small_82_size, small_83_size, small_84_size,
  small_85_size, small_86_size, small_87_size, small_88_size,
  small_89_size, small_90_size, small_91_size, small_92_size,
  small_93_size, small_94_size, small_95_size, small_96_size
};

// Pointers to glyph data
static const char *small[NGLYPHS] = {
  &small_1[0],  &small_2[0],  &small_3[0],  &small_4[0],
  &small_5[0],  &small_6[0],  &small_7[0],  &small_8[0],
  &small_9[0],  &small_10[0], &small_11[0], &small_12[0],
  &small_13[0], &small_14[0], &small_15[0], &small_16[0],
  &small_17[0], &small_18[0], &small_19[0], &small_20[0],
  &small_21[0], &small_22[0], &small_23[0], &small_24[0],
  &small_25[0], &small_26[0], &small_27[0], &small_28[0],
  &small_29[0], &small_30[0], &small_31[0], &small_32[0],
  &small_33[0], &small_34[0], &small_35[0], &small_36[0],
  &small_37[0], &small_38[0], &small_39[0], &small_40[0],
  &small_41[0], &small_42[0], &small_43[0], &small_44[0],
  &small_45[0], &small_46[0], &small_47[0], &small_48[0],
  &small_49[0], &small_50[0], &small_51[0], &small_52[0],
  &small_53[0], &small_54[0], &small_55[0], &small_56[0],
  &small_57[0], &small_58[0], &small_59[0], &small_60[0],
  &small_61[0], &small_62[0], &small_63[0], &small_64[0],
  &small_65[0], &small_66[0], &small_67[0], &small_68[0],
  &small_69[0], &small_70[0], &small_71[0], &small_72[0],
  &small_73[0], &small_74[0], &small_75[0], &small_76[0],
  &small_77[0], &small_78[0], &small_79[0], &small_80[0],
  &small_81[0], &small_82[0], &small_83[0], &small_84[0],
  &small_85[0], &small_86[0], &small_87[0], &small_88[0],
  &small_89[0], &small_90[0], &small_91[0], &small_92[0],
  &small_93[0], &small_94[0], &small_95[0], &small_96[0]
};

// --- end of file small.h
