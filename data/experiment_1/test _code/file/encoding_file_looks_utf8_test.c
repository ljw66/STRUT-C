void test_file_looks_utf8_up(void);
void test_file_looks_utf8_down(void);


void test_file_looks_utf8_up(void){

	aunit_printf("\n##FUNCTION_START_file_looks_utf8\n");
 }

void test_file_looks_utf8_down(void){
	aunit_printf("\n##FUNCTION_END_file_looks_utf8\n");
 }



void abnormal_file_looks_utf8_case(int index);

void abnormal_file_looks_utf8_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_looks_utf8_11(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *buf;
	unsigned int nbytes;
	file_unichar_t *ubuf;
	size_t *ulen;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	size_t *valueList_0[]={(size_t *)ulen_PTRTO};
	unsigned int listLength_0=1;
	file_unichar_t *valueList_1[]={(file_unichar_t *)ubuf_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={3};
	unsigned int listLength_2=1;
	unsigned char *valueList_3[]={(unsigned char *)"\xe2\x82\xac"};
	unsigned int listLength_3=1;
	char valueList_4[]={0};
	unsigned int listLength_4=1;
	char valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={0};
	unsigned int listLength_8=1;
	char valueList_9[]={0};
	unsigned int listLength_9=1;
	char valueList_10[]={0};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0};
	unsigned int listLength_11=1;
	char valueList_12[]={0};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={0};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={0};
	unsigned int listLength_14=1;
	unsigned char valueList_15[]={0};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={0};
	unsigned int listLength_16=1;
	char valueList_17[]={0};
	unsigned int listLength_17=1;
	unsigned char valueList_18[]={1};
	unsigned int listLength_18=1;
	char valueList_19[]={0};
	unsigned int listLength_19=1;
	unsigned char valueList_20[]={0};
	unsigned int listLength_20=1;
	unsigned char valueList_21[]={0};
	unsigned int listLength_21=1;
	char valueList_22[]={0};
	unsigned int listLength_22=1;
	unsigned char valueList_23[]={0};
	unsigned int listLength_23=1;
	char valueList_24[]={0};
	unsigned int listLength_24=1;
	char valueList_25[]={0};
	unsigned int listLength_25=1;
	char valueList_26[]={0};
	unsigned int listLength_26=1;
	unsigned char valueList_27[]={0};
	unsigned int listLength_27=1;
	unsigned char valueList_28[]={0};
	unsigned int listLength_28=1;
	char valueList_29[]={0};
	unsigned int listLength_29=1;
	unsigned char valueList_30[]={0};
	unsigned int listLength_30=1;
	unsigned char valueList_31[]={0};
	unsigned int listLength_31=1;
	char valueList_32[]={0};
	unsigned int listLength_32=1;
	char valueList_33[]={0};
	unsigned int listLength_33=1;
	char valueList_34[]={0};
	unsigned int listLength_34=1;
	unsigned char valueList_35[]={0};
	unsigned int listLength_35=1;
	unsigned char valueList_36[]={0};
	unsigned int listLength_36=1;
	unsigned char valueList_37[]={0};
	unsigned int listLength_37=1;
	char valueList_38[]={0};
	unsigned int listLength_38=1;
	unsigned char valueList_39[]={0};
	unsigned int listLength_39=1;
	char valueList_40[]={0};
	unsigned int listLength_40=1;
	unsigned char valueList_41[]={0};
	unsigned int listLength_41=1;
	char valueList_42[]={0};
	unsigned int listLength_42=1;
	char valueList_43[]={0};
	unsigned int listLength_43=1;
	unsigned char valueList_44[]={0};
	unsigned int listLength_44=1;
	unsigned char valueList_45[]={0};
	unsigned int listLength_45=1;
	char valueList_46[]={0};
	unsigned int listLength_46=1;
	unsigned char valueList_47[]={0};
	unsigned int listLength_47=1;
	char valueList_48[]={0};
	unsigned int listLength_48=1;
	unsigned char valueList_49[]={0};
	unsigned int listLength_49=1;
	char valueList_50[]={0};
	unsigned int listLength_50=1;
	unsigned char valueList_51[]={0};
	unsigned int listLength_51=1;
	unsigned char valueList_52[]={0};
	unsigned int listLength_52=1;
	unsigned char valueList_53[]={0};
	unsigned int listLength_53=1;
	char valueList_54[]={0};
	unsigned int listLength_54=1;
	unsigned char valueList_55[]={0};
	unsigned int listLength_55=1;
	unsigned char valueList_56[]={0};
	unsigned int listLength_56=1;
	char valueList_57[]={0};
	unsigned int listLength_57=1;
	unsigned char valueList_58[]={0};
	unsigned int listLength_58=1;
	unsigned char valueList_59[]={0};
	unsigned int listLength_59=1;
	char valueList_60[]={0};
	unsigned int listLength_60=1;
	char valueList_61[]={0};
	unsigned int listLength_61=1;
	unsigned char valueList_62[]={0};
	unsigned int listLength_62=1;
	char valueList_63[]={0};
	unsigned int listLength_63=1;
	unsigned char valueList_64[]={0};
	unsigned int listLength_64=1;
	char valueList_65[]={0};
	unsigned int listLength_65=1;
	char valueList_66[]={0};
	unsigned int listLength_66=1;
	unsigned char valueList_67[]={0};
	unsigned int listLength_67=1;
	char valueList_68[]={0};
	unsigned int listLength_68=1;
	char valueList_69[]={0};
	unsigned int listLength_69=1;
	unsigned char valueList_70[]={0};
	unsigned int listLength_70=1;
	unsigned char valueList_71[]={0};
	unsigned int listLength_71=1;
	char valueList_72[]={0};
	unsigned int listLength_72=1;
	unsigned char valueList_73[]={0};
	unsigned int listLength_73=1;
	unsigned char valueList_74[]={0};
	unsigned int listLength_74=1;
	char valueList_75[]={0};
	unsigned int listLength_75=1;
	unsigned char valueList_76[]={0};
	unsigned int listLength_76=1;
	unsigned char valueList_77[]={0};
	unsigned int listLength_77=1;
	char valueList_78[]={0};
	unsigned int listLength_78=1;
	unsigned char valueList_79[]={0};
	unsigned int listLength_79=1;
	unsigned char valueList_80[]={0};
	unsigned int listLength_80=1;
	char valueList_81[]={0};
	unsigned int listLength_81=1;
	unsigned char valueList_82[]={0};
	unsigned int listLength_82=1;
	char valueList_83[]={0};
	unsigned int listLength_83=1;
	unsigned char valueList_84[]={0};
	unsigned int listLength_84=1;
	char valueList_85[]={0};
	unsigned int listLength_85=1;
	char valueList_86[]={0};
	unsigned int listLength_86=1;
	char valueList_87[]={0};
	unsigned int listLength_87=1;
	unsigned char valueList_88[]={0};
	unsigned int listLength_88=1;
	unsigned char valueList_89[]={0};
	unsigned int listLength_89=1;
	unsigned char valueList_90[]={0};
	unsigned int listLength_90=1;
	char valueList_91[]={0};
	unsigned int listLength_91=1;
	char valueList_92[]={0};
	unsigned int listLength_92=1;
	unsigned char valueList_93[]={0};
	unsigned int listLength_93=1;
	unsigned char valueList_94[]={0};
	unsigned int listLength_94=1;
	char valueList_95[]={0};
	unsigned int listLength_95=1;
	unsigned char valueList_96[]={0};
	unsigned int listLength_96=1;
	unsigned char valueList_97[]={0};
	unsigned int listLength_97=1;
	unsigned char valueList_98[]={0};
	unsigned int listLength_98=1;
	unsigned char valueList_99[]={0};
	unsigned int listLength_99=1;
	unsigned char valueList_100[]={0};
	unsigned int listLength_100=1;
	char valueList_101[]={0};
	unsigned int listLength_101=1;
	char valueList_102[]={0};
	unsigned int listLength_102=1;
	char valueList_103[]={0};
	unsigned int listLength_103=1;
	char valueList_104[]={0};
	unsigned int listLength_104=1;
	unsigned char valueList_105[]={0};
	unsigned int listLength_105=1;
	char valueList_106[]={0};
	unsigned int listLength_106=1;
	unsigned char valueList_107[]={0};
	unsigned int listLength_107=1;
	unsigned char valueList_108[]={0};
	unsigned int listLength_108=1;
	unsigned char valueList_109[]={0};
	unsigned int listLength_109=1;
	unsigned char valueList_110[]={0};
	unsigned int listLength_110=1;
	char valueList_111[]={0};
	unsigned int listLength_111=1;
	char valueList_112[]={0};
	unsigned int listLength_112=1;
	unsigned char valueList_113[]={0};
	unsigned int listLength_113=1;
	unsigned char valueList_114[]={0};
	unsigned int listLength_114=1;
	char valueList_115[]={0};
	unsigned int listLength_115=1;
	unsigned char valueList_116[]={0};
	unsigned int listLength_116=1;
	unsigned char valueList_117[]={0};
	unsigned int listLength_117=1;
	unsigned char valueList_118[]={0};
	unsigned int listLength_118=1;
	unsigned char valueList_119[]={0};
	unsigned int listLength_119=1;
	unsigned char valueList_120[]={0};
	unsigned int listLength_120=1;
	unsigned char valueList_121[]={0};
	unsigned int listLength_121=1;
	char valueList_122[]={0};
	unsigned int listLength_122=1;
	char valueList_123[]={0};
	unsigned int listLength_123=1;
	char valueList_124[]={0};
	unsigned int listLength_124=1;
	char valueList_125[]={0};
	unsigned int listLength_125=1;
	char valueList_126[]={0};
	unsigned int listLength_126=1;
	unsigned char valueList_127[]={0};
	unsigned int listLength_127=1;
	unsigned char valueList_128[]={0};
	unsigned int listLength_128=1;
	unsigned char valueList_129[]={0};
	unsigned int listLength_129=1;
	unsigned char valueList_130[]={0};
	unsigned int listLength_130=1;
	unsigned char valueList_131[]={0};
	unsigned int listLength_131=1;
	unsigned char valueList_132[]={0};
	unsigned int listLength_132=1;
	char valueList_133[]={0};
	unsigned int listLength_133=1;
	char valueList_134[]={0};
	unsigned int listLength_134=1;
	char valueList_135[]={0};
	unsigned int listLength_135=1;
	unsigned char valueList_136[]={0};
	unsigned int listLength_136=1;
	unsigned char valueList_137[]={0};
	unsigned int listLength_137=1;
	unsigned char valueList_138[]={0};
	unsigned int listLength_138=1;
	unsigned char valueList_139[]={0};
	unsigned int listLength_139=1;
	unsigned char valueList_140[]={0};
	unsigned int listLength_140=1;
	char valueList_141[]={0};
	unsigned int listLength_141=1;
	unsigned char valueList_142[]={0};
	unsigned int listLength_142=1;
	char valueList_143[]={0};
	unsigned int listLength_143=1;
	char valueList_144[]={0};
	unsigned int listLength_144=1;
	char valueList_145[]={0};
	unsigned int listLength_145=1;
	char valueList_146[]={0};
	unsigned int listLength_146=1;
	unsigned char valueList_147[]={0};
	unsigned int listLength_147=1;
	unsigned char valueList_148[]={0};
	unsigned int listLength_148=1;
	unsigned char valueList_149[]={0};
	unsigned int listLength_149=1;
	unsigned char valueList_150[]={0};
	unsigned int listLength_150=1;
	unsigned char valueList_151[]={0};
	unsigned int listLength_151=1;
	unsigned char valueList_152[]={0};
	unsigned int listLength_152=1;
	unsigned char valueList_153[]={0};
	unsigned int listLength_153=1;
	unsigned char valueList_154[]={0};
	unsigned int listLength_154=1;
	char valueList_155[]={0};
	unsigned int listLength_155=1;
	unsigned char valueList_156[]={0};
	unsigned int listLength_156=1;
	unsigned char valueList_157[]={0};
	unsigned int listLength_157=1;
	unsigned char valueList_158[]={0};
	unsigned int listLength_158=1;
	unsigned char valueList_159[]={0};
	unsigned int listLength_159=1;
	unsigned char valueList_160[]={0};
	unsigned int listLength_160=1;
	char valueList_161[]={0};
	unsigned int listLength_161=1;
	char valueList_162[]={0};
	unsigned int listLength_162=1;
	char valueList_163[]={0};
	unsigned int listLength_163=1;
	char valueList_164[]={0};
	unsigned int listLength_164=1;
	unsigned char valueList_165[]={0};
	unsigned int listLength_165=1;
	unsigned char valueList_166[]={0};
	unsigned int listLength_166=1;
	char valueList_167[]={0};
	unsigned int listLength_167=1;
	unsigned char valueList_168[]={0};
	unsigned int listLength_168=1;
	unsigned char valueList_169[]={0};
	unsigned int listLength_169=1;
	unsigned char valueList_170[]={0};
	unsigned int listLength_170=1;
	unsigned char valueList_171[]={0};
	unsigned int listLength_171=1;
	unsigned char valueList_172[]={0};
	unsigned int listLength_172=1;
	unsigned char valueList_173[]={0};
	unsigned int listLength_173=1;
	unsigned char valueList_174[]={0};
	unsigned int listLength_174=1;
	char valueList_175[]={0};
	unsigned int listLength_175=1;
	unsigned char valueList_176[]={0};
	unsigned int listLength_176=1;
	char valueList_177[]={0};
	unsigned int listLength_177=1;
	unsigned char valueList_178[]={0};
	unsigned int listLength_178=1;
	unsigned char valueList_179[]={0};
	unsigned int listLength_179=1;
	unsigned char valueList_180[]={0};
	unsigned int listLength_180=1;
	char valueList_181[]={0};
	unsigned int listLength_181=1;
	char valueList_182[]={0};
	unsigned int listLength_182=1;
	char valueList_183[]={0};
	unsigned int listLength_183=1;
	char valueList_184[]={0};
	unsigned int listLength_184=1;
	unsigned char valueList_185[]={0};
	unsigned int listLength_185=1;
	char valueList_186[]={0};
	unsigned int listLength_186=1;
	unsigned char valueList_187[]={0};
	unsigned int listLength_187=1;
	char valueList_188[]={0};
	unsigned int listLength_188=1;
	char valueList_189[]={0};
	unsigned int listLength_189=1;
	unsigned char valueList_190[]={0};
	unsigned int listLength_190=1;
	unsigned char valueList_191[]={0};
	unsigned int listLength_191=1;
	unsigned char valueList_192[]={0};
	unsigned int listLength_192=1;
	unsigned char valueList_193[]={0};
	unsigned int listLength_193=1;
	unsigned char valueList_194[]={0};
	unsigned int listLength_194=1;
	char valueList_195[]={0};
	unsigned int listLength_195=1;
	unsigned char valueList_196[]={0};
	unsigned int listLength_196=1;
	unsigned char valueList_197[]={0};
	unsigned int listLength_197=1;
	unsigned char valueList_198[]={0};
	unsigned int listLength_198=1;
	char valueList_199[]={0};
	unsigned int listLength_199=1;
	unsigned char valueList_200[]={0};
	unsigned int listLength_200=1;
	unsigned char valueList_201[]={0};
	unsigned int listLength_201=1;
	char valueList_202[]={0};
	unsigned int listLength_202=1;
	char valueList_203[]={0};
	unsigned int listLength_203=1;
	char valueList_204[]={0};
	unsigned int listLength_204=1;
	char valueList_205[]={0};
	unsigned int listLength_205=1;
	char valueList_206[]={0};
	unsigned int listLength_206=1;
	unsigned char valueList_207[]={0};
	unsigned int listLength_207=1;
	unsigned char valueList_208[]={0};
	unsigned int listLength_208=1;
	char valueList_209[]={0};
	unsigned int listLength_209=1;
	unsigned char valueList_210[]={0};
	unsigned int listLength_210=1;
	unsigned char valueList_211[]={0};
	unsigned int listLength_211=1;
	char valueList_212[]={0};
	unsigned int listLength_212=1;
	unsigned char valueList_213[]={0};
	unsigned int listLength_213=1;
	unsigned char valueList_214[]={0};
	unsigned int listLength_214=1;
	char valueList_215[]={0};
	unsigned int listLength_215=1;
	unsigned char valueList_216[]={0};
	unsigned int listLength_216=1;
	unsigned char valueList_217[]={0};
	unsigned int listLength_217=1;
	unsigned char valueList_218[]={0};
	unsigned int listLength_218=1;
	char valueList_219[]={0};
	unsigned int listLength_219=1;
	unsigned char valueList_220[]={0};
	unsigned int listLength_220=1;
	unsigned char valueList_221[]={0};
	unsigned int listLength_221=1;
	unsigned char valueList_222[]={0};
	unsigned int listLength_222=1;
	char valueList_223[]={0};
	unsigned int listLength_223=1;
	char valueList_224[]={0};
	unsigned int listLength_224=1;
	char valueList_225[]={0};
	unsigned int listLength_225=1;
	char valueList_226[]={0};
	unsigned int listLength_226=1;
	char valueList_227[]={0};
	unsigned int listLength_227=1;
	char valueList_228[]={0};
	unsigned int listLength_228=1;
	unsigned char valueList_229[]={0};
	unsigned int listLength_229=1;
	unsigned char valueList_230[]={0};
	unsigned int listLength_230=1;
	unsigned char valueList_231[]={0};
	unsigned int listLength_231=1;
	unsigned char valueList_232[]={0};
	unsigned int listLength_232=1;
	char valueList_233[]={0};
	unsigned int listLength_233=1;
	unsigned char valueList_234[]={0};
	unsigned int listLength_234=1;
	unsigned char valueList_235[]={0};
	unsigned int listLength_235=1;
	unsigned char valueList_236[]={0};
	unsigned int listLength_236=1;
	unsigned char valueList_237[]={0};
	unsigned int listLength_237=1;
	unsigned char valueList_238[]={0};
	unsigned int listLength_238=1;
	char valueList_239[]={0};
	unsigned int listLength_239=1;
	char valueList_240[]={0};
	unsigned int listLength_240=1;
	char valueList_241[]={0};
	unsigned int listLength_241=1;
	char valueList_242[]={0};
	unsigned int listLength_242=1;
	char valueList_243[]={0};
	unsigned int listLength_243=1;
	char valueList_244[]={0};
	unsigned int listLength_244=1;
	unsigned char valueList_245[]={0};
	unsigned int listLength_245=1;
	char valueList_246[]={0};
	unsigned int listLength_246=1;
	unsigned char valueList_247[]={0};
	unsigned int listLength_247=1;
	unsigned char valueList_248[]={0};
	unsigned int listLength_248=1;
	unsigned char valueList_249[]={0};
	unsigned int listLength_249=1;
	unsigned char valueList_250[]={0};
	unsigned int listLength_250=1;
	unsigned char valueList_251[]={0};
	unsigned int listLength_251=1;
	char valueList_252[]={0};
	unsigned int listLength_252=1;
	unsigned char valueList_253[]={0};
	unsigned int listLength_253=1;
	unsigned char valueList_254[]={0};
	unsigned int listLength_254=1;
	unsigned char valueList_255[]={0};
	unsigned int listLength_255=1;
	char valueList_256[]={0};
	unsigned int listLength_256=1;
	char valueList_257[]={0};
	unsigned int listLength_257=1;
	char valueList_258[]={0};
	unsigned int listLength_258=1;
	char valueList_259[]={0};
	unsigned int listLength_259=1;
	char valueList_260[]={0};
	unsigned int listLength_260=1;
	char valueList_261[]={0};
	unsigned int listLength_261=1;
	unsigned char valueList_262[]={0};
	unsigned int listLength_262=1;
	unsigned char valueList_263[]={0};
	unsigned int listLength_263=1;
	char valueList_264[]={0};
	unsigned int listLength_264=1;
	char valueList_265[]={0};
	unsigned int listLength_265=1;
	unsigned char valueList_266[]={0};
	unsigned int listLength_266=1;
	unsigned char valueList_267[]={0};
	unsigned int listLength_267=1;
	unsigned char valueList_268[]={0};
	unsigned int listLength_268=1;
	unsigned char valueList_269[]={0};
	unsigned int listLength_269=1;
	unsigned char valueList_270[]={0};
	unsigned int listLength_270=1;
	char valueList_271[]={0};
	unsigned int listLength_271=1;
	unsigned char valueList_272[]={0};
	unsigned int listLength_272=1;
	char valueList_273[]={0};
	unsigned int listLength_273=1;
	char valueList_274[]={0};
	unsigned int listLength_274=1;
	char valueList_275[]={0};
	unsigned int listLength_275=1;
	char valueList_276[]={0};
	unsigned int listLength_276=1;
	char valueList_277[]={0};
	unsigned int listLength_277=1;
	char valueList_278[]={0};
	unsigned int listLength_278=1;
	char valueList_279[]={0};
	unsigned int listLength_279=1;
	unsigned char valueList_280[]={0};
	unsigned int listLength_280=1;
	unsigned char valueList_281[]={0};
	unsigned int listLength_281=1;
	char valueList_282[]={0};
	unsigned int listLength_282=1;
	char valueList_283[]={0};
	unsigned int listLength_283=1;
	unsigned char valueList_284[]={0};
	unsigned int listLength_284=1;
	unsigned char valueList_285[]={0};
	unsigned int listLength_285=1;
	unsigned char valueList_286[]={0};
	unsigned int listLength_286=1;
	char valueList_287[]={0};
	unsigned int listLength_287=1;
	unsigned char valueList_288[]={0};
	unsigned int listLength_288=1;
	char valueList_289[]={0};
	unsigned int listLength_289=1;
	unsigned char valueList_290[]={0};
	unsigned int listLength_290=1;
	char valueList_291[]={0};
	unsigned int listLength_291=1;
	char valueList_292[]={0};
	unsigned int listLength_292=1;
	char valueList_293[]={0};
	unsigned int listLength_293=1;
	char valueList_294[]={0};
	unsigned int listLength_294=1;
	char valueList_295[]={0};
	unsigned int listLength_295=1;
	unsigned char valueList_296[]={0};
	unsigned int listLength_296=1;
	char valueList_297[]={0};
	unsigned int listLength_297=1;
	unsigned char valueList_298[]={0};
	unsigned int listLength_298=1;
	char valueList_299[]={0};
	unsigned int listLength_299=1;
	char valueList_300[]={0};
	unsigned int listLength_300=1;
	char valueList_301[]={0};
	unsigned int listLength_301=1;
	char valueList_302[]={0};
	unsigned int listLength_302=1;
	unsigned char valueList_303[]={0};
	unsigned int listLength_303=1;
	unsigned char valueList_304[]={0};
	unsigned int listLength_304=1;
	char valueList_305[]={0};
	unsigned int listLength_305=1;
	unsigned char valueList_306[]={0};
	unsigned int listLength_306=1;
	char valueList_307[]={0};
	unsigned int listLength_307=1;
	unsigned char valueList_308[]={0};
	unsigned int listLength_308=1;
	unsigned char valueList_309[]={0};
	unsigned int listLength_309=1;
	char valueList_310[]={0};
	unsigned int listLength_310=1;
	char valueList_311[]={0};
	unsigned int listLength_311=1;
	char valueList_312[]={0};
	unsigned int listLength_312=1;
	char valueList_313[]={0};
	unsigned int listLength_313=1;
	char valueList_314[]={0};
	unsigned int listLength_314=1;
	unsigned char valueList_315[]={0};
	unsigned int listLength_315=1;
	char valueList_316[]={0};
	unsigned int listLength_316=1;
	char valueList_317[]={0};
	unsigned int listLength_317=1;
	unsigned char valueList_318[]={0};
	unsigned int listLength_318=1;
	char valueList_319[]={0};
	unsigned int listLength_319=1;
	unsigned char valueList_320[]={0};
	unsigned int listLength_320=1;
	unsigned char valueList_321[]={0};
	unsigned int listLength_321=1;
	unsigned char valueList_322[]={0};
	unsigned int listLength_322=1;
	char valueList_323[]={0};
	unsigned int listLength_323=1;
	unsigned char valueList_324[]={0};
	unsigned int listLength_324=1;
	char valueList_325[]={0};
	unsigned int listLength_325=1;
	char valueList_326[]={0};
	unsigned int listLength_326=1;
	char valueList_327[]={0};
	unsigned int listLength_327=1;
	char valueList_328[]={0};
	unsigned int listLength_328=1;
	unsigned char valueList_329[]={0};
	unsigned int listLength_329=1;
	char valueList_330[]={0};
	unsigned int listLength_330=1;
	char valueList_331[]={0};
	unsigned int listLength_331=1;
	unsigned char valueList_332[]={0};
	unsigned int listLength_332=1;
	unsigned char valueList_333[]={0};
	unsigned int listLength_333=1;
	char valueList_334[]={0};
	unsigned int listLength_334=1;
	unsigned char valueList_335[]={0};
	unsigned int listLength_335=1;
	unsigned char valueList_336[]={0};
	unsigned int listLength_336=1;
	char valueList_337[]={0};
	unsigned int listLength_337=1;
	unsigned char valueList_338[]={0};
	unsigned int listLength_338=1;
	char valueList_339[]={0};
	unsigned int listLength_339=1;
	char valueList_340[]={0};
	unsigned int listLength_340=1;
	char valueList_341[]={0};
	unsigned int listLength_341=1;
	char valueList_342[]={0};
	unsigned int listLength_342=1;
	unsigned char valueList_343[]={0};
	unsigned int listLength_343=1;
	char valueList_344[]={0};
	unsigned int listLength_344=1;
	unsigned char valueList_345[]={0};
	unsigned int listLength_345=1;
	unsigned char valueList_346[]={0};
	unsigned int listLength_346=1;
	char valueList_347[]={0};
	unsigned int listLength_347=1;
	unsigned char valueList_348[]={0};
	unsigned int listLength_348=1;
	char valueList_349[]={0};
	unsigned int listLength_349=1;
	unsigned char valueList_350[]={0};
	unsigned int listLength_350=1;
	char valueList_351[]={0};
	unsigned int listLength_351=1;
	char valueList_352[]={0};
	unsigned int listLength_352=1;
	char valueList_353[]={0};
	unsigned int listLength_353=1;
	char valueList_354[]={0};
	unsigned int listLength_354=1;
	char valueList_355[]={0};
	unsigned int listLength_355=1;
	char valueList_356[]={0};
	unsigned int listLength_356=1;
	unsigned char valueList_357[]={0};
	unsigned int listLength_357=1;
	unsigned char valueList_358[]={0};
	unsigned int listLength_358=1;
	unsigned char valueList_359[]={0};
	unsigned int listLength_359=1;
	unsigned char valueList_360[]={0};
	unsigned int listLength_360=1;
	unsigned char valueList_361[]={0};
	unsigned int listLength_361=1;
	unsigned char valueList_362[]={0};
	unsigned int listLength_362=1;
	char valueList_363[]={0};
	unsigned int listLength_363=1;
	char valueList_364[]={0};
	unsigned int listLength_364=1;
	char valueList_365[]={0};
	unsigned int listLength_365=1;
	char valueList_366[]={0};
	unsigned int listLength_366=1;
	char valueList_367[]={0};
	unsigned int listLength_367=1;
	unsigned char valueList_368[]={0};
	unsigned int listLength_368=1;
	unsigned char valueList_369[]={0};
	unsigned int listLength_369=1;
	unsigned char valueList_370[]={0};
	unsigned int listLength_370=1;
	unsigned char valueList_371[]={0};
	unsigned int listLength_371=1;
	unsigned char valueList_372[]={0};
	unsigned int listLength_372=1;
	unsigned char valueList_373[]={0};
	unsigned int listLength_373=1;
	char valueList_374[]={0};
	unsigned int listLength_374=1;
	char valueList_375[]={0};
	unsigned int listLength_375=1;
	char valueList_376[]={0};
	unsigned int listLength_376=1;
	char valueList_377[]={0};
	unsigned int listLength_377=1;
	char valueList_378[]={0};
	unsigned int listLength_378=1;
	char valueList_379[]={0};
	unsigned int listLength_379=1;
	unsigned char valueList_380[]={0};
	unsigned int listLength_380=1;
	unsigned char valueList_381[]={0};
	unsigned int listLength_381=1;
	unsigned char valueList_382[]={0};
	unsigned int listLength_382=1;
	unsigned char valueList_383[]={0};
	unsigned int listLength_383=1;
	unsigned char valueList_384[]={0};
	unsigned int listLength_384=1;
	char valueList_385[]={0};
	unsigned int listLength_385=1;
	char valueList_386[]={0};
	unsigned int listLength_386=1;
	char valueList_387[]={0};
	unsigned int listLength_387=1;
	char valueList_388[]={0};
	unsigned int listLength_388=1;
	char valueList_389[]={0};
	unsigned int listLength_389=1;
	char valueList_390[]={0};
	unsigned int listLength_390=1;
	unsigned char valueList_391[]={0};
	unsigned int listLength_391=1;
	unsigned char valueList_392[]={0};
	unsigned int listLength_392=1;
	unsigned char valueList_393[]={0};
	unsigned int listLength_393=1;
	unsigned char valueList_394[]={0};
	unsigned int listLength_394=1;
	unsigned char valueList_395[]={0};
	unsigned int listLength_395=1;
	unsigned char valueList_396[]={0};
	unsigned int listLength_396=1;
	char valueList_397[]={0};
	unsigned int listLength_397=1;
	char valueList_398[]={0};
	unsigned int listLength_398=1;
	char valueList_399[]={0};
	unsigned int listLength_399=1;
	char valueList_400[]={0};
	unsigned int listLength_400=1;
	char valueList_401[]={0};
	unsigned int listLength_401=1;
	char valueList_402[]={0};
	unsigned int listLength_402=1;
	unsigned char valueList_403[]={0};
	unsigned int listLength_403=1;
	unsigned char valueList_404[]={0};
	unsigned int listLength_404=1;
	unsigned char valueList_405[]={0};
	unsigned int listLength_405=1;
	char valueList_406[]={0};
	unsigned int listLength_406=1;
	char valueList_407[]={0};
	unsigned int listLength_407=1;
	char valueList_408[]={0};
	unsigned int listLength_408=1;
	char valueList_409[]={0};
	unsigned int listLength_409=1;
	char valueList_410[]={0};
	unsigned int listLength_410=1;
	unsigned char valueList_411[]={0};
	unsigned int listLength_411=1;
	char valueList_412[]={0};
	unsigned int listLength_412=1;
	unsigned char valueList_413[]={0};
	unsigned int listLength_413=1;
	unsigned char valueList_414[]={0};
	unsigned int listLength_414=1;
	char valueList_415[]={0};
	unsigned int listLength_415=1;
	char valueList_416[]={0};
	unsigned int listLength_416=1;
	char valueList_417[]={0};
	unsigned int listLength_417=1;
	char valueList_418[]={0};
	unsigned int listLength_418=1;
	char valueList_419[]={0};
	unsigned int listLength_419=1;
	unsigned char valueList_420[]={0};
	unsigned int listLength_420=1;
	unsigned char valueList_421[]={0};
	unsigned int listLength_421=1;
	unsigned char valueList_422[]={0};
	unsigned int listLength_422=1;
	unsigned char valueList_423[]={0};
	unsigned int listLength_423=1;
	unsigned char valueList_424[]={0};
	unsigned int listLength_424=1;
	char valueList_425[]={0};
	unsigned int listLength_425=1;
	char valueList_426[]={0};
	unsigned int listLength_426=1;
	char valueList_427[]={0};
	unsigned int listLength_427=1;
	unsigned char valueList_428[]={0};
	unsigned int listLength_428=1;
	char valueList_429[]={0};
	unsigned int listLength_429=1;
	unsigned char valueList_430[]={0};
	unsigned int listLength_430=1;
	char valueList_431[]={0};
	unsigned int listLength_431=1;
	char valueList_432[]={0};
	unsigned int listLength_432=1;
	char valueList_433[]={0};
	unsigned int listLength_433=1;
	char valueList_434[]={0};
	unsigned int listLength_434=1;
	char valueList_435[]={0};
	unsigned int listLength_435=1;
	char valueList_436[]={0};
	unsigned int listLength_436=1;
	char valueList_437[]={0};
	unsigned int listLength_437=1;
	unsigned char valueList_438[]={0};
	unsigned int listLength_438=1;
	unsigned char valueList_439[]={0};
	unsigned int listLength_439=1;
	unsigned char valueList_440[]={0};
	unsigned int listLength_440=1;
	unsigned char valueList_441[]={0};
	unsigned int listLength_441=1;
	char valueList_442[]={0};
	unsigned int listLength_442=1;
	unsigned char valueList_443[]={0};
	unsigned int listLength_443=1;
	char valueList_444[]={0};
	unsigned int listLength_444=1;
	char valueList_445[]={0};
	unsigned int listLength_445=1;
	char valueList_446[]={0};
	unsigned int listLength_446=1;
	char valueList_447[]={0};
	unsigned int listLength_447=1;
	char valueList_448[]={0};
	unsigned int listLength_448=1;
	char valueList_449[]={0};
	unsigned int listLength_449=1;
	char valueList_450[]={0};
	unsigned int listLength_450=1;
	unsigned char valueList_451[]={0};
	unsigned int listLength_451=1;
	unsigned char valueList_452[]={0};
	unsigned int listLength_452=1;
	unsigned char valueList_453[]={0};
	unsigned int listLength_453=1;
	unsigned char valueList_454[]={0};
	unsigned int listLength_454=1;
	unsigned char valueList_455[]={0};
	unsigned int listLength_455=1;
	char valueList_456[]={0};
	unsigned int listLength_456=1;
	unsigned char valueList_457[]={0};
	unsigned int listLength_457=1;
	char valueList_458[]={0};
	unsigned int listLength_458=1;
	char valueList_459[]={0};
	unsigned int listLength_459=1;
	char valueList_460[]={0};
	unsigned int listLength_460=1;
	char valueList_461[]={0};
	unsigned int listLength_461=1;
	char valueList_462[]={0};
	unsigned int listLength_462=1;
	char valueList_463[]={0};
	unsigned int listLength_463=1;
	char valueList_464[]={0};
	unsigned int listLength_464=1;
	char valueList_465[]={0};
	unsigned int listLength_465=1;
	char valueList_466[]={0};
	unsigned int listLength_466=1;
	unsigned char valueList_467[]={0};
	unsigned int listLength_467=1;
	char valueList_468[]={0};
	unsigned int listLength_468=1;
	char valueList_469[]={0};
	unsigned int listLength_469=1;
	unsigned char valueList_470[]={0};
	unsigned int listLength_470=1;
	unsigned char valueList_471[]={0};
	unsigned int listLength_471=1;
	unsigned char valueList_472[]={0};
	unsigned int listLength_472=1;
	unsigned char valueList_473[]={0};
	unsigned int listLength_473=1;
	char valueList_474[]={0};
	unsigned int listLength_474=1;
	char valueList_475[]={0};
	unsigned int listLength_475=1;
	char valueList_476[]={0};
	unsigned int listLength_476=1;
	char valueList_477[]={0};
	unsigned int listLength_477=1;
	char valueList_478[]={0};
	unsigned int listLength_478=1;
	char valueList_479[]={0};
	unsigned int listLength_479=1;
	char valueList_480[]={0};
	unsigned int listLength_480=1;
	unsigned char valueList_481[]={0};
	unsigned int listLength_481=1;
	char valueList_482[]={0};
	unsigned int listLength_482=1;
	unsigned char valueList_483[]={0};
	unsigned int listLength_483=1;
	unsigned char valueList_484[]={0};
	unsigned int listLength_484=1;
	unsigned char valueList_485[]={0};
	unsigned int listLength_485=1;
	unsigned char valueList_486[]={0};
	unsigned int listLength_486=1;
	char valueList_487[]={0};
	unsigned int listLength_487=1;
	char valueList_488[]={0};
	unsigned int listLength_488=1;
	char valueList_489[]={0};
	unsigned int listLength_489=1;
	char valueList_490[]={0};
	unsigned int listLength_490=1;
	char valueList_491[]={0};
	unsigned int listLength_491=1;
	char valueList_492[]={0};
	unsigned int listLength_492=1;
	unsigned char valueList_493[]={0};
	unsigned int listLength_493=1;
	char valueList_494[]={0};
	unsigned int listLength_494=1;
	unsigned char valueList_495[]={0};
	unsigned int listLength_495=1;
	unsigned char valueList_496[]={0};
	unsigned int listLength_496=1;
	unsigned char valueList_497[]={0};
	unsigned int listLength_497=1;
	char valueList_498[]={0};
	unsigned int listLength_498=1;
	unsigned char valueList_499[]={0};
	unsigned int listLength_499=1;
	unsigned char valueList_500[]={0};
	unsigned int listLength_500=1;
	char valueList_501[]={0};
	unsigned int listLength_501=1;
	char valueList_502[]={0};
	unsigned int listLength_502=1;
	char valueList_503[]={0};
	unsigned int listLength_503=1;
	char valueList_504[]={0};
	unsigned int listLength_504=1;
	unsigned char valueList_505[]={0};
	unsigned int listLength_505=1;
	char valueList_506[]={0};
	unsigned int listLength_506=1;
	unsigned char valueList_507[]={0};
	unsigned int listLength_507=1;
	unsigned char valueList_508[]={0};
	unsigned int listLength_508=1;
	unsigned char valueList_509[]={0};
	unsigned int listLength_509=1;
	char valueList_510[]={0};
	unsigned int listLength_510=1;
	unsigned char valueList_511[]={0};
	unsigned int listLength_511=1;
	unsigned char valueList_512[]={0};
	unsigned int listLength_512=1;
	char valueList_513[]={0};
	unsigned int listLength_513=1;
	char valueList_514[]={0};
	unsigned int listLength_514=1;
	char valueList_515[]={0};
	unsigned int listLength_515=1;
	unsigned char valueList_516[]={'\x80'};
	unsigned int listLength_516=1;
	unsigned char valueList_517[]={'\xbf'};
	unsigned int listLength_517=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	unsigned char useLast_15=0;
	unsigned char useLast_16=0;
	unsigned char useLast_17=0;
	unsigned char useLast_18=0;
	unsigned char useLast_19=0;
	unsigned char useLast_20=0;
	unsigned char useLast_21=0;
	unsigned char useLast_22=0;
	unsigned char useLast_23=0;
	unsigned char useLast_24=0;
	unsigned char useLast_25=0;
	unsigned char useLast_26=0;
	unsigned char useLast_27=0;
	unsigned char useLast_28=0;
	unsigned char useLast_29=0;
	unsigned char useLast_30=0;
	unsigned char useLast_31=0;
	unsigned char useLast_32=0;
	unsigned char useLast_33=0;
	unsigned char useLast_34=0;
	unsigned char useLast_35=0;
	unsigned char useLast_36=0;
	unsigned char useLast_37=0;
	unsigned char useLast_38=0;
	unsigned char useLast_39=0;
	unsigned char useLast_40=0;
	unsigned char useLast_41=0;
	unsigned char useLast_42=0;
	unsigned char useLast_43=0;
	unsigned char useLast_44=0;
	unsigned char useLast_45=0;
	unsigned char useLast_46=0;
	unsigned char useLast_47=0;
	unsigned char useLast_48=0;
	unsigned char useLast_49=0;
	unsigned char useLast_50=0;
	unsigned char useLast_51=0;
	unsigned char useLast_52=0;
	unsigned char useLast_53=0;
	unsigned char useLast_54=0;
	unsigned char useLast_55=0;
	unsigned char useLast_56=0;
	unsigned char useLast_57=0;
	unsigned char useLast_58=0;
	unsigned char useLast_59=0;
	unsigned char useLast_60=0;
	unsigned char useLast_61=0;
	unsigned char useLast_62=0;
	unsigned char useLast_63=0;
	unsigned char useLast_64=0;
	unsigned char useLast_65=0;
	unsigned char useLast_66=0;
	unsigned char useLast_67=0;
	unsigned char useLast_68=0;
	unsigned char useLast_69=0;
	unsigned char useLast_70=0;
	unsigned char useLast_71=0;
	unsigned char useLast_72=0;
	unsigned char useLast_73=0;
	unsigned char useLast_74=0;
	unsigned char useLast_75=0;
	unsigned char useLast_76=0;
	unsigned char useLast_77=0;
	unsigned char useLast_78=0;
	unsigned char useLast_79=0;
	unsigned char useLast_80=0;
	unsigned char useLast_81=0;
	unsigned char useLast_82=0;
	unsigned char useLast_83=0;
	unsigned char useLast_84=0;
	unsigned char useLast_85=0;
	unsigned char useLast_86=0;
	unsigned char useLast_87=0;
	unsigned char useLast_88=0;
	unsigned char useLast_89=0;
	unsigned char useLast_90=0;
	unsigned char useLast_91=0;
	unsigned char useLast_92=0;
	unsigned char useLast_93=0;
	unsigned char useLast_94=0;
	unsigned char useLast_95=0;
	unsigned char useLast_96=0;
	unsigned char useLast_97=0;
	unsigned char useLast_98=0;
	unsigned char useLast_99=0;
	unsigned char useLast_100=0;
	unsigned char useLast_101=0;
	unsigned char useLast_102=0;
	unsigned char useLast_103=0;
	unsigned char useLast_104=0;
	unsigned char useLast_105=0;
	unsigned char useLast_106=0;
	unsigned char useLast_107=0;
	unsigned char useLast_108=0;
	unsigned char useLast_109=0;
	unsigned char useLast_110=0;
	unsigned char useLast_111=0;
	unsigned char useLast_112=0;
	unsigned char useLast_113=0;
	unsigned char useLast_114=0;
	unsigned char useLast_115=0;
	unsigned char useLast_116=0;
	unsigned char useLast_117=0;
	unsigned char useLast_118=0;
	unsigned char useLast_119=0;
	unsigned char useLast_120=0;
	unsigned char useLast_121=0;
	unsigned char useLast_122=0;
	unsigned char useLast_123=0;
	unsigned char useLast_124=0;
	unsigned char useLast_125=0;
	unsigned char useLast_126=0;
	unsigned char useLast_127=0;
	unsigned char useLast_128=0;
	unsigned char useLast_129=0;
	unsigned char useLast_130=0;
	unsigned char useLast_131=0;
	unsigned char useLast_132=0;
	unsigned char useLast_133=0;
	unsigned char useLast_134=0;
	unsigned char useLast_135=0;
	unsigned char useLast_136=0;
	unsigned char useLast_137=0;
	unsigned char useLast_138=0;
	unsigned char useLast_139=0;
	unsigned char useLast_140=0;
	unsigned char useLast_141=0;
	unsigned char useLast_142=0;
	unsigned char useLast_143=0;
	unsigned char useLast_144=0;
	unsigned char useLast_145=0;
	unsigned char useLast_146=0;
	unsigned char useLast_147=0;
	unsigned char useLast_148=0;
	unsigned char useLast_149=0;
	unsigned char useLast_150=0;
	unsigned char useLast_151=0;
	unsigned char useLast_152=0;
	unsigned char useLast_153=0;
	unsigned char useLast_154=0;
	unsigned char useLast_155=0;
	unsigned char useLast_156=0;
	unsigned char useLast_157=0;
	unsigned char useLast_158=0;
	unsigned char useLast_159=0;
	unsigned char useLast_160=0;
	unsigned char useLast_161=0;
	unsigned char useLast_162=0;
	unsigned char useLast_163=0;
	unsigned char useLast_164=0;
	unsigned char useLast_165=0;
	unsigned char useLast_166=0;
	unsigned char useLast_167=0;
	unsigned char useLast_168=0;
	unsigned char useLast_169=0;
	unsigned char useLast_170=0;
	unsigned char useLast_171=0;
	unsigned char useLast_172=0;
	unsigned char useLast_173=0;
	unsigned char useLast_174=0;
	unsigned char useLast_175=0;
	unsigned char useLast_176=0;
	unsigned char useLast_177=0;
	unsigned char useLast_178=0;
	unsigned char useLast_179=0;
	unsigned char useLast_180=0;
	unsigned char useLast_181=0;
	unsigned char useLast_182=0;
	unsigned char useLast_183=0;
	unsigned char useLast_184=0;
	unsigned char useLast_185=0;
	unsigned char useLast_186=0;
	unsigned char useLast_187=0;
	unsigned char useLast_188=0;
	unsigned char useLast_189=0;
	unsigned char useLast_190=0;
	unsigned char useLast_191=0;
	unsigned char useLast_192=0;
	unsigned char useLast_193=0;
	unsigned char useLast_194=0;
	unsigned char useLast_195=0;
	unsigned char useLast_196=0;
	unsigned char useLast_197=0;
	unsigned char useLast_198=0;
	unsigned char useLast_199=0;
	unsigned char useLast_200=0;
	unsigned char useLast_201=0;
	unsigned char useLast_202=0;
	unsigned char useLast_203=0;
	unsigned char useLast_204=0;
	unsigned char useLast_205=0;
	unsigned char useLast_206=0;
	unsigned char useLast_207=0;
	unsigned char useLast_208=0;
	unsigned char useLast_209=0;
	unsigned char useLast_210=0;
	unsigned char useLast_211=0;
	unsigned char useLast_212=0;
	unsigned char useLast_213=0;
	unsigned char useLast_214=0;
	unsigned char useLast_215=0;
	unsigned char useLast_216=0;
	unsigned char useLast_217=0;
	unsigned char useLast_218=0;
	unsigned char useLast_219=0;
	unsigned char useLast_220=0;
	unsigned char useLast_221=0;
	unsigned char useLast_222=0;
	unsigned char useLast_223=0;
	unsigned char useLast_224=0;
	unsigned char useLast_225=0;
	unsigned char useLast_226=0;
	unsigned char useLast_227=0;
	unsigned char useLast_228=0;
	unsigned char useLast_229=0;
	unsigned char useLast_230=0;
	unsigned char useLast_231=0;
	unsigned char useLast_232=0;
	unsigned char useLast_233=0;
	unsigned char useLast_234=0;
	unsigned char useLast_235=0;
	unsigned char useLast_236=0;
	unsigned char useLast_237=0;
	unsigned char useLast_238=0;
	unsigned char useLast_239=0;
	unsigned char useLast_240=0;
	unsigned char useLast_241=0;
	unsigned char useLast_242=0;
	unsigned char useLast_243=0;
	unsigned char useLast_244=0;
	unsigned char useLast_245=0;
	unsigned char useLast_246=0;
	unsigned char useLast_247=0;
	unsigned char useLast_248=0;
	unsigned char useLast_249=0;
	unsigned char useLast_250=0;
	unsigned char useLast_251=0;
	unsigned char useLast_252=0;
	unsigned char useLast_253=0;
	unsigned char useLast_254=0;
	unsigned char useLast_255=0;
	unsigned char useLast_256=0;
	unsigned char useLast_257=0;
	unsigned char useLast_258=0;
	unsigned char useLast_259=0;
	unsigned char useLast_260=0;
	unsigned char useLast_261=0;
	unsigned char useLast_262=0;
	unsigned char useLast_263=0;
	unsigned char useLast_264=0;
	unsigned char useLast_265=0;
	unsigned char useLast_266=0;
	unsigned char useLast_267=0;
	unsigned char useLast_268=0;
	unsigned char useLast_269=0;
	unsigned char useLast_270=0;
	unsigned char useLast_271=0;
	unsigned char useLast_272=0;
	unsigned char useLast_273=0;
	unsigned char useLast_274=0;
	unsigned char useLast_275=0;
	unsigned char useLast_276=0;
	unsigned char useLast_277=0;
	unsigned char useLast_278=0;
	unsigned char useLast_279=0;
	unsigned char useLast_280=0;
	unsigned char useLast_281=0;
	unsigned char useLast_282=0;
	unsigned char useLast_283=0;
	unsigned char useLast_284=0;
	unsigned char useLast_285=0;
	unsigned char useLast_286=0;
	unsigned char useLast_287=0;
	unsigned char useLast_288=0;
	unsigned char useLast_289=0;
	unsigned char useLast_290=0;
	unsigned char useLast_291=0;
	unsigned char useLast_292=0;
	unsigned char useLast_293=0;
	unsigned char useLast_294=0;
	unsigned char useLast_295=0;
	unsigned char useLast_296=0;
	unsigned char useLast_297=0;
	unsigned char useLast_298=0;
	unsigned char useLast_299=0;
	unsigned char useLast_300=0;
	unsigned char useLast_301=0;
	unsigned char useLast_302=0;
	unsigned char useLast_303=0;
	unsigned char useLast_304=0;
	unsigned char useLast_305=0;
	unsigned char useLast_306=0;
	unsigned char useLast_307=0;
	unsigned char useLast_308=0;
	unsigned char useLast_309=0;
	unsigned char useLast_310=0;
	unsigned char useLast_311=0;
	unsigned char useLast_312=0;
	unsigned char useLast_313=0;
	unsigned char useLast_314=0;
	unsigned char useLast_315=0;
	unsigned char useLast_316=0;
	unsigned char useLast_317=0;
	unsigned char useLast_318=0;
	unsigned char useLast_319=0;
	unsigned char useLast_320=0;
	unsigned char useLast_321=0;
	unsigned char useLast_322=0;
	unsigned char useLast_323=0;
	unsigned char useLast_324=0;
	unsigned char useLast_325=0;
	unsigned char useLast_326=0;
	unsigned char useLast_327=0;
	unsigned char useLast_328=0;
	unsigned char useLast_329=0;
	unsigned char useLast_330=0;
	unsigned char useLast_331=0;
	unsigned char useLast_332=0;
	unsigned char useLast_333=0;
	unsigned char useLast_334=0;
	unsigned char useLast_335=0;
	unsigned char useLast_336=0;
	unsigned char useLast_337=0;
	unsigned char useLast_338=0;
	unsigned char useLast_339=0;
	unsigned char useLast_340=0;
	unsigned char useLast_341=0;
	unsigned char useLast_342=0;
	unsigned char useLast_343=0;
	unsigned char useLast_344=0;
	unsigned char useLast_345=0;
	unsigned char useLast_346=0;
	unsigned char useLast_347=0;
	unsigned char useLast_348=0;
	unsigned char useLast_349=0;
	unsigned char useLast_350=0;
	unsigned char useLast_351=0;
	unsigned char useLast_352=0;
	unsigned char useLast_353=0;
	unsigned char useLast_354=0;
	unsigned char useLast_355=0;
	unsigned char useLast_356=0;
	unsigned char useLast_357=0;
	unsigned char useLast_358=0;
	unsigned char useLast_359=0;
	unsigned char useLast_360=0;
	unsigned char useLast_361=0;
	unsigned char useLast_362=0;
	unsigned char useLast_363=0;
	unsigned char useLast_364=0;
	unsigned char useLast_365=0;
	unsigned char useLast_366=0;
	unsigned char useLast_367=0;
	unsigned char useLast_368=0;
	unsigned char useLast_369=0;
	unsigned char useLast_370=0;
	unsigned char useLast_371=0;
	unsigned char useLast_372=0;
	unsigned char useLast_373=0;
	unsigned char useLast_374=0;
	unsigned char useLast_375=0;
	unsigned char useLast_376=0;
	unsigned char useLast_377=0;
	unsigned char useLast_378=0;
	unsigned char useLast_379=0;
	unsigned char useLast_380=0;
	unsigned char useLast_381=0;
	unsigned char useLast_382=0;
	unsigned char useLast_383=0;
	unsigned char useLast_384=0;
	unsigned char useLast_385=0;
	unsigned char useLast_386=0;
	unsigned char useLast_387=0;
	unsigned char useLast_388=0;
	unsigned char useLast_389=0;
	unsigned char useLast_390=0;
	unsigned char useLast_391=0;
	unsigned char useLast_392=0;
	unsigned char useLast_393=0;
	unsigned char useLast_394=0;
	unsigned char useLast_395=0;
	unsigned char useLast_396=0;
	unsigned char useLast_397=0;
	unsigned char useLast_398=0;
	unsigned char useLast_399=0;
	unsigned char useLast_400=0;
	unsigned char useLast_401=0;
	unsigned char useLast_402=0;
	unsigned char useLast_403=0;
	unsigned char useLast_404=0;
	unsigned char useLast_405=0;
	unsigned char useLast_406=0;
	unsigned char useLast_407=0;
	unsigned char useLast_408=0;
	unsigned char useLast_409=0;
	unsigned char useLast_410=0;
	unsigned char useLast_411=0;
	unsigned char useLast_412=0;
	unsigned char useLast_413=0;
	unsigned char useLast_414=0;
	unsigned char useLast_415=0;
	unsigned char useLast_416=0;
	unsigned char useLast_417=0;
	unsigned char useLast_418=0;
	unsigned char useLast_419=0;
	unsigned char useLast_420=0;
	unsigned char useLast_421=0;
	unsigned char useLast_422=0;
	unsigned char useLast_423=0;
	unsigned char useLast_424=0;
	unsigned char useLast_425=0;
	unsigned char useLast_426=0;
	unsigned char useLast_427=0;
	unsigned char useLast_428=0;
	unsigned char useLast_429=0;
	unsigned char useLast_430=0;
	unsigned char useLast_431=0;
	unsigned char useLast_432=0;
	unsigned char useLast_433=0;
	unsigned char useLast_434=0;
	unsigned char useLast_435=0;
	unsigned char useLast_436=0;
	unsigned char useLast_437=0;
	unsigned char useLast_438=0;
	unsigned char useLast_439=0;
	unsigned char useLast_440=0;
	unsigned char useLast_441=0;
	unsigned char useLast_442=0;
	unsigned char useLast_443=0;
	unsigned char useLast_444=0;
	unsigned char useLast_445=0;
	unsigned char useLast_446=0;
	unsigned char useLast_447=0;
	unsigned char useLast_448=0;
	unsigned char useLast_449=0;
	unsigned char useLast_450=0;
	unsigned char useLast_451=0;
	unsigned char useLast_452=0;
	unsigned char useLast_453=0;
	unsigned char useLast_454=0;
	unsigned char useLast_455=0;
	unsigned char useLast_456=0;
	unsigned char useLast_457=0;
	unsigned char useLast_458=0;
	unsigned char useLast_459=0;
	unsigned char useLast_460=0;
	unsigned char useLast_461=0;
	unsigned char useLast_462=0;
	unsigned char useLast_463=0;
	unsigned char useLast_464=0;
	unsigned char useLast_465=0;
	unsigned char useLast_466=0;
	unsigned char useLast_467=0;
	unsigned char useLast_468=0;
	unsigned char useLast_469=0;
	unsigned char useLast_470=0;
	unsigned char useLast_471=0;
	unsigned char useLast_472=0;
	unsigned char useLast_473=0;
	unsigned char useLast_474=0;
	unsigned char useLast_475=0;
	unsigned char useLast_476=0;
	unsigned char useLast_477=0;
	unsigned char useLast_478=0;
	unsigned char useLast_479=0;
	unsigned char useLast_480=0;
	unsigned char useLast_481=0;
	unsigned char useLast_482=0;
	unsigned char useLast_483=0;
	unsigned char useLast_484=0;
	unsigned char useLast_485=0;
	unsigned char useLast_486=0;
	unsigned char useLast_487=0;
	unsigned char useLast_488=0;
	unsigned char useLast_489=0;
	unsigned char useLast_490=0;
	unsigned char useLast_491=0;
	unsigned char useLast_492=0;
	unsigned char useLast_493=0;
	unsigned char useLast_494=0;
	unsigned char useLast_495=0;
	unsigned char useLast_496=0;
	unsigned char useLast_497=0;
	unsigned char useLast_498=0;
	unsigned char useLast_499=0;
	unsigned char useLast_500=0;
	unsigned char useLast_501=0;
	unsigned char useLast_502=0;
	unsigned char useLast_503=0;
	unsigned char useLast_504=0;
	unsigned char useLast_505=0;
	unsigned char useLast_506=0;
	unsigned char useLast_507=0;
	unsigned char useLast_508=0;
	unsigned char useLast_509=0;
	unsigned char useLast_510=0;
	unsigned char useLast_511=0;
	unsigned char useLast_512=0;
	unsigned char useLast_513=0;
	unsigned char useLast_514=0;
	unsigned char useLast_515=0;
	unsigned char useLast_516=0;
	unsigned char useLast_517=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=11;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_file_looks_utf8_11,false,0\n");
	aunit_printf("#CASE_START_test_file_looks_utf8_11\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ulen=(size_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ubuf=(file_unichar_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			nbytes=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			buf=(unsigned char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			text_chars[189]=(char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			text_chars[177]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			first[167]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			first[155]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			first[179]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			text_chars[141]=(char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			text_chars[153]=(char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			first[240]=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			text_chars[165]=(char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			first[143]=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			first[252]=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			first[131]=(unsigned char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			first[1]=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			text_chars[140]=(char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			first[0]=(unsigned char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			text_chars[178]=(char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			first[156]=(unsigned char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			first[144]=(unsigned char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			text_chars[251]=(char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			first[168]=(unsigned char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			text_chars[130]=(char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			text_chars[142]=(char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			text_chars[154]=(char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			first[132]=(unsigned char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			first[241]=(unsigned char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			text_chars[166]=(char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			first[120]=(unsigned char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			first[253]=(unsigned char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			text_chars[250]=(char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			text_chars[90]=(char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			text_chars[179]=(char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			first[145]=(unsigned char)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			first[254]=(unsigned char)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			first[133]=(unsigned char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			text_chars[252]=(char)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			first[169]=(unsigned char)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			text_chars[240]=(char)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			first[157]=(unsigned char)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			text_chars[131]=(char)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			text_chars[143]=(char)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			first[121]=(unsigned char)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			first[230]=(unsigned char)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			text_chars[155]=(char)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			first[242]=(unsigned char)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			text_chars[167]=(char)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		if(aUnItCoUnTeR<listLength_49 || useLast_49){
			first[3]=(unsigned char)valueList_49[aUnItCoUnTeR<listLength_49?aUnItCoUnTeR:listLength_49-1];

		}
		if(aUnItCoUnTeR<listLength_50 || useLast_50){
			text_chars[91]=(char)valueList_50[aUnItCoUnTeR<listLength_50?aUnItCoUnTeR:listLength_50-1];

		}
		if(aUnItCoUnTeR<listLength_51 || useLast_51){
			first[19]=(unsigned char)valueList_51[aUnItCoUnTeR<listLength_51?aUnItCoUnTeR:listLength_51-1];

		}
		if(aUnItCoUnTeR<listLength_52 || useLast_52){
			first[134]=(unsigned char)valueList_52[aUnItCoUnTeR<listLength_52?aUnItCoUnTeR:listLength_52-1];

		}
		if(aUnItCoUnTeR<listLength_53 || useLast_53){
			first[243]=(unsigned char)valueList_53[aUnItCoUnTeR<listLength_53?aUnItCoUnTeR:listLength_53-1];

		}
		if(aUnItCoUnTeR<listLength_54 || useLast_54){
			text_chars[253]=(char)valueList_54[aUnItCoUnTeR<listLength_54?aUnItCoUnTeR:listLength_54-1];

		}
		if(aUnItCoUnTeR<listLength_55 || useLast_55){
			first[122]=(unsigned char)valueList_55[aUnItCoUnTeR<listLength_55?aUnItCoUnTeR:listLength_55-1];

		}
		if(aUnItCoUnTeR<listLength_56 || useLast_56){
			first[255]=(unsigned char)valueList_56[aUnItCoUnTeR<listLength_56?aUnItCoUnTeR:listLength_56-1];

		}
		if(aUnItCoUnTeR<listLength_57 || useLast_57){
			text_chars[241]=(char)valueList_57[aUnItCoUnTeR<listLength_57?aUnItCoUnTeR:listLength_57-1];

		}
		if(aUnItCoUnTeR<listLength_58 || useLast_58){
			first[158]=(unsigned char)valueList_58[aUnItCoUnTeR<listLength_58?aUnItCoUnTeR:listLength_58-1];

		}
		if(aUnItCoUnTeR<listLength_59 || useLast_59){
			first[146]=(unsigned char)valueList_59[aUnItCoUnTeR<listLength_59?aUnItCoUnTeR:listLength_59-1];

		}
		if(aUnItCoUnTeR<listLength_60 || useLast_60){
			text_chars[120]=(char)valueList_60[aUnItCoUnTeR<listLength_60?aUnItCoUnTeR:listLength_60-1];

		}
		if(aUnItCoUnTeR<listLength_61 || useLast_61){
			text_chars[132]=(char)valueList_61[aUnItCoUnTeR<listLength_61?aUnItCoUnTeR:listLength_61-1];

		}
		if(aUnItCoUnTeR<listLength_62 || useLast_62){
			first[110]=(unsigned char)valueList_62[aUnItCoUnTeR<listLength_62?aUnItCoUnTeR:listLength_62-1];

		}
		if(aUnItCoUnTeR<listLength_63 || useLast_63){
			text_chars[144]=(char)valueList_63[aUnItCoUnTeR<listLength_63?aUnItCoUnTeR:listLength_63-1];

		}
		if(aUnItCoUnTeR<listLength_64 || useLast_64){
			first[231]=(unsigned char)valueList_64[aUnItCoUnTeR<listLength_64?aUnItCoUnTeR:listLength_64-1];

		}
		if(aUnItCoUnTeR<listLength_65 || useLast_65){
			text_chars[156]=(char)valueList_65[aUnItCoUnTeR<listLength_65?aUnItCoUnTeR:listLength_65-1];

		}
		if(aUnItCoUnTeR<listLength_66 || useLast_66){
			text_chars[168]=(char)valueList_66[aUnItCoUnTeR<listLength_66?aUnItCoUnTeR:listLength_66-1];

		}
		if(aUnItCoUnTeR<listLength_67 || useLast_67){
			first[2]=(unsigned char)valueList_67[aUnItCoUnTeR<listLength_67?aUnItCoUnTeR:listLength_67-1];

		}
		if(aUnItCoUnTeR<listLength_68 || useLast_68){
			text_chars[80]=(char)valueList_68[aUnItCoUnTeR<listLength_68?aUnItCoUnTeR:listLength_68-1];

		}
		if(aUnItCoUnTeR<listLength_69 || useLast_69){
			text_chars[92]=(char)valueList_69[aUnItCoUnTeR<listLength_69?aUnItCoUnTeR:listLength_69-1];

		}
		if(aUnItCoUnTeR<listLength_70 || useLast_70){
			first[18]=(unsigned char)valueList_70[aUnItCoUnTeR<listLength_70?aUnItCoUnTeR:listLength_70-1];

		}
		if(aUnItCoUnTeR<listLength_71 || useLast_71){
			first[159]=(unsigned char)valueList_71[aUnItCoUnTeR<listLength_71?aUnItCoUnTeR:listLength_71-1];

		}
		if(aUnItCoUnTeR<listLength_72 || useLast_72){
			text_chars[254]=(char)valueList_72[aUnItCoUnTeR<listLength_72?aUnItCoUnTeR:listLength_72-1];

		}
		if(aUnItCoUnTeR<listLength_73 || useLast_73){
			first[123]=(unsigned char)valueList_73[aUnItCoUnTeR<listLength_73?aUnItCoUnTeR:listLength_73-1];

		}
		if(aUnItCoUnTeR<listLength_74 || useLast_74){
			first[232]=(unsigned char)valueList_74[aUnItCoUnTeR<listLength_74?aUnItCoUnTeR:listLength_74-1];

		}
		if(aUnItCoUnTeR<listLength_75 || useLast_75){
			text_chars[242]=(char)valueList_75[aUnItCoUnTeR<listLength_75?aUnItCoUnTeR:listLength_75-1];

		}
		if(aUnItCoUnTeR<listLength_76 || useLast_76){
			first[111]=(unsigned char)valueList_76[aUnItCoUnTeR<listLength_76?aUnItCoUnTeR:listLength_76-1];

		}
		if(aUnItCoUnTeR<listLength_77 || useLast_77){
			first[244]=(unsigned char)valueList_77[aUnItCoUnTeR<listLength_77?aUnItCoUnTeR:listLength_77-1];

		}
		if(aUnItCoUnTeR<listLength_78 || useLast_78){
			text_chars[230]=(char)valueList_78[aUnItCoUnTeR<listLength_78?aUnItCoUnTeR:listLength_78-1];

		}
		if(aUnItCoUnTeR<listLength_79 || useLast_79){
			first[147]=(unsigned char)valueList_79[aUnItCoUnTeR<listLength_79?aUnItCoUnTeR:listLength_79-1];

		}
		if(aUnItCoUnTeR<listLength_80 || useLast_80){
			first[135]=(unsigned char)valueList_80[aUnItCoUnTeR<listLength_80?aUnItCoUnTeR:listLength_80-1];

		}
		if(aUnItCoUnTeR<listLength_81 || useLast_81){
			text_chars[121]=(char)valueList_81[aUnItCoUnTeR<listLength_81?aUnItCoUnTeR:listLength_81-1];

		}
		if(aUnItCoUnTeR<listLength_82 || useLast_82){
			first[5]=(unsigned char)valueList_82[aUnItCoUnTeR<listLength_82?aUnItCoUnTeR:listLength_82-1];

		}
		if(aUnItCoUnTeR<listLength_83 || useLast_83){
			text_chars[133]=(char)valueList_83[aUnItCoUnTeR<listLength_83?aUnItCoUnTeR:listLength_83-1];

		}
		if(aUnItCoUnTeR<listLength_84 || useLast_84){
			first[220]=(unsigned char)valueList_84[aUnItCoUnTeR<listLength_84?aUnItCoUnTeR:listLength_84-1];

		}
		if(aUnItCoUnTeR<listLength_85 || useLast_85){
			text_chars[145]=(char)valueList_85[aUnItCoUnTeR<listLength_85?aUnItCoUnTeR:listLength_85-1];

		}
		if(aUnItCoUnTeR<listLength_86 || useLast_86){
			text_chars[157]=(char)valueList_86[aUnItCoUnTeR<listLength_86?aUnItCoUnTeR:listLength_86-1];

		}
		if(aUnItCoUnTeR<listLength_87 || useLast_87){
			text_chars[169]=(char)valueList_87[aUnItCoUnTeR<listLength_87?aUnItCoUnTeR:listLength_87-1];

		}
		if(aUnItCoUnTeR<listLength_88 || useLast_88){
			first[29]=(unsigned char)valueList_88[aUnItCoUnTeR<listLength_88?aUnItCoUnTeR:listLength_88-1];

		}
		if(aUnItCoUnTeR<listLength_89 || useLast_89){
			first[17]=(unsigned char)valueList_89[aUnItCoUnTeR<listLength_89?aUnItCoUnTeR:listLength_89-1];

		}
		if(aUnItCoUnTeR<listLength_90 || useLast_90){
			first[148]=(unsigned char)valueList_90[aUnItCoUnTeR<listLength_90?aUnItCoUnTeR:listLength_90-1];

		}
		if(aUnItCoUnTeR<listLength_91 || useLast_91){
			text_chars[255]=(char)valueList_91[aUnItCoUnTeR<listLength_91?aUnItCoUnTeR:listLength_91-1];

		}
		if(aUnItCoUnTeR<listLength_92 || useLast_92){
			text_chars[243]=(char)valueList_92[aUnItCoUnTeR<listLength_92?aUnItCoUnTeR:listLength_92-1];

		}
		if(aUnItCoUnTeR<listLength_93 || useLast_93){
			first[112]=(unsigned char)valueList_93[aUnItCoUnTeR<listLength_93?aUnItCoUnTeR:listLength_93-1];

		}
		if(aUnItCoUnTeR<listLength_94 || useLast_94){
			first[221]=(unsigned char)valueList_94[aUnItCoUnTeR<listLength_94?aUnItCoUnTeR:listLength_94-1];

		}
		if(aUnItCoUnTeR<listLength_95 || useLast_95){
			text_chars[231]=(char)valueList_95[aUnItCoUnTeR<listLength_95?aUnItCoUnTeR:listLength_95-1];

		}
		if(aUnItCoUnTeR<listLength_96 || useLast_96){
			first[100]=(unsigned char)valueList_96[aUnItCoUnTeR<listLength_96?aUnItCoUnTeR:listLength_96-1];

		}
		if(aUnItCoUnTeR<listLength_97 || useLast_97){
			first[233]=(unsigned char)valueList_97[aUnItCoUnTeR<listLength_97?aUnItCoUnTeR:listLength_97-1];

		}
		if(aUnItCoUnTeR<listLength_98 || useLast_98){
			first[136]=(unsigned char)valueList_98[aUnItCoUnTeR<listLength_98?aUnItCoUnTeR:listLength_98-1];

		}
		if(aUnItCoUnTeR<listLength_99 || useLast_99){
			first[245]=(unsigned char)valueList_99[aUnItCoUnTeR<listLength_99?aUnItCoUnTeR:listLength_99-1];

		}
		if(aUnItCoUnTeR<listLength_100 || useLast_100){
			first[124]=(unsigned char)valueList_100[aUnItCoUnTeR<listLength_100?aUnItCoUnTeR:listLength_100-1];

		}
		if(aUnItCoUnTeR<listLength_101 || useLast_101){
			text_chars[110]=(char)valueList_101[aUnItCoUnTeR<listLength_101?aUnItCoUnTeR:listLength_101-1];

		}
		if(aUnItCoUnTeR<listLength_102 || useLast_102){
			text_chars[122]=(char)valueList_102[aUnItCoUnTeR<listLength_102?aUnItCoUnTeR:listLength_102-1];

		}
		if(aUnItCoUnTeR<listLength_103 || useLast_103){
			text_chars[134]=(char)valueList_103[aUnItCoUnTeR<listLength_103?aUnItCoUnTeR:listLength_103-1];

		}
		if(aUnItCoUnTeR<listLength_104 || useLast_104){
			text_chars[146]=(char)valueList_104[aUnItCoUnTeR<listLength_104?aUnItCoUnTeR:listLength_104-1];

		}
		if(aUnItCoUnTeR<listLength_105 || useLast_105){
			first[4]=(unsigned char)valueList_105[aUnItCoUnTeR<listLength_105?aUnItCoUnTeR:listLength_105-1];

		}
		if(aUnItCoUnTeR<listLength_106 || useLast_106){
			text_chars[158]=(char)valueList_106[aUnItCoUnTeR<listLength_106?aUnItCoUnTeR:listLength_106-1];

		}
		if(aUnItCoUnTeR<listLength_107 || useLast_107){
			first[28]=(unsigned char)valueList_107[aUnItCoUnTeR<listLength_107?aUnItCoUnTeR:listLength_107-1];

		}
		if(aUnItCoUnTeR<listLength_108 || useLast_108){
			first[16]=(unsigned char)valueList_108[aUnItCoUnTeR<listLength_108?aUnItCoUnTeR:listLength_108-1];

		}
		if(aUnItCoUnTeR<listLength_109 || useLast_109){
			first[149]=(unsigned char)valueList_109[aUnItCoUnTeR<listLength_109?aUnItCoUnTeR:listLength_109-1];

		}
		if(aUnItCoUnTeR<listLength_110 || useLast_110){
			first[137]=(unsigned char)valueList_110[aUnItCoUnTeR<listLength_110?aUnItCoUnTeR:listLength_110-1];

		}
		if(aUnItCoUnTeR<listLength_111 || useLast_111){
			text_chars[244]=(char)valueList_111[aUnItCoUnTeR<listLength_111?aUnItCoUnTeR:listLength_111-1];

		}
		if(aUnItCoUnTeR<listLength_112 || useLast_112){
			text_chars[232]=(char)valueList_112[aUnItCoUnTeR<listLength_112?aUnItCoUnTeR:listLength_112-1];

		}
		if(aUnItCoUnTeR<listLength_113 || useLast_113){
			first[101]=(unsigned char)valueList_113[aUnItCoUnTeR<listLength_113?aUnItCoUnTeR:listLength_113-1];

		}
		if(aUnItCoUnTeR<listLength_114 || useLast_114){
			first[210]=(unsigned char)valueList_114[aUnItCoUnTeR<listLength_114?aUnItCoUnTeR:listLength_114-1];

		}
		if(aUnItCoUnTeR<listLength_115 || useLast_115){
			text_chars[220]=(char)valueList_115[aUnItCoUnTeR<listLength_115?aUnItCoUnTeR:listLength_115-1];

		}
		if(aUnItCoUnTeR<listLength_116 || useLast_116){
			first[222]=(unsigned char)valueList_116[aUnItCoUnTeR<listLength_116?aUnItCoUnTeR:listLength_116-1];

		}
		if(aUnItCoUnTeR<listLength_117 || useLast_117){
			first[125]=(unsigned char)valueList_117[aUnItCoUnTeR<listLength_117?aUnItCoUnTeR:listLength_117-1];

		}
		if(aUnItCoUnTeR<listLength_118 || useLast_118){
			first[234]=(unsigned char)valueList_118[aUnItCoUnTeR<listLength_118?aUnItCoUnTeR:listLength_118-1];

		}
		if(aUnItCoUnTeR<listLength_119 || useLast_119){
			first[113]=(unsigned char)valueList_119[aUnItCoUnTeR<listLength_119?aUnItCoUnTeR:listLength_119-1];

		}
		if(aUnItCoUnTeR<listLength_120 || useLast_120){
			first[246]=(unsigned char)valueList_120[aUnItCoUnTeR<listLength_120?aUnItCoUnTeR:listLength_120-1];

		}
		if(aUnItCoUnTeR<listLength_121 || useLast_121){
			first[7]=(unsigned char)valueList_121[aUnItCoUnTeR<listLength_121?aUnItCoUnTeR:listLength_121-1];

		}
		if(aUnItCoUnTeR<listLength_122 || useLast_122){
			text_chars[111]=(char)valueList_122[aUnItCoUnTeR<listLength_122?aUnItCoUnTeR:listLength_122-1];

		}
		if(aUnItCoUnTeR<listLength_123 || useLast_123){
			text_chars[123]=(char)valueList_123[aUnItCoUnTeR<listLength_123?aUnItCoUnTeR:listLength_123-1];

		}
		if(aUnItCoUnTeR<listLength_124 || useLast_124){
			text_chars[135]=(char)valueList_124[aUnItCoUnTeR<listLength_124?aUnItCoUnTeR:listLength_124-1];

		}
		if(aUnItCoUnTeR<listLength_125 || useLast_125){
			text_chars[147]=(char)valueList_125[aUnItCoUnTeR<listLength_125?aUnItCoUnTeR:listLength_125-1];

		}
		if(aUnItCoUnTeR<listLength_126 || useLast_126){
			text_chars[159]=(char)valueList_126[aUnItCoUnTeR<listLength_126?aUnItCoUnTeR:listLength_126-1];

		}
		if(aUnItCoUnTeR<listLength_127 || useLast_127){
			first[39]=(unsigned char)valueList_127[aUnItCoUnTeR<listLength_127?aUnItCoUnTeR:listLength_127-1];

		}
		if(aUnItCoUnTeR<listLength_128 || useLast_128){
			first[27]=(unsigned char)valueList_128[aUnItCoUnTeR<listLength_128?aUnItCoUnTeR:listLength_128-1];

		}
		if(aUnItCoUnTeR<listLength_129 || useLast_129){
			first[15]=(unsigned char)valueList_129[aUnItCoUnTeR<listLength_129?aUnItCoUnTeR:listLength_129-1];

		}
		if(aUnItCoUnTeR<listLength_130 || useLast_130){
			first[138]=(unsigned char)valueList_130[aUnItCoUnTeR<listLength_130?aUnItCoUnTeR:listLength_130-1];

		}
		if(aUnItCoUnTeR<listLength_131 || useLast_131){
			first[247]=(unsigned char)valueList_131[aUnItCoUnTeR<listLength_131?aUnItCoUnTeR:listLength_131-1];

		}
		if(aUnItCoUnTeR<listLength_132 || useLast_132){
			first[126]=(unsigned char)valueList_132[aUnItCoUnTeR<listLength_132?aUnItCoUnTeR:listLength_132-1];

		}
		if(aUnItCoUnTeR<listLength_133 || useLast_133){
			text_chars[245]=(char)valueList_133[aUnItCoUnTeR<listLength_133?aUnItCoUnTeR:listLength_133-1];

		}
		if(aUnItCoUnTeR<listLength_134 || useLast_134){
			text_chars[233]=(char)valueList_134[aUnItCoUnTeR<listLength_134?aUnItCoUnTeR:listLength_134-1];

		}
		if(aUnItCoUnTeR<listLength_135 || useLast_135){
			text_chars[221]=(char)valueList_135[aUnItCoUnTeR<listLength_135?aUnItCoUnTeR:listLength_135-1];

		}
		if(aUnItCoUnTeR<listLength_136 || useLast_136){
			first[211]=(unsigned char)valueList_136[aUnItCoUnTeR<listLength_136?aUnItCoUnTeR:listLength_136-1];

		}
		if(aUnItCoUnTeR<listLength_137 || useLast_137){
			first[114]=(unsigned char)valueList_137[aUnItCoUnTeR<listLength_137?aUnItCoUnTeR:listLength_137-1];

		}
		if(aUnItCoUnTeR<listLength_138 || useLast_138){
			first[223]=(unsigned char)valueList_138[aUnItCoUnTeR<listLength_138?aUnItCoUnTeR:listLength_138-1];

		}
		if(aUnItCoUnTeR<listLength_139 || useLast_139){
			first[102]=(unsigned char)valueList_139[aUnItCoUnTeR<listLength_139?aUnItCoUnTeR:listLength_139-1];

		}
		if(aUnItCoUnTeR<listLength_140 || useLast_140){
			first[235]=(unsigned char)valueList_140[aUnItCoUnTeR<listLength_140?aUnItCoUnTeR:listLength_140-1];

		}
		if(aUnItCoUnTeR<listLength_141 || useLast_141){
			text_chars[100]=(char)valueList_141[aUnItCoUnTeR<listLength_141?aUnItCoUnTeR:listLength_141-1];

		}
		if(aUnItCoUnTeR<listLength_142 || useLast_142){
			first[6]=(unsigned char)valueList_142[aUnItCoUnTeR<listLength_142?aUnItCoUnTeR:listLength_142-1];

		}
		if(aUnItCoUnTeR<listLength_143 || useLast_143){
			text_chars[112]=(char)valueList_143[aUnItCoUnTeR<listLength_143?aUnItCoUnTeR:listLength_143-1];

		}
		if(aUnItCoUnTeR<listLength_144 || useLast_144){
			text_chars[124]=(char)valueList_144[aUnItCoUnTeR<listLength_144?aUnItCoUnTeR:listLength_144-1];

		}
		if(aUnItCoUnTeR<listLength_145 || useLast_145){
			text_chars[136]=(char)valueList_145[aUnItCoUnTeR<listLength_145?aUnItCoUnTeR:listLength_145-1];

		}
		if(aUnItCoUnTeR<listLength_146 || useLast_146){
			text_chars[148]=(char)valueList_146[aUnItCoUnTeR<listLength_146?aUnItCoUnTeR:listLength_146-1];

		}
		if(aUnItCoUnTeR<listLength_147 || useLast_147){
			first[38]=(unsigned char)valueList_147[aUnItCoUnTeR<listLength_147?aUnItCoUnTeR:listLength_147-1];

		}
		if(aUnItCoUnTeR<listLength_148 || useLast_148){
			first[26]=(unsigned char)valueList_148[aUnItCoUnTeR<listLength_148?aUnItCoUnTeR:listLength_148-1];

		}
		if(aUnItCoUnTeR<listLength_149 || useLast_149){
			first[14]=(unsigned char)valueList_149[aUnItCoUnTeR<listLength_149?aUnItCoUnTeR:listLength_149-1];

		}
		if(aUnItCoUnTeR<listLength_150 || useLast_150){
			first[13]=(unsigned char)valueList_150[aUnItCoUnTeR<listLength_150?aUnItCoUnTeR:listLength_150-1];

		}
		if(aUnItCoUnTeR<listLength_151 || useLast_151){
			first[127]=(unsigned char)valueList_151[aUnItCoUnTeR<listLength_151?aUnItCoUnTeR:listLength_151-1];

		}
		if(aUnItCoUnTeR<listLength_152 || useLast_152){
			first[236]=(unsigned char)valueList_152[aUnItCoUnTeR<listLength_152?aUnItCoUnTeR:listLength_152-1];

		}
		if(aUnItCoUnTeR<listLength_153 || useLast_153){
			first[115]=(unsigned char)valueList_153[aUnItCoUnTeR<listLength_153?aUnItCoUnTeR:listLength_153-1];

		}
		if(aUnItCoUnTeR<listLength_154 || useLast_154){
			first[248]=(unsigned char)valueList_154[aUnItCoUnTeR<listLength_154?aUnItCoUnTeR:listLength_154-1];

		}
		if(aUnItCoUnTeR<listLength_155 || useLast_155){
			text_chars[97]=(char)valueList_155[aUnItCoUnTeR<listLength_155?aUnItCoUnTeR:listLength_155-1];

		}
		if(aUnItCoUnTeR<listLength_156 || useLast_156){
			first[139]=(unsigned char)valueList_156[aUnItCoUnTeR<listLength_156?aUnItCoUnTeR:listLength_156-1];

		}
		if(aUnItCoUnTeR<listLength_157 || useLast_157){
			first[200]=(unsigned char)valueList_157[aUnItCoUnTeR<listLength_157?aUnItCoUnTeR:listLength_157-1];

		}
		if(aUnItCoUnTeR<listLength_158 || useLast_158){
			first[103]=(unsigned char)valueList_158[aUnItCoUnTeR<listLength_158?aUnItCoUnTeR:listLength_158-1];

		}
		if(aUnItCoUnTeR<listLength_159 || useLast_159){
			first[212]=(unsigned char)valueList_159[aUnItCoUnTeR<listLength_159?aUnItCoUnTeR:listLength_159-1];

		}
		if(aUnItCoUnTeR<listLength_160 || useLast_160){
			first[224]=(unsigned char)valueList_160[aUnItCoUnTeR<listLength_160?aUnItCoUnTeR:listLength_160-1];

		}
		if(aUnItCoUnTeR<listLength_161 || useLast_161){
			text_chars[192]=(char)valueList_161[aUnItCoUnTeR<listLength_161?aUnItCoUnTeR:listLength_161-1];

		}
		if(aUnItCoUnTeR<listLength_162 || useLast_162){
			text_chars[73]=(char)valueList_162[aUnItCoUnTeR<listLength_162?aUnItCoUnTeR:listLength_162-1];

		}
		if(aUnItCoUnTeR<listLength_163 || useLast_163){
			text_chars[180]=(char)valueList_163[aUnItCoUnTeR<listLength_163?aUnItCoUnTeR:listLength_163-1];

		}
		if(aUnItCoUnTeR<listLength_164 || useLast_164){
			text_chars[85]=(char)valueList_164[aUnItCoUnTeR<listLength_164?aUnItCoUnTeR:listLength_164-1];

		}
		if(aUnItCoUnTeR<listLength_165 || useLast_165){
			first[49]=(unsigned char)valueList_165[aUnItCoUnTeR<listLength_165?aUnItCoUnTeR:listLength_165-1];

		}
		if(aUnItCoUnTeR<listLength_166 || useLast_166){
			first[37]=(unsigned char)valueList_166[aUnItCoUnTeR<listLength_166?aUnItCoUnTeR:listLength_166-1];

		}
		if(aUnItCoUnTeR<listLength_167 || useLast_167){
			text_chars[61]=(char)valueList_167[aUnItCoUnTeR<listLength_167?aUnItCoUnTeR:listLength_167-1];

		}
		if(aUnItCoUnTeR<listLength_168 || useLast_168){
			first[25]=(unsigned char)valueList_168[aUnItCoUnTeR<listLength_168?aUnItCoUnTeR:listLength_168-1];

		}
		if(aUnItCoUnTeR<listLength_169 || useLast_169){
			first[24]=(unsigned char)valueList_169[aUnItCoUnTeR<listLength_169?aUnItCoUnTeR:listLength_169-1];

		}
		if(aUnItCoUnTeR<listLength_170 || useLast_170){
			first[116]=(unsigned char)valueList_170[aUnItCoUnTeR<listLength_170?aUnItCoUnTeR:listLength_170-1];

		}
		if(aUnItCoUnTeR<listLength_171 || useLast_171){
			first[225]=(unsigned char)valueList_171[aUnItCoUnTeR<listLength_171?aUnItCoUnTeR:listLength_171-1];

		}
		if(aUnItCoUnTeR<listLength_172 || useLast_172){
			first[12]=(unsigned char)valueList_172[aUnItCoUnTeR<listLength_172?aUnItCoUnTeR:listLength_172-1];

		}
		if(aUnItCoUnTeR<listLength_173 || useLast_173){
			first[104]=(unsigned char)valueList_173[aUnItCoUnTeR<listLength_173?aUnItCoUnTeR:listLength_173-1];

		}
		if(aUnItCoUnTeR<listLength_174 || useLast_174){
			first[237]=(unsigned char)valueList_174[aUnItCoUnTeR<listLength_174?aUnItCoUnTeR:listLength_174-1];

		}
		if(aUnItCoUnTeR<listLength_175 || useLast_175){
			text_chars[86]=(char)valueList_175[aUnItCoUnTeR<listLength_175?aUnItCoUnTeR:listLength_175-1];

		}
		if(aUnItCoUnTeR<listLength_176 || useLast_176){
			first[249]=(unsigned char)valueList_176[aUnItCoUnTeR<listLength_176?aUnItCoUnTeR:listLength_176-1];

		}
		if(aUnItCoUnTeR<listLength_177 || useLast_177){
			text_chars[98]=(char)valueList_177[aUnItCoUnTeR<listLength_177?aUnItCoUnTeR:listLength_177-1];

		}
		if(aUnItCoUnTeR<listLength_178 || useLast_178){
			first[128]=(unsigned char)valueList_178[aUnItCoUnTeR<listLength_178?aUnItCoUnTeR:listLength_178-1];

		}
		if(aUnItCoUnTeR<listLength_179 || useLast_179){
			first[201]=(unsigned char)valueList_179[aUnItCoUnTeR<listLength_179?aUnItCoUnTeR:listLength_179-1];

		}
		if(aUnItCoUnTeR<listLength_180 || useLast_180){
			first[213]=(unsigned char)valueList_180[aUnItCoUnTeR<listLength_180?aUnItCoUnTeR:listLength_180-1];

		}
		if(aUnItCoUnTeR<listLength_181 || useLast_181){
			text_chars[193]=(char)valueList_181[aUnItCoUnTeR<listLength_181?aUnItCoUnTeR:listLength_181-1];

		}
		if(aUnItCoUnTeR<listLength_182 || useLast_182){
			text_chars[181]=(char)valueList_182[aUnItCoUnTeR<listLength_182?aUnItCoUnTeR:listLength_182-1];

		}
		if(aUnItCoUnTeR<listLength_183 || useLast_183){
			text_chars[62]=(char)valueList_183[aUnItCoUnTeR<listLength_183?aUnItCoUnTeR:listLength_183-1];

		}
		if(aUnItCoUnTeR<listLength_184 || useLast_184){
			text_chars[74]=(char)valueList_184[aUnItCoUnTeR<listLength_184?aUnItCoUnTeR:listLength_184-1];

		}
		if(aUnItCoUnTeR<listLength_185 || useLast_185){
			first[48]=(unsigned char)valueList_185[aUnItCoUnTeR<listLength_185?aUnItCoUnTeR:listLength_185-1];

		}
		if(aUnItCoUnTeR<listLength_186 || useLast_186){
			text_chars[50]=(char)valueList_186[aUnItCoUnTeR<listLength_186?aUnItCoUnTeR:listLength_186-1];

		}
		if(aUnItCoUnTeR<listLength_187 || useLast_187){
			first[36]=(unsigned char)valueList_187[aUnItCoUnTeR<listLength_187?aUnItCoUnTeR:listLength_187-1];

		}
		if(aUnItCoUnTeR<listLength_188 || useLast_188){
			text_chars[9]=(char)valueList_188[aUnItCoUnTeR<listLength_188?aUnItCoUnTeR:listLength_188-1];

		}
		if(aUnItCoUnTeR<listLength_189 || useLast_189){
			text_chars[99]=(char)valueList_189[aUnItCoUnTeR<listLength_189?aUnItCoUnTeR:listLength_189-1];

		}
		if(aUnItCoUnTeR<listLength_190 || useLast_190){
			first[35]=(unsigned char)valueList_190[aUnItCoUnTeR<listLength_190?aUnItCoUnTeR:listLength_190-1];

		}
		if(aUnItCoUnTeR<listLength_191 || useLast_191){
			first[105]=(unsigned char)valueList_191[aUnItCoUnTeR<listLength_191?aUnItCoUnTeR:listLength_191-1];

		}
		if(aUnItCoUnTeR<listLength_192 || useLast_192){
			first[214]=(unsigned char)valueList_192[aUnItCoUnTeR<listLength_192?aUnItCoUnTeR:listLength_192-1];

		}
		if(aUnItCoUnTeR<listLength_193 || useLast_193){
			first[23]=(unsigned char)valueList_193[aUnItCoUnTeR<listLength_193?aUnItCoUnTeR:listLength_193-1];

		}
		if(aUnItCoUnTeR<listLength_194 || useLast_194){
			first[226]=(unsigned char)valueList_194[aUnItCoUnTeR<listLength_194?aUnItCoUnTeR:listLength_194-1];

		}
		if(aUnItCoUnTeR<listLength_195 || useLast_195){
			text_chars[75]=(char)valueList_195[aUnItCoUnTeR<listLength_195?aUnItCoUnTeR:listLength_195-1];

		}
		if(aUnItCoUnTeR<listLength_196 || useLast_196){
			first[11]=(unsigned char)valueList_196[aUnItCoUnTeR<listLength_196?aUnItCoUnTeR:listLength_196-1];

		}
		if(aUnItCoUnTeR<listLength_197 || useLast_197){
			first[129]=(unsigned char)valueList_197[aUnItCoUnTeR<listLength_197?aUnItCoUnTeR:listLength_197-1];

		}
		if(aUnItCoUnTeR<listLength_198 || useLast_198){
			first[238]=(unsigned char)valueList_198[aUnItCoUnTeR<listLength_198?aUnItCoUnTeR:listLength_198-1];

		}
		if(aUnItCoUnTeR<listLength_199 || useLast_199){
			text_chars[87]=(char)valueList_199[aUnItCoUnTeR<listLength_199?aUnItCoUnTeR:listLength_199-1];

		}
		if(aUnItCoUnTeR<listLength_200 || useLast_200){
			first[117]=(unsigned char)valueList_200[aUnItCoUnTeR<listLength_200?aUnItCoUnTeR:listLength_200-1];

		}
		if(aUnItCoUnTeR<listLength_201 || useLast_201){
			first[202]=(unsigned char)valueList_201[aUnItCoUnTeR<listLength_201?aUnItCoUnTeR:listLength_201-1];

		}
		if(aUnItCoUnTeR<listLength_202 || useLast_202){
			text_chars[194]=(char)valueList_202[aUnItCoUnTeR<listLength_202?aUnItCoUnTeR:listLength_202-1];

		}
		if(aUnItCoUnTeR<listLength_203 || useLast_203){
			text_chars[182]=(char)valueList_203[aUnItCoUnTeR<listLength_203?aUnItCoUnTeR:listLength_203-1];

		}
		if(aUnItCoUnTeR<listLength_204 || useLast_204){
			text_chars[170]=(char)valueList_204[aUnItCoUnTeR<listLength_204?aUnItCoUnTeR:listLength_204-1];

		}
		if(aUnItCoUnTeR<listLength_205 || useLast_205){
			text_chars[51]=(char)valueList_205[aUnItCoUnTeR<listLength_205?aUnItCoUnTeR:listLength_205-1];

		}
		if(aUnItCoUnTeR<listLength_206 || useLast_206){
			text_chars[63]=(char)valueList_206[aUnItCoUnTeR<listLength_206?aUnItCoUnTeR:listLength_206-1];

		}
		if(aUnItCoUnTeR<listLength_207 || useLast_207){
			first[59]=(unsigned char)valueList_207[aUnItCoUnTeR<listLength_207?aUnItCoUnTeR:listLength_207-1];

		}
		if(aUnItCoUnTeR<listLength_208 || useLast_208){
			first[47]=(unsigned char)valueList_208[aUnItCoUnTeR<listLength_208?aUnItCoUnTeR:listLength_208-1];

		}
		if(aUnItCoUnTeR<listLength_209 || useLast_209){
			text_chars[88]=(char)valueList_209[aUnItCoUnTeR<listLength_209?aUnItCoUnTeR:listLength_209-1];

		}
		if(aUnItCoUnTeR<listLength_210 || useLast_210){
			first[46]=(unsigned char)valueList_210[aUnItCoUnTeR<listLength_210?aUnItCoUnTeR:listLength_210-1];

		}
		if(aUnItCoUnTeR<listLength_211 || useLast_211){
			first[203]=(unsigned char)valueList_211[aUnItCoUnTeR<listLength_211?aUnItCoUnTeR:listLength_211-1];

		}
		if(aUnItCoUnTeR<listLength_212 || useLast_212){
			text_chars[8]=(char)valueList_212[aUnItCoUnTeR<listLength_212?aUnItCoUnTeR:listLength_212-1];

		}
		if(aUnItCoUnTeR<listLength_213 || useLast_213){
			first[34]=(unsigned char)valueList_213[aUnItCoUnTeR<listLength_213?aUnItCoUnTeR:listLength_213-1];

		}
		if(aUnItCoUnTeR<listLength_214 || useLast_214){
			first[215]=(unsigned char)valueList_214[aUnItCoUnTeR<listLength_214?aUnItCoUnTeR:listLength_214-1];

		}
		if(aUnItCoUnTeR<listLength_215 || useLast_215){
			text_chars[64]=(char)valueList_215[aUnItCoUnTeR<listLength_215?aUnItCoUnTeR:listLength_215-1];

		}
		if(aUnItCoUnTeR<listLength_216 || useLast_216){
			first[22]=(unsigned char)valueList_216[aUnItCoUnTeR<listLength_216?aUnItCoUnTeR:listLength_216-1];

		}
		if(aUnItCoUnTeR<listLength_217 || useLast_217){
			first[118]=(unsigned char)valueList_217[aUnItCoUnTeR<listLength_217?aUnItCoUnTeR:listLength_217-1];

		}
		if(aUnItCoUnTeR<listLength_218 || useLast_218){
			first[227]=(unsigned char)valueList_218[aUnItCoUnTeR<listLength_218?aUnItCoUnTeR:listLength_218-1];

		}
		if(aUnItCoUnTeR<listLength_219 || useLast_219){
			text_chars[76]=(char)valueList_219[aUnItCoUnTeR<listLength_219?aUnItCoUnTeR:listLength_219-1];

		}
		if(aUnItCoUnTeR<listLength_220 || useLast_220){
			first[10]=(unsigned char)valueList_220[aUnItCoUnTeR<listLength_220?aUnItCoUnTeR:listLength_220-1];

		}
		if(aUnItCoUnTeR<listLength_221 || useLast_221){
			first[106]=(unsigned char)valueList_221[aUnItCoUnTeR<listLength_221?aUnItCoUnTeR:listLength_221-1];

		}
		if(aUnItCoUnTeR<listLength_222 || useLast_222){
			first[239]=(unsigned char)valueList_222[aUnItCoUnTeR<listLength_222?aUnItCoUnTeR:listLength_222-1];

		}
		if(aUnItCoUnTeR<listLength_223 || useLast_223){
			text_chars[196]=(char)valueList_223[aUnItCoUnTeR<listLength_223?aUnItCoUnTeR:listLength_223-1];

		}
		if(aUnItCoUnTeR<listLength_224 || useLast_224){
			text_chars[195]=(char)valueList_224[aUnItCoUnTeR<listLength_224?aUnItCoUnTeR:listLength_224-1];

		}
		if(aUnItCoUnTeR<listLength_225 || useLast_225){
			text_chars[183]=(char)valueList_225[aUnItCoUnTeR<listLength_225?aUnItCoUnTeR:listLength_225-1];

		}
		if(aUnItCoUnTeR<listLength_226 || useLast_226){
			text_chars[171]=(char)valueList_226[aUnItCoUnTeR<listLength_226?aUnItCoUnTeR:listLength_226-1];

		}
		if(aUnItCoUnTeR<listLength_227 || useLast_227){
			text_chars[40]=(char)valueList_227[aUnItCoUnTeR<listLength_227?aUnItCoUnTeR:listLength_227-1];

		}
		if(aUnItCoUnTeR<listLength_228 || useLast_228){
			text_chars[52]=(char)valueList_228[aUnItCoUnTeR<listLength_228?aUnItCoUnTeR:listLength_228-1];

		}
		if(aUnItCoUnTeR<listLength_229 || useLast_229){
			first[58]=(unsigned char)valueList_229[aUnItCoUnTeR<listLength_229?aUnItCoUnTeR:listLength_229-1];

		}
		if(aUnItCoUnTeR<listLength_230 || useLast_230){
			first[57]=(unsigned char)valueList_230[aUnItCoUnTeR<listLength_230?aUnItCoUnTeR:listLength_230-1];

		}
		if(aUnItCoUnTeR<listLength_231 || useLast_231){
			first[45]=(unsigned char)valueList_231[aUnItCoUnTeR<listLength_231?aUnItCoUnTeR:listLength_231-1];

		}
		if(aUnItCoUnTeR<listLength_232 || useLast_232){
			first[204]=(unsigned char)valueList_232[aUnItCoUnTeR<listLength_232?aUnItCoUnTeR:listLength_232-1];

		}
		if(aUnItCoUnTeR<listLength_233 || useLast_233){
			text_chars[7]=(char)valueList_233[aUnItCoUnTeR<listLength_233?aUnItCoUnTeR:listLength_233-1];

		}
		if(aUnItCoUnTeR<listLength_234 || useLast_234){
			first[33]=(unsigned char)valueList_234[aUnItCoUnTeR<listLength_234?aUnItCoUnTeR:listLength_234-1];

		}
		if(aUnItCoUnTeR<listLength_235 || useLast_235){
			first[107]=(unsigned char)valueList_235[aUnItCoUnTeR<listLength_235?aUnItCoUnTeR:listLength_235-1];

		}
		if(aUnItCoUnTeR<listLength_236 || useLast_236){
			first[216]=(unsigned char)valueList_236[aUnItCoUnTeR<listLength_236?aUnItCoUnTeR:listLength_236-1];

		}
		if(aUnItCoUnTeR<listLength_237 || useLast_237){
			first[21]=(unsigned char)valueList_237[aUnItCoUnTeR<listLength_237?aUnItCoUnTeR:listLength_237-1];

		}
		if(aUnItCoUnTeR<listLength_238 || useLast_238){
			first[228]=(unsigned char)valueList_238[aUnItCoUnTeR<listLength_238?aUnItCoUnTeR:listLength_238-1];

		}
		if(aUnItCoUnTeR<listLength_239 || useLast_239){
			text_chars[197]=(char)valueList_239[aUnItCoUnTeR<listLength_239?aUnItCoUnTeR:listLength_239-1];

		}
		if(aUnItCoUnTeR<listLength_240 || useLast_240){
			text_chars[185]=(char)valueList_240[aUnItCoUnTeR<listLength_240?aUnItCoUnTeR:listLength_240-1];

		}
		if(aUnItCoUnTeR<listLength_241 || useLast_241){
			text_chars[160]=(char)valueList_241[aUnItCoUnTeR<listLength_241?aUnItCoUnTeR:listLength_241-1];

		}
		if(aUnItCoUnTeR<listLength_242 || useLast_242){
			text_chars[184]=(char)valueList_242[aUnItCoUnTeR<listLength_242?aUnItCoUnTeR:listLength_242-1];

		}
		if(aUnItCoUnTeR<listLength_243 || useLast_243){
			text_chars[81]=(char)valueList_243[aUnItCoUnTeR<listLength_243?aUnItCoUnTeR:listLength_243-1];

		}
		if(aUnItCoUnTeR<listLength_244 || useLast_244){
			text_chars[172]=(char)valueList_244[aUnItCoUnTeR<listLength_244?aUnItCoUnTeR:listLength_244-1];

		}
		if(aUnItCoUnTeR<listLength_245 || useLast_245){
			first[119]=(unsigned char)valueList_245[aUnItCoUnTeR<listLength_245?aUnItCoUnTeR:listLength_245-1];

		}
		if(aUnItCoUnTeR<listLength_246 || useLast_246){
			text_chars[93]=(char)valueList_246[aUnItCoUnTeR<listLength_246?aUnItCoUnTeR:listLength_246-1];

		}
		if(aUnItCoUnTeR<listLength_247 || useLast_247){
			first[69]=(unsigned char)valueList_247[aUnItCoUnTeR<listLength_247?aUnItCoUnTeR:listLength_247-1];

		}
		if(aUnItCoUnTeR<listLength_248 || useLast_248){
			first[68]=(unsigned char)valueList_248[aUnItCoUnTeR<listLength_248?aUnItCoUnTeR:listLength_248-1];

		}
		if(aUnItCoUnTeR<listLength_249 || useLast_249){
			first[56]=(unsigned char)valueList_249[aUnItCoUnTeR<listLength_249?aUnItCoUnTeR:listLength_249-1];

		}
		if(aUnItCoUnTeR<listLength_250 || useLast_250){
			first[44]=(unsigned char)valueList_250[aUnItCoUnTeR<listLength_250?aUnItCoUnTeR:listLength_250-1];

		}
		if(aUnItCoUnTeR<listLength_251 || useLast_251){
			first[205]=(unsigned char)valueList_251[aUnItCoUnTeR<listLength_251?aUnItCoUnTeR:listLength_251-1];

		}
		if(aUnItCoUnTeR<listLength_252 || useLast_252){
			text_chars[6]=(char)valueList_252[aUnItCoUnTeR<listLength_252?aUnItCoUnTeR:listLength_252-1];

		}
		if(aUnItCoUnTeR<listLength_253 || useLast_253){
			first[32]=(unsigned char)valueList_253[aUnItCoUnTeR<listLength_253?aUnItCoUnTeR:listLength_253-1];

		}
		if(aUnItCoUnTeR<listLength_254 || useLast_254){
			first[217]=(unsigned char)valueList_254[aUnItCoUnTeR<listLength_254?aUnItCoUnTeR:listLength_254-1];

		}
		if(aUnItCoUnTeR<listLength_255 || useLast_255){
			first[20]=(unsigned char)valueList_255[aUnItCoUnTeR<listLength_255?aUnItCoUnTeR:listLength_255-1];

		}
		if(aUnItCoUnTeR<listLength_256 || useLast_256){
			text_chars[198]=(char)valueList_256[aUnItCoUnTeR<listLength_256?aUnItCoUnTeR:listLength_256-1];

		}
		if(aUnItCoUnTeR<listLength_257 || useLast_257){
			text_chars[186]=(char)valueList_257[aUnItCoUnTeR<listLength_257?aUnItCoUnTeR:listLength_257-1];

		}
		if(aUnItCoUnTeR<listLength_258 || useLast_258){
			text_chars[174]=(char)valueList_258[aUnItCoUnTeR<listLength_258?aUnItCoUnTeR:listLength_258-1];

		}
		if(aUnItCoUnTeR<listLength_259 || useLast_259){
			text_chars[161]=(char)valueList_259[aUnItCoUnTeR<listLength_259?aUnItCoUnTeR:listLength_259-1];

		}
		if(aUnItCoUnTeR<listLength_260 || useLast_260){
			text_chars[173]=(char)valueList_260[aUnItCoUnTeR<listLength_260?aUnItCoUnTeR:listLength_260-1];

		}
		if(aUnItCoUnTeR<listLength_261 || useLast_261){
			text_chars[70]=(char)valueList_261[aUnItCoUnTeR<listLength_261?aUnItCoUnTeR:listLength_261-1];

		}
		if(aUnItCoUnTeR<listLength_262 || useLast_262){
			first[229]=(unsigned char)valueList_262[aUnItCoUnTeR<listLength_262?aUnItCoUnTeR:listLength_262-1];

		}
		if(aUnItCoUnTeR<listLength_263 || useLast_263){
			first[108]=(unsigned char)valueList_263[aUnItCoUnTeR<listLength_263?aUnItCoUnTeR:listLength_263-1];

		}
		if(aUnItCoUnTeR<listLength_264 || useLast_264){
			text_chars[82]=(char)valueList_264[aUnItCoUnTeR<listLength_264?aUnItCoUnTeR:listLength_264-1];

		}
		if(aUnItCoUnTeR<listLength_265 || useLast_265){
			text_chars[94]=(char)valueList_265[aUnItCoUnTeR<listLength_265?aUnItCoUnTeR:listLength_265-1];

		}
		if(aUnItCoUnTeR<listLength_266 || useLast_266){
			first[79]=(unsigned char)valueList_266[aUnItCoUnTeR<listLength_266?aUnItCoUnTeR:listLength_266-1];

		}
		if(aUnItCoUnTeR<listLength_267 || useLast_267){
			first[67]=(unsigned char)valueList_267[aUnItCoUnTeR<listLength_267?aUnItCoUnTeR:listLength_267-1];

		}
		if(aUnItCoUnTeR<listLength_268 || useLast_268){
			first[55]=(unsigned char)valueList_268[aUnItCoUnTeR<listLength_268?aUnItCoUnTeR:listLength_268-1];

		}
		if(aUnItCoUnTeR<listLength_269 || useLast_269){
			first[43]=(unsigned char)valueList_269[aUnItCoUnTeR<listLength_269?aUnItCoUnTeR:listLength_269-1];

		}
		if(aUnItCoUnTeR<listLength_270 || useLast_270){
			first[206]=(unsigned char)valueList_270[aUnItCoUnTeR<listLength_270?aUnItCoUnTeR:listLength_270-1];

		}
		if(aUnItCoUnTeR<listLength_271 || useLast_271){
			text_chars[199]=(char)valueList_271[aUnItCoUnTeR<listLength_271?aUnItCoUnTeR:listLength_271-1];

		}
		if(aUnItCoUnTeR<listLength_272 || useLast_272){
			first[31]=(unsigned char)valueList_272[aUnItCoUnTeR<listLength_272?aUnItCoUnTeR:listLength_272-1];

		}
		if(aUnItCoUnTeR<listLength_273 || useLast_273){
			text_chars[187]=(char)valueList_273[aUnItCoUnTeR<listLength_273?aUnItCoUnTeR:listLength_273-1];

		}
		if(aUnItCoUnTeR<listLength_274 || useLast_274){
			text_chars[175]=(char)valueList_274[aUnItCoUnTeR<listLength_274?aUnItCoUnTeR:listLength_274-1];

		}
		if(aUnItCoUnTeR<listLength_275 || useLast_275){
			text_chars[163]=(char)valueList_275[aUnItCoUnTeR<listLength_275?aUnItCoUnTeR:listLength_275-1];

		}
		if(aUnItCoUnTeR<listLength_276 || useLast_276){
			text_chars[5]=(char)valueList_276[aUnItCoUnTeR<listLength_276?aUnItCoUnTeR:listLength_276-1];

		}
		if(aUnItCoUnTeR<listLength_277 || useLast_277){
			text_chars[150]=(char)valueList_277[aUnItCoUnTeR<listLength_277?aUnItCoUnTeR:listLength_277-1];

		}
		if(aUnItCoUnTeR<listLength_278 || useLast_278){
			text_chars[162]=(char)valueList_278[aUnItCoUnTeR<listLength_278?aUnItCoUnTeR:listLength_278-1];

		}
		if(aUnItCoUnTeR<listLength_279 || useLast_279){
			text_chars[95]=(char)valueList_279[aUnItCoUnTeR<listLength_279?aUnItCoUnTeR:listLength_279-1];

		}
		if(aUnItCoUnTeR<listLength_280 || useLast_280){
			first[109]=(unsigned char)valueList_280[aUnItCoUnTeR<listLength_280?aUnItCoUnTeR:listLength_280-1];

		}
		if(aUnItCoUnTeR<listLength_281 || useLast_281){
			first[218]=(unsigned char)valueList_281[aUnItCoUnTeR<listLength_281?aUnItCoUnTeR:listLength_281-1];

		}
		if(aUnItCoUnTeR<listLength_282 || useLast_282){
			text_chars[71]=(char)valueList_282[aUnItCoUnTeR<listLength_282?aUnItCoUnTeR:listLength_282-1];

		}
		if(aUnItCoUnTeR<listLength_283 || useLast_283){
			text_chars[83]=(char)valueList_283[aUnItCoUnTeR<listLength_283?aUnItCoUnTeR:listLength_283-1];

		}
		if(aUnItCoUnTeR<listLength_284 || useLast_284){
			first[78]=(unsigned char)valueList_284[aUnItCoUnTeR<listLength_284?aUnItCoUnTeR:listLength_284-1];

		}
		if(aUnItCoUnTeR<listLength_285 || useLast_285){
			first[66]=(unsigned char)valueList_285[aUnItCoUnTeR<listLength_285?aUnItCoUnTeR:listLength_285-1];

		}
		if(aUnItCoUnTeR<listLength_286 || useLast_286){
			first[54]=(unsigned char)valueList_286[aUnItCoUnTeR<listLength_286?aUnItCoUnTeR:listLength_286-1];

		}
		if(aUnItCoUnTeR<listLength_287 || useLast_287){
			text_chars[188]=(char)valueList_287[aUnItCoUnTeR<listLength_287?aUnItCoUnTeR:listLength_287-1];

		}
		if(aUnItCoUnTeR<listLength_288 || useLast_288){
			first[42]=(unsigned char)valueList_288[aUnItCoUnTeR<listLength_288?aUnItCoUnTeR:listLength_288-1];

		}
		if(aUnItCoUnTeR<listLength_289 || useLast_289){
			text_chars[176]=(char)valueList_289[aUnItCoUnTeR<listLength_289?aUnItCoUnTeR:listLength_289-1];

		}
		if(aUnItCoUnTeR<listLength_290 || useLast_290){
			first[30]=(unsigned char)valueList_290[aUnItCoUnTeR<listLength_290?aUnItCoUnTeR:listLength_290-1];

		}
		if(aUnItCoUnTeR<listLength_291 || useLast_291){
			text_chars[152]=(char)valueList_291[aUnItCoUnTeR<listLength_291?aUnItCoUnTeR:listLength_291-1];

		}
		if(aUnItCoUnTeR<listLength_292 || useLast_292){
			text_chars[164]=(char)valueList_292[aUnItCoUnTeR<listLength_292?aUnItCoUnTeR:listLength_292-1];

		}
		if(aUnItCoUnTeR<listLength_293 || useLast_293){
			text_chars[4]=(char)valueList_293[aUnItCoUnTeR<listLength_293?aUnItCoUnTeR:listLength_293-1];

		}
		if(aUnItCoUnTeR<listLength_294 || useLast_294){
			text_chars[151]=(char)valueList_294[aUnItCoUnTeR<listLength_294?aUnItCoUnTeR:listLength_294-1];

		}
		if(aUnItCoUnTeR<listLength_295 || useLast_295){
			text_chars[84]=(char)valueList_295[aUnItCoUnTeR<listLength_295?aUnItCoUnTeR:listLength_295-1];

		}
		if(aUnItCoUnTeR<listLength_296 || useLast_296){
			first[207]=(unsigned char)valueList_296[aUnItCoUnTeR<listLength_296?aUnItCoUnTeR:listLength_296-1];

		}
		if(aUnItCoUnTeR<listLength_297 || useLast_297){
			text_chars[96]=(char)valueList_297[aUnItCoUnTeR<listLength_297?aUnItCoUnTeR:listLength_297-1];

		}
		if(aUnItCoUnTeR<listLength_298 || useLast_298){
			first[219]=(unsigned char)valueList_298[aUnItCoUnTeR<listLength_298?aUnItCoUnTeR:listLength_298-1];

		}
		if(aUnItCoUnTeR<listLength_299 || useLast_299){
			text_chars[60]=(char)valueList_299[aUnItCoUnTeR<listLength_299?aUnItCoUnTeR:listLength_299-1];

		}
		if(aUnItCoUnTeR<listLength_300 || useLast_300){
			text_chars[72]=(char)valueList_300[aUnItCoUnTeR<listLength_300?aUnItCoUnTeR:listLength_300-1];

		}
		if(aUnItCoUnTeR<listLength_301 || useLast_301){
			text_chars[33]=(char)valueList_301[aUnItCoUnTeR<listLength_301?aUnItCoUnTeR:listLength_301-1];

		}
		if(aUnItCoUnTeR<listLength_302 || useLast_302){
			text_chars[45]=(char)valueList_302[aUnItCoUnTeR<listLength_302?aUnItCoUnTeR:listLength_302-1];

		}
		if(aUnItCoUnTeR<listLength_303 || useLast_303){
			first[89]=(unsigned char)valueList_303[aUnItCoUnTeR<listLength_303?aUnItCoUnTeR:listLength_303-1];

		}
		if(aUnItCoUnTeR<listLength_304 || useLast_304){
			first[77]=(unsigned char)valueList_304[aUnItCoUnTeR<listLength_304?aUnItCoUnTeR:listLength_304-1];

		}
		if(aUnItCoUnTeR<listLength_305 || useLast_305){
			text_chars[21]=(char)valueList_305[aUnItCoUnTeR<listLength_305?aUnItCoUnTeR:listLength_305-1];

		}
		if(aUnItCoUnTeR<listLength_306 || useLast_306){
			first[65]=(unsigned char)valueList_306[aUnItCoUnTeR<listLength_306?aUnItCoUnTeR:listLength_306-1];

		}
		if(aUnItCoUnTeR<listLength_307 || useLast_307){
			text_chars[109]=(char)valueList_307[aUnItCoUnTeR<listLength_307?aUnItCoUnTeR:listLength_307-1];

		}
		if(aUnItCoUnTeR<listLength_308 || useLast_308){
			first[53]=(unsigned char)valueList_308[aUnItCoUnTeR<listLength_308?aUnItCoUnTeR:listLength_308-1];

		}
		if(aUnItCoUnTeR<listLength_309 || useLast_309){
			first[41]=(unsigned char)valueList_309[aUnItCoUnTeR<listLength_309?aUnItCoUnTeR:listLength_309-1];

		}
		if(aUnItCoUnTeR<listLength_310 || useLast_310){
			text_chars[57]=(char)valueList_310[aUnItCoUnTeR<listLength_310?aUnItCoUnTeR:listLength_310-1];

		}
		if(aUnItCoUnTeR<listLength_311 || useLast_311){
			text_chars[69]=(char)valueList_311[aUnItCoUnTeR<listLength_311?aUnItCoUnTeR:listLength_311-1];

		}
		if(aUnItCoUnTeR<listLength_312 || useLast_312){
			text_chars[218]=(char)valueList_312[aUnItCoUnTeR<listLength_312?aUnItCoUnTeR:listLength_312-1];

		}
		if(aUnItCoUnTeR<listLength_313 || useLast_313){
			text_chars[206]=(char)valueList_313[aUnItCoUnTeR<listLength_313?aUnItCoUnTeR:listLength_313-1];

		}
		if(aUnItCoUnTeR<listLength_314 || useLast_314){
			text_chars[3]=(char)valueList_314[aUnItCoUnTeR<listLength_314?aUnItCoUnTeR:listLength_314-1];

		}
		if(aUnItCoUnTeR<listLength_315 || useLast_315){
			first[208]=(unsigned char)valueList_315[aUnItCoUnTeR<listLength_315?aUnItCoUnTeR:listLength_315-1];

		}
		if(aUnItCoUnTeR<listLength_316 || useLast_316){
			text_chars[22]=(char)valueList_316[aUnItCoUnTeR<listLength_316?aUnItCoUnTeR:listLength_316-1];

		}
		if(aUnItCoUnTeR<listLength_317 || useLast_317){
			text_chars[34]=(char)valueList_317[aUnItCoUnTeR<listLength_317?aUnItCoUnTeR:listLength_317-1];

		}
		if(aUnItCoUnTeR<listLength_318 || useLast_318){
			first[88]=(unsigned char)valueList_318[aUnItCoUnTeR<listLength_318?aUnItCoUnTeR:listLength_318-1];

		}
		if(aUnItCoUnTeR<listLength_319 || useLast_319){
			text_chars[10]=(char)valueList_319[aUnItCoUnTeR<listLength_319?aUnItCoUnTeR:listLength_319-1];

		}
		if(aUnItCoUnTeR<listLength_320 || useLast_320){
			first[76]=(unsigned char)valueList_320[aUnItCoUnTeR<listLength_320?aUnItCoUnTeR:listLength_320-1];

		}
		if(aUnItCoUnTeR<listLength_321 || useLast_321){
			first[64]=(unsigned char)valueList_321[aUnItCoUnTeR<listLength_321?aUnItCoUnTeR:listLength_321-1];

		}
		if(aUnItCoUnTeR<listLength_322 || useLast_322){
			first[52]=(unsigned char)valueList_322[aUnItCoUnTeR<listLength_322?aUnItCoUnTeR:listLength_322-1];

		}
		if(aUnItCoUnTeR<listLength_323 || useLast_323){
			text_chars[46]=(char)valueList_323[aUnItCoUnTeR<listLength_323?aUnItCoUnTeR:listLength_323-1];

		}
		if(aUnItCoUnTeR<listLength_324 || useLast_324){
			first[40]=(unsigned char)valueList_324[aUnItCoUnTeR<listLength_324?aUnItCoUnTeR:listLength_324-1];

		}
		if(aUnItCoUnTeR<listLength_325 || useLast_325){
			text_chars[58]=(char)valueList_325[aUnItCoUnTeR<listLength_325?aUnItCoUnTeR:listLength_325-1];

		}
		if(aUnItCoUnTeR<listLength_326 || useLast_326){
			text_chars[219]=(char)valueList_326[aUnItCoUnTeR<listLength_326?aUnItCoUnTeR:listLength_326-1];

		}
		if(aUnItCoUnTeR<listLength_327 || useLast_327){
			text_chars[207]=(char)valueList_327[aUnItCoUnTeR<listLength_327?aUnItCoUnTeR:listLength_327-1];

		}
		if(aUnItCoUnTeR<listLength_328 || useLast_328){
			text_chars[2]=(char)valueList_328[aUnItCoUnTeR<listLength_328?aUnItCoUnTeR:listLength_328-1];

		}
		if(aUnItCoUnTeR<listLength_329 || useLast_329){
			first[209]=(unsigned char)valueList_329[aUnItCoUnTeR<listLength_329?aUnItCoUnTeR:listLength_329-1];

		}
		if(aUnItCoUnTeR<listLength_330 || useLast_330){
			text_chars[11]=(char)valueList_330[aUnItCoUnTeR<listLength_330?aUnItCoUnTeR:listLength_330-1];

		}
		if(aUnItCoUnTeR<listLength_331 || useLast_331){
			text_chars[23]=(char)valueList_331[aUnItCoUnTeR<listLength_331?aUnItCoUnTeR:listLength_331-1];

		}
		if(aUnItCoUnTeR<listLength_332 || useLast_332){
			first[99]=(unsigned char)valueList_332[aUnItCoUnTeR<listLength_332?aUnItCoUnTeR:listLength_332-1];

		}
		if(aUnItCoUnTeR<listLength_333 || useLast_333){
			first[87]=(unsigned char)valueList_333[aUnItCoUnTeR<listLength_333?aUnItCoUnTeR:listLength_333-1];

		}
		if(aUnItCoUnTeR<listLength_334 || useLast_334){
			text_chars[59]=(char)valueList_334[aUnItCoUnTeR<listLength_334?aUnItCoUnTeR:listLength_334-1];

		}
		if(aUnItCoUnTeR<listLength_335 || useLast_335){
			first[75]=(unsigned char)valueList_335[aUnItCoUnTeR<listLength_335?aUnItCoUnTeR:listLength_335-1];

		}
		if(aUnItCoUnTeR<listLength_336 || useLast_336){
			first[63]=(unsigned char)valueList_336[aUnItCoUnTeR<listLength_336?aUnItCoUnTeR:listLength_336-1];

		}
		if(aUnItCoUnTeR<listLength_337 || useLast_337){
			text_chars[35]=(char)valueList_337[aUnItCoUnTeR<listLength_337?aUnItCoUnTeR:listLength_337-1];

		}
		if(aUnItCoUnTeR<listLength_338 || useLast_338){
			first[51]=(unsigned char)valueList_338[aUnItCoUnTeR<listLength_338?aUnItCoUnTeR:listLength_338-1];

		}
		if(aUnItCoUnTeR<listLength_339 || useLast_339){
			text_chars[47]=(char)valueList_339[aUnItCoUnTeR<listLength_339?aUnItCoUnTeR:listLength_339-1];

		}
		if(aUnItCoUnTeR<listLength_340 || useLast_340){
			text_chars[1]=(char)valueList_340[aUnItCoUnTeR<listLength_340?aUnItCoUnTeR:listLength_340-1];

		}
		if(aUnItCoUnTeR<listLength_341 || useLast_341){
			text_chars[208]=(char)valueList_341[aUnItCoUnTeR<listLength_341?aUnItCoUnTeR:listLength_341-1];

		}
		if(aUnItCoUnTeR<listLength_342 || useLast_342){
			text_chars[12]=(char)valueList_342[aUnItCoUnTeR<listLength_342?aUnItCoUnTeR:listLength_342-1];

		}
		if(aUnItCoUnTeR<listLength_343 || useLast_343){
			first[98]=(unsigned char)valueList_343[aUnItCoUnTeR<listLength_343?aUnItCoUnTeR:listLength_343-1];

		}
		if(aUnItCoUnTeR<listLength_344 || useLast_344){
			text_chars[48]=(char)valueList_344[aUnItCoUnTeR<listLength_344?aUnItCoUnTeR:listLength_344-1];

		}
		if(aUnItCoUnTeR<listLength_345 || useLast_345){
			first[86]=(unsigned char)valueList_345[aUnItCoUnTeR<listLength_345?aUnItCoUnTeR:listLength_345-1];

		}
		if(aUnItCoUnTeR<listLength_346 || useLast_346){
			first[74]=(unsigned char)valueList_346[aUnItCoUnTeR<listLength_346?aUnItCoUnTeR:listLength_346-1];

		}
		if(aUnItCoUnTeR<listLength_347 || useLast_347){
			text_chars[24]=(char)valueList_347[aUnItCoUnTeR<listLength_347?aUnItCoUnTeR:listLength_347-1];

		}
		if(aUnItCoUnTeR<listLength_348 || useLast_348){
			first[62]=(unsigned char)valueList_348[aUnItCoUnTeR<listLength_348?aUnItCoUnTeR:listLength_348-1];

		}
		if(aUnItCoUnTeR<listLength_349 || useLast_349){
			text_chars[36]=(char)valueList_349[aUnItCoUnTeR<listLength_349?aUnItCoUnTeR:listLength_349-1];

		}
		if(aUnItCoUnTeR<listLength_350 || useLast_350){
			first[50]=(unsigned char)valueList_350[aUnItCoUnTeR<listLength_350?aUnItCoUnTeR:listLength_350-1];

		}
		if(aUnItCoUnTeR<listLength_351 || useLast_351){
			text_chars[0]=(char)valueList_351[aUnItCoUnTeR<listLength_351?aUnItCoUnTeR:listLength_351-1];

		}
		if(aUnItCoUnTeR<listLength_352 || useLast_352){
			text_chars[209]=(char)valueList_352[aUnItCoUnTeR<listLength_352?aUnItCoUnTeR:listLength_352-1];

		}
		if(aUnItCoUnTeR<listLength_353 || useLast_353){
			text_chars[77]=(char)valueList_353[aUnItCoUnTeR<listLength_353?aUnItCoUnTeR:listLength_353-1];

		}
		if(aUnItCoUnTeR<listLength_354 || useLast_354){
			text_chars[89]=(char)valueList_354[aUnItCoUnTeR<listLength_354?aUnItCoUnTeR:listLength_354-1];

		}
		if(aUnItCoUnTeR<listLength_355 || useLast_355){
			text_chars[53]=(char)valueList_355[aUnItCoUnTeR<listLength_355?aUnItCoUnTeR:listLength_355-1];

		}
		if(aUnItCoUnTeR<listLength_356 || useLast_356){
			text_chars[65]=(char)valueList_356[aUnItCoUnTeR<listLength_356?aUnItCoUnTeR:listLength_356-1];

		}
		if(aUnItCoUnTeR<listLength_357 || useLast_357){
			first[97]=(unsigned char)valueList_357[aUnItCoUnTeR<listLength_357?aUnItCoUnTeR:listLength_357-1];

		}
		if(aUnItCoUnTeR<listLength_358 || useLast_358){
			first[85]=(unsigned char)valueList_358[aUnItCoUnTeR<listLength_358?aUnItCoUnTeR:listLength_358-1];

		}
		if(aUnItCoUnTeR<listLength_359 || useLast_359){
			first[73]=(unsigned char)valueList_359[aUnItCoUnTeR<listLength_359?aUnItCoUnTeR:listLength_359-1];

		}
		if(aUnItCoUnTeR<listLength_360 || useLast_360){
			first[61]=(unsigned char)valueList_360[aUnItCoUnTeR<listLength_360?aUnItCoUnTeR:listLength_360-1];

		}
		if(aUnItCoUnTeR<listLength_361 || useLast_361){
			first[191]=(unsigned char)valueList_361[aUnItCoUnTeR<listLength_361?aUnItCoUnTeR:listLength_361-1];

		}
		if(aUnItCoUnTeR<listLength_362 || useLast_362){
			first[190]=(unsigned char)valueList_362[aUnItCoUnTeR<listLength_362?aUnItCoUnTeR:listLength_362-1];

		}
		if(aUnItCoUnTeR<listLength_363 || useLast_363){
			text_chars[41]=(char)valueList_363[aUnItCoUnTeR<listLength_363?aUnItCoUnTeR:listLength_363-1];

		}
		if(aUnItCoUnTeR<listLength_364 || useLast_364){
			text_chars[66]=(char)valueList_364[aUnItCoUnTeR<listLength_364?aUnItCoUnTeR:listLength_364-1];

		}
		if(aUnItCoUnTeR<listLength_365 || useLast_365){
			text_chars[78]=(char)valueList_365[aUnItCoUnTeR<listLength_365?aUnItCoUnTeR:listLength_365-1];

		}
		if(aUnItCoUnTeR<listLength_366 || useLast_366){
			text_chars[42]=(char)valueList_366[aUnItCoUnTeR<listLength_366?aUnItCoUnTeR:listLength_366-1];

		}
		if(aUnItCoUnTeR<listLength_367 || useLast_367){
			text_chars[54]=(char)valueList_367[aUnItCoUnTeR<listLength_367?aUnItCoUnTeR:listLength_367-1];

		}
		if(aUnItCoUnTeR<listLength_368 || useLast_368){
			first[96]=(unsigned char)valueList_368[aUnItCoUnTeR<listLength_368?aUnItCoUnTeR:listLength_368-1];

		}
		if(aUnItCoUnTeR<listLength_369 || useLast_369){
			first[84]=(unsigned char)valueList_369[aUnItCoUnTeR<listLength_369?aUnItCoUnTeR:listLength_369-1];

		}
		if(aUnItCoUnTeR<listLength_370 || useLast_370){
			first[72]=(unsigned char)valueList_370[aUnItCoUnTeR<listLength_370?aUnItCoUnTeR:listLength_370-1];

		}
		if(aUnItCoUnTeR<listLength_371 || useLast_371){
			first[60]=(unsigned char)valueList_371[aUnItCoUnTeR<listLength_371?aUnItCoUnTeR:listLength_371-1];

		}
		if(aUnItCoUnTeR<listLength_372 || useLast_372){
			first[192]=(unsigned char)valueList_372[aUnItCoUnTeR<listLength_372?aUnItCoUnTeR:listLength_372-1];

		}
		if(aUnItCoUnTeR<listLength_373 || useLast_373){
			first[180]=(unsigned char)valueList_373[aUnItCoUnTeR<listLength_373?aUnItCoUnTeR:listLength_373-1];

		}
		if(aUnItCoUnTeR<listLength_374 || useLast_374){
			text_chars[30]=(char)valueList_374[aUnItCoUnTeR<listLength_374?aUnItCoUnTeR:listLength_374-1];

		}
		if(aUnItCoUnTeR<listLength_375 || useLast_375){
			text_chars[55]=(char)valueList_375[aUnItCoUnTeR<listLength_375?aUnItCoUnTeR:listLength_375-1];

		}
		if(aUnItCoUnTeR<listLength_376 || useLast_376){
			text_chars[67]=(char)valueList_376[aUnItCoUnTeR<listLength_376?aUnItCoUnTeR:listLength_376-1];

		}
		if(aUnItCoUnTeR<listLength_377 || useLast_377){
			text_chars[31]=(char)valueList_377[aUnItCoUnTeR<listLength_377?aUnItCoUnTeR:listLength_377-1];

		}
		if(aUnItCoUnTeR<listLength_378 || useLast_378){
			text_chars[43]=(char)valueList_378[aUnItCoUnTeR<listLength_378?aUnItCoUnTeR:listLength_378-1];

		}
		if(aUnItCoUnTeR<listLength_379 || useLast_379){
			text_chars[79]=(char)valueList_379[aUnItCoUnTeR<listLength_379?aUnItCoUnTeR:listLength_379-1];

		}
		if(aUnItCoUnTeR<listLength_380 || useLast_380){
			first[95]=(unsigned char)valueList_380[aUnItCoUnTeR<listLength_380?aUnItCoUnTeR:listLength_380-1];

		}
		if(aUnItCoUnTeR<listLength_381 || useLast_381){
			first[83]=(unsigned char)valueList_381[aUnItCoUnTeR<listLength_381?aUnItCoUnTeR:listLength_381-1];

		}
		if(aUnItCoUnTeR<listLength_382 || useLast_382){
			first[71]=(unsigned char)valueList_382[aUnItCoUnTeR<listLength_382?aUnItCoUnTeR:listLength_382-1];

		}
		if(aUnItCoUnTeR<listLength_383 || useLast_383){
			first[181]=(unsigned char)valueList_383[aUnItCoUnTeR<listLength_383?aUnItCoUnTeR:listLength_383-1];

		}
		if(aUnItCoUnTeR<listLength_384 || useLast_384){
			first[193]=(unsigned char)valueList_384[aUnItCoUnTeR<listLength_384?aUnItCoUnTeR:listLength_384-1];

		}
		if(aUnItCoUnTeR<listLength_385 || useLast_385){
			text_chars[190]=(char)valueList_385[aUnItCoUnTeR<listLength_385?aUnItCoUnTeR:listLength_385-1];

		}
		if(aUnItCoUnTeR<listLength_386 || useLast_386){
			text_chars[44]=(char)valueList_386[aUnItCoUnTeR<listLength_386?aUnItCoUnTeR:listLength_386-1];

		}
		if(aUnItCoUnTeR<listLength_387 || useLast_387){
			text_chars[56]=(char)valueList_387[aUnItCoUnTeR<listLength_387?aUnItCoUnTeR:listLength_387-1];

		}
		if(aUnItCoUnTeR<listLength_388 || useLast_388){
			text_chars[20]=(char)valueList_388[aUnItCoUnTeR<listLength_388?aUnItCoUnTeR:listLength_388-1];

		}
		if(aUnItCoUnTeR<listLength_389 || useLast_389){
			text_chars[32]=(char)valueList_389[aUnItCoUnTeR<listLength_389?aUnItCoUnTeR:listLength_389-1];

		}
		if(aUnItCoUnTeR<listLength_390 || useLast_390){
			text_chars[68]=(char)valueList_390[aUnItCoUnTeR<listLength_390?aUnItCoUnTeR:listLength_390-1];

		}
		if(aUnItCoUnTeR<listLength_391 || useLast_391){
			first[94]=(unsigned char)valueList_391[aUnItCoUnTeR<listLength_391?aUnItCoUnTeR:listLength_391-1];

		}
		if(aUnItCoUnTeR<listLength_392 || useLast_392){
			first[82]=(unsigned char)valueList_392[aUnItCoUnTeR<listLength_392?aUnItCoUnTeR:listLength_392-1];

		}
		if(aUnItCoUnTeR<listLength_393 || useLast_393){
			first[70]=(unsigned char)valueList_393[aUnItCoUnTeR<listLength_393?aUnItCoUnTeR:listLength_393-1];

		}
		if(aUnItCoUnTeR<listLength_394 || useLast_394){
			first[170]=(unsigned char)valueList_394[aUnItCoUnTeR<listLength_394?aUnItCoUnTeR:listLength_394-1];

		}
		if(aUnItCoUnTeR<listLength_395 || useLast_395){
			first[194]=(unsigned char)valueList_395[aUnItCoUnTeR<listLength_395?aUnItCoUnTeR:listLength_395-1];

		}
		if(aUnItCoUnTeR<listLength_396 || useLast_396){
			first[182]=(unsigned char)valueList_396[aUnItCoUnTeR<listLength_396?aUnItCoUnTeR:listLength_396-1];

		}
		if(aUnItCoUnTeR<listLength_397 || useLast_397){
			text_chars[191]=(char)valueList_397[aUnItCoUnTeR<listLength_397?aUnItCoUnTeR:listLength_397-1];

		}
		if(aUnItCoUnTeR<listLength_398 || useLast_398){
			text_chars[149]=(char)valueList_398[aUnItCoUnTeR<listLength_398?aUnItCoUnTeR:listLength_398-1];

		}
		if(aUnItCoUnTeR<listLength_399 || useLast_399){
			text_chars[246]=(char)valueList_399[aUnItCoUnTeR<listLength_399?aUnItCoUnTeR:listLength_399-1];

		}
		if(aUnItCoUnTeR<listLength_400 || useLast_400){
			text_chars[234]=(char)valueList_400[aUnItCoUnTeR<listLength_400?aUnItCoUnTeR:listLength_400-1];

		}
		if(aUnItCoUnTeR<listLength_401 || useLast_401){
			text_chars[222]=(char)valueList_401[aUnItCoUnTeR<listLength_401?aUnItCoUnTeR:listLength_401-1];

		}
		if(aUnItCoUnTeR<listLength_402 || useLast_402){
			text_chars[210]=(char)valueList_402[aUnItCoUnTeR<listLength_402?aUnItCoUnTeR:listLength_402-1];

		}
		if(aUnItCoUnTeR<listLength_403 || useLast_403){
			first[93]=(unsigned char)valueList_403[aUnItCoUnTeR<listLength_403?aUnItCoUnTeR:listLength_403-1];

		}
		if(aUnItCoUnTeR<listLength_404 || useLast_404){
			first[81]=(unsigned char)valueList_404[aUnItCoUnTeR<listLength_404?aUnItCoUnTeR:listLength_404-1];

		}
		if(aUnItCoUnTeR<listLength_405 || useLast_405){
			first[195]=(unsigned char)valueList_405[aUnItCoUnTeR<listLength_405?aUnItCoUnTeR:listLength_405-1];

		}
		if(aUnItCoUnTeR<listLength_406 || useLast_406){
			text_chars[17]=(char)valueList_406[aUnItCoUnTeR<listLength_406?aUnItCoUnTeR:listLength_406-1];

		}
		if(aUnItCoUnTeR<listLength_407 || useLast_407){
			text_chars[29]=(char)valueList_407[aUnItCoUnTeR<listLength_407?aUnItCoUnTeR:listLength_407-1];

		}
		if(aUnItCoUnTeR<listLength_408 || useLast_408){
			text_chars[101]=(char)valueList_408[aUnItCoUnTeR<listLength_408?aUnItCoUnTeR:listLength_408-1];

		}
		if(aUnItCoUnTeR<listLength_409 || useLast_409){
			text_chars[113]=(char)valueList_409[aUnItCoUnTeR<listLength_409?aUnItCoUnTeR:listLength_409-1];

		}
		if(aUnItCoUnTeR<listLength_410 || useLast_410){
			text_chars[125]=(char)valueList_410[aUnItCoUnTeR<listLength_410?aUnItCoUnTeR:listLength_410-1];

		}
		if(aUnItCoUnTeR<listLength_411 || useLast_411){
			first[183]=(unsigned char)valueList_411[aUnItCoUnTeR<listLength_411?aUnItCoUnTeR:listLength_411-1];

		}
		if(aUnItCoUnTeR<listLength_412 || useLast_412){
			text_chars[137]=(char)valueList_412[aUnItCoUnTeR<listLength_412?aUnItCoUnTeR:listLength_412-1];

		}
		if(aUnItCoUnTeR<listLength_413 || useLast_413){
			first[171]=(unsigned char)valueList_413[aUnItCoUnTeR<listLength_413?aUnItCoUnTeR:listLength_413-1];

		}
		if(aUnItCoUnTeR<listLength_414 || useLast_414){
			first[9]=(unsigned char)valueList_414[aUnItCoUnTeR<listLength_414?aUnItCoUnTeR:listLength_414-1];

		}
		if(aUnItCoUnTeR<listLength_415 || useLast_415){
			text_chars[138]=(char)valueList_415[aUnItCoUnTeR<listLength_415?aUnItCoUnTeR:listLength_415-1];

		}
		if(aUnItCoUnTeR<listLength_416 || useLast_416){
			text_chars[247]=(char)valueList_416[aUnItCoUnTeR<listLength_416?aUnItCoUnTeR:listLength_416-1];

		}
		if(aUnItCoUnTeR<listLength_417 || useLast_417){
			text_chars[235]=(char)valueList_417[aUnItCoUnTeR<listLength_417?aUnItCoUnTeR:listLength_417-1];

		}
		if(aUnItCoUnTeR<listLength_418 || useLast_418){
			text_chars[223]=(char)valueList_418[aUnItCoUnTeR<listLength_418?aUnItCoUnTeR:listLength_418-1];

		}
		if(aUnItCoUnTeR<listLength_419 || useLast_419){
			text_chars[211]=(char)valueList_419[aUnItCoUnTeR<listLength_419?aUnItCoUnTeR:listLength_419-1];

		}
		if(aUnItCoUnTeR<listLength_420 || useLast_420){
			first[196]=(unsigned char)valueList_420[aUnItCoUnTeR<listLength_420?aUnItCoUnTeR:listLength_420-1];

		}
		if(aUnItCoUnTeR<listLength_421 || useLast_421){
			first[8]=(unsigned char)valueList_421[aUnItCoUnTeR<listLength_421?aUnItCoUnTeR:listLength_421-1];

		}
		if(aUnItCoUnTeR<listLength_422 || useLast_422){
			first[92]=(unsigned char)valueList_422[aUnItCoUnTeR<listLength_422?aUnItCoUnTeR:listLength_422-1];

		}
		if(aUnItCoUnTeR<listLength_423 || useLast_423){
			first[184]=(unsigned char)valueList_423[aUnItCoUnTeR<listLength_423?aUnItCoUnTeR:listLength_423-1];

		}
		if(aUnItCoUnTeR<listLength_424 || useLast_424){
			first[80]=(unsigned char)valueList_424[aUnItCoUnTeR<listLength_424?aUnItCoUnTeR:listLength_424-1];

		}
		if(aUnItCoUnTeR<listLength_425 || useLast_425){
			text_chars[18]=(char)valueList_425[aUnItCoUnTeR<listLength_425?aUnItCoUnTeR:listLength_425-1];

		}
		if(aUnItCoUnTeR<listLength_426 || useLast_426){
			text_chars[102]=(char)valueList_426[aUnItCoUnTeR<listLength_426?aUnItCoUnTeR:listLength_426-1];

		}
		if(aUnItCoUnTeR<listLength_427 || useLast_427){
			text_chars[114]=(char)valueList_427[aUnItCoUnTeR<listLength_427?aUnItCoUnTeR:listLength_427-1];

		}
		if(aUnItCoUnTeR<listLength_428 || useLast_428){
			first[172]=(unsigned char)valueList_428[aUnItCoUnTeR<listLength_428?aUnItCoUnTeR:listLength_428-1];

		}
		if(aUnItCoUnTeR<listLength_429 || useLast_429){
			text_chars[126]=(char)valueList_429[aUnItCoUnTeR<listLength_429?aUnItCoUnTeR:listLength_429-1];

		}
		if(aUnItCoUnTeR<listLength_430 || useLast_430){
			first[160]=(unsigned char)valueList_430[aUnItCoUnTeR<listLength_430?aUnItCoUnTeR:listLength_430-1];

		}
		if(aUnItCoUnTeR<listLength_431 || useLast_431){
			text_chars[127]=(char)valueList_431[aUnItCoUnTeR<listLength_431?aUnItCoUnTeR:listLength_431-1];

		}
		if(aUnItCoUnTeR<listLength_432 || useLast_432){
			text_chars[236]=(char)valueList_432[aUnItCoUnTeR<listLength_432?aUnItCoUnTeR:listLength_432-1];

		}
		if(aUnItCoUnTeR<listLength_433 || useLast_433){
			text_chars[139]=(char)valueList_433[aUnItCoUnTeR<listLength_433?aUnItCoUnTeR:listLength_433-1];

		}
		if(aUnItCoUnTeR<listLength_434 || useLast_434){
			text_chars[224]=(char)valueList_434[aUnItCoUnTeR<listLength_434?aUnItCoUnTeR:listLength_434-1];

		}
		if(aUnItCoUnTeR<listLength_435 || useLast_435){
			text_chars[212]=(char)valueList_435[aUnItCoUnTeR<listLength_435?aUnItCoUnTeR:listLength_435-1];

		}
		if(aUnItCoUnTeR<listLength_436 || useLast_436){
			text_chars[200]=(char)valueList_436[aUnItCoUnTeR<listLength_436?aUnItCoUnTeR:listLength_436-1];

		}
		if(aUnItCoUnTeR<listLength_437 || useLast_437){
			text_chars[19]=(char)valueList_437[aUnItCoUnTeR<listLength_437?aUnItCoUnTeR:listLength_437-1];

		}
		if(aUnItCoUnTeR<listLength_438 || useLast_438){
			first[185]=(unsigned char)valueList_438[aUnItCoUnTeR<listLength_438?aUnItCoUnTeR:listLength_438-1];

		}
		if(aUnItCoUnTeR<listLength_439 || useLast_439){
			first[173]=(unsigned char)valueList_439[aUnItCoUnTeR<listLength_439?aUnItCoUnTeR:listLength_439-1];

		}
		if(aUnItCoUnTeR<listLength_440 || useLast_440){
			first[91]=(unsigned char)valueList_440[aUnItCoUnTeR<listLength_440?aUnItCoUnTeR:listLength_440-1];

		}
		if(aUnItCoUnTeR<listLength_441 || useLast_441){
			first[197]=(unsigned char)valueList_441[aUnItCoUnTeR<listLength_441?aUnItCoUnTeR:listLength_441-1];

		}
		if(aUnItCoUnTeR<listLength_442 || useLast_442){
			text_chars[103]=(char)valueList_442[aUnItCoUnTeR<listLength_442?aUnItCoUnTeR:listLength_442-1];

		}
		if(aUnItCoUnTeR<listLength_443 || useLast_443){
			first[161]=(unsigned char)valueList_443[aUnItCoUnTeR<listLength_443?aUnItCoUnTeR:listLength_443-1];

		}
		if(aUnItCoUnTeR<listLength_444 || useLast_444){
			text_chars[115]=(char)valueList_444[aUnItCoUnTeR<listLength_444?aUnItCoUnTeR:listLength_444-1];

		}
		if(aUnItCoUnTeR<listLength_445 || useLast_445){
			text_chars[248]=(char)valueList_445[aUnItCoUnTeR<listLength_445?aUnItCoUnTeR:listLength_445-1];

		}
		if(aUnItCoUnTeR<listLength_446 || useLast_446){
			text_chars[116]=(char)valueList_446[aUnItCoUnTeR<listLength_446?aUnItCoUnTeR:listLength_446-1];

		}
		if(aUnItCoUnTeR<listLength_447 || useLast_447){
			text_chars[225]=(char)valueList_447[aUnItCoUnTeR<listLength_447?aUnItCoUnTeR:listLength_447-1];

		}
		if(aUnItCoUnTeR<listLength_448 || useLast_448){
			text_chars[128]=(char)valueList_448[aUnItCoUnTeR<listLength_448?aUnItCoUnTeR:listLength_448-1];

		}
		if(aUnItCoUnTeR<listLength_449 || useLast_449){
			text_chars[213]=(char)valueList_449[aUnItCoUnTeR<listLength_449?aUnItCoUnTeR:listLength_449-1];

		}
		if(aUnItCoUnTeR<listLength_450 || useLast_450){
			text_chars[201]=(char)valueList_450[aUnItCoUnTeR<listLength_450?aUnItCoUnTeR:listLength_450-1];

		}
		if(aUnItCoUnTeR<listLength_451 || useLast_451){
			first[174]=(unsigned char)valueList_451[aUnItCoUnTeR<listLength_451?aUnItCoUnTeR:listLength_451-1];

		}
		if(aUnItCoUnTeR<listLength_452 || useLast_452){
			first[162]=(unsigned char)valueList_452[aUnItCoUnTeR<listLength_452?aUnItCoUnTeR:listLength_452-1];

		}
		if(aUnItCoUnTeR<listLength_453 || useLast_453){
			first[198]=(unsigned char)valueList_453[aUnItCoUnTeR<listLength_453?aUnItCoUnTeR:listLength_453-1];

		}
		if(aUnItCoUnTeR<listLength_454 || useLast_454){
			first[90]=(unsigned char)valueList_454[aUnItCoUnTeR<listLength_454?aUnItCoUnTeR:listLength_454-1];

		}
		if(aUnItCoUnTeR<listLength_455 || useLast_455){
			first[186]=(unsigned char)valueList_455[aUnItCoUnTeR<listLength_455?aUnItCoUnTeR:listLength_455-1];

		}
		if(aUnItCoUnTeR<listLength_456 || useLast_456){
			text_chars[249]=(char)valueList_456[aUnItCoUnTeR<listLength_456?aUnItCoUnTeR:listLength_456-1];

		}
		if(aUnItCoUnTeR<listLength_457 || useLast_457){
			first[150]=(unsigned char)valueList_457[aUnItCoUnTeR<listLength_457?aUnItCoUnTeR:listLength_457-1];

		}
		if(aUnItCoUnTeR<listLength_458 || useLast_458){
			text_chars[104]=(char)valueList_458[aUnItCoUnTeR<listLength_458?aUnItCoUnTeR:listLength_458-1];

		}
		if(aUnItCoUnTeR<listLength_459 || useLast_459){
			text_chars[237]=(char)valueList_459[aUnItCoUnTeR<listLength_459?aUnItCoUnTeR:listLength_459-1];

		}
		if(aUnItCoUnTeR<listLength_460 || useLast_460){
			text_chars[105]=(char)valueList_460[aUnItCoUnTeR<listLength_460?aUnItCoUnTeR:listLength_460-1];

		}
		if(aUnItCoUnTeR<listLength_461 || useLast_461){
			text_chars[214]=(char)valueList_461[aUnItCoUnTeR<listLength_461?aUnItCoUnTeR:listLength_461-1];

		}
		if(aUnItCoUnTeR<listLength_462 || useLast_462){
			text_chars[117]=(char)valueList_462[aUnItCoUnTeR<listLength_462?aUnItCoUnTeR:listLength_462-1];

		}
		if(aUnItCoUnTeR<listLength_463 || useLast_463){
			text_chars[202]=(char)valueList_463[aUnItCoUnTeR<listLength_463?aUnItCoUnTeR:listLength_463-1];

		}
		if(aUnItCoUnTeR<listLength_464 || useLast_464){
			text_chars[129]=(char)valueList_464[aUnItCoUnTeR<listLength_464?aUnItCoUnTeR:listLength_464-1];

		}
		if(aUnItCoUnTeR<listLength_465 || useLast_465){
			text_chars[37]=(char)valueList_465[aUnItCoUnTeR<listLength_465?aUnItCoUnTeR:listLength_465-1];

		}
		if(aUnItCoUnTeR<listLength_466 || useLast_466){
			text_chars[49]=(char)valueList_466[aUnItCoUnTeR<listLength_466?aUnItCoUnTeR:listLength_466-1];

		}
		if(aUnItCoUnTeR<listLength_467 || useLast_467){
			first[199]=(unsigned char)valueList_467[aUnItCoUnTeR<listLength_467?aUnItCoUnTeR:listLength_467-1];

		}
		if(aUnItCoUnTeR<listLength_468 || useLast_468){
			text_chars[13]=(char)valueList_468[aUnItCoUnTeR<listLength_468?aUnItCoUnTeR:listLength_468-1];

		}
		if(aUnItCoUnTeR<listLength_469 || useLast_469){
			text_chars[25]=(char)valueList_469[aUnItCoUnTeR<listLength_469?aUnItCoUnTeR:listLength_469-1];

		}
		if(aUnItCoUnTeR<listLength_470 || useLast_470){
			first[163]=(unsigned char)valueList_470[aUnItCoUnTeR<listLength_470?aUnItCoUnTeR:listLength_470-1];

		}
		if(aUnItCoUnTeR<listLength_471 || useLast_471){
			first[151]=(unsigned char)valueList_471[aUnItCoUnTeR<listLength_471?aUnItCoUnTeR:listLength_471-1];

		}
		if(aUnItCoUnTeR<listLength_472 || useLast_472){
			first[187]=(unsigned char)valueList_472[aUnItCoUnTeR<listLength_472?aUnItCoUnTeR:listLength_472-1];

		}
		if(aUnItCoUnTeR<listLength_473 || useLast_473){
			first[175]=(unsigned char)valueList_473[aUnItCoUnTeR<listLength_473?aUnItCoUnTeR:listLength_473-1];

		}
		if(aUnItCoUnTeR<listLength_474 || useLast_474){
			text_chars[238]=(char)valueList_474[aUnItCoUnTeR<listLength_474?aUnItCoUnTeR:listLength_474-1];

		}
		if(aUnItCoUnTeR<listLength_475 || useLast_475){
			text_chars[226]=(char)valueList_475[aUnItCoUnTeR<listLength_475?aUnItCoUnTeR:listLength_475-1];

		}
		if(aUnItCoUnTeR<listLength_476 || useLast_476){
			text_chars[203]=(char)valueList_476[aUnItCoUnTeR<listLength_476?aUnItCoUnTeR:listLength_476-1];

		}
		if(aUnItCoUnTeR<listLength_477 || useLast_477){
			text_chars[106]=(char)valueList_477[aUnItCoUnTeR<listLength_477?aUnItCoUnTeR:listLength_477-1];

		}
		if(aUnItCoUnTeR<listLength_478 || useLast_478){
			text_chars[118]=(char)valueList_478[aUnItCoUnTeR<listLength_478?aUnItCoUnTeR:listLength_478-1];

		}
		if(aUnItCoUnTeR<listLength_479 || useLast_479){
			text_chars[26]=(char)valueList_479[aUnItCoUnTeR<listLength_479?aUnItCoUnTeR:listLength_479-1];

		}
		if(aUnItCoUnTeR<listLength_480 || useLast_480){
			text_chars[38]=(char)valueList_480[aUnItCoUnTeR<listLength_480?aUnItCoUnTeR:listLength_480-1];

		}
		if(aUnItCoUnTeR<listLength_481 || useLast_481){
			first[188]=(unsigned char)valueList_481[aUnItCoUnTeR<listLength_481?aUnItCoUnTeR:listLength_481-1];

		}
		if(aUnItCoUnTeR<listLength_482 || useLast_482){
			text_chars[14]=(char)valueList_482[aUnItCoUnTeR<listLength_482?aUnItCoUnTeR:listLength_482-1];

		}
		if(aUnItCoUnTeR<listLength_483 || useLast_483){
			first[152]=(unsigned char)valueList_483[aUnItCoUnTeR<listLength_483?aUnItCoUnTeR:listLength_483-1];

		}
		if(aUnItCoUnTeR<listLength_484 || useLast_484){
			first[140]=(unsigned char)valueList_484[aUnItCoUnTeR<listLength_484?aUnItCoUnTeR:listLength_484-1];

		}
		if(aUnItCoUnTeR<listLength_485 || useLast_485){
			first[176]=(unsigned char)valueList_485[aUnItCoUnTeR<listLength_485?aUnItCoUnTeR:listLength_485-1];

		}
		if(aUnItCoUnTeR<listLength_486 || useLast_486){
			first[164]=(unsigned char)valueList_486[aUnItCoUnTeR<listLength_486?aUnItCoUnTeR:listLength_486-1];

		}
		if(aUnItCoUnTeR<listLength_487 || useLast_487){
			text_chars[239]=(char)valueList_487[aUnItCoUnTeR<listLength_487?aUnItCoUnTeR:listLength_487-1];

		}
		if(aUnItCoUnTeR<listLength_488 || useLast_488){
			text_chars[227]=(char)valueList_488[aUnItCoUnTeR<listLength_488?aUnItCoUnTeR:listLength_488-1];

		}
		if(aUnItCoUnTeR<listLength_489 || useLast_489){
			text_chars[215]=(char)valueList_489[aUnItCoUnTeR<listLength_489?aUnItCoUnTeR:listLength_489-1];

		}
		if(aUnItCoUnTeR<listLength_490 || useLast_490){
			text_chars[107]=(char)valueList_490[aUnItCoUnTeR<listLength_490?aUnItCoUnTeR:listLength_490-1];

		}
		if(aUnItCoUnTeR<listLength_491 || useLast_491){
			text_chars[119]=(char)valueList_491[aUnItCoUnTeR<listLength_491?aUnItCoUnTeR:listLength_491-1];

		}
		if(aUnItCoUnTeR<listLength_492 || useLast_492){
			text_chars[15]=(char)valueList_492[aUnItCoUnTeR<listLength_492?aUnItCoUnTeR:listLength_492-1];

		}
		if(aUnItCoUnTeR<listLength_493 || useLast_493){
			first[189]=(unsigned char)valueList_493[aUnItCoUnTeR<listLength_493?aUnItCoUnTeR:listLength_493-1];

		}
		if(aUnItCoUnTeR<listLength_494 || useLast_494){
			text_chars[27]=(char)valueList_494[aUnItCoUnTeR<listLength_494?aUnItCoUnTeR:listLength_494-1];

		}
		if(aUnItCoUnTeR<listLength_495 || useLast_495){
			first[177]=(unsigned char)valueList_495[aUnItCoUnTeR<listLength_495?aUnItCoUnTeR:listLength_495-1];

		}
		if(aUnItCoUnTeR<listLength_496 || useLast_496){
			first[141]=(unsigned char)valueList_496[aUnItCoUnTeR<listLength_496?aUnItCoUnTeR:listLength_496-1];

		}
		if(aUnItCoUnTeR<listLength_497 || useLast_497){
			first[250]=(unsigned char)valueList_497[aUnItCoUnTeR<listLength_497?aUnItCoUnTeR:listLength_497-1];

		}
		if(aUnItCoUnTeR<listLength_498 || useLast_498){
			text_chars[39]=(char)valueList_498[aUnItCoUnTeR<listLength_498?aUnItCoUnTeR:listLength_498-1];

		}
		if(aUnItCoUnTeR<listLength_499 || useLast_499){
			first[165]=(unsigned char)valueList_499[aUnItCoUnTeR<listLength_499?aUnItCoUnTeR:listLength_499-1];

		}
		if(aUnItCoUnTeR<listLength_500 || useLast_500){
			first[153]=(unsigned char)valueList_500[aUnItCoUnTeR<listLength_500?aUnItCoUnTeR:listLength_500-1];

		}
		if(aUnItCoUnTeR<listLength_501 || useLast_501){
			text_chars[228]=(char)valueList_501[aUnItCoUnTeR<listLength_501?aUnItCoUnTeR:listLength_501-1];

		}
		if(aUnItCoUnTeR<listLength_502 || useLast_502){
			text_chars[216]=(char)valueList_502[aUnItCoUnTeR<listLength_502?aUnItCoUnTeR:listLength_502-1];

		}
		if(aUnItCoUnTeR<listLength_503 || useLast_503){
			text_chars[204]=(char)valueList_503[aUnItCoUnTeR<listLength_503?aUnItCoUnTeR:listLength_503-1];

		}
		if(aUnItCoUnTeR<listLength_504 || useLast_504){
			text_chars[108]=(char)valueList_504[aUnItCoUnTeR<listLength_504?aUnItCoUnTeR:listLength_504-1];

		}
		if(aUnItCoUnTeR<listLength_505 || useLast_505){
			first[178]=(unsigned char)valueList_505[aUnItCoUnTeR<listLength_505?aUnItCoUnTeR:listLength_505-1];

		}
		if(aUnItCoUnTeR<listLength_506 || useLast_506){
			text_chars[16]=(char)valueList_506[aUnItCoUnTeR<listLength_506?aUnItCoUnTeR:listLength_506-1];

		}
		if(aUnItCoUnTeR<listLength_507 || useLast_507){
			first[166]=(unsigned char)valueList_507[aUnItCoUnTeR<listLength_507?aUnItCoUnTeR:listLength_507-1];

		}
		if(aUnItCoUnTeR<listLength_508 || useLast_508){
			first[130]=(unsigned char)valueList_508[aUnItCoUnTeR<listLength_508?aUnItCoUnTeR:listLength_508-1];

		}
		if(aUnItCoUnTeR<listLength_509 || useLast_509){
			first[251]=(unsigned char)valueList_509[aUnItCoUnTeR<listLength_509?aUnItCoUnTeR:listLength_509-1];

		}
		if(aUnItCoUnTeR<listLength_510 || useLast_510){
			text_chars[28]=(char)valueList_510[aUnItCoUnTeR<listLength_510?aUnItCoUnTeR:listLength_510-1];

		}
		if(aUnItCoUnTeR<listLength_511 || useLast_511){
			first[154]=(unsigned char)valueList_511[aUnItCoUnTeR<listLength_511?aUnItCoUnTeR:listLength_511-1];

		}
		if(aUnItCoUnTeR<listLength_512 || useLast_512){
			first[142]=(unsigned char)valueList_512[aUnItCoUnTeR<listLength_512?aUnItCoUnTeR:listLength_512-1];

		}
		if(aUnItCoUnTeR<listLength_513 || useLast_513){
			text_chars[229]=(char)valueList_513[aUnItCoUnTeR<listLength_513?aUnItCoUnTeR:listLength_513-1];

		}
		if(aUnItCoUnTeR<listLength_514 || useLast_514){
			text_chars[217]=(char)valueList_514[aUnItCoUnTeR<listLength_514?aUnItCoUnTeR:listLength_514-1];

		}
		if(aUnItCoUnTeR<listLength_515 || useLast_515){
			text_chars[205]=(char)valueList_515[aUnItCoUnTeR<listLength_515?aUnItCoUnTeR:listLength_515-1];

		}
		if(aUnItCoUnTeR<listLength_516 || useLast_516){
			accept_ranges[0].lo=(unsigned char)valueList_516[aUnItCoUnTeR<listLength_516?aUnItCoUnTeR:listLength_516-1];

		}
		if(aUnItCoUnTeR<listLength_517 || useLast_517){
			accept_ranges[0].hi=(unsigned char)valueList_517[aUnItCoUnTeR<listLength_517?aUnItCoUnTeR:listLength_517-1];

		}
		returnValue = file_looks_utf8(buf,nbytes,ubuf,ulen);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("file_looks_utf8","returnValue",2,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_file_looks_utf8_11\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_looks_utf8_up();

	switch(caseIndex){
	case 11:
		test_file_looks_utf8_11();
		break;
	default:
		abnormal_file_looks_utf8_case(caseIndex);
		break;
	}

	test_file_looks_utf8_down();
}

