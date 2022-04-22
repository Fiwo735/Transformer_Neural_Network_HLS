#include "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_pp0_stage0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read())) {
            ap_enable_reg_pp0_iter0_reg = ap_start.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0) && 
                    esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_0))) {
            ap_enable_reg_pp0_iter1 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0))) {
        add_ln703_146_reg_185106 = add_ln703_146_fu_180565_p2.read();
        add_ln703_147_reg_185111 = add_ln703_147_fu_180571_p2.read();
        add_ln703_162_reg_185116 = add_ln703_162_fu_180586_p2.read();
        add_ln703_163_reg_185121 = add_ln703_163_fu_180592_p2.read();
        add_ln703_178_reg_185126 = add_ln703_178_fu_180607_p2.read();
        add_ln703_179_reg_185131 = add_ln703_179_fu_180613_p2.read();
        add_ln703_194_reg_185136 = add_ln703_194_fu_180625_p2.read();
        add_ln703_195_reg_185141 = add_ln703_195_fu_180630_p2.read();
        add_ln703_210_reg_185146 = add_ln703_210_fu_180645_p2.read();
        add_ln703_211_reg_185151 = add_ln703_211_fu_180651_p2.read();
        add_ln703_226_reg_185156 = add_ln703_226_fu_180666_p2.read();
        add_ln703_227_reg_185161 = add_ln703_227_fu_180672_p2.read();
        add_ln703_243_reg_185166 = add_ln703_243_fu_180678_p2.read();
        add_ln703_258_reg_185171 = add_ln703_258_fu_180693_p2.read();
        add_ln703_290_reg_185176 = add_ln703_290_fu_180707_p2.read();
        add_ln703_291_reg_185181 = add_ln703_291_fu_180713_p2.read();
        add_ln703_306_reg_185186 = add_ln703_306_fu_180728_p2.read();
        add_ln703_307_reg_185191 = add_ln703_307_fu_180734_p2.read();
        add_ln703_322_reg_185196 = add_ln703_322_fu_180749_p2.read();
        add_ln703_323_reg_185201 = add_ln703_323_fu_180755_p2.read();
        add_ln703_338_reg_185206 = add_ln703_338_fu_180770_p2.read();
        add_ln703_339_reg_185211 = add_ln703_339_fu_180776_p2.read();
        add_ln703_354_reg_185216 = add_ln703_354_fu_180787_p2.read();
        add_ln703_355_reg_185221 = add_ln703_355_fu_180792_p2.read();
        add_ln703_370_reg_185226 = add_ln703_370_fu_180803_p2.read();
        add_ln703_371_reg_185231 = add_ln703_371_fu_180808_p2.read();
        add_ln703_386_reg_185236 = add_ln703_386_fu_180822_p2.read();
        add_ln703_387_reg_185241 = add_ln703_387_fu_180828_p2.read();
        tmp_68_reg_185076 = mul_ln1118_206_fu_924_p2.read().range(51, 20);
        tmp_69_reg_185081 = mul_ln1118_207_fu_793_p2.read().range(52, 20);
        tmp_78_reg_185086 = mul_ln1118_222_fu_918_p2.read().range(52, 20);
        tmp_79_reg_185091 = mul_ln1118_223_fu_855_p2.read().range(51, 20);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        add_ln703_148_reg_185256 = add_ln703_148_fu_181346_p2.read();
        add_ln703_164_reg_185261 = add_ln703_164_fu_181352_p2.read();
        add_ln703_180_reg_185266 = add_ln703_180_fu_181358_p2.read();
        add_ln703_196_reg_185271 = add_ln703_196_fu_181364_p2.read();
        add_ln703_212_reg_185276 = add_ln703_212_fu_181370_p2.read();
        add_ln703_228_reg_185281 = add_ln703_228_fu_181376_p2.read();
        add_ln703_244_reg_185286 = add_ln703_244_fu_181382_p2.read();
        add_ln703_260_reg_185291 = add_ln703_260_fu_181388_p2.read();
        add_ln703_276_reg_185296 = add_ln703_276_fu_181394_p2.read();
        add_ln703_292_reg_185301 = add_ln703_292_fu_181400_p2.read();
        add_ln703_308_reg_185306 = add_ln703_308_fu_181406_p2.read();
        add_ln703_324_reg_185311 = add_ln703_324_fu_181412_p2.read();
        add_ln703_340_reg_185316 = add_ln703_340_fu_181418_p2.read();
        add_ln703_356_reg_185321 = add_ln703_356_fu_181424_p2.read();
        add_ln703_372_reg_185326 = add_ln703_372_fu_181430_p2.read();
        add_ln703_388_reg_185331 = add_ln703_388_fu_181436_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0))) {
        add_ln703_150_reg_185376 = add_ln703_150_fu_181958_p2.read();
        add_ln703_151_reg_185381 = add_ln703_151_fu_181963_p2.read();
        add_ln703_166_reg_185386 = add_ln703_166_fu_181977_p2.read();
        add_ln703_167_reg_185391 = add_ln703_167_fu_181982_p2.read();
        add_ln703_182_reg_185396 = add_ln703_182_fu_182000_p2.read();
        add_ln703_183_reg_185401 = add_ln703_183_fu_182005_p2.read();
        add_ln703_198_reg_185406 = add_ln703_198_fu_182023_p2.read();
        add_ln703_199_reg_185411 = add_ln703_199_fu_182028_p2.read();
        add_ln703_214_reg_185416 = add_ln703_214_fu_182042_p2.read();
        add_ln703_215_reg_185421 = add_ln703_215_fu_182047_p2.read();
        add_ln703_230_reg_185426 = add_ln703_230_fu_182061_p2.read();
        add_ln703_231_reg_185431 = add_ln703_231_fu_182066_p2.read();
        add_ln703_246_reg_185436 = add_ln703_246_fu_182092_p2.read();
        add_ln703_247_reg_185441 = add_ln703_247_fu_182098_p2.read();
        add_ln703_262_reg_185446 = add_ln703_262_fu_182126_p2.read();
        add_ln703_263_reg_185451 = add_ln703_263_fu_182132_p2.read();
        add_ln703_278_reg_185456 = add_ln703_278_fu_182165_p2.read();
        add_ln703_279_reg_185461 = add_ln703_279_fu_182171_p2.read();
        add_ln703_294_reg_185466 = add_ln703_294_fu_182189_p2.read();
        add_ln703_310_reg_185471 = add_ln703_310_fu_182206_p2.read();
        add_ln703_326_reg_185476 = add_ln703_326_fu_182226_p2.read();
        add_ln703_327_reg_185481 = add_ln703_327_fu_182232_p2.read();
        add_ln703_342_reg_185486 = add_ln703_342_fu_182250_p2.read();
        add_ln703_358_reg_185491 = add_ln703_358_fu_182263_p2.read();
        add_ln703_359_reg_185496 = add_ln703_359_fu_182268_p2.read();
        add_ln703_374_reg_185501 = add_ln703_374_fu_182282_p2.read();
        add_ln703_375_reg_185506 = add_ln703_375_fu_182287_p2.read();
        add_ln703_390_reg_185511 = add_ln703_390_fu_182301_p2.read();
        add_ln703_391_reg_185516 = add_ln703_391_fu_182306_p2.read();
        tmp_125_reg_185346 = mul_ln1118_275_fu_968_p2.read().range(52, 20);
        tmp_138_reg_185361 = mul_ln1118_291_fu_800_p2.read().range(50, 20);
        trunc_ln708_105_reg_185336 = mul_ln1118_272_fu_887_p2.read().range(52, 20);
        trunc_ln708_106_reg_185341 = mul_ln1118_273_fu_966_p2.read().range(52, 20);
        trunc_ln708_108_reg_185351 = mul_ln1118_288_fu_930_p2.read().range(53, 20);
        trunc_ln708_109_reg_185356 = mul_ln1118_289_fu_818_p2.read().range(53, 20);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0))) {
        add_ln703_152_reg_185591 = add_ln703_152_fu_182788_p2.read();
        add_ln703_216_reg_185596 = add_ln703_216_fu_182794_p2.read();
        add_ln703_264_reg_185601 = add_ln703_264_fu_182800_p2.read();
        add_ln703_280_reg_185606 = add_ln703_280_fu_182806_p2.read();
        add_ln703_296_reg_185611 = add_ln703_296_fu_182812_p2.read();
        add_ln703_312_reg_185616 = add_ln703_312_fu_182818_p2.read();
        add_ln703_328_reg_185621 = add_ln703_328_fu_182824_p2.read();
        add_ln703_344_reg_185626 = add_ln703_344_fu_182830_p2.read();
        add_ln703_360_reg_185631 = add_ln703_360_fu_182836_p2.read();
        add_ln703_392_reg_185636 = add_ln703_392_fu_182842_p2.read();
        tmp_151_reg_185546 = mul_ln1118_309_fu_929_p2.read().range(52, 20);
        tmp_162_reg_185576 = mul_ln1118_325_fu_992_p2.read().range(49, 20);
        trunc_ln708_110_reg_185521 = mul_ln1118_296_fu_1016_p2.read().range(53, 20);
        trunc_ln708_111_reg_185526 = mul_ln1118_297_fu_813_p2.read().range(52, 20);
        trunc_ln708_112_reg_185531 = mul_ln1118_298_fu_886_p2.read().range(50, 20);
        trunc_ln708_113_reg_185536 = mul_ln1118_300_fu_981_p2.read().range(53, 20);
        trunc_ln708_114_reg_185541 = mul_ln1118_301_fu_975_p2.read().range(53, 20);
        trunc_ln708_115_reg_185551 = mul_ln1118_312_fu_848_p2.read().range(51, 20);
        trunc_ln708_116_reg_185556 = mul_ln1118_313_fu_863_p2.read().range(53, 20);
        trunc_ln708_117_reg_185561 = mul_ln1118_314_fu_1003_p2.read().range(53, 20);
        trunc_ln708_118_reg_185566 = mul_ln1118_316_fu_934_p2.read().range(52, 20);
        trunc_ln708_119_reg_185571 = mul_ln1118_317_fu_912_p2.read().range(52, 20);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0))) {
        add_ln703_153_reg_185661 = add_ln703_153_fu_183420_p2.read();
        add_ln703_154_reg_185666 = add_ln703_154_fu_183426_p2.read();
        add_ln703_169_reg_185671 = add_ln703_169_fu_183441_p2.read();
        add_ln703_170_reg_185676 = add_ln703_170_fu_183447_p2.read();
        add_ln703_185_reg_185681 = add_ln703_185_fu_183462_p2.read();
        add_ln703_186_reg_185686 = add_ln703_186_fu_183468_p2.read();
        add_ln703_201_reg_185691 = add_ln703_201_fu_183483_p2.read();
        add_ln703_202_reg_185696 = add_ln703_202_fu_183489_p2.read();
        add_ln703_217_reg_185701 = add_ln703_217_fu_183501_p2.read();
        add_ln703_218_reg_185706 = add_ln703_218_fu_183507_p2.read();
        add_ln703_233_reg_185711 = add_ln703_233_fu_183522_p2.read();
        add_ln703_234_reg_185716 = add_ln703_234_fu_183528_p2.read();
        add_ln703_249_reg_185721 = add_ln703_249_fu_183540_p2.read();
        add_ln703_250_reg_185726 = add_ln703_250_fu_183545_p2.read();
        add_ln703_265_reg_185731 = add_ln703_265_fu_183557_p2.read();
        add_ln703_266_reg_185736 = add_ln703_266_fu_183563_p2.read();
        add_ln703_281_reg_185741 = add_ln703_281_fu_183575_p2.read();
        add_ln703_282_reg_185746 = add_ln703_282_fu_183581_p2.read();
        add_ln703_297_reg_185751 = add_ln703_297_fu_183596_p2.read();
        add_ln703_298_reg_185756 = add_ln703_298_fu_183602_p2.read();
        add_ln703_313_reg_185761 = add_ln703_313_fu_183617_p2.read();
        add_ln703_314_reg_185766 = add_ln703_314_fu_183623_p2.read();
        add_ln703_329_reg_185771 = add_ln703_329_fu_183635_p2.read();
        add_ln703_330_reg_185776 = add_ln703_330_fu_183641_p2.read();
        add_ln703_345_reg_185781 = add_ln703_345_fu_183656_p2.read();
        add_ln703_346_reg_185786 = add_ln703_346_fu_183662_p2.read();
        add_ln703_361_reg_185791 = add_ln703_361_fu_183674_p2.read();
        add_ln703_362_reg_185796 = add_ln703_362_fu_183680_p2.read();
        add_ln703_377_reg_185801 = add_ln703_377_fu_183695_p2.read();
        add_ln703_393_reg_185806 = add_ln703_393_fu_183707_p2.read();
        add_ln703_394_reg_185811 = add_ln703_394_fu_183713_p2.read();
        trunc_ln708_122_reg_185641 = mul_ln1118_341_fu_878_p2.read().range(53, 20);
        trunc_ln708_125_reg_185646 = mul_ln1118_357_fu_965_p2.read().range(52, 20);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        add_ln703_161_reg_185046 = add_ln703_161_fu_179956_p2.read();
        add_ln703_177_reg_185051 = add_ln703_177_fu_179962_p2.read();
        add_ln703_241_reg_185056 = add_ln703_241_fu_179968_p2.read();
        add_ln703_257_reg_185061 = add_ln703_257_fu_179974_p2.read();
        add_ln703_273_reg_185066 = add_ln703_273_fu_179980_p2.read();
        add_ln703_321_reg_185071 = add_ln703_321_fu_179986_p2.read();
        mult_47_V_reg_184981 = mul_ln1118_182_fu_971_p2.read().range(54, 20);
        mult_57_V_reg_185006 = mul_ln1118_192_fu_815_p2.read().range(54, 20);
        mult_61_V_reg_185021 = mul_ln1118_196_fu_805_p2.read().range(54, 20);
        mult_62_V_reg_185026 = mul_ln1118_197_fu_958_p2.read().range(54, 20);
        trunc_ln708_73_reg_184936 = mul_ln1118_167_fu_890_p2.read().range(53, 20);
        trunc_ln708_74_reg_184941 = mul_ln1118_170_fu_952_p2.read().range(53, 20);
        trunc_ln708_75_reg_184946 = mul_ln1118_171_fu_832_p2.read().range(53, 20);
        trunc_ln708_76_reg_184951 = mul_ln1118_172_fu_954_p2.read().range(52, 20);
        trunc_ln708_79_reg_184956 = mul_ln1118_176_fu_840_p2.read().range(52, 20);
        trunc_ln708_80_reg_184961 = mul_ln1118_177_fu_953_p2.read().range(53, 20);
        trunc_ln708_81_reg_184966 = mul_ln1118_179_fu_902_p2.read().range(53, 20);
        trunc_ln708_82_reg_184971 = mul_ln1118_180_fu_794_p2.read().range(53, 20);
        trunc_ln708_83_reg_184976 = mul_ln1118_181_fu_825_p2.read().range(53, 20);
        trunc_ln708_84_reg_184986 = mul_ln1118_183_fu_879_p2.read().range(53, 20);
        trunc_ln708_85_reg_184991 = mul_ln1118_186_fu_1036_p2.read().range(53, 20);
        trunc_ln708_86_reg_184996 = mul_ln1118_187_fu_1042_p2.read().range(52, 20);
        trunc_ln708_87_reg_185001 = mul_ln1118_188_fu_872_p2.read().range(53, 20);
        trunc_ln708_89_reg_185011 = mul_ln1118_193_fu_864_p2.read().range(52, 20);
        trunc_ln708_90_reg_185016 = mul_ln1118_195_fu_1034_p2.read().range(49, 20);
        trunc_ln708_91_reg_185031 = mul_ln1118_198_fu_895_p2.read().range(52, 20);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        add_ln703_192_reg_184881 = add_ln703_192_fu_179454_p2.read();
        add_ln703_208_reg_184886 = add_ln703_208_fu_179460_p2.read();
        add_ln703_224_reg_184891 = add_ln703_224_fu_179466_p2.read();
        add_ln703_240_reg_184896 = add_ln703_240_fu_179472_p2.read();
        add_ln703_272_reg_184901 = add_ln703_272_fu_179478_p2.read();
        add_ln703_288_reg_184906 = add_ln703_288_fu_179484_p2.read();
        add_ln703_304_reg_184911 = add_ln703_304_fu_179490_p2.read();
        add_ln703_336_reg_184916 = add_ln703_336_fu_179496_p2.read();
        add_ln703_352_reg_184921 = add_ln703_352_fu_179502_p2.read();
        add_ln703_368_reg_184926 = add_ln703_368_fu_179508_p2.read();
        add_ln703_384_reg_184931 = add_ln703_384_fu_179514_p2.read();
        add_ln703_reg_184876 = add_ln703_fu_179448_p2.read();
        tmp_39_reg_184836 = mul_ln1118_142_fu_798_p2.read().range(51, 20);
        tmp_43_reg_184841 = mul_ln1118_146_fu_897_p2.read().range(50, 20);
        tmp_49_reg_184856 = mul_ln1118_158_fu_1045_p2.read().range(52, 20);
        tmp_53_reg_184861 = mul_ln1118_162_fu_990_p2.read().range(52, 20);
        trunc_ln708_62_reg_184831 = mul_ln1118_137_fu_859_p2.read().range(53, 20);
        trunc_ln708_67_reg_184846 = mul_ln1118_152_fu_980_p2.read().range(50, 20);
        trunc_ln708_68_reg_184851 = mul_ln1118_153_fu_994_p2.read().range(53, 20);
        trunc_ln708_s_reg_184826 = mul_ln1118_136_fu_950_p2.read().range(53, 20);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        tmp_190_reg_185836 = mul_ln1118_363_fu_1039_p2.read().range(50, 20);
        tmp_191_reg_185886 = mul_ln1118_373_fu_955_p2.read().range(43, 20);
        tmp_192_reg_185911 = mul_ln1118_378_fu_936_p2.read().range(50, 20);
        tmp_193_reg_185916 = mul_ln1118_379_fu_920_p2.read().range(52, 20);
        tmp_194_reg_185921 = mul_ln1118_380_fu_866_p2.read().range(52, 20);
        tmp_195_reg_185926 = mul_ln1118_381_fu_899_p2.read().range(51, 20);
        tmp_196_reg_185936 = mul_ln1118_383_fu_862_p2.read().range(52, 20);
        tmp_197_reg_185941 = mul_ln1118_384_fu_816_p2.read().range(52, 20);
        tmp_198_reg_185946 = mul_ln1118_385_fu_865_p2.read().range(52, 20);
        tmp_199_reg_185961 = mul_ln1118_388_fu_880_p2.read().range(50, 20);
        tmp_200_reg_185966 = mul_ln1118_389_fu_812_p2.read().range(50, 20);
        trunc_ln708_126_reg_185816 = mul_ln1118_359_fu_937_p2.read().range(52, 20);
        trunc_ln708_127_reg_185821 = mul_ln1118_360_fu_1030_p2.read().range(54, 20);
        trunc_ln708_128_reg_185826 = mul_ln1118_361_fu_873_p2.read().range(52, 20);
        trunc_ln708_129_reg_185831 = mul_ln1118_362_fu_1018_p2.read().range(53, 20);
        trunc_ln708_130_reg_185841 = mul_ln1118_364_fu_829_p2.read().range(54, 20);
        trunc_ln708_131_reg_185846 = mul_ln1118_365_fu_843_p2.read().range(53, 20);
        trunc_ln708_132_reg_185851 = mul_ln1118_366_fu_885_p2.read().range(54, 20);
        trunc_ln708_133_reg_185856 = mul_ln1118_367_fu_951_p2.read().range(54, 20);
        trunc_ln708_134_reg_185861 = mul_ln1118_368_fu_801_p2.read().range(54, 20);
        trunc_ln708_135_reg_185866 = mul_ln1118_369_fu_821_p2.read().range(54, 20);
        trunc_ln708_136_reg_185871 = mul_ln1118_370_fu_1033_p2.read().range(54, 20);
        trunc_ln708_137_reg_185876 = mul_ln1118_371_fu_942_p2.read().range(54, 20);
        trunc_ln708_138_reg_185881 = mul_ln1118_372_fu_1031_p2.read().range(53, 20);
        trunc_ln708_139_reg_185891 = mul_ln1118_374_fu_978_p2.read().range(53, 20);
        trunc_ln708_140_reg_185896 = mul_ln1118_375_fu_993_p2.read().range(53, 20);
        trunc_ln708_141_reg_185901 = mul_ln1118_376_fu_956_p2.read().range(53, 20);
        trunc_ln708_142_reg_185906 = mul_ln1118_377_fu_830_p2.read().range(53, 20);
        trunc_ln708_143_reg_185931 = mul_ln1118_382_fu_1046_p2.read().range(53, 20);
        trunc_ln708_144_reg_185951 = mul_ln1118_386_fu_1017_p2.read().range(53, 20);
        trunc_ln708_145_reg_185956 = mul_ln1118_387_fu_907_p2.read().range(53, 20);
        trunc_ln708_146_reg_185971 = mul_ln1118_390_fu_948_p2.read().range(53, 20);
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_1to1.read())))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_reset_idle_pp0.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reset_idle_pp0.read()))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            }
            break;
        case 4 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage2_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            }
            break;
        case 8 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage4;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            }
            break;
        case 16 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage4_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage5;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage4;
            }
            break;
        case 32 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage5_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage6;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage5;
            }
            break;
        case 64 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage6_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage7;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage6;
            }
            break;
        case 128 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage7_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage7;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<8>) ("XXXXXXXX");
            break;
    }
}

}

