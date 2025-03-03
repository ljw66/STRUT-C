void test_looks_ascii_up(void);
void test_looks_ascii_down(void);


void test_looks_ascii_up(void){

	aunit_printf("\n##FUNCTION_START_looks_ascii\n");
 }

void test_looks_ascii_down(void){
	aunit_printf("\n##FUNCTION_END_looks_ascii\n");
 }



void abnormal_looks_ascii_case(int index);

void abnormal_looks_ascii_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_looks_ascii_2(void){
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
	unsigned char *valueList_0[]={(unsigned char *)"hello"};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)ulen_PTRTO};
	unsigned int listLength_1=1;
	file_unichar_t *valueList_2[]={(file_unichar_t *)ubuf_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={5};
	unsigned int listLength_3=1;
	char valueList_4[]={0};
	unsigned int listLength_4=1;
	char valueList_5[]={0};
	unsigned int listLength_5=1;
	char valueList_6[]={0};
	unsigned int listLength_6=1;
	char valueList_7[]={0};
	unsigned int listLength_7=1;
	char valueList_8[]={0};
	unsigned int listLength_8=1;
	char valueList_9[]={0};
	unsigned int listLength_9=1;
	char valueList_10[]={0};
	unsigned int listLength_10=1;
	char valueList_11[]={0};
	unsigned int listLength_11=1;
	char valueList_12[]={0};
	unsigned int listLength_12=1;
	char valueList_13[]={0};
	unsigned int listLength_13=1;
	char valueList_14[]={0};
	unsigned int listLength_14=1;
	char valueList_15[]={0};
	unsigned int listLength_15=1;
	char valueList_16[]={0};
	unsigned int listLength_16=1;
	char valueList_17[]={0};
	unsigned int listLength_17=1;
	char valueList_18[]={0};
	unsigned int listLength_18=1;
	char valueList_19[]={0};
	unsigned int listLength_19=1;
	char valueList_20[]={0};
	unsigned int listLength_20=1;
	char valueList_21[]={0};
	unsigned int listLength_21=1;
	char valueList_22[]={0};
	unsigned int listLength_22=1;
	char valueList_23[]={0};
	unsigned int listLength_23=1;
	char valueList_24[]={0};
	unsigned int listLength_24=1;
	char valueList_25[]={0};
	unsigned int listLength_25=1;
	char valueList_26[]={0};
	unsigned int listLength_26=1;
	char valueList_27[]={0};
	unsigned int listLength_27=1;
	char valueList_28[]={0};
	unsigned int listLength_28=1;
	char valueList_29[]={0};
	unsigned int listLength_29=1;
	char valueList_30[]={0};
	unsigned int listLength_30=1;
	char valueList_31[]={ 1};
	unsigned int listLength_31=1;
	char valueList_32[]={0};
	unsigned int listLength_32=1;
	char valueList_33[]={0};
	unsigned int listLength_33=1;
	char valueList_34[]={0};
	unsigned int listLength_34=1;
	char valueList_35[]={0};
	unsigned int listLength_35=1;
	char valueList_36[]={0};
	unsigned int listLength_36=1;
	char valueList_37[]={0};
	unsigned int listLength_37=1;
	char valueList_38[]={0};
	unsigned int listLength_38=1;
	char valueList_39[]={0};
	unsigned int listLength_39=1;
	char valueList_40[]={0};
	unsigned int listLength_40=1;
	char valueList_41[]={0};
	unsigned int listLength_41=1;
	char valueList_42[]={ 1};
	unsigned int listLength_42=1;
	char valueList_43[]={0};
	unsigned int listLength_43=1;
	char valueList_44[]={0};
	unsigned int listLength_44=1;
	char valueList_45[]={0};
	unsigned int listLength_45=1;
	char valueList_46[]={0};
	unsigned int listLength_46=1;
	char valueList_47[]={0};
	unsigned int listLength_47=1;
	char valueList_48[]={0};
	unsigned int listLength_48=1;
	char valueList_49[]={0};
	unsigned int listLength_49=1;
	char valueList_50[]={0};
	unsigned int listLength_50=1;
	char valueList_51[]={0};
	unsigned int listLength_51=1;
	char valueList_52[]={0};
	unsigned int listLength_52=1;
	char valueList_53[]={0};
	unsigned int listLength_53=1;
	char valueList_54[]={0};
	unsigned int listLength_54=1;
	char valueList_55[]={1};
	unsigned int listLength_55=1;
	char valueList_56[]={0};
	unsigned int listLength_56=1;
	char valueList_57[]={0};
	unsigned int listLength_57=1;
	char valueList_58[]={0};
	unsigned int listLength_58=1;
	char valueList_59[]={0};
	unsigned int listLength_59=1;
	char valueList_60[]={0};
	unsigned int listLength_60=1;
	char valueList_61[]={0};
	unsigned int listLength_61=1;
	char valueList_62[]={0};
	unsigned int listLength_62=1;
	char valueList_63[]={0};
	unsigned int listLength_63=1;
	char valueList_64[]={0};
	unsigned int listLength_64=1;
	char valueList_65[]={0};
	unsigned int listLength_65=1;
	char valueList_66[]={0};
	unsigned int listLength_66=1;
	char valueList_67[]={0};
	unsigned int listLength_67=1;
	char valueList_68[]={0};
	unsigned int listLength_68=1;
	char valueList_69[]={0};
	unsigned int listLength_69=1;
	char valueList_70[]={0};
	unsigned int listLength_70=1;
	char valueList_71[]={0};
	unsigned int listLength_71=1;
	char valueList_72[]={0};
	unsigned int listLength_72=1;
	char valueList_73[]={0};
	unsigned int listLength_73=1;
	char valueList_74[]={0};
	unsigned int listLength_74=1;
	char valueList_75[]={0};
	unsigned int listLength_75=1;
	char valueList_76[]={0};
	unsigned int listLength_76=1;
	char valueList_77[]={0};
	unsigned int listLength_77=1;
	char valueList_78[]={0};
	unsigned int listLength_78=1;
	char valueList_79[]={0};
	unsigned int listLength_79=1;
	char valueList_80[]={0};
	unsigned int listLength_80=1;
	char valueList_81[]={0};
	unsigned int listLength_81=1;
	char valueList_82[]={0};
	unsigned int listLength_82=1;
	char valueList_83[]={0};
	unsigned int listLength_83=1;
	char valueList_84[]={0};
	unsigned int listLength_84=1;
	char valueList_85[]={0};
	unsigned int listLength_85=1;
	char valueList_86[]={0};
	unsigned int listLength_86=1;
	char valueList_87[]={0};
	unsigned int listLength_87=1;
	char valueList_88[]={0};
	unsigned int listLength_88=1;
	char valueList_89[]={0};
	unsigned int listLength_89=1;
	char valueList_90[]={0};
	unsigned int listLength_90=1;
	char valueList_91[]={0};
	unsigned int listLength_91=1;
	char valueList_92[]={0};
	unsigned int listLength_92=1;
	char valueList_93[]={0};
	unsigned int listLength_93=1;
	char valueList_94[]={0};
	unsigned int listLength_94=1;
	char valueList_95[]={0};
	unsigned int listLength_95=1;
	char valueList_96[]={0};
	unsigned int listLength_96=1;
	char valueList_97[]={0};
	unsigned int listLength_97=1;
	char valueList_98[]={0};
	unsigned int listLength_98=1;
	char valueList_99[]={0};
	unsigned int listLength_99=1;
	char valueList_100[]={0};
	unsigned int listLength_100=1;
	char valueList_101[]={0};
	unsigned int listLength_101=1;
	char valueList_102[]={0};
	unsigned int listLength_102=1;
	char valueList_103[]={0};
	unsigned int listLength_103=1;
	char valueList_104[]={0};
	unsigned int listLength_104=1;
	char valueList_105[]={0};
	unsigned int listLength_105=1;
	char valueList_106[]={0};
	unsigned int listLength_106=1;
	char valueList_107[]={0};
	unsigned int listLength_107=1;
	char valueList_108[]={0};
	unsigned int listLength_108=1;
	char valueList_109[]={0};
	unsigned int listLength_109=1;
	char valueList_110[]={0};
	unsigned int listLength_110=1;
	char valueList_111[]={0};
	unsigned int listLength_111=1;
	char valueList_112[]={0};
	unsigned int listLength_112=1;
	char valueList_113[]={0};
	unsigned int listLength_113=1;
	char valueList_114[]={0};
	unsigned int listLength_114=1;
	char valueList_115[]={0};
	unsigned int listLength_115=1;
	char valueList_116[]={0};
	unsigned int listLength_116=1;
	char valueList_117[]={0};
	unsigned int listLength_117=1;
	char valueList_118[]={0};
	unsigned int listLength_118=1;
	char valueList_119[]={0};
	unsigned int listLength_119=1;
	char valueList_120[]={0};
	unsigned int listLength_120=1;
	char valueList_121[]={0};
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
	char valueList_127[]={0};
	unsigned int listLength_127=1;
	unsigned long int valueList_128[]={0};
	unsigned int listLength_128=1;
	char valueList_129[]={0};
	unsigned int listLength_129=1;
	char valueList_130[]={0};
	unsigned int listLength_130=1;
	char valueList_131[]={0};
	unsigned int listLength_131=1;
	char valueList_132[]={0};
	unsigned int listLength_132=1;
	char valueList_133[]={0};
	unsigned int listLength_133=1;
	char valueList_134[]={0};
	unsigned int listLength_134=1;
	char valueList_135[]={0};
	unsigned int listLength_135=1;
	char valueList_136[]={0};
	unsigned int listLength_136=1;
	char valueList_137[]={0};
	unsigned int listLength_137=1;
	char valueList_138[]={0};
	unsigned int listLength_138=1;
	char valueList_139[]={0};
	unsigned int listLength_139=1;
	char valueList_140[]={0};
	unsigned int listLength_140=1;
	char valueList_141[]={0};
	unsigned int listLength_141=1;
	char valueList_142[]={0};
	unsigned int listLength_142=1;
	char valueList_143[]={0};
	unsigned int listLength_143=1;
	char valueList_144[]={0};
	unsigned int listLength_144=1;
	char valueList_145[]={0};
	unsigned int listLength_145=1;
	char valueList_146[]={0};
	unsigned int listLength_146=1;
	char valueList_147[]={0};
	unsigned int listLength_147=1;
	char valueList_148[]={0};
	unsigned int listLength_148=1;
	char valueList_149[]={0};
	unsigned int listLength_149=1;
	char valueList_150[]={0};
	unsigned int listLength_150=1;
	char valueList_151[]={0};
	unsigned int listLength_151=1;
	char valueList_152[]={0};
	unsigned int listLength_152=1;
	char valueList_153[]={0};
	unsigned int listLength_153=1;
	char valueList_154[]={0};
	unsigned int listLength_154=1;
	char valueList_155[]={0};
	unsigned int listLength_155=1;
	char valueList_156[]={0};
	unsigned int listLength_156=1;
	char valueList_157[]={0};
	unsigned int listLength_157=1;
	char valueList_158[]={0};
	unsigned int listLength_158=1;
	char valueList_159[]={0};
	unsigned int listLength_159=1;
	char valueList_160[]={0};
	unsigned int listLength_160=1;
	char valueList_161[]={0};
	unsigned int listLength_161=1;
	char valueList_162[]={0};
	unsigned int listLength_162=1;
	char valueList_163[]={0};
	unsigned int listLength_163=1;
	char valueList_164[]={0};
	unsigned int listLength_164=1;
	char valueList_165[]={0};
	unsigned int listLength_165=1;
	char valueList_166[]={0};
	unsigned int listLength_166=1;
	char valueList_167[]={0};
	unsigned int listLength_167=1;
	char valueList_168[]={0};
	unsigned int listLength_168=1;
	char valueList_169[]={0};
	unsigned int listLength_169=1;
	char valueList_170[]={0};
	unsigned int listLength_170=1;
	char valueList_171[]={0};
	unsigned int listLength_171=1;
	char valueList_172[]={0};
	unsigned int listLength_172=1;
	char valueList_173[]={0};
	unsigned int listLength_173=1;
	char valueList_174[]={0};
	unsigned int listLength_174=1;
	char valueList_175[]={0};
	unsigned int listLength_175=1;
	char valueList_176[]={0};
	unsigned int listLength_176=1;
	char valueList_177[]={0};
	unsigned int listLength_177=1;
	char valueList_178[]={0};
	unsigned int listLength_178=1;
	char valueList_179[]={0};
	unsigned int listLength_179=1;
	char valueList_180[]={0};
	unsigned int listLength_180=1;
	char valueList_181[]={0};
	unsigned int listLength_181=1;
	char valueList_182[]={0};
	unsigned int listLength_182=1;
	char valueList_183[]={0};
	unsigned int listLength_183=1;
	char valueList_184[]={0};
	unsigned int listLength_184=1;
	char valueList_185[]={0};
	unsigned int listLength_185=1;
	char valueList_186[]={0};
	unsigned int listLength_186=1;
	char valueList_187[]={0};
	unsigned int listLength_187=1;
	char valueList_188[]={0};
	unsigned int listLength_188=1;
	char valueList_189[]={0};
	unsigned int listLength_189=1;
	char valueList_190[]={0};
	unsigned int listLength_190=1;
	char valueList_191[]={0};
	unsigned int listLength_191=1;
	char valueList_192[]={0};
	unsigned int listLength_192=1;
	char valueList_193[]={0};
	unsigned int listLength_193=1;
	char valueList_194[]={0};
	unsigned int listLength_194=1;
	char valueList_195[]={0};
	unsigned int listLength_195=1;
	char valueList_196[]={0};
	unsigned int listLength_196=1;
	char valueList_197[]={0};
	unsigned int listLength_197=1;
	char valueList_198[]={0};
	unsigned int listLength_198=1;
	char valueList_199[]={0};
	unsigned int listLength_199=1;
	char valueList_200[]={0};
	unsigned int listLength_200=1;
	char valueList_201[]={0};
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
	char valueList_207[]={0};
	unsigned int listLength_207=1;
	char valueList_208[]={0};
	unsigned int listLength_208=1;
	char valueList_209[]={0};
	unsigned int listLength_209=1;
	char valueList_210[]={0};
	unsigned int listLength_210=1;
	char valueList_211[]={0};
	unsigned int listLength_211=1;
	unsigned int valueList_212[]={0};
	unsigned int listLength_212=1;
	char valueList_213[]={0};
	unsigned int listLength_213=1;
	char valueList_214[]={0};
	unsigned int listLength_214=1;
	char valueList_215[]={0};
	unsigned int listLength_215=1;
	char valueList_216[]={0};
	unsigned int listLength_216=1;
	char valueList_217[]={0};
	unsigned int listLength_217=1;
	char valueList_218[]={0};
	unsigned int listLength_218=1;
	char valueList_219[]={0};
	unsigned int listLength_219=1;
	char valueList_220[]={0};
	unsigned int listLength_220=1;
	char valueList_221[]={0};
	unsigned int listLength_221=1;
	char valueList_222[]={0};
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
	char valueList_229[]={0};
	unsigned int listLength_229=1;
	char valueList_230[]={0};
	unsigned int listLength_230=1;
	char valueList_231[]={0};
	unsigned int listLength_231=1;
	char valueList_232[]={0};
	unsigned int listLength_232=1;
	char valueList_233[]={0};
	unsigned int listLength_233=1;
	char valueList_234[]={0};
	unsigned int listLength_234=1;
	char valueList_235[]={0};
	unsigned int listLength_235=1;
	char valueList_236[]={0};
	unsigned int listLength_236=1;
	char valueList_237[]={0};
	unsigned int listLength_237=1;
	char valueList_238[]={0};
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
	char valueList_245[]={0};
	unsigned int listLength_245=1;
	char valueList_246[]={0};
	unsigned int listLength_246=1;
	char valueList_247[]={0};
	unsigned int listLength_247=1;
	char valueList_248[]={0};
	unsigned int listLength_248=1;
	char valueList_249[]={0};
	unsigned int listLength_249=1;
	char valueList_250[]={0};
	unsigned int listLength_250=1;
	char valueList_251[]={0};
	unsigned int listLength_251=1;
	char valueList_252[]={0};
	unsigned int listLength_252=1;
	char valueList_253[]={0};
	unsigned int listLength_253=1;
	char valueList_254[]={0};
	unsigned int listLength_254=1;
	char valueList_255[]={0};
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_looks_ascii_2,false,0\n");
	aunit_printf("#CASE_START_test_looks_ascii_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ulen=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ubuf=(file_unichar_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			nbytes=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			text_chars[33]=(char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			text_chars[45]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			text_chars[21]=(char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			text_chars[189]=(char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			text_chars[109]=(char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			text_chars[177]=(char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			text_chars[57]=(char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			text_chars[69]=(char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			text_chars[141]=(char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			text_chars[153]=(char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			text_chars[165]=(char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			text_chars[218]=(char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			text_chars[206]=(char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			text_chars[140]=(char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			text_chars[22]=(char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			text_chars[34]=(char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			text_chars[10]=(char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			text_chars[178]=(char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			text_chars[46]=(char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			text_chars[58]=(char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			text_chars[251]=(char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			text_chars[130]=(char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			text_chars[142]=(char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			text_chars[154]=(char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			text_chars[166]=(char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			text_chars[219]=(char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			text_chars[207]=(char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			text_chars[2]=(char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			text_chars[250]=(char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			text_chars[90]=(char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			text_chars[11]=(char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			text_chars[23]=(char)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			text_chars[179]=(char)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			text_chars[59]=(char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			text_chars[35]=(char)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			text_chars[252]=(char)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			text_chars[47]=(char)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			text_chars[240]=(char)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			text_chars[1]=(char)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			text_chars[131]=(char)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			text_chars[143]=(char)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			text_chars[155]=(char)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			text_chars[208]=(char)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			text_chars[167]=(char)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			text_chars[91]=(char)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		if(aUnItCoUnTeR<listLength_49 || useLast_49){
			text_chars[12]=(char)valueList_49[aUnItCoUnTeR<listLength_49?aUnItCoUnTeR:listLength_49-1];

		}
		if(aUnItCoUnTeR<listLength_50 || useLast_50){
			text_chars[48]=(char)valueList_50[aUnItCoUnTeR<listLength_50?aUnItCoUnTeR:listLength_50-1];

		}
		if(aUnItCoUnTeR<listLength_51 || useLast_51){
			text_chars[253]=(char)valueList_51[aUnItCoUnTeR<listLength_51?aUnItCoUnTeR:listLength_51-1];

		}
		if(aUnItCoUnTeR<listLength_52 || useLast_52){
			text_chars[24]=(char)valueList_52[aUnItCoUnTeR<listLength_52?aUnItCoUnTeR:listLength_52-1];

		}
		if(aUnItCoUnTeR<listLength_53 || useLast_53){
			text_chars[241]=(char)valueList_53[aUnItCoUnTeR<listLength_53?aUnItCoUnTeR:listLength_53-1];

		}
		if(aUnItCoUnTeR<listLength_54 || useLast_54){
			text_chars[36]=(char)valueList_54[aUnItCoUnTeR<listLength_54?aUnItCoUnTeR:listLength_54-1];

		}
		if(aUnItCoUnTeR<listLength_55 || useLast_55){
			text_chars[0]=(char)valueList_55[aUnItCoUnTeR<listLength_55?aUnItCoUnTeR:listLength_55-1];

		}
		if(aUnItCoUnTeR<listLength_56 || useLast_56){
			text_chars[120]=(char)valueList_56[aUnItCoUnTeR<listLength_56?aUnItCoUnTeR:listLength_56-1];

		}
		if(aUnItCoUnTeR<listLength_57 || useLast_57){
			text_chars[132]=(char)valueList_57[aUnItCoUnTeR<listLength_57?aUnItCoUnTeR:listLength_57-1];

		}
		if(aUnItCoUnTeR<listLength_58 || useLast_58){
			text_chars[209]=(char)valueList_58[aUnItCoUnTeR<listLength_58?aUnItCoUnTeR:listLength_58-1];

		}
		if(aUnItCoUnTeR<listLength_59 || useLast_59){
			text_chars[144]=(char)valueList_59[aUnItCoUnTeR<listLength_59?aUnItCoUnTeR:listLength_59-1];

		}
		if(aUnItCoUnTeR<listLength_60 || useLast_60){
			text_chars[156]=(char)valueList_60[aUnItCoUnTeR<listLength_60?aUnItCoUnTeR:listLength_60-1];

		}
		if(aUnItCoUnTeR<listLength_61 || useLast_61){
			text_chars[168]=(char)valueList_61[aUnItCoUnTeR<listLength_61?aUnItCoUnTeR:listLength_61-1];

		}
		if(aUnItCoUnTeR<listLength_62 || useLast_62){
			text_chars[80]=(char)valueList_62[aUnItCoUnTeR<listLength_62?aUnItCoUnTeR:listLength_62-1];

		}
		if(aUnItCoUnTeR<listLength_63 || useLast_63){
			text_chars[92]=(char)valueList_63[aUnItCoUnTeR<listLength_63?aUnItCoUnTeR:listLength_63-1];

		}
		if(aUnItCoUnTeR<listLength_64 || useLast_64){
			text_chars[77]=(char)valueList_64[aUnItCoUnTeR<listLength_64?aUnItCoUnTeR:listLength_64-1];

		}
		if(aUnItCoUnTeR<listLength_65 || useLast_65){
			text_chars[89]=(char)valueList_65[aUnItCoUnTeR<listLength_65?aUnItCoUnTeR:listLength_65-1];

		}
		if(aUnItCoUnTeR<listLength_66 || useLast_66){
			text_chars[53]=(char)valueList_66[aUnItCoUnTeR<listLength_66?aUnItCoUnTeR:listLength_66-1];

		}
		if(aUnItCoUnTeR<listLength_67 || useLast_67){
			text_chars[65]=(char)valueList_67[aUnItCoUnTeR<listLength_67?aUnItCoUnTeR:listLength_67-1];

		}
		if(aUnItCoUnTeR<listLength_68 || useLast_68){
			text_chars[254]=(char)valueList_68[aUnItCoUnTeR<listLength_68?aUnItCoUnTeR:listLength_68-1];

		}
		if(aUnItCoUnTeR<listLength_69 || useLast_69){
			text_chars[242]=(char)valueList_69[aUnItCoUnTeR<listLength_69?aUnItCoUnTeR:listLength_69-1];

		}
		if(aUnItCoUnTeR<listLength_70 || useLast_70){
			text_chars[230]=(char)valueList_70[aUnItCoUnTeR<listLength_70?aUnItCoUnTeR:listLength_70-1];

		}
		if(aUnItCoUnTeR<listLength_71 || useLast_71){
			text_chars[121]=(char)valueList_71[aUnItCoUnTeR<listLength_71?aUnItCoUnTeR:listLength_71-1];

		}
		if(aUnItCoUnTeR<listLength_72 || useLast_72){
			text_chars[133]=(char)valueList_72[aUnItCoUnTeR<listLength_72?aUnItCoUnTeR:listLength_72-1];

		}
		if(aUnItCoUnTeR<listLength_73 || useLast_73){
			text_chars[145]=(char)valueList_73[aUnItCoUnTeR<listLength_73?aUnItCoUnTeR:listLength_73-1];

		}
		if(aUnItCoUnTeR<listLength_74 || useLast_74){
			text_chars[157]=(char)valueList_74[aUnItCoUnTeR<listLength_74?aUnItCoUnTeR:listLength_74-1];

		}
		if(aUnItCoUnTeR<listLength_75 || useLast_75){
			text_chars[169]=(char)valueList_75[aUnItCoUnTeR<listLength_75?aUnItCoUnTeR:listLength_75-1];

		}
		if(aUnItCoUnTeR<listLength_76 || useLast_76){
			text_chars[41]=(char)valueList_76[aUnItCoUnTeR<listLength_76?aUnItCoUnTeR:listLength_76-1];

		}
		if(aUnItCoUnTeR<listLength_77 || useLast_77){
			text_chars[66]=(char)valueList_77[aUnItCoUnTeR<listLength_77?aUnItCoUnTeR:listLength_77-1];

		}
		if(aUnItCoUnTeR<listLength_78 || useLast_78){
			text_chars[78]=(char)valueList_78[aUnItCoUnTeR<listLength_78?aUnItCoUnTeR:listLength_78-1];

		}
		if(aUnItCoUnTeR<listLength_79 || useLast_79){
			text_chars[42]=(char)valueList_79[aUnItCoUnTeR<listLength_79?aUnItCoUnTeR:listLength_79-1];

		}
		if(aUnItCoUnTeR<listLength_80 || useLast_80){
			text_chars[54]=(char)valueList_80[aUnItCoUnTeR<listLength_80?aUnItCoUnTeR:listLength_80-1];

		}
		if(aUnItCoUnTeR<listLength_81 || useLast_81){
			text_chars[255]=(char)valueList_81[aUnItCoUnTeR<listLength_81?aUnItCoUnTeR:listLength_81-1];

		}
		if(aUnItCoUnTeR<listLength_82 || useLast_82){
			text_chars[243]=(char)valueList_82[aUnItCoUnTeR<listLength_82?aUnItCoUnTeR:listLength_82-1];

		}
		if(aUnItCoUnTeR<listLength_83 || useLast_83){
			text_chars[231]=(char)valueList_83[aUnItCoUnTeR<listLength_83?aUnItCoUnTeR:listLength_83-1];

		}
		if(aUnItCoUnTeR<listLength_84 || useLast_84){
			text_chars[110]=(char)valueList_84[aUnItCoUnTeR<listLength_84?aUnItCoUnTeR:listLength_84-1];

		}
		if(aUnItCoUnTeR<listLength_85 || useLast_85){
			text_chars[122]=(char)valueList_85[aUnItCoUnTeR<listLength_85?aUnItCoUnTeR:listLength_85-1];

		}
		if(aUnItCoUnTeR<listLength_86 || useLast_86){
			text_chars[134]=(char)valueList_86[aUnItCoUnTeR<listLength_86?aUnItCoUnTeR:listLength_86-1];

		}
		if(aUnItCoUnTeR<listLength_87 || useLast_87){
			text_chars[146]=(char)valueList_87[aUnItCoUnTeR<listLength_87?aUnItCoUnTeR:listLength_87-1];

		}
		if(aUnItCoUnTeR<listLength_88 || useLast_88){
			text_chars[158]=(char)valueList_88[aUnItCoUnTeR<listLength_88?aUnItCoUnTeR:listLength_88-1];

		}
		if(aUnItCoUnTeR<listLength_89 || useLast_89){
			text_chars[30]=(char)valueList_89[aUnItCoUnTeR<listLength_89?aUnItCoUnTeR:listLength_89-1];

		}
		if(aUnItCoUnTeR<listLength_90 || useLast_90){
			text_chars[55]=(char)valueList_90[aUnItCoUnTeR<listLength_90?aUnItCoUnTeR:listLength_90-1];

		}
		if(aUnItCoUnTeR<listLength_91 || useLast_91){
			text_chars[67]=(char)valueList_91[aUnItCoUnTeR<listLength_91?aUnItCoUnTeR:listLength_91-1];

		}
		if(aUnItCoUnTeR<listLength_92 || useLast_92){
			text_chars[31]=(char)valueList_92[aUnItCoUnTeR<listLength_92?aUnItCoUnTeR:listLength_92-1];

		}
		if(aUnItCoUnTeR<listLength_93 || useLast_93){
			text_chars[43]=(char)valueList_93[aUnItCoUnTeR<listLength_93?aUnItCoUnTeR:listLength_93-1];

		}
		if(aUnItCoUnTeR<listLength_94 || useLast_94){
			text_chars[244]=(char)valueList_94[aUnItCoUnTeR<listLength_94?aUnItCoUnTeR:listLength_94-1];

		}
		if(aUnItCoUnTeR<listLength_95 || useLast_95){
			text_chars[232]=(char)valueList_95[aUnItCoUnTeR<listLength_95?aUnItCoUnTeR:listLength_95-1];

		}
		if(aUnItCoUnTeR<listLength_96 || useLast_96){
			text_chars[220]=(char)valueList_96[aUnItCoUnTeR<listLength_96?aUnItCoUnTeR:listLength_96-1];

		}
		if(aUnItCoUnTeR<listLength_97 || useLast_97){
			text_chars[79]=(char)valueList_97[aUnItCoUnTeR<listLength_97?aUnItCoUnTeR:listLength_97-1];

		}
		if(aUnItCoUnTeR<listLength_98 || useLast_98){
			text_chars[111]=(char)valueList_98[aUnItCoUnTeR<listLength_98?aUnItCoUnTeR:listLength_98-1];

		}
		if(aUnItCoUnTeR<listLength_99 || useLast_99){
			text_chars[123]=(char)valueList_99[aUnItCoUnTeR<listLength_99?aUnItCoUnTeR:listLength_99-1];

		}
		if(aUnItCoUnTeR<listLength_100 || useLast_100){
			text_chars[135]=(char)valueList_100[aUnItCoUnTeR<listLength_100?aUnItCoUnTeR:listLength_100-1];

		}
		if(aUnItCoUnTeR<listLength_101 || useLast_101){
			text_chars[147]=(char)valueList_101[aUnItCoUnTeR<listLength_101?aUnItCoUnTeR:listLength_101-1];

		}
		if(aUnItCoUnTeR<listLength_102 || useLast_102){
			text_chars[159]=(char)valueList_102[aUnItCoUnTeR<listLength_102?aUnItCoUnTeR:listLength_102-1];

		}
		if(aUnItCoUnTeR<listLength_103 || useLast_103){
			text_chars[190]=(char)valueList_103[aUnItCoUnTeR<listLength_103?aUnItCoUnTeR:listLength_103-1];

		}
		if(aUnItCoUnTeR<listLength_104 || useLast_104){
			text_chars[44]=(char)valueList_104[aUnItCoUnTeR<listLength_104?aUnItCoUnTeR:listLength_104-1];

		}
		if(aUnItCoUnTeR<listLength_105 || useLast_105){
			text_chars[56]=(char)valueList_105[aUnItCoUnTeR<listLength_105?aUnItCoUnTeR:listLength_105-1];

		}
		if(aUnItCoUnTeR<listLength_106 || useLast_106){
			text_chars[20]=(char)valueList_106[aUnItCoUnTeR<listLength_106?aUnItCoUnTeR:listLength_106-1];

		}
		if(aUnItCoUnTeR<listLength_107 || useLast_107){
			text_chars[245]=(char)valueList_107[aUnItCoUnTeR<listLength_107?aUnItCoUnTeR:listLength_107-1];

		}
		if(aUnItCoUnTeR<listLength_108 || useLast_108){
			text_chars[32]=(char)valueList_108[aUnItCoUnTeR<listLength_108?aUnItCoUnTeR:listLength_108-1];

		}
		if(aUnItCoUnTeR<listLength_109 || useLast_109){
			text_chars[233]=(char)valueList_109[aUnItCoUnTeR<listLength_109?aUnItCoUnTeR:listLength_109-1];

		}
		if(aUnItCoUnTeR<listLength_110 || useLast_110){
			text_chars[221]=(char)valueList_110[aUnItCoUnTeR<listLength_110?aUnItCoUnTeR:listLength_110-1];

		}
		if(aUnItCoUnTeR<listLength_111 || useLast_111){
			text_chars[68]=(char)valueList_111[aUnItCoUnTeR<listLength_111?aUnItCoUnTeR:listLength_111-1];

		}
		if(aUnItCoUnTeR<listLength_112 || useLast_112){
			text_chars[100]=(char)valueList_112[aUnItCoUnTeR<listLength_112?aUnItCoUnTeR:listLength_112-1];

		}
		if(aUnItCoUnTeR<listLength_113 || useLast_113){
			text_chars[112]=(char)valueList_113[aUnItCoUnTeR<listLength_113?aUnItCoUnTeR:listLength_113-1];

		}
		if(aUnItCoUnTeR<listLength_114 || useLast_114){
			text_chars[124]=(char)valueList_114[aUnItCoUnTeR<listLength_114?aUnItCoUnTeR:listLength_114-1];

		}
		if(aUnItCoUnTeR<listLength_115 || useLast_115){
			text_chars[136]=(char)valueList_115[aUnItCoUnTeR<listLength_115?aUnItCoUnTeR:listLength_115-1];

		}
		if(aUnItCoUnTeR<listLength_116 || useLast_116){
			text_chars[148]=(char)valueList_116[aUnItCoUnTeR<listLength_116?aUnItCoUnTeR:listLength_116-1];

		}
		if(aUnItCoUnTeR<listLength_117 || useLast_117){
			text_chars[191]=(char)valueList_117[aUnItCoUnTeR<listLength_117?aUnItCoUnTeR:listLength_117-1];

		}
		if(aUnItCoUnTeR<listLength_118 || useLast_118){
			text_chars[149]=(char)valueList_118[aUnItCoUnTeR<listLength_118?aUnItCoUnTeR:listLength_118-1];

		}
		if(aUnItCoUnTeR<listLength_119 || useLast_119){
			text_chars[246]=(char)valueList_119[aUnItCoUnTeR<listLength_119?aUnItCoUnTeR:listLength_119-1];

		}
		if(aUnItCoUnTeR<listLength_120 || useLast_120){
			text_chars[97]=(char)valueList_120[aUnItCoUnTeR<listLength_120?aUnItCoUnTeR:listLength_120-1];

		}
		if(aUnItCoUnTeR<listLength_121 || useLast_121){
			text_chars[234]=(char)valueList_121[aUnItCoUnTeR<listLength_121?aUnItCoUnTeR:listLength_121-1];

		}
		if(aUnItCoUnTeR<listLength_122 || useLast_122){
			text_chars[222]=(char)valueList_122[aUnItCoUnTeR<listLength_122?aUnItCoUnTeR:listLength_122-1];

		}
		if(aUnItCoUnTeR<listLength_123 || useLast_123){
			text_chars[210]=(char)valueList_123[aUnItCoUnTeR<listLength_123?aUnItCoUnTeR:listLength_123-1];

		}
		if(aUnItCoUnTeR<listLength_124 || useLast_124){
			text_chars[17]=(char)valueList_124[aUnItCoUnTeR<listLength_124?aUnItCoUnTeR:listLength_124-1];

		}
		if(aUnItCoUnTeR<listLength_125 || useLast_125){
			text_chars[29]=(char)valueList_125[aUnItCoUnTeR<listLength_125?aUnItCoUnTeR:listLength_125-1];

		}
		if(aUnItCoUnTeR<listLength_126 || useLast_126){
			text_chars[101]=(char)valueList_126[aUnItCoUnTeR<listLength_126?aUnItCoUnTeR:listLength_126-1];

		}
		if(aUnItCoUnTeR<listLength_127 || useLast_127){
			text_chars[113]=(char)valueList_127[aUnItCoUnTeR<listLength_127?aUnItCoUnTeR:listLength_127-1];

		}
		if(aUnItCoUnTeR<listLength_128 || useLast_128){
			ubuf_PTRTO[0]=(unsigned long int)valueList_128[aUnItCoUnTeR<listLength_128?aUnItCoUnTeR:listLength_128-1];

		}
		if(aUnItCoUnTeR<listLength_129 || useLast_129){
			text_chars[125]=(char)valueList_129[aUnItCoUnTeR<listLength_129?aUnItCoUnTeR:listLength_129-1];

		}
		if(aUnItCoUnTeR<listLength_130 || useLast_130){
			text_chars[137]=(char)valueList_130[aUnItCoUnTeR<listLength_130?aUnItCoUnTeR:listLength_130-1];

		}
		if(aUnItCoUnTeR<listLength_131 || useLast_131){
			text_chars[192]=(char)valueList_131[aUnItCoUnTeR<listLength_131?aUnItCoUnTeR:listLength_131-1];

		}
		if(aUnItCoUnTeR<listLength_132 || useLast_132){
			text_chars[73]=(char)valueList_132[aUnItCoUnTeR<listLength_132?aUnItCoUnTeR:listLength_132-1];

		}
		if(aUnItCoUnTeR<listLength_133 || useLast_133){
			text_chars[180]=(char)valueList_133[aUnItCoUnTeR<listLength_133?aUnItCoUnTeR:listLength_133-1];

		}
		if(aUnItCoUnTeR<listLength_134 || useLast_134){
			text_chars[85]=(char)valueList_134[aUnItCoUnTeR<listLength_134?aUnItCoUnTeR:listLength_134-1];

		}
		if(aUnItCoUnTeR<listLength_135 || useLast_135){
			text_chars[61]=(char)valueList_135[aUnItCoUnTeR<listLength_135?aUnItCoUnTeR:listLength_135-1];

		}
		if(aUnItCoUnTeR<listLength_136 || useLast_136){
			text_chars[138]=(char)valueList_136[aUnItCoUnTeR<listLength_136?aUnItCoUnTeR:listLength_136-1];

		}
		if(aUnItCoUnTeR<listLength_137 || useLast_137){
			text_chars[247]=(char)valueList_137[aUnItCoUnTeR<listLength_137?aUnItCoUnTeR:listLength_137-1];

		}
		if(aUnItCoUnTeR<listLength_138 || useLast_138){
			text_chars[235]=(char)valueList_138[aUnItCoUnTeR<listLength_138?aUnItCoUnTeR:listLength_138-1];

		}
		if(aUnItCoUnTeR<listLength_139 || useLast_139){
			text_chars[86]=(char)valueList_139[aUnItCoUnTeR<listLength_139?aUnItCoUnTeR:listLength_139-1];

		}
		if(aUnItCoUnTeR<listLength_140 || useLast_140){
			text_chars[223]=(char)valueList_140[aUnItCoUnTeR<listLength_140?aUnItCoUnTeR:listLength_140-1];

		}
		if(aUnItCoUnTeR<listLength_141 || useLast_141){
			text_chars[98]=(char)valueList_141[aUnItCoUnTeR<listLength_141?aUnItCoUnTeR:listLength_141-1];

		}
		if(aUnItCoUnTeR<listLength_142 || useLast_142){
			text_chars[211]=(char)valueList_142[aUnItCoUnTeR<listLength_142?aUnItCoUnTeR:listLength_142-1];

		}
		if(aUnItCoUnTeR<listLength_143 || useLast_143){
			text_chars[18]=(char)valueList_143[aUnItCoUnTeR<listLength_143?aUnItCoUnTeR:listLength_143-1];

		}
		if(aUnItCoUnTeR<listLength_144 || useLast_144){
			text_chars[102]=(char)valueList_144[aUnItCoUnTeR<listLength_144?aUnItCoUnTeR:listLength_144-1];

		}
		if(aUnItCoUnTeR<listLength_145 || useLast_145){
			text_chars[114]=(char)valueList_145[aUnItCoUnTeR<listLength_145?aUnItCoUnTeR:listLength_145-1];

		}
		if(aUnItCoUnTeR<listLength_146 || useLast_146){
			text_chars[126]=(char)valueList_146[aUnItCoUnTeR<listLength_146?aUnItCoUnTeR:listLength_146-1];

		}
		if(aUnItCoUnTeR<listLength_147 || useLast_147){
			text_chars[193]=(char)valueList_147[aUnItCoUnTeR<listLength_147?aUnItCoUnTeR:listLength_147-1];

		}
		if(aUnItCoUnTeR<listLength_148 || useLast_148){
			text_chars[181]=(char)valueList_148[aUnItCoUnTeR<listLength_148?aUnItCoUnTeR:listLength_148-1];

		}
		if(aUnItCoUnTeR<listLength_149 || useLast_149){
			text_chars[62]=(char)valueList_149[aUnItCoUnTeR<listLength_149?aUnItCoUnTeR:listLength_149-1];

		}
		if(aUnItCoUnTeR<listLength_150 || useLast_150){
			text_chars[74]=(char)valueList_150[aUnItCoUnTeR<listLength_150?aUnItCoUnTeR:listLength_150-1];

		}
		if(aUnItCoUnTeR<listLength_151 || useLast_151){
			text_chars[50]=(char)valueList_151[aUnItCoUnTeR<listLength_151?aUnItCoUnTeR:listLength_151-1];

		}
		if(aUnItCoUnTeR<listLength_152 || useLast_152){
			text_chars[9]=(char)valueList_152[aUnItCoUnTeR<listLength_152?aUnItCoUnTeR:listLength_152-1];

		}
		if(aUnItCoUnTeR<listLength_153 || useLast_153){
			text_chars[99]=(char)valueList_153[aUnItCoUnTeR<listLength_153?aUnItCoUnTeR:listLength_153-1];

		}
		if(aUnItCoUnTeR<listLength_154 || useLast_154){
			text_chars[127]=(char)valueList_154[aUnItCoUnTeR<listLength_154?aUnItCoUnTeR:listLength_154-1];

		}
		if(aUnItCoUnTeR<listLength_155 || useLast_155){
			text_chars[236]=(char)valueList_155[aUnItCoUnTeR<listLength_155?aUnItCoUnTeR:listLength_155-1];

		}
		if(aUnItCoUnTeR<listLength_156 || useLast_156){
			text_chars[139]=(char)valueList_156[aUnItCoUnTeR<listLength_156?aUnItCoUnTeR:listLength_156-1];

		}
		if(aUnItCoUnTeR<listLength_157 || useLast_157){
			text_chars[224]=(char)valueList_157[aUnItCoUnTeR<listLength_157?aUnItCoUnTeR:listLength_157-1];

		}
		if(aUnItCoUnTeR<listLength_158 || useLast_158){
			text_chars[75]=(char)valueList_158[aUnItCoUnTeR<listLength_158?aUnItCoUnTeR:listLength_158-1];

		}
		if(aUnItCoUnTeR<listLength_159 || useLast_159){
			text_chars[212]=(char)valueList_159[aUnItCoUnTeR<listLength_159?aUnItCoUnTeR:listLength_159-1];

		}
		if(aUnItCoUnTeR<listLength_160 || useLast_160){
			text_chars[87]=(char)valueList_160[aUnItCoUnTeR<listLength_160?aUnItCoUnTeR:listLength_160-1];

		}
		if(aUnItCoUnTeR<listLength_161 || useLast_161){
			text_chars[200]=(char)valueList_161[aUnItCoUnTeR<listLength_161?aUnItCoUnTeR:listLength_161-1];

		}
		if(aUnItCoUnTeR<listLength_162 || useLast_162){
			text_chars[19]=(char)valueList_162[aUnItCoUnTeR<listLength_162?aUnItCoUnTeR:listLength_162-1];

		}
		if(aUnItCoUnTeR<listLength_163 || useLast_163){
			text_chars[103]=(char)valueList_163[aUnItCoUnTeR<listLength_163?aUnItCoUnTeR:listLength_163-1];

		}
		if(aUnItCoUnTeR<listLength_164 || useLast_164){
			text_chars[115]=(char)valueList_164[aUnItCoUnTeR<listLength_164?aUnItCoUnTeR:listLength_164-1];

		}
		if(aUnItCoUnTeR<listLength_165 || useLast_165){
			text_chars[248]=(char)valueList_165[aUnItCoUnTeR<listLength_165?aUnItCoUnTeR:listLength_165-1];

		}
		if(aUnItCoUnTeR<listLength_166 || useLast_166){
			text_chars[194]=(char)valueList_166[aUnItCoUnTeR<listLength_166?aUnItCoUnTeR:listLength_166-1];

		}
		if(aUnItCoUnTeR<listLength_167 || useLast_167){
			text_chars[182]=(char)valueList_167[aUnItCoUnTeR<listLength_167?aUnItCoUnTeR:listLength_167-1];

		}
		if(aUnItCoUnTeR<listLength_168 || useLast_168){
			text_chars[170]=(char)valueList_168[aUnItCoUnTeR<listLength_168?aUnItCoUnTeR:listLength_168-1];

		}
		if(aUnItCoUnTeR<listLength_169 || useLast_169){
			text_chars[51]=(char)valueList_169[aUnItCoUnTeR<listLength_169?aUnItCoUnTeR:listLength_169-1];

		}
		if(aUnItCoUnTeR<listLength_170 || useLast_170){
			text_chars[63]=(char)valueList_170[aUnItCoUnTeR<listLength_170?aUnItCoUnTeR:listLength_170-1];

		}
		if(aUnItCoUnTeR<listLength_171 || useLast_171){
			text_chars[88]=(char)valueList_171[aUnItCoUnTeR<listLength_171?aUnItCoUnTeR:listLength_171-1];

		}
		if(aUnItCoUnTeR<listLength_172 || useLast_172){
			text_chars[116]=(char)valueList_172[aUnItCoUnTeR<listLength_172?aUnItCoUnTeR:listLength_172-1];

		}
		if(aUnItCoUnTeR<listLength_173 || useLast_173){
			text_chars[225]=(char)valueList_173[aUnItCoUnTeR<listLength_173?aUnItCoUnTeR:listLength_173-1];

		}
		if(aUnItCoUnTeR<listLength_174 || useLast_174){
			text_chars[8]=(char)valueList_174[aUnItCoUnTeR<listLength_174?aUnItCoUnTeR:listLength_174-1];

		}
		if(aUnItCoUnTeR<listLength_175 || useLast_175){
			text_chars[128]=(char)valueList_175[aUnItCoUnTeR<listLength_175?aUnItCoUnTeR:listLength_175-1];

		}
		if(aUnItCoUnTeR<listLength_176 || useLast_176){
			text_chars[213]=(char)valueList_176[aUnItCoUnTeR<listLength_176?aUnItCoUnTeR:listLength_176-1];

		}
		if(aUnItCoUnTeR<listLength_177 || useLast_177){
			text_chars[64]=(char)valueList_177[aUnItCoUnTeR<listLength_177?aUnItCoUnTeR:listLength_177-1];

		}
		if(aUnItCoUnTeR<listLength_178 || useLast_178){
			text_chars[201]=(char)valueList_178[aUnItCoUnTeR<listLength_178?aUnItCoUnTeR:listLength_178-1];

		}
		if(aUnItCoUnTeR<listLength_179 || useLast_179){
			text_chars[76]=(char)valueList_179[aUnItCoUnTeR<listLength_179?aUnItCoUnTeR:listLength_179-1];

		}
		if(aUnItCoUnTeR<listLength_180 || useLast_180){
			text_chars[196]=(char)valueList_180[aUnItCoUnTeR<listLength_180?aUnItCoUnTeR:listLength_180-1];

		}
		if(aUnItCoUnTeR<listLength_181 || useLast_181){
			text_chars[249]=(char)valueList_181[aUnItCoUnTeR<listLength_181?aUnItCoUnTeR:listLength_181-1];

		}
		if(aUnItCoUnTeR<listLength_182 || useLast_182){
			text_chars[104]=(char)valueList_182[aUnItCoUnTeR<listLength_182?aUnItCoUnTeR:listLength_182-1];

		}
		if(aUnItCoUnTeR<listLength_183 || useLast_183){
			text_chars[237]=(char)valueList_183[aUnItCoUnTeR<listLength_183?aUnItCoUnTeR:listLength_183-1];

		}
		if(aUnItCoUnTeR<listLength_184 || useLast_184){
			text_chars[195]=(char)valueList_184[aUnItCoUnTeR<listLength_184?aUnItCoUnTeR:listLength_184-1];

		}
		if(aUnItCoUnTeR<listLength_185 || useLast_185){
			text_chars[183]=(char)valueList_185[aUnItCoUnTeR<listLength_185?aUnItCoUnTeR:listLength_185-1];

		}
		if(aUnItCoUnTeR<listLength_186 || useLast_186){
			text_chars[171]=(char)valueList_186[aUnItCoUnTeR<listLength_186?aUnItCoUnTeR:listLength_186-1];

		}
		if(aUnItCoUnTeR<listLength_187 || useLast_187){
			text_chars[40]=(char)valueList_187[aUnItCoUnTeR<listLength_187?aUnItCoUnTeR:listLength_187-1];

		}
		if(aUnItCoUnTeR<listLength_188 || useLast_188){
			text_chars[52]=(char)valueList_188[aUnItCoUnTeR<listLength_188?aUnItCoUnTeR:listLength_188-1];

		}
		if(aUnItCoUnTeR<listLength_189 || useLast_189){
			text_chars[105]=(char)valueList_189[aUnItCoUnTeR<listLength_189?aUnItCoUnTeR:listLength_189-1];

		}
		if(aUnItCoUnTeR<listLength_190 || useLast_190){
			text_chars[214]=(char)valueList_190[aUnItCoUnTeR<listLength_190?aUnItCoUnTeR:listLength_190-1];

		}
		if(aUnItCoUnTeR<listLength_191 || useLast_191){
			text_chars[117]=(char)valueList_191[aUnItCoUnTeR<listLength_191?aUnItCoUnTeR:listLength_191-1];

		}
		if(aUnItCoUnTeR<listLength_192 || useLast_192){
			text_chars[202]=(char)valueList_192[aUnItCoUnTeR<listLength_192?aUnItCoUnTeR:listLength_192-1];

		}
		if(aUnItCoUnTeR<listLength_193 || useLast_193){
			text_chars[7]=(char)valueList_193[aUnItCoUnTeR<listLength_193?aUnItCoUnTeR:listLength_193-1];

		}
		if(aUnItCoUnTeR<listLength_194 || useLast_194){
			text_chars[129]=(char)valueList_194[aUnItCoUnTeR<listLength_194?aUnItCoUnTeR:listLength_194-1];

		}
		if(aUnItCoUnTeR<listLength_195 || useLast_195){
			text_chars[37]=(char)valueList_195[aUnItCoUnTeR<listLength_195?aUnItCoUnTeR:listLength_195-1];

		}
		if(aUnItCoUnTeR<listLength_196 || useLast_196){
			text_chars[49]=(char)valueList_196[aUnItCoUnTeR<listLength_196?aUnItCoUnTeR:listLength_196-1];

		}
		if(aUnItCoUnTeR<listLength_197 || useLast_197){
			text_chars[13]=(char)valueList_197[aUnItCoUnTeR<listLength_197?aUnItCoUnTeR:listLength_197-1];

		}
		if(aUnItCoUnTeR<listLength_198 || useLast_198){
			text_chars[197]=(char)valueList_198[aUnItCoUnTeR<listLength_198?aUnItCoUnTeR:listLength_198-1];

		}
		if(aUnItCoUnTeR<listLength_199 || useLast_199){
			text_chars[25]=(char)valueList_199[aUnItCoUnTeR<listLength_199?aUnItCoUnTeR:listLength_199-1];

		}
		if(aUnItCoUnTeR<listLength_200 || useLast_200){
			text_chars[185]=(char)valueList_200[aUnItCoUnTeR<listLength_200?aUnItCoUnTeR:listLength_200-1];

		}
		if(aUnItCoUnTeR<listLength_201 || useLast_201){
			text_chars[238]=(char)valueList_201[aUnItCoUnTeR<listLength_201?aUnItCoUnTeR:listLength_201-1];

		}
		if(aUnItCoUnTeR<listLength_202 || useLast_202){
			text_chars[226]=(char)valueList_202[aUnItCoUnTeR<listLength_202?aUnItCoUnTeR:listLength_202-1];

		}
		if(aUnItCoUnTeR<listLength_203 || useLast_203){
			text_chars[160]=(char)valueList_203[aUnItCoUnTeR<listLength_203?aUnItCoUnTeR:listLength_203-1];

		}
		if(aUnItCoUnTeR<listLength_204 || useLast_204){
			text_chars[184]=(char)valueList_204[aUnItCoUnTeR<listLength_204?aUnItCoUnTeR:listLength_204-1];

		}
		if(aUnItCoUnTeR<listLength_205 || useLast_205){
			text_chars[81]=(char)valueList_205[aUnItCoUnTeR<listLength_205?aUnItCoUnTeR:listLength_205-1];

		}
		if(aUnItCoUnTeR<listLength_206 || useLast_206){
			text_chars[172]=(char)valueList_206[aUnItCoUnTeR<listLength_206?aUnItCoUnTeR:listLength_206-1];

		}
		if(aUnItCoUnTeR<listLength_207 || useLast_207){
			text_chars[93]=(char)valueList_207[aUnItCoUnTeR<listLength_207?aUnItCoUnTeR:listLength_207-1];

		}
		if(aUnItCoUnTeR<listLength_208 || useLast_208){
			text_chars[203]=(char)valueList_208[aUnItCoUnTeR<listLength_208?aUnItCoUnTeR:listLength_208-1];

		}
		if(aUnItCoUnTeR<listLength_209 || useLast_209){
			text_chars[106]=(char)valueList_209[aUnItCoUnTeR<listLength_209?aUnItCoUnTeR:listLength_209-1];

		}
		if(aUnItCoUnTeR<listLength_210 || useLast_210){
			text_chars[118]=(char)valueList_210[aUnItCoUnTeR<listLength_210?aUnItCoUnTeR:listLength_210-1];

		}
		if(aUnItCoUnTeR<listLength_211 || useLast_211){
			text_chars[6]=(char)valueList_211[aUnItCoUnTeR<listLength_211?aUnItCoUnTeR:listLength_211-1];

		}
		if(aUnItCoUnTeR<listLength_212 || useLast_212){
			ulen_PTRTO[0]=(unsigned int)valueList_212[aUnItCoUnTeR<listLength_212?aUnItCoUnTeR:listLength_212-1];

		}
		if(aUnItCoUnTeR<listLength_213 || useLast_213){
			text_chars[26]=(char)valueList_213[aUnItCoUnTeR<listLength_213?aUnItCoUnTeR:listLength_213-1];

		}
		if(aUnItCoUnTeR<listLength_214 || useLast_214){
			text_chars[38]=(char)valueList_214[aUnItCoUnTeR<listLength_214?aUnItCoUnTeR:listLength_214-1];

		}
		if(aUnItCoUnTeR<listLength_215 || useLast_215){
			text_chars[198]=(char)valueList_215[aUnItCoUnTeR<listLength_215?aUnItCoUnTeR:listLength_215-1];

		}
		if(aUnItCoUnTeR<listLength_216 || useLast_216){
			text_chars[186]=(char)valueList_216[aUnItCoUnTeR<listLength_216?aUnItCoUnTeR:listLength_216-1];

		}
		if(aUnItCoUnTeR<listLength_217 || useLast_217){
			text_chars[14]=(char)valueList_217[aUnItCoUnTeR<listLength_217?aUnItCoUnTeR:listLength_217-1];

		}
		if(aUnItCoUnTeR<listLength_218 || useLast_218){
			text_chars[174]=(char)valueList_218[aUnItCoUnTeR<listLength_218?aUnItCoUnTeR:listLength_218-1];

		}
		if(aUnItCoUnTeR<listLength_219 || useLast_219){
			text_chars[239]=(char)valueList_219[aUnItCoUnTeR<listLength_219?aUnItCoUnTeR:listLength_219-1];

		}
		if(aUnItCoUnTeR<listLength_220 || useLast_220){
			text_chars[227]=(char)valueList_220[aUnItCoUnTeR<listLength_220?aUnItCoUnTeR:listLength_220-1];

		}
		if(aUnItCoUnTeR<listLength_221 || useLast_221){
			text_chars[215]=(char)valueList_221[aUnItCoUnTeR<listLength_221?aUnItCoUnTeR:listLength_221-1];

		}
		if(aUnItCoUnTeR<listLength_222 || useLast_222){
			text_chars[161]=(char)valueList_222[aUnItCoUnTeR<listLength_222?aUnItCoUnTeR:listLength_222-1];

		}
		if(aUnItCoUnTeR<listLength_223 || useLast_223){
			text_chars[173]=(char)valueList_223[aUnItCoUnTeR<listLength_223?aUnItCoUnTeR:listLength_223-1];

		}
		if(aUnItCoUnTeR<listLength_224 || useLast_224){
			text_chars[70]=(char)valueList_224[aUnItCoUnTeR<listLength_224?aUnItCoUnTeR:listLength_224-1];

		}
		if(aUnItCoUnTeR<listLength_225 || useLast_225){
			text_chars[82]=(char)valueList_225[aUnItCoUnTeR<listLength_225?aUnItCoUnTeR:listLength_225-1];

		}
		if(aUnItCoUnTeR<listLength_226 || useLast_226){
			text_chars[94]=(char)valueList_226[aUnItCoUnTeR<listLength_226?aUnItCoUnTeR:listLength_226-1];

		}
		if(aUnItCoUnTeR<listLength_227 || useLast_227){
			text_chars[107]=(char)valueList_227[aUnItCoUnTeR<listLength_227?aUnItCoUnTeR:listLength_227-1];

		}
		if(aUnItCoUnTeR<listLength_228 || useLast_228){
			text_chars[119]=(char)valueList_228[aUnItCoUnTeR<listLength_228?aUnItCoUnTeR:listLength_228-1];

		}
		if(aUnItCoUnTeR<listLength_229 || useLast_229){
			text_chars[15]=(char)valueList_229[aUnItCoUnTeR<listLength_229?aUnItCoUnTeR:listLength_229-1];

		}
		if(aUnItCoUnTeR<listLength_230 || useLast_230){
			text_chars[199]=(char)valueList_230[aUnItCoUnTeR<listLength_230?aUnItCoUnTeR:listLength_230-1];

		}
		if(aUnItCoUnTeR<listLength_231 || useLast_231){
			text_chars[27]=(char)valueList_231[aUnItCoUnTeR<listLength_231?aUnItCoUnTeR:listLength_231-1];

		}
		if(aUnItCoUnTeR<listLength_232 || useLast_232){
			text_chars[187]=(char)valueList_232[aUnItCoUnTeR<listLength_232?aUnItCoUnTeR:listLength_232-1];

		}
		if(aUnItCoUnTeR<listLength_233 || useLast_233){
			text_chars[175]=(char)valueList_233[aUnItCoUnTeR<listLength_233?aUnItCoUnTeR:listLength_233-1];

		}
		if(aUnItCoUnTeR<listLength_234 || useLast_234){
			text_chars[163]=(char)valueList_234[aUnItCoUnTeR<listLength_234?aUnItCoUnTeR:listLength_234-1];

		}
		if(aUnItCoUnTeR<listLength_235 || useLast_235){
			text_chars[39]=(char)valueList_235[aUnItCoUnTeR<listLength_235?aUnItCoUnTeR:listLength_235-1];

		}
		if(aUnItCoUnTeR<listLength_236 || useLast_236){
			text_chars[5]=(char)valueList_236[aUnItCoUnTeR<listLength_236?aUnItCoUnTeR:listLength_236-1];

		}
		if(aUnItCoUnTeR<listLength_237 || useLast_237){
			text_chars[228]=(char)valueList_237[aUnItCoUnTeR<listLength_237?aUnItCoUnTeR:listLength_237-1];

		}
		if(aUnItCoUnTeR<listLength_238 || useLast_238){
			text_chars[216]=(char)valueList_238[aUnItCoUnTeR<listLength_238?aUnItCoUnTeR:listLength_238-1];

		}
		if(aUnItCoUnTeR<listLength_239 || useLast_239){
			text_chars[204]=(char)valueList_239[aUnItCoUnTeR<listLength_239?aUnItCoUnTeR:listLength_239-1];

		}
		if(aUnItCoUnTeR<listLength_240 || useLast_240){
			text_chars[150]=(char)valueList_240[aUnItCoUnTeR<listLength_240?aUnItCoUnTeR:listLength_240-1];

		}
		if(aUnItCoUnTeR<listLength_241 || useLast_241){
			text_chars[162]=(char)valueList_241[aUnItCoUnTeR<listLength_241?aUnItCoUnTeR:listLength_241-1];

		}
		if(aUnItCoUnTeR<listLength_242 || useLast_242){
			text_chars[95]=(char)valueList_242[aUnItCoUnTeR<listLength_242?aUnItCoUnTeR:listLength_242-1];

		}
		if(aUnItCoUnTeR<listLength_243 || useLast_243){
			text_chars[71]=(char)valueList_243[aUnItCoUnTeR<listLength_243?aUnItCoUnTeR:listLength_243-1];

		}
		if(aUnItCoUnTeR<listLength_244 || useLast_244){
			text_chars[83]=(char)valueList_244[aUnItCoUnTeR<listLength_244?aUnItCoUnTeR:listLength_244-1];

		}
		if(aUnItCoUnTeR<listLength_245 || useLast_245){
			text_chars[108]=(char)valueList_245[aUnItCoUnTeR<listLength_245?aUnItCoUnTeR:listLength_245-1];

		}
		if(aUnItCoUnTeR<listLength_246 || useLast_246){
			text_chars[188]=(char)valueList_246[aUnItCoUnTeR<listLength_246?aUnItCoUnTeR:listLength_246-1];

		}
		if(aUnItCoUnTeR<listLength_247 || useLast_247){
			text_chars[16]=(char)valueList_247[aUnItCoUnTeR<listLength_247?aUnItCoUnTeR:listLength_247-1];

		}
		if(aUnItCoUnTeR<listLength_248 || useLast_248){
			text_chars[176]=(char)valueList_248[aUnItCoUnTeR<listLength_248?aUnItCoUnTeR:listLength_248-1];

		}
		if(aUnItCoUnTeR<listLength_249 || useLast_249){
			text_chars[152]=(char)valueList_249[aUnItCoUnTeR<listLength_249?aUnItCoUnTeR:listLength_249-1];

		}
		if(aUnItCoUnTeR<listLength_250 || useLast_250){
			text_chars[164]=(char)valueList_250[aUnItCoUnTeR<listLength_250?aUnItCoUnTeR:listLength_250-1];

		}
		if(aUnItCoUnTeR<listLength_251 || useLast_251){
			text_chars[28]=(char)valueList_251[aUnItCoUnTeR<listLength_251?aUnItCoUnTeR:listLength_251-1];

		}
		if(aUnItCoUnTeR<listLength_252 || useLast_252){
			text_chars[229]=(char)valueList_252[aUnItCoUnTeR<listLength_252?aUnItCoUnTeR:listLength_252-1];

		}
		if(aUnItCoUnTeR<listLength_253 || useLast_253){
			text_chars[4]=(char)valueList_253[aUnItCoUnTeR<listLength_253?aUnItCoUnTeR:listLength_253-1];

		}
		if(aUnItCoUnTeR<listLength_254 || useLast_254){
			text_chars[217]=(char)valueList_254[aUnItCoUnTeR<listLength_254?aUnItCoUnTeR:listLength_254-1];

		}
		if(aUnItCoUnTeR<listLength_255 || useLast_255){
			text_chars[205]=(char)valueList_255[aUnItCoUnTeR<listLength_255?aUnItCoUnTeR:listLength_255-1];

		}
		if(aUnItCoUnTeR<listLength_256 || useLast_256){
			text_chars[151]=(char)valueList_256[aUnItCoUnTeR<listLength_256?aUnItCoUnTeR:listLength_256-1];

		}
		if(aUnItCoUnTeR<listLength_257 || useLast_257){
			text_chars[84]=(char)valueList_257[aUnItCoUnTeR<listLength_257?aUnItCoUnTeR:listLength_257-1];

		}
		if(aUnItCoUnTeR<listLength_258 || useLast_258){
			text_chars[96]=(char)valueList_258[aUnItCoUnTeR<listLength_258?aUnItCoUnTeR:listLength_258-1];

		}
		if(aUnItCoUnTeR<listLength_259 || useLast_259){
			text_chars[60]=(char)valueList_259[aUnItCoUnTeR<listLength_259?aUnItCoUnTeR:listLength_259-1];

		}
		if(aUnItCoUnTeR<listLength_260 || useLast_260){
			text_chars[72]=(char)valueList_260[aUnItCoUnTeR<listLength_260?aUnItCoUnTeR:listLength_260-1];

		}
		returnValue = looks_ascii(buf,nbytes,ubuf,ulen);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("looks_ascii","ubuf[4]",111,ubuf[4])
	TEST_ASSERT_EQUAL_INT("looks_ascii","returnValue",1,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("looks_ascii","ubuf[3]",108,ubuf[3])
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("looks_ascii","ubuf[2]",108,ubuf[2])
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("looks_ascii","ubuf[1]",101,ubuf[1])
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("looks_ascii","ubuf[0]",104,ubuf[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("looks_ascii","ulen[0]",5,ulen[0])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_looks_ascii_2\n");
}

void test_looks_ascii_3(void){
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
	unsigned char *valueList_0[]={(unsigned char *)"abc\x80"};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)ulen_PTRTO};
	unsigned int listLength_1=1;
	file_unichar_t *valueList_2[]={(file_unichar_t *)ubuf_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={4};
	unsigned int listLength_3=1;
	char valueList_4[]={0};
	unsigned int listLength_4=1;
	char valueList_5[]={0};
	unsigned int listLength_5=1;
	char valueList_6[]={0};
	unsigned int listLength_6=1;
	char valueList_7[]={0};
	unsigned int listLength_7=1;
	char valueList_8[]={0};
	unsigned int listLength_8=1;
	char valueList_9[]={0};
	unsigned int listLength_9=1;
	char valueList_10[]={0};
	unsigned int listLength_10=1;
	char valueList_11[]={0};
	unsigned int listLength_11=1;
	char valueList_12[]={0};
	unsigned int listLength_12=1;
	char valueList_13[]={0};
	unsigned int listLength_13=1;
	char valueList_14[]={0};
	unsigned int listLength_14=1;
	char valueList_15[]={0};
	unsigned int listLength_15=1;
	char valueList_16[]={0};
	unsigned int listLength_16=1;
	char valueList_17[]={0};
	unsigned int listLength_17=1;
	char valueList_18[]={0};
	unsigned int listLength_18=1;
	char valueList_19[]={0};
	unsigned int listLength_19=1;
	char valueList_20[]={0};
	unsigned int listLength_20=1;
	char valueList_21[]={0};
	unsigned int listLength_21=1;
	char valueList_22[]={0};
	unsigned int listLength_22=1;
	char valueList_23[]={0};
	unsigned int listLength_23=1;
	char valueList_24[]={0};
	unsigned int listLength_24=1;
	char valueList_25[]={0};
	unsigned int listLength_25=1;
	char valueList_26[]={0};
	unsigned int listLength_26=1;
	char valueList_27[]={0};
	unsigned int listLength_27=1;
	char valueList_28[]={0};
	unsigned int listLength_28=1;
	char valueList_29[]={0};
	unsigned int listLength_29=1;
	char valueList_30[]={0};
	unsigned int listLength_30=1;
	char valueList_31[]={ 1};
	unsigned int listLength_31=1;
	char valueList_32[]={0};
	unsigned int listLength_32=1;
	char valueList_33[]={0};
	unsigned int listLength_33=1;
	char valueList_34[]={0};
	unsigned int listLength_34=1;
	char valueList_35[]={0};
	unsigned int listLength_35=1;
	char valueList_36[]={0};
	unsigned int listLength_36=1;
	char valueList_37[]={0};
	unsigned int listLength_37=1;
	char valueList_38[]={0};
	unsigned int listLength_38=1;
	char valueList_39[]={0};
	unsigned int listLength_39=1;
	char valueList_40[]={0};
	unsigned int listLength_40=1;
	char valueList_41[]={0};
	unsigned int listLength_41=1;
	char valueList_42[]={ 1};
	unsigned int listLength_42=1;
	char valueList_43[]={0};
	unsigned int listLength_43=1;
	char valueList_44[]={0};
	unsigned int listLength_44=1;
	char valueList_45[]={0};
	unsigned int listLength_45=1;
	char valueList_46[]={0};
	unsigned int listLength_46=1;
	char valueList_47[]={0};
	unsigned int listLength_47=1;
	char valueList_48[]={0};
	unsigned int listLength_48=1;
	char valueList_49[]={0};
	unsigned int listLength_49=1;
	char valueList_50[]={0};
	unsigned int listLength_50=1;
	char valueList_51[]={0};
	unsigned int listLength_51=1;
	char valueList_52[]={0};
	unsigned int listLength_52=1;
	char valueList_53[]={0};
	unsigned int listLength_53=1;
	char valueList_54[]={0};
	unsigned int listLength_54=1;
	char valueList_55[]={1};
	unsigned int listLength_55=1;
	char valueList_56[]={0};
	unsigned int listLength_56=1;
	char valueList_57[]={0};
	unsigned int listLength_57=1;
	char valueList_58[]={0};
	unsigned int listLength_58=1;
	char valueList_59[]={0};
	unsigned int listLength_59=1;
	char valueList_60[]={0};
	unsigned int listLength_60=1;
	char valueList_61[]={0};
	unsigned int listLength_61=1;
	char valueList_62[]={0};
	unsigned int listLength_62=1;
	char valueList_63[]={0};
	unsigned int listLength_63=1;
	char valueList_64[]={0};
	unsigned int listLength_64=1;
	char valueList_65[]={0};
	unsigned int listLength_65=1;
	char valueList_66[]={0};
	unsigned int listLength_66=1;
	char valueList_67[]={0};
	unsigned int listLength_67=1;
	char valueList_68[]={0};
	unsigned int listLength_68=1;
	char valueList_69[]={0};
	unsigned int listLength_69=1;
	char valueList_70[]={0};
	unsigned int listLength_70=1;
	char valueList_71[]={0};
	unsigned int listLength_71=1;
	char valueList_72[]={0};
	unsigned int listLength_72=1;
	char valueList_73[]={0};
	unsigned int listLength_73=1;
	char valueList_74[]={0};
	unsigned int listLength_74=1;
	char valueList_75[]={0};
	unsigned int listLength_75=1;
	char valueList_76[]={0};
	unsigned int listLength_76=1;
	char valueList_77[]={0};
	unsigned int listLength_77=1;
	char valueList_78[]={0};
	unsigned int listLength_78=1;
	char valueList_79[]={0};
	unsigned int listLength_79=1;
	char valueList_80[]={0};
	unsigned int listLength_80=1;
	char valueList_81[]={0};
	unsigned int listLength_81=1;
	char valueList_82[]={0};
	unsigned int listLength_82=1;
	char valueList_83[]={0};
	unsigned int listLength_83=1;
	char valueList_84[]={0};
	unsigned int listLength_84=1;
	char valueList_85[]={0};
	unsigned int listLength_85=1;
	char valueList_86[]={0};
	unsigned int listLength_86=1;
	char valueList_87[]={0};
	unsigned int listLength_87=1;
	char valueList_88[]={0};
	unsigned int listLength_88=1;
	char valueList_89[]={0};
	unsigned int listLength_89=1;
	char valueList_90[]={0};
	unsigned int listLength_90=1;
	char valueList_91[]={0};
	unsigned int listLength_91=1;
	char valueList_92[]={0};
	unsigned int listLength_92=1;
	char valueList_93[]={0};
	unsigned int listLength_93=1;
	char valueList_94[]={0};
	unsigned int listLength_94=1;
	char valueList_95[]={0};
	unsigned int listLength_95=1;
	char valueList_96[]={0};
	unsigned int listLength_96=1;
	char valueList_97[]={0};
	unsigned int listLength_97=1;
	char valueList_98[]={0};
	unsigned int listLength_98=1;
	char valueList_99[]={0};
	unsigned int listLength_99=1;
	char valueList_100[]={0};
	unsigned int listLength_100=1;
	char valueList_101[]={0};
	unsigned int listLength_101=1;
	char valueList_102[]={0};
	unsigned int listLength_102=1;
	char valueList_103[]={0};
	unsigned int listLength_103=1;
	char valueList_104[]={0};
	unsigned int listLength_104=1;
	char valueList_105[]={0};
	unsigned int listLength_105=1;
	char valueList_106[]={0};
	unsigned int listLength_106=1;
	char valueList_107[]={0};
	unsigned int listLength_107=1;
	char valueList_108[]={0};
	unsigned int listLength_108=1;
	char valueList_109[]={0};
	unsigned int listLength_109=1;
	char valueList_110[]={0};
	unsigned int listLength_110=1;
	char valueList_111[]={0};
	unsigned int listLength_111=1;
	char valueList_112[]={0};
	unsigned int listLength_112=1;
	char valueList_113[]={0};
	unsigned int listLength_113=1;
	char valueList_114[]={0};
	unsigned int listLength_114=1;
	char valueList_115[]={0};
	unsigned int listLength_115=1;
	char valueList_116[]={0};
	unsigned int listLength_116=1;
	char valueList_117[]={0};
	unsigned int listLength_117=1;
	char valueList_118[]={0};
	unsigned int listLength_118=1;
	char valueList_119[]={0};
	unsigned int listLength_119=1;
	char valueList_120[]={0};
	unsigned int listLength_120=1;
	char valueList_121[]={0};
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
	char valueList_127[]={0};
	unsigned int listLength_127=1;
	unsigned long int valueList_128[]={0};
	unsigned int listLength_128=1;
	char valueList_129[]={0};
	unsigned int listLength_129=1;
	char valueList_130[]={0};
	unsigned int listLength_130=1;
	char valueList_131[]={0};
	unsigned int listLength_131=1;
	char valueList_132[]={0};
	unsigned int listLength_132=1;
	char valueList_133[]={0};
	unsigned int listLength_133=1;
	char valueList_134[]={0};
	unsigned int listLength_134=1;
	char valueList_135[]={0};
	unsigned int listLength_135=1;
	char valueList_136[]={0};
	unsigned int listLength_136=1;
	char valueList_137[]={0};
	unsigned int listLength_137=1;
	char valueList_138[]={0};
	unsigned int listLength_138=1;
	char valueList_139[]={0};
	unsigned int listLength_139=1;
	char valueList_140[]={0};
	unsigned int listLength_140=1;
	char valueList_141[]={0};
	unsigned int listLength_141=1;
	char valueList_142[]={0};
	unsigned int listLength_142=1;
	char valueList_143[]={0};
	unsigned int listLength_143=1;
	char valueList_144[]={0};
	unsigned int listLength_144=1;
	char valueList_145[]={0};
	unsigned int listLength_145=1;
	char valueList_146[]={0};
	unsigned int listLength_146=1;
	char valueList_147[]={0};
	unsigned int listLength_147=1;
	char valueList_148[]={0};
	unsigned int listLength_148=1;
	char valueList_149[]={0};
	unsigned int listLength_149=1;
	char valueList_150[]={0};
	unsigned int listLength_150=1;
	char valueList_151[]={0};
	unsigned int listLength_151=1;
	char valueList_152[]={0};
	unsigned int listLength_152=1;
	char valueList_153[]={0};
	unsigned int listLength_153=1;
	char valueList_154[]={0};
	unsigned int listLength_154=1;
	char valueList_155[]={0};
	unsigned int listLength_155=1;
	char valueList_156[]={0};
	unsigned int listLength_156=1;
	char valueList_157[]={0};
	unsigned int listLength_157=1;
	char valueList_158[]={0};
	unsigned int listLength_158=1;
	char valueList_159[]={0};
	unsigned int listLength_159=1;
	char valueList_160[]={0};
	unsigned int listLength_160=1;
	char valueList_161[]={0};
	unsigned int listLength_161=1;
	char valueList_162[]={0};
	unsigned int listLength_162=1;
	char valueList_163[]={0};
	unsigned int listLength_163=1;
	char valueList_164[]={0};
	unsigned int listLength_164=1;
	char valueList_165[]={0};
	unsigned int listLength_165=1;
	char valueList_166[]={0};
	unsigned int listLength_166=1;
	char valueList_167[]={0};
	unsigned int listLength_167=1;
	char valueList_168[]={0};
	unsigned int listLength_168=1;
	char valueList_169[]={0};
	unsigned int listLength_169=1;
	char valueList_170[]={0};
	unsigned int listLength_170=1;
	char valueList_171[]={0};
	unsigned int listLength_171=1;
	char valueList_172[]={0};
	unsigned int listLength_172=1;
	char valueList_173[]={0};
	unsigned int listLength_173=1;
	char valueList_174[]={0};
	unsigned int listLength_174=1;
	char valueList_175[]={0};
	unsigned int listLength_175=1;
	char valueList_176[]={0};
	unsigned int listLength_176=1;
	char valueList_177[]={0};
	unsigned int listLength_177=1;
	char valueList_178[]={0};
	unsigned int listLength_178=1;
	char valueList_179[]={0};
	unsigned int listLength_179=1;
	char valueList_180[]={0};
	unsigned int listLength_180=1;
	char valueList_181[]={0};
	unsigned int listLength_181=1;
	char valueList_182[]={0};
	unsigned int listLength_182=1;
	char valueList_183[]={0};
	unsigned int listLength_183=1;
	char valueList_184[]={0};
	unsigned int listLength_184=1;
	char valueList_185[]={0};
	unsigned int listLength_185=1;
	char valueList_186[]={0};
	unsigned int listLength_186=1;
	char valueList_187[]={0};
	unsigned int listLength_187=1;
	char valueList_188[]={0};
	unsigned int listLength_188=1;
	char valueList_189[]={0};
	unsigned int listLength_189=1;
	char valueList_190[]={0};
	unsigned int listLength_190=1;
	char valueList_191[]={0};
	unsigned int listLength_191=1;
	char valueList_192[]={0};
	unsigned int listLength_192=1;
	char valueList_193[]={0};
	unsigned int listLength_193=1;
	char valueList_194[]={0};
	unsigned int listLength_194=1;
	char valueList_195[]={0};
	unsigned int listLength_195=1;
	char valueList_196[]={0};
	unsigned int listLength_196=1;
	char valueList_197[]={0};
	unsigned int listLength_197=1;
	char valueList_198[]={0};
	unsigned int listLength_198=1;
	char valueList_199[]={0};
	unsigned int listLength_199=1;
	char valueList_200[]={0};
	unsigned int listLength_200=1;
	char valueList_201[]={0};
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
	char valueList_207[]={0};
	unsigned int listLength_207=1;
	char valueList_208[]={0};
	unsigned int listLength_208=1;
	char valueList_209[]={0};
	unsigned int listLength_209=1;
	char valueList_210[]={0};
	unsigned int listLength_210=1;
	char valueList_211[]={0};
	unsigned int listLength_211=1;
	unsigned int valueList_212[]={0};
	unsigned int listLength_212=1;
	char valueList_213[]={0};
	unsigned int listLength_213=1;
	char valueList_214[]={0};
	unsigned int listLength_214=1;
	char valueList_215[]={0};
	unsigned int listLength_215=1;
	char valueList_216[]={0};
	unsigned int listLength_216=1;
	char valueList_217[]={0};
	unsigned int listLength_217=1;
	char valueList_218[]={0};
	unsigned int listLength_218=1;
	char valueList_219[]={0};
	unsigned int listLength_219=1;
	char valueList_220[]={0};
	unsigned int listLength_220=1;
	char valueList_221[]={0};
	unsigned int listLength_221=1;
	char valueList_222[]={0};
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
	char valueList_229[]={0};
	unsigned int listLength_229=1;
	char valueList_230[]={0};
	unsigned int listLength_230=1;
	char valueList_231[]={0};
	unsigned int listLength_231=1;
	char valueList_232[]={0};
	unsigned int listLength_232=1;
	char valueList_233[]={0};
	unsigned int listLength_233=1;
	char valueList_234[]={0};
	unsigned int listLength_234=1;
	char valueList_235[]={0};
	unsigned int listLength_235=1;
	char valueList_236[]={0};
	unsigned int listLength_236=1;
	char valueList_237[]={0};
	unsigned int listLength_237=1;
	char valueList_238[]={0};
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
	char valueList_245[]={0};
	unsigned int listLength_245=1;
	char valueList_246[]={0};
	unsigned int listLength_246=1;
	char valueList_247[]={0};
	unsigned int listLength_247=1;
	char valueList_248[]={0};
	unsigned int listLength_248=1;
	char valueList_249[]={0};
	unsigned int listLength_249=1;
	char valueList_250[]={0};
	unsigned int listLength_250=1;
	char valueList_251[]={0};
	unsigned int listLength_251=1;
	char valueList_252[]={0};
	unsigned int listLength_252=1;
	char valueList_253[]={ 0};
	unsigned int listLength_253=1;
	char valueList_254[]={0};
	unsigned int listLength_254=1;
	char valueList_255[]={0};
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_looks_ascii_3,false,0\n");
	aunit_printf("#CASE_START_test_looks_ascii_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ulen=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ubuf=(file_unichar_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			nbytes=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			text_chars[33]=(char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			text_chars[45]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			text_chars[21]=(char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			text_chars[189]=(char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			text_chars[109]=(char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			text_chars[177]=(char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			text_chars[57]=(char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			text_chars[69]=(char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			text_chars[141]=(char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			text_chars[153]=(char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			text_chars[165]=(char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			text_chars[218]=(char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			text_chars[206]=(char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			text_chars[140]=(char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			text_chars[22]=(char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			text_chars[34]=(char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			text_chars[10]=(char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			text_chars[178]=(char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			text_chars[46]=(char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			text_chars[58]=(char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			text_chars[251]=(char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			text_chars[130]=(char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			text_chars[142]=(char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			text_chars[154]=(char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			text_chars[166]=(char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			text_chars[219]=(char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			text_chars[207]=(char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			text_chars[2]=(char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			text_chars[250]=(char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			text_chars[90]=(char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			text_chars[11]=(char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			text_chars[23]=(char)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			text_chars[179]=(char)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			text_chars[59]=(char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			text_chars[35]=(char)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			text_chars[252]=(char)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			text_chars[47]=(char)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			text_chars[240]=(char)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			text_chars[1]=(char)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			text_chars[131]=(char)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			text_chars[143]=(char)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			text_chars[155]=(char)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			text_chars[208]=(char)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			text_chars[167]=(char)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			text_chars[91]=(char)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		if(aUnItCoUnTeR<listLength_49 || useLast_49){
			text_chars[12]=(char)valueList_49[aUnItCoUnTeR<listLength_49?aUnItCoUnTeR:listLength_49-1];

		}
		if(aUnItCoUnTeR<listLength_50 || useLast_50){
			text_chars[48]=(char)valueList_50[aUnItCoUnTeR<listLength_50?aUnItCoUnTeR:listLength_50-1];

		}
		if(aUnItCoUnTeR<listLength_51 || useLast_51){
			text_chars[253]=(char)valueList_51[aUnItCoUnTeR<listLength_51?aUnItCoUnTeR:listLength_51-1];

		}
		if(aUnItCoUnTeR<listLength_52 || useLast_52){
			text_chars[24]=(char)valueList_52[aUnItCoUnTeR<listLength_52?aUnItCoUnTeR:listLength_52-1];

		}
		if(aUnItCoUnTeR<listLength_53 || useLast_53){
			text_chars[241]=(char)valueList_53[aUnItCoUnTeR<listLength_53?aUnItCoUnTeR:listLength_53-1];

		}
		if(aUnItCoUnTeR<listLength_54 || useLast_54){
			text_chars[36]=(char)valueList_54[aUnItCoUnTeR<listLength_54?aUnItCoUnTeR:listLength_54-1];

		}
		if(aUnItCoUnTeR<listLength_55 || useLast_55){
			text_chars[0]=(char)valueList_55[aUnItCoUnTeR<listLength_55?aUnItCoUnTeR:listLength_55-1];

		}
		if(aUnItCoUnTeR<listLength_56 || useLast_56){
			text_chars[120]=(char)valueList_56[aUnItCoUnTeR<listLength_56?aUnItCoUnTeR:listLength_56-1];

		}
		if(aUnItCoUnTeR<listLength_57 || useLast_57){
			text_chars[132]=(char)valueList_57[aUnItCoUnTeR<listLength_57?aUnItCoUnTeR:listLength_57-1];

		}
		if(aUnItCoUnTeR<listLength_58 || useLast_58){
			text_chars[209]=(char)valueList_58[aUnItCoUnTeR<listLength_58?aUnItCoUnTeR:listLength_58-1];

		}
		if(aUnItCoUnTeR<listLength_59 || useLast_59){
			text_chars[144]=(char)valueList_59[aUnItCoUnTeR<listLength_59?aUnItCoUnTeR:listLength_59-1];

		}
		if(aUnItCoUnTeR<listLength_60 || useLast_60){
			text_chars[156]=(char)valueList_60[aUnItCoUnTeR<listLength_60?aUnItCoUnTeR:listLength_60-1];

		}
		if(aUnItCoUnTeR<listLength_61 || useLast_61){
			text_chars[168]=(char)valueList_61[aUnItCoUnTeR<listLength_61?aUnItCoUnTeR:listLength_61-1];

		}
		if(aUnItCoUnTeR<listLength_62 || useLast_62){
			text_chars[80]=(char)valueList_62[aUnItCoUnTeR<listLength_62?aUnItCoUnTeR:listLength_62-1];

		}
		if(aUnItCoUnTeR<listLength_63 || useLast_63){
			text_chars[92]=(char)valueList_63[aUnItCoUnTeR<listLength_63?aUnItCoUnTeR:listLength_63-1];

		}
		if(aUnItCoUnTeR<listLength_64 || useLast_64){
			text_chars[77]=(char)valueList_64[aUnItCoUnTeR<listLength_64?aUnItCoUnTeR:listLength_64-1];

		}
		if(aUnItCoUnTeR<listLength_65 || useLast_65){
			text_chars[89]=(char)valueList_65[aUnItCoUnTeR<listLength_65?aUnItCoUnTeR:listLength_65-1];

		}
		if(aUnItCoUnTeR<listLength_66 || useLast_66){
			text_chars[53]=(char)valueList_66[aUnItCoUnTeR<listLength_66?aUnItCoUnTeR:listLength_66-1];

		}
		if(aUnItCoUnTeR<listLength_67 || useLast_67){
			text_chars[65]=(char)valueList_67[aUnItCoUnTeR<listLength_67?aUnItCoUnTeR:listLength_67-1];

		}
		if(aUnItCoUnTeR<listLength_68 || useLast_68){
			text_chars[254]=(char)valueList_68[aUnItCoUnTeR<listLength_68?aUnItCoUnTeR:listLength_68-1];

		}
		if(aUnItCoUnTeR<listLength_69 || useLast_69){
			text_chars[242]=(char)valueList_69[aUnItCoUnTeR<listLength_69?aUnItCoUnTeR:listLength_69-1];

		}
		if(aUnItCoUnTeR<listLength_70 || useLast_70){
			text_chars[230]=(char)valueList_70[aUnItCoUnTeR<listLength_70?aUnItCoUnTeR:listLength_70-1];

		}
		if(aUnItCoUnTeR<listLength_71 || useLast_71){
			text_chars[121]=(char)valueList_71[aUnItCoUnTeR<listLength_71?aUnItCoUnTeR:listLength_71-1];

		}
		if(aUnItCoUnTeR<listLength_72 || useLast_72){
			text_chars[133]=(char)valueList_72[aUnItCoUnTeR<listLength_72?aUnItCoUnTeR:listLength_72-1];

		}
		if(aUnItCoUnTeR<listLength_73 || useLast_73){
			text_chars[145]=(char)valueList_73[aUnItCoUnTeR<listLength_73?aUnItCoUnTeR:listLength_73-1];

		}
		if(aUnItCoUnTeR<listLength_74 || useLast_74){
			text_chars[157]=(char)valueList_74[aUnItCoUnTeR<listLength_74?aUnItCoUnTeR:listLength_74-1];

		}
		if(aUnItCoUnTeR<listLength_75 || useLast_75){
			text_chars[169]=(char)valueList_75[aUnItCoUnTeR<listLength_75?aUnItCoUnTeR:listLength_75-1];

		}
		if(aUnItCoUnTeR<listLength_76 || useLast_76){
			text_chars[41]=(char)valueList_76[aUnItCoUnTeR<listLength_76?aUnItCoUnTeR:listLength_76-1];

		}
		if(aUnItCoUnTeR<listLength_77 || useLast_77){
			text_chars[66]=(char)valueList_77[aUnItCoUnTeR<listLength_77?aUnItCoUnTeR:listLength_77-1];

		}
		if(aUnItCoUnTeR<listLength_78 || useLast_78){
			text_chars[78]=(char)valueList_78[aUnItCoUnTeR<listLength_78?aUnItCoUnTeR:listLength_78-1];

		}
		if(aUnItCoUnTeR<listLength_79 || useLast_79){
			text_chars[42]=(char)valueList_79[aUnItCoUnTeR<listLength_79?aUnItCoUnTeR:listLength_79-1];

		}
		if(aUnItCoUnTeR<listLength_80 || useLast_80){
			text_chars[54]=(char)valueList_80[aUnItCoUnTeR<listLength_80?aUnItCoUnTeR:listLength_80-1];

		}
		if(aUnItCoUnTeR<listLength_81 || useLast_81){
			text_chars[255]=(char)valueList_81[aUnItCoUnTeR<listLength_81?aUnItCoUnTeR:listLength_81-1];

		}
		if(aUnItCoUnTeR<listLength_82 || useLast_82){
			text_chars[243]=(char)valueList_82[aUnItCoUnTeR<listLength_82?aUnItCoUnTeR:listLength_82-1];

		}
		if(aUnItCoUnTeR<listLength_83 || useLast_83){
			text_chars[231]=(char)valueList_83[aUnItCoUnTeR<listLength_83?aUnItCoUnTeR:listLength_83-1];

		}
		if(aUnItCoUnTeR<listLength_84 || useLast_84){
			text_chars[110]=(char)valueList_84[aUnItCoUnTeR<listLength_84?aUnItCoUnTeR:listLength_84-1];

		}
		if(aUnItCoUnTeR<listLength_85 || useLast_85){
			text_chars[122]=(char)valueList_85[aUnItCoUnTeR<listLength_85?aUnItCoUnTeR:listLength_85-1];

		}
		if(aUnItCoUnTeR<listLength_86 || useLast_86){
			text_chars[134]=(char)valueList_86[aUnItCoUnTeR<listLength_86?aUnItCoUnTeR:listLength_86-1];

		}
		if(aUnItCoUnTeR<listLength_87 || useLast_87){
			text_chars[146]=(char)valueList_87[aUnItCoUnTeR<listLength_87?aUnItCoUnTeR:listLength_87-1];

		}
		if(aUnItCoUnTeR<listLength_88 || useLast_88){
			text_chars[158]=(char)valueList_88[aUnItCoUnTeR<listLength_88?aUnItCoUnTeR:listLength_88-1];

		}
		if(aUnItCoUnTeR<listLength_89 || useLast_89){
			text_chars[30]=(char)valueList_89[aUnItCoUnTeR<listLength_89?aUnItCoUnTeR:listLength_89-1];

		}
		if(aUnItCoUnTeR<listLength_90 || useLast_90){
			text_chars[55]=(char)valueList_90[aUnItCoUnTeR<listLength_90?aUnItCoUnTeR:listLength_90-1];

		}
		if(aUnItCoUnTeR<listLength_91 || useLast_91){
			text_chars[67]=(char)valueList_91[aUnItCoUnTeR<listLength_91?aUnItCoUnTeR:listLength_91-1];

		}
		if(aUnItCoUnTeR<listLength_92 || useLast_92){
			text_chars[31]=(char)valueList_92[aUnItCoUnTeR<listLength_92?aUnItCoUnTeR:listLength_92-1];

		}
		if(aUnItCoUnTeR<listLength_93 || useLast_93){
			text_chars[43]=(char)valueList_93[aUnItCoUnTeR<listLength_93?aUnItCoUnTeR:listLength_93-1];

		}
		if(aUnItCoUnTeR<listLength_94 || useLast_94){
			text_chars[244]=(char)valueList_94[aUnItCoUnTeR<listLength_94?aUnItCoUnTeR:listLength_94-1];

		}
		if(aUnItCoUnTeR<listLength_95 || useLast_95){
			text_chars[232]=(char)valueList_95[aUnItCoUnTeR<listLength_95?aUnItCoUnTeR:listLength_95-1];

		}
		if(aUnItCoUnTeR<listLength_96 || useLast_96){
			text_chars[220]=(char)valueList_96[aUnItCoUnTeR<listLength_96?aUnItCoUnTeR:listLength_96-1];

		}
		if(aUnItCoUnTeR<listLength_97 || useLast_97){
			text_chars[79]=(char)valueList_97[aUnItCoUnTeR<listLength_97?aUnItCoUnTeR:listLength_97-1];

		}
		if(aUnItCoUnTeR<listLength_98 || useLast_98){
			text_chars[111]=(char)valueList_98[aUnItCoUnTeR<listLength_98?aUnItCoUnTeR:listLength_98-1];

		}
		if(aUnItCoUnTeR<listLength_99 || useLast_99){
			text_chars[123]=(char)valueList_99[aUnItCoUnTeR<listLength_99?aUnItCoUnTeR:listLength_99-1];

		}
		if(aUnItCoUnTeR<listLength_100 || useLast_100){
			text_chars[135]=(char)valueList_100[aUnItCoUnTeR<listLength_100?aUnItCoUnTeR:listLength_100-1];

		}
		if(aUnItCoUnTeR<listLength_101 || useLast_101){
			text_chars[147]=(char)valueList_101[aUnItCoUnTeR<listLength_101?aUnItCoUnTeR:listLength_101-1];

		}
		if(aUnItCoUnTeR<listLength_102 || useLast_102){
			text_chars[159]=(char)valueList_102[aUnItCoUnTeR<listLength_102?aUnItCoUnTeR:listLength_102-1];

		}
		if(aUnItCoUnTeR<listLength_103 || useLast_103){
			text_chars[190]=(char)valueList_103[aUnItCoUnTeR<listLength_103?aUnItCoUnTeR:listLength_103-1];

		}
		if(aUnItCoUnTeR<listLength_104 || useLast_104){
			text_chars[44]=(char)valueList_104[aUnItCoUnTeR<listLength_104?aUnItCoUnTeR:listLength_104-1];

		}
		if(aUnItCoUnTeR<listLength_105 || useLast_105){
			text_chars[56]=(char)valueList_105[aUnItCoUnTeR<listLength_105?aUnItCoUnTeR:listLength_105-1];

		}
		if(aUnItCoUnTeR<listLength_106 || useLast_106){
			text_chars[20]=(char)valueList_106[aUnItCoUnTeR<listLength_106?aUnItCoUnTeR:listLength_106-1];

		}
		if(aUnItCoUnTeR<listLength_107 || useLast_107){
			text_chars[245]=(char)valueList_107[aUnItCoUnTeR<listLength_107?aUnItCoUnTeR:listLength_107-1];

		}
		if(aUnItCoUnTeR<listLength_108 || useLast_108){
			text_chars[32]=(char)valueList_108[aUnItCoUnTeR<listLength_108?aUnItCoUnTeR:listLength_108-1];

		}
		if(aUnItCoUnTeR<listLength_109 || useLast_109){
			text_chars[233]=(char)valueList_109[aUnItCoUnTeR<listLength_109?aUnItCoUnTeR:listLength_109-1];

		}
		if(aUnItCoUnTeR<listLength_110 || useLast_110){
			text_chars[221]=(char)valueList_110[aUnItCoUnTeR<listLength_110?aUnItCoUnTeR:listLength_110-1];

		}
		if(aUnItCoUnTeR<listLength_111 || useLast_111){
			text_chars[68]=(char)valueList_111[aUnItCoUnTeR<listLength_111?aUnItCoUnTeR:listLength_111-1];

		}
		if(aUnItCoUnTeR<listLength_112 || useLast_112){
			text_chars[100]=(char)valueList_112[aUnItCoUnTeR<listLength_112?aUnItCoUnTeR:listLength_112-1];

		}
		if(aUnItCoUnTeR<listLength_113 || useLast_113){
			text_chars[112]=(char)valueList_113[aUnItCoUnTeR<listLength_113?aUnItCoUnTeR:listLength_113-1];

		}
		if(aUnItCoUnTeR<listLength_114 || useLast_114){
			text_chars[124]=(char)valueList_114[aUnItCoUnTeR<listLength_114?aUnItCoUnTeR:listLength_114-1];

		}
		if(aUnItCoUnTeR<listLength_115 || useLast_115){
			text_chars[136]=(char)valueList_115[aUnItCoUnTeR<listLength_115?aUnItCoUnTeR:listLength_115-1];

		}
		if(aUnItCoUnTeR<listLength_116 || useLast_116){
			text_chars[148]=(char)valueList_116[aUnItCoUnTeR<listLength_116?aUnItCoUnTeR:listLength_116-1];

		}
		if(aUnItCoUnTeR<listLength_117 || useLast_117){
			text_chars[191]=(char)valueList_117[aUnItCoUnTeR<listLength_117?aUnItCoUnTeR:listLength_117-1];

		}
		if(aUnItCoUnTeR<listLength_118 || useLast_118){
			text_chars[149]=(char)valueList_118[aUnItCoUnTeR<listLength_118?aUnItCoUnTeR:listLength_118-1];

		}
		if(aUnItCoUnTeR<listLength_119 || useLast_119){
			text_chars[246]=(char)valueList_119[aUnItCoUnTeR<listLength_119?aUnItCoUnTeR:listLength_119-1];

		}
		if(aUnItCoUnTeR<listLength_120 || useLast_120){
			text_chars[97]=(char)valueList_120[aUnItCoUnTeR<listLength_120?aUnItCoUnTeR:listLength_120-1];

		}
		if(aUnItCoUnTeR<listLength_121 || useLast_121){
			text_chars[234]=(char)valueList_121[aUnItCoUnTeR<listLength_121?aUnItCoUnTeR:listLength_121-1];

		}
		if(aUnItCoUnTeR<listLength_122 || useLast_122){
			text_chars[222]=(char)valueList_122[aUnItCoUnTeR<listLength_122?aUnItCoUnTeR:listLength_122-1];

		}
		if(aUnItCoUnTeR<listLength_123 || useLast_123){
			text_chars[210]=(char)valueList_123[aUnItCoUnTeR<listLength_123?aUnItCoUnTeR:listLength_123-1];

		}
		if(aUnItCoUnTeR<listLength_124 || useLast_124){
			text_chars[17]=(char)valueList_124[aUnItCoUnTeR<listLength_124?aUnItCoUnTeR:listLength_124-1];

		}
		if(aUnItCoUnTeR<listLength_125 || useLast_125){
			text_chars[29]=(char)valueList_125[aUnItCoUnTeR<listLength_125?aUnItCoUnTeR:listLength_125-1];

		}
		if(aUnItCoUnTeR<listLength_126 || useLast_126){
			text_chars[101]=(char)valueList_126[aUnItCoUnTeR<listLength_126?aUnItCoUnTeR:listLength_126-1];

		}
		if(aUnItCoUnTeR<listLength_127 || useLast_127){
			text_chars[113]=(char)valueList_127[aUnItCoUnTeR<listLength_127?aUnItCoUnTeR:listLength_127-1];

		}
		if(aUnItCoUnTeR<listLength_128 || useLast_128){
			ubuf_PTRTO[0]=(unsigned long int)valueList_128[aUnItCoUnTeR<listLength_128?aUnItCoUnTeR:listLength_128-1];

		}
		if(aUnItCoUnTeR<listLength_129 || useLast_129){
			text_chars[125]=(char)valueList_129[aUnItCoUnTeR<listLength_129?aUnItCoUnTeR:listLength_129-1];

		}
		if(aUnItCoUnTeR<listLength_130 || useLast_130){
			text_chars[137]=(char)valueList_130[aUnItCoUnTeR<listLength_130?aUnItCoUnTeR:listLength_130-1];

		}
		if(aUnItCoUnTeR<listLength_131 || useLast_131){
			text_chars[192]=(char)valueList_131[aUnItCoUnTeR<listLength_131?aUnItCoUnTeR:listLength_131-1];

		}
		if(aUnItCoUnTeR<listLength_132 || useLast_132){
			text_chars[73]=(char)valueList_132[aUnItCoUnTeR<listLength_132?aUnItCoUnTeR:listLength_132-1];

		}
		if(aUnItCoUnTeR<listLength_133 || useLast_133){
			text_chars[180]=(char)valueList_133[aUnItCoUnTeR<listLength_133?aUnItCoUnTeR:listLength_133-1];

		}
		if(aUnItCoUnTeR<listLength_134 || useLast_134){
			text_chars[85]=(char)valueList_134[aUnItCoUnTeR<listLength_134?aUnItCoUnTeR:listLength_134-1];

		}
		if(aUnItCoUnTeR<listLength_135 || useLast_135){
			text_chars[61]=(char)valueList_135[aUnItCoUnTeR<listLength_135?aUnItCoUnTeR:listLength_135-1];

		}
		if(aUnItCoUnTeR<listLength_136 || useLast_136){
			text_chars[138]=(char)valueList_136[aUnItCoUnTeR<listLength_136?aUnItCoUnTeR:listLength_136-1];

		}
		if(aUnItCoUnTeR<listLength_137 || useLast_137){
			text_chars[247]=(char)valueList_137[aUnItCoUnTeR<listLength_137?aUnItCoUnTeR:listLength_137-1];

		}
		if(aUnItCoUnTeR<listLength_138 || useLast_138){
			text_chars[235]=(char)valueList_138[aUnItCoUnTeR<listLength_138?aUnItCoUnTeR:listLength_138-1];

		}
		if(aUnItCoUnTeR<listLength_139 || useLast_139){
			text_chars[86]=(char)valueList_139[aUnItCoUnTeR<listLength_139?aUnItCoUnTeR:listLength_139-1];

		}
		if(aUnItCoUnTeR<listLength_140 || useLast_140){
			text_chars[223]=(char)valueList_140[aUnItCoUnTeR<listLength_140?aUnItCoUnTeR:listLength_140-1];

		}
		if(aUnItCoUnTeR<listLength_141 || useLast_141){
			text_chars[98]=(char)valueList_141[aUnItCoUnTeR<listLength_141?aUnItCoUnTeR:listLength_141-1];

		}
		if(aUnItCoUnTeR<listLength_142 || useLast_142){
			text_chars[211]=(char)valueList_142[aUnItCoUnTeR<listLength_142?aUnItCoUnTeR:listLength_142-1];

		}
		if(aUnItCoUnTeR<listLength_143 || useLast_143){
			text_chars[18]=(char)valueList_143[aUnItCoUnTeR<listLength_143?aUnItCoUnTeR:listLength_143-1];

		}
		if(aUnItCoUnTeR<listLength_144 || useLast_144){
			text_chars[102]=(char)valueList_144[aUnItCoUnTeR<listLength_144?aUnItCoUnTeR:listLength_144-1];

		}
		if(aUnItCoUnTeR<listLength_145 || useLast_145){
			text_chars[114]=(char)valueList_145[aUnItCoUnTeR<listLength_145?aUnItCoUnTeR:listLength_145-1];

		}
		if(aUnItCoUnTeR<listLength_146 || useLast_146){
			text_chars[126]=(char)valueList_146[aUnItCoUnTeR<listLength_146?aUnItCoUnTeR:listLength_146-1];

		}
		if(aUnItCoUnTeR<listLength_147 || useLast_147){
			text_chars[193]=(char)valueList_147[aUnItCoUnTeR<listLength_147?aUnItCoUnTeR:listLength_147-1];

		}
		if(aUnItCoUnTeR<listLength_148 || useLast_148){
			text_chars[181]=(char)valueList_148[aUnItCoUnTeR<listLength_148?aUnItCoUnTeR:listLength_148-1];

		}
		if(aUnItCoUnTeR<listLength_149 || useLast_149){
			text_chars[62]=(char)valueList_149[aUnItCoUnTeR<listLength_149?aUnItCoUnTeR:listLength_149-1];

		}
		if(aUnItCoUnTeR<listLength_150 || useLast_150){
			text_chars[74]=(char)valueList_150[aUnItCoUnTeR<listLength_150?aUnItCoUnTeR:listLength_150-1];

		}
		if(aUnItCoUnTeR<listLength_151 || useLast_151){
			text_chars[50]=(char)valueList_151[aUnItCoUnTeR<listLength_151?aUnItCoUnTeR:listLength_151-1];

		}
		if(aUnItCoUnTeR<listLength_152 || useLast_152){
			text_chars[9]=(char)valueList_152[aUnItCoUnTeR<listLength_152?aUnItCoUnTeR:listLength_152-1];

		}
		if(aUnItCoUnTeR<listLength_153 || useLast_153){
			text_chars[99]=(char)valueList_153[aUnItCoUnTeR<listLength_153?aUnItCoUnTeR:listLength_153-1];

		}
		if(aUnItCoUnTeR<listLength_154 || useLast_154){
			text_chars[127]=(char)valueList_154[aUnItCoUnTeR<listLength_154?aUnItCoUnTeR:listLength_154-1];

		}
		if(aUnItCoUnTeR<listLength_155 || useLast_155){
			text_chars[236]=(char)valueList_155[aUnItCoUnTeR<listLength_155?aUnItCoUnTeR:listLength_155-1];

		}
		if(aUnItCoUnTeR<listLength_156 || useLast_156){
			text_chars[139]=(char)valueList_156[aUnItCoUnTeR<listLength_156?aUnItCoUnTeR:listLength_156-1];

		}
		if(aUnItCoUnTeR<listLength_157 || useLast_157){
			text_chars[224]=(char)valueList_157[aUnItCoUnTeR<listLength_157?aUnItCoUnTeR:listLength_157-1];

		}
		if(aUnItCoUnTeR<listLength_158 || useLast_158){
			text_chars[75]=(char)valueList_158[aUnItCoUnTeR<listLength_158?aUnItCoUnTeR:listLength_158-1];

		}
		if(aUnItCoUnTeR<listLength_159 || useLast_159){
			text_chars[212]=(char)valueList_159[aUnItCoUnTeR<listLength_159?aUnItCoUnTeR:listLength_159-1];

		}
		if(aUnItCoUnTeR<listLength_160 || useLast_160){
			text_chars[87]=(char)valueList_160[aUnItCoUnTeR<listLength_160?aUnItCoUnTeR:listLength_160-1];

		}
		if(aUnItCoUnTeR<listLength_161 || useLast_161){
			text_chars[200]=(char)valueList_161[aUnItCoUnTeR<listLength_161?aUnItCoUnTeR:listLength_161-1];

		}
		if(aUnItCoUnTeR<listLength_162 || useLast_162){
			text_chars[19]=(char)valueList_162[aUnItCoUnTeR<listLength_162?aUnItCoUnTeR:listLength_162-1];

		}
		if(aUnItCoUnTeR<listLength_163 || useLast_163){
			text_chars[103]=(char)valueList_163[aUnItCoUnTeR<listLength_163?aUnItCoUnTeR:listLength_163-1];

		}
		if(aUnItCoUnTeR<listLength_164 || useLast_164){
			text_chars[115]=(char)valueList_164[aUnItCoUnTeR<listLength_164?aUnItCoUnTeR:listLength_164-1];

		}
		if(aUnItCoUnTeR<listLength_165 || useLast_165){
			text_chars[248]=(char)valueList_165[aUnItCoUnTeR<listLength_165?aUnItCoUnTeR:listLength_165-1];

		}
		if(aUnItCoUnTeR<listLength_166 || useLast_166){
			text_chars[194]=(char)valueList_166[aUnItCoUnTeR<listLength_166?aUnItCoUnTeR:listLength_166-1];

		}
		if(aUnItCoUnTeR<listLength_167 || useLast_167){
			text_chars[182]=(char)valueList_167[aUnItCoUnTeR<listLength_167?aUnItCoUnTeR:listLength_167-1];

		}
		if(aUnItCoUnTeR<listLength_168 || useLast_168){
			text_chars[170]=(char)valueList_168[aUnItCoUnTeR<listLength_168?aUnItCoUnTeR:listLength_168-1];

		}
		if(aUnItCoUnTeR<listLength_169 || useLast_169){
			text_chars[51]=(char)valueList_169[aUnItCoUnTeR<listLength_169?aUnItCoUnTeR:listLength_169-1];

		}
		if(aUnItCoUnTeR<listLength_170 || useLast_170){
			text_chars[63]=(char)valueList_170[aUnItCoUnTeR<listLength_170?aUnItCoUnTeR:listLength_170-1];

		}
		if(aUnItCoUnTeR<listLength_171 || useLast_171){
			text_chars[88]=(char)valueList_171[aUnItCoUnTeR<listLength_171?aUnItCoUnTeR:listLength_171-1];

		}
		if(aUnItCoUnTeR<listLength_172 || useLast_172){
			text_chars[116]=(char)valueList_172[aUnItCoUnTeR<listLength_172?aUnItCoUnTeR:listLength_172-1];

		}
		if(aUnItCoUnTeR<listLength_173 || useLast_173){
			text_chars[225]=(char)valueList_173[aUnItCoUnTeR<listLength_173?aUnItCoUnTeR:listLength_173-1];

		}
		if(aUnItCoUnTeR<listLength_174 || useLast_174){
			text_chars[8]=(char)valueList_174[aUnItCoUnTeR<listLength_174?aUnItCoUnTeR:listLength_174-1];

		}
		if(aUnItCoUnTeR<listLength_175 || useLast_175){
			text_chars[128]=(char)valueList_175[aUnItCoUnTeR<listLength_175?aUnItCoUnTeR:listLength_175-1];

		}
		if(aUnItCoUnTeR<listLength_176 || useLast_176){
			text_chars[213]=(char)valueList_176[aUnItCoUnTeR<listLength_176?aUnItCoUnTeR:listLength_176-1];

		}
		if(aUnItCoUnTeR<listLength_177 || useLast_177){
			text_chars[64]=(char)valueList_177[aUnItCoUnTeR<listLength_177?aUnItCoUnTeR:listLength_177-1];

		}
		if(aUnItCoUnTeR<listLength_178 || useLast_178){
			text_chars[201]=(char)valueList_178[aUnItCoUnTeR<listLength_178?aUnItCoUnTeR:listLength_178-1];

		}
		if(aUnItCoUnTeR<listLength_179 || useLast_179){
			text_chars[76]=(char)valueList_179[aUnItCoUnTeR<listLength_179?aUnItCoUnTeR:listLength_179-1];

		}
		if(aUnItCoUnTeR<listLength_180 || useLast_180){
			text_chars[196]=(char)valueList_180[aUnItCoUnTeR<listLength_180?aUnItCoUnTeR:listLength_180-1];

		}
		if(aUnItCoUnTeR<listLength_181 || useLast_181){
			text_chars[249]=(char)valueList_181[aUnItCoUnTeR<listLength_181?aUnItCoUnTeR:listLength_181-1];

		}
		if(aUnItCoUnTeR<listLength_182 || useLast_182){
			text_chars[104]=(char)valueList_182[aUnItCoUnTeR<listLength_182?aUnItCoUnTeR:listLength_182-1];

		}
		if(aUnItCoUnTeR<listLength_183 || useLast_183){
			text_chars[237]=(char)valueList_183[aUnItCoUnTeR<listLength_183?aUnItCoUnTeR:listLength_183-1];

		}
		if(aUnItCoUnTeR<listLength_184 || useLast_184){
			text_chars[195]=(char)valueList_184[aUnItCoUnTeR<listLength_184?aUnItCoUnTeR:listLength_184-1];

		}
		if(aUnItCoUnTeR<listLength_185 || useLast_185){
			text_chars[183]=(char)valueList_185[aUnItCoUnTeR<listLength_185?aUnItCoUnTeR:listLength_185-1];

		}
		if(aUnItCoUnTeR<listLength_186 || useLast_186){
			text_chars[171]=(char)valueList_186[aUnItCoUnTeR<listLength_186?aUnItCoUnTeR:listLength_186-1];

		}
		if(aUnItCoUnTeR<listLength_187 || useLast_187){
			text_chars[40]=(char)valueList_187[aUnItCoUnTeR<listLength_187?aUnItCoUnTeR:listLength_187-1];

		}
		if(aUnItCoUnTeR<listLength_188 || useLast_188){
			text_chars[52]=(char)valueList_188[aUnItCoUnTeR<listLength_188?aUnItCoUnTeR:listLength_188-1];

		}
		if(aUnItCoUnTeR<listLength_189 || useLast_189){
			text_chars[105]=(char)valueList_189[aUnItCoUnTeR<listLength_189?aUnItCoUnTeR:listLength_189-1];

		}
		if(aUnItCoUnTeR<listLength_190 || useLast_190){
			text_chars[214]=(char)valueList_190[aUnItCoUnTeR<listLength_190?aUnItCoUnTeR:listLength_190-1];

		}
		if(aUnItCoUnTeR<listLength_191 || useLast_191){
			text_chars[117]=(char)valueList_191[aUnItCoUnTeR<listLength_191?aUnItCoUnTeR:listLength_191-1];

		}
		if(aUnItCoUnTeR<listLength_192 || useLast_192){
			text_chars[202]=(char)valueList_192[aUnItCoUnTeR<listLength_192?aUnItCoUnTeR:listLength_192-1];

		}
		if(aUnItCoUnTeR<listLength_193 || useLast_193){
			text_chars[7]=(char)valueList_193[aUnItCoUnTeR<listLength_193?aUnItCoUnTeR:listLength_193-1];

		}
		if(aUnItCoUnTeR<listLength_194 || useLast_194){
			text_chars[129]=(char)valueList_194[aUnItCoUnTeR<listLength_194?aUnItCoUnTeR:listLength_194-1];

		}
		if(aUnItCoUnTeR<listLength_195 || useLast_195){
			text_chars[37]=(char)valueList_195[aUnItCoUnTeR<listLength_195?aUnItCoUnTeR:listLength_195-1];

		}
		if(aUnItCoUnTeR<listLength_196 || useLast_196){
			text_chars[49]=(char)valueList_196[aUnItCoUnTeR<listLength_196?aUnItCoUnTeR:listLength_196-1];

		}
		if(aUnItCoUnTeR<listLength_197 || useLast_197){
			text_chars[13]=(char)valueList_197[aUnItCoUnTeR<listLength_197?aUnItCoUnTeR:listLength_197-1];

		}
		if(aUnItCoUnTeR<listLength_198 || useLast_198){
			text_chars[197]=(char)valueList_198[aUnItCoUnTeR<listLength_198?aUnItCoUnTeR:listLength_198-1];

		}
		if(aUnItCoUnTeR<listLength_199 || useLast_199){
			text_chars[25]=(char)valueList_199[aUnItCoUnTeR<listLength_199?aUnItCoUnTeR:listLength_199-1];

		}
		if(aUnItCoUnTeR<listLength_200 || useLast_200){
			text_chars[185]=(char)valueList_200[aUnItCoUnTeR<listLength_200?aUnItCoUnTeR:listLength_200-1];

		}
		if(aUnItCoUnTeR<listLength_201 || useLast_201){
			text_chars[238]=(char)valueList_201[aUnItCoUnTeR<listLength_201?aUnItCoUnTeR:listLength_201-1];

		}
		if(aUnItCoUnTeR<listLength_202 || useLast_202){
			text_chars[226]=(char)valueList_202[aUnItCoUnTeR<listLength_202?aUnItCoUnTeR:listLength_202-1];

		}
		if(aUnItCoUnTeR<listLength_203 || useLast_203){
			text_chars[160]=(char)valueList_203[aUnItCoUnTeR<listLength_203?aUnItCoUnTeR:listLength_203-1];

		}
		if(aUnItCoUnTeR<listLength_204 || useLast_204){
			text_chars[184]=(char)valueList_204[aUnItCoUnTeR<listLength_204?aUnItCoUnTeR:listLength_204-1];

		}
		if(aUnItCoUnTeR<listLength_205 || useLast_205){
			text_chars[81]=(char)valueList_205[aUnItCoUnTeR<listLength_205?aUnItCoUnTeR:listLength_205-1];

		}
		if(aUnItCoUnTeR<listLength_206 || useLast_206){
			text_chars[172]=(char)valueList_206[aUnItCoUnTeR<listLength_206?aUnItCoUnTeR:listLength_206-1];

		}
		if(aUnItCoUnTeR<listLength_207 || useLast_207){
			text_chars[93]=(char)valueList_207[aUnItCoUnTeR<listLength_207?aUnItCoUnTeR:listLength_207-1];

		}
		if(aUnItCoUnTeR<listLength_208 || useLast_208){
			text_chars[203]=(char)valueList_208[aUnItCoUnTeR<listLength_208?aUnItCoUnTeR:listLength_208-1];

		}
		if(aUnItCoUnTeR<listLength_209 || useLast_209){
			text_chars[106]=(char)valueList_209[aUnItCoUnTeR<listLength_209?aUnItCoUnTeR:listLength_209-1];

		}
		if(aUnItCoUnTeR<listLength_210 || useLast_210){
			text_chars[118]=(char)valueList_210[aUnItCoUnTeR<listLength_210?aUnItCoUnTeR:listLength_210-1];

		}
		if(aUnItCoUnTeR<listLength_211 || useLast_211){
			text_chars[6]=(char)valueList_211[aUnItCoUnTeR<listLength_211?aUnItCoUnTeR:listLength_211-1];

		}
		if(aUnItCoUnTeR<listLength_212 || useLast_212){
			ulen_PTRTO[0]=(unsigned int)valueList_212[aUnItCoUnTeR<listLength_212?aUnItCoUnTeR:listLength_212-1];

		}
		if(aUnItCoUnTeR<listLength_213 || useLast_213){
			text_chars[26]=(char)valueList_213[aUnItCoUnTeR<listLength_213?aUnItCoUnTeR:listLength_213-1];

		}
		if(aUnItCoUnTeR<listLength_214 || useLast_214){
			text_chars[38]=(char)valueList_214[aUnItCoUnTeR<listLength_214?aUnItCoUnTeR:listLength_214-1];

		}
		if(aUnItCoUnTeR<listLength_215 || useLast_215){
			text_chars[198]=(char)valueList_215[aUnItCoUnTeR<listLength_215?aUnItCoUnTeR:listLength_215-1];

		}
		if(aUnItCoUnTeR<listLength_216 || useLast_216){
			text_chars[186]=(char)valueList_216[aUnItCoUnTeR<listLength_216?aUnItCoUnTeR:listLength_216-1];

		}
		if(aUnItCoUnTeR<listLength_217 || useLast_217){
			text_chars[14]=(char)valueList_217[aUnItCoUnTeR<listLength_217?aUnItCoUnTeR:listLength_217-1];

		}
		if(aUnItCoUnTeR<listLength_218 || useLast_218){
			text_chars[174]=(char)valueList_218[aUnItCoUnTeR<listLength_218?aUnItCoUnTeR:listLength_218-1];

		}
		if(aUnItCoUnTeR<listLength_219 || useLast_219){
			text_chars[239]=(char)valueList_219[aUnItCoUnTeR<listLength_219?aUnItCoUnTeR:listLength_219-1];

		}
		if(aUnItCoUnTeR<listLength_220 || useLast_220){
			text_chars[227]=(char)valueList_220[aUnItCoUnTeR<listLength_220?aUnItCoUnTeR:listLength_220-1];

		}
		if(aUnItCoUnTeR<listLength_221 || useLast_221){
			text_chars[215]=(char)valueList_221[aUnItCoUnTeR<listLength_221?aUnItCoUnTeR:listLength_221-1];

		}
		if(aUnItCoUnTeR<listLength_222 || useLast_222){
			text_chars[161]=(char)valueList_222[aUnItCoUnTeR<listLength_222?aUnItCoUnTeR:listLength_222-1];

		}
		if(aUnItCoUnTeR<listLength_223 || useLast_223){
			text_chars[173]=(char)valueList_223[aUnItCoUnTeR<listLength_223?aUnItCoUnTeR:listLength_223-1];

		}
		if(aUnItCoUnTeR<listLength_224 || useLast_224){
			text_chars[70]=(char)valueList_224[aUnItCoUnTeR<listLength_224?aUnItCoUnTeR:listLength_224-1];

		}
		if(aUnItCoUnTeR<listLength_225 || useLast_225){
			text_chars[82]=(char)valueList_225[aUnItCoUnTeR<listLength_225?aUnItCoUnTeR:listLength_225-1];

		}
		if(aUnItCoUnTeR<listLength_226 || useLast_226){
			text_chars[94]=(char)valueList_226[aUnItCoUnTeR<listLength_226?aUnItCoUnTeR:listLength_226-1];

		}
		if(aUnItCoUnTeR<listLength_227 || useLast_227){
			text_chars[107]=(char)valueList_227[aUnItCoUnTeR<listLength_227?aUnItCoUnTeR:listLength_227-1];

		}
		if(aUnItCoUnTeR<listLength_228 || useLast_228){
			text_chars[119]=(char)valueList_228[aUnItCoUnTeR<listLength_228?aUnItCoUnTeR:listLength_228-1];

		}
		if(aUnItCoUnTeR<listLength_229 || useLast_229){
			text_chars[15]=(char)valueList_229[aUnItCoUnTeR<listLength_229?aUnItCoUnTeR:listLength_229-1];

		}
		if(aUnItCoUnTeR<listLength_230 || useLast_230){
			text_chars[199]=(char)valueList_230[aUnItCoUnTeR<listLength_230?aUnItCoUnTeR:listLength_230-1];

		}
		if(aUnItCoUnTeR<listLength_231 || useLast_231){
			text_chars[27]=(char)valueList_231[aUnItCoUnTeR<listLength_231?aUnItCoUnTeR:listLength_231-1];

		}
		if(aUnItCoUnTeR<listLength_232 || useLast_232){
			text_chars[187]=(char)valueList_232[aUnItCoUnTeR<listLength_232?aUnItCoUnTeR:listLength_232-1];

		}
		if(aUnItCoUnTeR<listLength_233 || useLast_233){
			text_chars[175]=(char)valueList_233[aUnItCoUnTeR<listLength_233?aUnItCoUnTeR:listLength_233-1];

		}
		if(aUnItCoUnTeR<listLength_234 || useLast_234){
			text_chars[163]=(char)valueList_234[aUnItCoUnTeR<listLength_234?aUnItCoUnTeR:listLength_234-1];

		}
		if(aUnItCoUnTeR<listLength_235 || useLast_235){
			text_chars[39]=(char)valueList_235[aUnItCoUnTeR<listLength_235?aUnItCoUnTeR:listLength_235-1];

		}
		if(aUnItCoUnTeR<listLength_236 || useLast_236){
			text_chars[5]=(char)valueList_236[aUnItCoUnTeR<listLength_236?aUnItCoUnTeR:listLength_236-1];

		}
		if(aUnItCoUnTeR<listLength_237 || useLast_237){
			text_chars[228]=(char)valueList_237[aUnItCoUnTeR<listLength_237?aUnItCoUnTeR:listLength_237-1];

		}
		if(aUnItCoUnTeR<listLength_238 || useLast_238){
			text_chars[216]=(char)valueList_238[aUnItCoUnTeR<listLength_238?aUnItCoUnTeR:listLength_238-1];

		}
		if(aUnItCoUnTeR<listLength_239 || useLast_239){
			text_chars[204]=(char)valueList_239[aUnItCoUnTeR<listLength_239?aUnItCoUnTeR:listLength_239-1];

		}
		if(aUnItCoUnTeR<listLength_240 || useLast_240){
			text_chars[150]=(char)valueList_240[aUnItCoUnTeR<listLength_240?aUnItCoUnTeR:listLength_240-1];

		}
		if(aUnItCoUnTeR<listLength_241 || useLast_241){
			text_chars[162]=(char)valueList_241[aUnItCoUnTeR<listLength_241?aUnItCoUnTeR:listLength_241-1];

		}
		if(aUnItCoUnTeR<listLength_242 || useLast_242){
			text_chars[95]=(char)valueList_242[aUnItCoUnTeR<listLength_242?aUnItCoUnTeR:listLength_242-1];

		}
		if(aUnItCoUnTeR<listLength_243 || useLast_243){
			text_chars[71]=(char)valueList_243[aUnItCoUnTeR<listLength_243?aUnItCoUnTeR:listLength_243-1];

		}
		if(aUnItCoUnTeR<listLength_244 || useLast_244){
			text_chars[83]=(char)valueList_244[aUnItCoUnTeR<listLength_244?aUnItCoUnTeR:listLength_244-1];

		}
		if(aUnItCoUnTeR<listLength_245 || useLast_245){
			text_chars[108]=(char)valueList_245[aUnItCoUnTeR<listLength_245?aUnItCoUnTeR:listLength_245-1];

		}
		if(aUnItCoUnTeR<listLength_246 || useLast_246){
			text_chars[188]=(char)valueList_246[aUnItCoUnTeR<listLength_246?aUnItCoUnTeR:listLength_246-1];

		}
		if(aUnItCoUnTeR<listLength_247 || useLast_247){
			text_chars[16]=(char)valueList_247[aUnItCoUnTeR<listLength_247?aUnItCoUnTeR:listLength_247-1];

		}
		if(aUnItCoUnTeR<listLength_248 || useLast_248){
			text_chars[176]=(char)valueList_248[aUnItCoUnTeR<listLength_248?aUnItCoUnTeR:listLength_248-1];

		}
		if(aUnItCoUnTeR<listLength_249 || useLast_249){
			text_chars[152]=(char)valueList_249[aUnItCoUnTeR<listLength_249?aUnItCoUnTeR:listLength_249-1];

		}
		if(aUnItCoUnTeR<listLength_250 || useLast_250){
			text_chars[164]=(char)valueList_250[aUnItCoUnTeR<listLength_250?aUnItCoUnTeR:listLength_250-1];

		}
		if(aUnItCoUnTeR<listLength_251 || useLast_251){
			text_chars[28]=(char)valueList_251[aUnItCoUnTeR<listLength_251?aUnItCoUnTeR:listLength_251-1];

		}
		if(aUnItCoUnTeR<listLength_252 || useLast_252){
			text_chars[229]=(char)valueList_252[aUnItCoUnTeR<listLength_252?aUnItCoUnTeR:listLength_252-1];

		}
		if(aUnItCoUnTeR<listLength_253 || useLast_253){
			text_chars[4]=(char)valueList_253[aUnItCoUnTeR<listLength_253?aUnItCoUnTeR:listLength_253-1];

		}
		if(aUnItCoUnTeR<listLength_254 || useLast_254){
			text_chars[217]=(char)valueList_254[aUnItCoUnTeR<listLength_254?aUnItCoUnTeR:listLength_254-1];

		}
		if(aUnItCoUnTeR<listLength_255 || useLast_255){
			text_chars[205]=(char)valueList_255[aUnItCoUnTeR<listLength_255?aUnItCoUnTeR:listLength_255-1];

		}
		if(aUnItCoUnTeR<listLength_256 || useLast_256){
			text_chars[151]=(char)valueList_256[aUnItCoUnTeR<listLength_256?aUnItCoUnTeR:listLength_256-1];

		}
		if(aUnItCoUnTeR<listLength_257 || useLast_257){
			text_chars[84]=(char)valueList_257[aUnItCoUnTeR<listLength_257?aUnItCoUnTeR:listLength_257-1];

		}
		if(aUnItCoUnTeR<listLength_258 || useLast_258){
			text_chars[96]=(char)valueList_258[aUnItCoUnTeR<listLength_258?aUnItCoUnTeR:listLength_258-1];

		}
		if(aUnItCoUnTeR<listLength_259 || useLast_259){
			text_chars[60]=(char)valueList_259[aUnItCoUnTeR<listLength_259?aUnItCoUnTeR:listLength_259-1];

		}
		if(aUnItCoUnTeR<listLength_260 || useLast_260){
			text_chars[72]=(char)valueList_260[aUnItCoUnTeR<listLength_260?aUnItCoUnTeR:listLength_260-1];

		}
		returnValue = looks_ascii(buf,nbytes,ubuf,ulen);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("looks_ascii","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("looks_ascii","ubuf[2]",99,ubuf[2])
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("looks_ascii","ubuf[1]",98,ubuf[1])
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("looks_ascii","ubuf[0]",97,ubuf[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("looks_ascii","ulen[0]",3,ulen[0])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_looks_ascii_3\n");
}

void test_looks_ascii_4(void){
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
	unsigned char *valueList_0[]={(unsigned char *)"\x80\x81\x82"};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)ulen_PTRTO};
	unsigned int listLength_1=1;
	file_unichar_t *valueList_2[]={(file_unichar_t *)ubuf_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={3};
	unsigned int listLength_3=1;
	char valueList_4[]={0};
	unsigned int listLength_4=1;
	char valueList_5[]={0};
	unsigned int listLength_5=1;
	char valueList_6[]={0};
	unsigned int listLength_6=1;
	char valueList_7[]={0};
	unsigned int listLength_7=1;
	char valueList_8[]={0};
	unsigned int listLength_8=1;
	char valueList_9[]={0};
	unsigned int listLength_9=1;
	char valueList_10[]={0};
	unsigned int listLength_10=1;
	char valueList_11[]={0};
	unsigned int listLength_11=1;
	char valueList_12[]={0};
	unsigned int listLength_12=1;
	char valueList_13[]={0};
	unsigned int listLength_13=1;
	char valueList_14[]={0};
	unsigned int listLength_14=1;
	char valueList_15[]={0};
	unsigned int listLength_15=1;
	char valueList_16[]={0};
	unsigned int listLength_16=1;
	char valueList_17[]={0};
	unsigned int listLength_17=1;
	char valueList_18[]={0};
	unsigned int listLength_18=1;
	char valueList_19[]={0};
	unsigned int listLength_19=1;
	char valueList_20[]={0};
	unsigned int listLength_20=1;
	char valueList_21[]={0};
	unsigned int listLength_21=1;
	char valueList_22[]={0};
	unsigned int listLength_22=1;
	char valueList_23[]={0};
	unsigned int listLength_23=1;
	char valueList_24[]={0};
	unsigned int listLength_24=1;
	char valueList_25[]={0};
	unsigned int listLength_25=1;
	char valueList_26[]={0};
	unsigned int listLength_26=1;
	char valueList_27[]={0};
	unsigned int listLength_27=1;
	char valueList_28[]={0};
	unsigned int listLength_28=1;
	char valueList_29[]={0};
	unsigned int listLength_29=1;
	char valueList_30[]={0};
	unsigned int listLength_30=1;
	char valueList_31[]={ 1};
	unsigned int listLength_31=1;
	char valueList_32[]={0};
	unsigned int listLength_32=1;
	char valueList_33[]={0};
	unsigned int listLength_33=1;
	char valueList_34[]={0};
	unsigned int listLength_34=1;
	char valueList_35[]={0};
	unsigned int listLength_35=1;
	char valueList_36[]={0};
	unsigned int listLength_36=1;
	char valueList_37[]={0};
	unsigned int listLength_37=1;
	char valueList_38[]={0};
	unsigned int listLength_38=1;
	char valueList_39[]={0};
	unsigned int listLength_39=1;
	char valueList_40[]={0};
	unsigned int listLength_40=1;
	char valueList_41[]={0};
	unsigned int listLength_41=1;
	char valueList_42[]={ 1};
	unsigned int listLength_42=1;
	char valueList_43[]={0};
	unsigned int listLength_43=1;
	char valueList_44[]={0};
	unsigned int listLength_44=1;
	char valueList_45[]={0};
	unsigned int listLength_45=1;
	char valueList_46[]={0};
	unsigned int listLength_46=1;
	char valueList_47[]={0};
	unsigned int listLength_47=1;
	char valueList_48[]={0};
	unsigned int listLength_48=1;
	char valueList_49[]={0};
	unsigned int listLength_49=1;
	char valueList_50[]={0};
	unsigned int listLength_50=1;
	char valueList_51[]={0};
	unsigned int listLength_51=1;
	char valueList_52[]={0};
	unsigned int listLength_52=1;
	char valueList_53[]={0};
	unsigned int listLength_53=1;
	char valueList_54[]={0};
	unsigned int listLength_54=1;
	char valueList_55[]={1};
	unsigned int listLength_55=1;
	char valueList_56[]={0};
	unsigned int listLength_56=1;
	char valueList_57[]={0};
	unsigned int listLength_57=1;
	char valueList_58[]={0};
	unsigned int listLength_58=1;
	char valueList_59[]={0};
	unsigned int listLength_59=1;
	char valueList_60[]={0};
	unsigned int listLength_60=1;
	char valueList_61[]={0};
	unsigned int listLength_61=1;
	char valueList_62[]={0};
	unsigned int listLength_62=1;
	char valueList_63[]={0};
	unsigned int listLength_63=1;
	char valueList_64[]={0};
	unsigned int listLength_64=1;
	char valueList_65[]={0};
	unsigned int listLength_65=1;
	char valueList_66[]={0};
	unsigned int listLength_66=1;
	char valueList_67[]={0};
	unsigned int listLength_67=1;
	char valueList_68[]={0};
	unsigned int listLength_68=1;
	char valueList_69[]={0};
	unsigned int listLength_69=1;
	char valueList_70[]={0};
	unsigned int listLength_70=1;
	char valueList_71[]={0};
	unsigned int listLength_71=1;
	char valueList_72[]={0};
	unsigned int listLength_72=1;
	char valueList_73[]={0};
	unsigned int listLength_73=1;
	char valueList_74[]={0};
	unsigned int listLength_74=1;
	char valueList_75[]={0};
	unsigned int listLength_75=1;
	char valueList_76[]={0};
	unsigned int listLength_76=1;
	char valueList_77[]={0};
	unsigned int listLength_77=1;
	char valueList_78[]={0};
	unsigned int listLength_78=1;
	char valueList_79[]={0};
	unsigned int listLength_79=1;
	char valueList_80[]={0};
	unsigned int listLength_80=1;
	char valueList_81[]={0};
	unsigned int listLength_81=1;
	char valueList_82[]={0};
	unsigned int listLength_82=1;
	char valueList_83[]={0};
	unsigned int listLength_83=1;
	char valueList_84[]={0};
	unsigned int listLength_84=1;
	char valueList_85[]={0};
	unsigned int listLength_85=1;
	char valueList_86[]={0};
	unsigned int listLength_86=1;
	char valueList_87[]={0};
	unsigned int listLength_87=1;
	char valueList_88[]={0};
	unsigned int listLength_88=1;
	char valueList_89[]={0};
	unsigned int listLength_89=1;
	char valueList_90[]={0};
	unsigned int listLength_90=1;
	char valueList_91[]={0};
	unsigned int listLength_91=1;
	char valueList_92[]={0};
	unsigned int listLength_92=1;
	char valueList_93[]={0};
	unsigned int listLength_93=1;
	char valueList_94[]={0};
	unsigned int listLength_94=1;
	char valueList_95[]={0};
	unsigned int listLength_95=1;
	char valueList_96[]={0};
	unsigned int listLength_96=1;
	char valueList_97[]={0};
	unsigned int listLength_97=1;
	char valueList_98[]={0};
	unsigned int listLength_98=1;
	char valueList_99[]={0};
	unsigned int listLength_99=1;
	char valueList_100[]={0};
	unsigned int listLength_100=1;
	char valueList_101[]={0};
	unsigned int listLength_101=1;
	char valueList_102[]={0};
	unsigned int listLength_102=1;
	char valueList_103[]={0};
	unsigned int listLength_103=1;
	char valueList_104[]={0};
	unsigned int listLength_104=1;
	char valueList_105[]={0};
	unsigned int listLength_105=1;
	char valueList_106[]={0};
	unsigned int listLength_106=1;
	char valueList_107[]={0};
	unsigned int listLength_107=1;
	char valueList_108[]={0};
	unsigned int listLength_108=1;
	char valueList_109[]={0};
	unsigned int listLength_109=1;
	char valueList_110[]={0};
	unsigned int listLength_110=1;
	char valueList_111[]={0};
	unsigned int listLength_111=1;
	char valueList_112[]={0};
	unsigned int listLength_112=1;
	char valueList_113[]={0};
	unsigned int listLength_113=1;
	char valueList_114[]={0};
	unsigned int listLength_114=1;
	char valueList_115[]={0};
	unsigned int listLength_115=1;
	char valueList_116[]={0};
	unsigned int listLength_116=1;
	char valueList_117[]={0};
	unsigned int listLength_117=1;
	char valueList_118[]={0};
	unsigned int listLength_118=1;
	char valueList_119[]={0};
	unsigned int listLength_119=1;
	char valueList_120[]={0};
	unsigned int listLength_120=1;
	char valueList_121[]={0};
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
	char valueList_127[]={0};
	unsigned int listLength_127=1;
	unsigned long int valueList_128[]={0};
	unsigned int listLength_128=1;
	char valueList_129[]={0};
	unsigned int listLength_129=1;
	char valueList_130[]={0};
	unsigned int listLength_130=1;
	char valueList_131[]={0};
	unsigned int listLength_131=1;
	char valueList_132[]={0};
	unsigned int listLength_132=1;
	char valueList_133[]={0};
	unsigned int listLength_133=1;
	char valueList_134[]={0};
	unsigned int listLength_134=1;
	char valueList_135[]={0};
	unsigned int listLength_135=1;
	char valueList_136[]={0};
	unsigned int listLength_136=1;
	char valueList_137[]={0};
	unsigned int listLength_137=1;
	char valueList_138[]={0};
	unsigned int listLength_138=1;
	char valueList_139[]={0};
	unsigned int listLength_139=1;
	char valueList_140[]={0};
	unsigned int listLength_140=1;
	char valueList_141[]={0};
	unsigned int listLength_141=1;
	char valueList_142[]={0};
	unsigned int listLength_142=1;
	char valueList_143[]={0};
	unsigned int listLength_143=1;
	char valueList_144[]={0};
	unsigned int listLength_144=1;
	char valueList_145[]={0};
	unsigned int listLength_145=1;
	char valueList_146[]={0};
	unsigned int listLength_146=1;
	char valueList_147[]={0};
	unsigned int listLength_147=1;
	char valueList_148[]={0};
	unsigned int listLength_148=1;
	char valueList_149[]={0};
	unsigned int listLength_149=1;
	char valueList_150[]={0};
	unsigned int listLength_150=1;
	char valueList_151[]={0};
	unsigned int listLength_151=1;
	char valueList_152[]={0};
	unsigned int listLength_152=1;
	char valueList_153[]={0};
	unsigned int listLength_153=1;
	char valueList_154[]={0};
	unsigned int listLength_154=1;
	char valueList_155[]={0};
	unsigned int listLength_155=1;
	char valueList_156[]={0};
	unsigned int listLength_156=1;
	char valueList_157[]={0};
	unsigned int listLength_157=1;
	char valueList_158[]={0};
	unsigned int listLength_158=1;
	char valueList_159[]={0};
	unsigned int listLength_159=1;
	char valueList_160[]={0};
	unsigned int listLength_160=1;
	char valueList_161[]={0};
	unsigned int listLength_161=1;
	char valueList_162[]={0};
	unsigned int listLength_162=1;
	char valueList_163[]={0};
	unsigned int listLength_163=1;
	char valueList_164[]={0};
	unsigned int listLength_164=1;
	char valueList_165[]={0};
	unsigned int listLength_165=1;
	char valueList_166[]={0};
	unsigned int listLength_166=1;
	char valueList_167[]={0};
	unsigned int listLength_167=1;
	char valueList_168[]={0};
	unsigned int listLength_168=1;
	char valueList_169[]={0};
	unsigned int listLength_169=1;
	char valueList_170[]={0};
	unsigned int listLength_170=1;
	char valueList_171[]={0};
	unsigned int listLength_171=1;
	char valueList_172[]={0};
	unsigned int listLength_172=1;
	char valueList_173[]={0};
	unsigned int listLength_173=1;
	char valueList_174[]={0};
	unsigned int listLength_174=1;
	char valueList_175[]={0};
	unsigned int listLength_175=1;
	char valueList_176[]={0};
	unsigned int listLength_176=1;
	char valueList_177[]={0};
	unsigned int listLength_177=1;
	char valueList_178[]={0};
	unsigned int listLength_178=1;
	char valueList_179[]={0};
	unsigned int listLength_179=1;
	char valueList_180[]={0};
	unsigned int listLength_180=1;
	char valueList_181[]={0};
	unsigned int listLength_181=1;
	char valueList_182[]={0};
	unsigned int listLength_182=1;
	char valueList_183[]={0};
	unsigned int listLength_183=1;
	char valueList_184[]={0};
	unsigned int listLength_184=1;
	char valueList_185[]={0};
	unsigned int listLength_185=1;
	char valueList_186[]={0};
	unsigned int listLength_186=1;
	char valueList_187[]={0};
	unsigned int listLength_187=1;
	char valueList_188[]={0};
	unsigned int listLength_188=1;
	char valueList_189[]={0};
	unsigned int listLength_189=1;
	char valueList_190[]={0};
	unsigned int listLength_190=1;
	char valueList_191[]={0};
	unsigned int listLength_191=1;
	char valueList_192[]={0};
	unsigned int listLength_192=1;
	char valueList_193[]={0};
	unsigned int listLength_193=1;
	char valueList_194[]={0};
	unsigned int listLength_194=1;
	char valueList_195[]={0};
	unsigned int listLength_195=1;
	char valueList_196[]={0};
	unsigned int listLength_196=1;
	char valueList_197[]={0};
	unsigned int listLength_197=1;
	char valueList_198[]={0};
	unsigned int listLength_198=1;
	char valueList_199[]={0};
	unsigned int listLength_199=1;
	char valueList_200[]={0};
	unsigned int listLength_200=1;
	char valueList_201[]={0};
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
	char valueList_207[]={0};
	unsigned int listLength_207=1;
	char valueList_208[]={0};
	unsigned int listLength_208=1;
	char valueList_209[]={0};
	unsigned int listLength_209=1;
	char valueList_210[]={0};
	unsigned int listLength_210=1;
	char valueList_211[]={0};
	unsigned int listLength_211=1;
	unsigned int valueList_212[]={0};
	unsigned int listLength_212=1;
	char valueList_213[]={0};
	unsigned int listLength_213=1;
	char valueList_214[]={0};
	unsigned int listLength_214=1;
	char valueList_215[]={0};
	unsigned int listLength_215=1;
	char valueList_216[]={0};
	unsigned int listLength_216=1;
	char valueList_217[]={0};
	unsigned int listLength_217=1;
	char valueList_218[]={0};
	unsigned int listLength_218=1;
	char valueList_219[]={0};
	unsigned int listLength_219=1;
	char valueList_220[]={0};
	unsigned int listLength_220=1;
	char valueList_221[]={0};
	unsigned int listLength_221=1;
	char valueList_222[]={0};
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
	char valueList_229[]={0};
	unsigned int listLength_229=1;
	char valueList_230[]={0};
	unsigned int listLength_230=1;
	char valueList_231[]={0};
	unsigned int listLength_231=1;
	char valueList_232[]={0};
	unsigned int listLength_232=1;
	char valueList_233[]={0};
	unsigned int listLength_233=1;
	char valueList_234[]={0};
	unsigned int listLength_234=1;
	char valueList_235[]={0};
	unsigned int listLength_235=1;
	char valueList_236[]={0};
	unsigned int listLength_236=1;
	char valueList_237[]={0};
	unsigned int listLength_237=1;
	char valueList_238[]={0};
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
	char valueList_245[]={0};
	unsigned int listLength_245=1;
	char valueList_246[]={0};
	unsigned int listLength_246=1;
	char valueList_247[]={0};
	unsigned int listLength_247=1;
	char valueList_248[]={0};
	unsigned int listLength_248=1;
	char valueList_249[]={0};
	unsigned int listLength_249=1;
	char valueList_250[]={0};
	unsigned int listLength_250=1;
	char valueList_251[]={0};
	unsigned int listLength_251=1;
	char valueList_252[]={0};
	unsigned int listLength_252=1;
	char valueList_253[]={ 0};
	unsigned int listLength_253=1;
	char valueList_254[]={0};
	unsigned int listLength_254=1;
	char valueList_255[]={0};
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_looks_ascii_4,false,0\n");
	aunit_printf("#CASE_START_test_looks_ascii_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ulen=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ubuf=(file_unichar_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			nbytes=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			text_chars[33]=(char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			text_chars[45]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			text_chars[21]=(char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			text_chars[189]=(char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			text_chars[109]=(char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			text_chars[177]=(char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			text_chars[57]=(char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			text_chars[69]=(char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			text_chars[141]=(char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			text_chars[153]=(char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			text_chars[165]=(char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			text_chars[218]=(char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			text_chars[206]=(char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			text_chars[140]=(char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			text_chars[22]=(char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			text_chars[34]=(char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			text_chars[10]=(char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			text_chars[178]=(char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			text_chars[46]=(char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			text_chars[58]=(char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			text_chars[251]=(char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			text_chars[130]=(char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			text_chars[142]=(char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			text_chars[154]=(char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			text_chars[166]=(char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			text_chars[219]=(char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			text_chars[207]=(char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			text_chars[2]=(char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			text_chars[250]=(char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			text_chars[90]=(char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			text_chars[11]=(char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			text_chars[23]=(char)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			text_chars[179]=(char)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			text_chars[59]=(char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			text_chars[35]=(char)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			text_chars[252]=(char)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			text_chars[47]=(char)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			text_chars[240]=(char)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			text_chars[1]=(char)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			text_chars[131]=(char)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			text_chars[143]=(char)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			text_chars[155]=(char)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			text_chars[208]=(char)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			text_chars[167]=(char)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			text_chars[91]=(char)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		if(aUnItCoUnTeR<listLength_49 || useLast_49){
			text_chars[12]=(char)valueList_49[aUnItCoUnTeR<listLength_49?aUnItCoUnTeR:listLength_49-1];

		}
		if(aUnItCoUnTeR<listLength_50 || useLast_50){
			text_chars[48]=(char)valueList_50[aUnItCoUnTeR<listLength_50?aUnItCoUnTeR:listLength_50-1];

		}
		if(aUnItCoUnTeR<listLength_51 || useLast_51){
			text_chars[253]=(char)valueList_51[aUnItCoUnTeR<listLength_51?aUnItCoUnTeR:listLength_51-1];

		}
		if(aUnItCoUnTeR<listLength_52 || useLast_52){
			text_chars[24]=(char)valueList_52[aUnItCoUnTeR<listLength_52?aUnItCoUnTeR:listLength_52-1];

		}
		if(aUnItCoUnTeR<listLength_53 || useLast_53){
			text_chars[241]=(char)valueList_53[aUnItCoUnTeR<listLength_53?aUnItCoUnTeR:listLength_53-1];

		}
		if(aUnItCoUnTeR<listLength_54 || useLast_54){
			text_chars[36]=(char)valueList_54[aUnItCoUnTeR<listLength_54?aUnItCoUnTeR:listLength_54-1];

		}
		if(aUnItCoUnTeR<listLength_55 || useLast_55){
			text_chars[0]=(char)valueList_55[aUnItCoUnTeR<listLength_55?aUnItCoUnTeR:listLength_55-1];

		}
		if(aUnItCoUnTeR<listLength_56 || useLast_56){
			text_chars[120]=(char)valueList_56[aUnItCoUnTeR<listLength_56?aUnItCoUnTeR:listLength_56-1];

		}
		if(aUnItCoUnTeR<listLength_57 || useLast_57){
			text_chars[132]=(char)valueList_57[aUnItCoUnTeR<listLength_57?aUnItCoUnTeR:listLength_57-1];

		}
		if(aUnItCoUnTeR<listLength_58 || useLast_58){
			text_chars[209]=(char)valueList_58[aUnItCoUnTeR<listLength_58?aUnItCoUnTeR:listLength_58-1];

		}
		if(aUnItCoUnTeR<listLength_59 || useLast_59){
			text_chars[144]=(char)valueList_59[aUnItCoUnTeR<listLength_59?aUnItCoUnTeR:listLength_59-1];

		}
		if(aUnItCoUnTeR<listLength_60 || useLast_60){
			text_chars[156]=(char)valueList_60[aUnItCoUnTeR<listLength_60?aUnItCoUnTeR:listLength_60-1];

		}
		if(aUnItCoUnTeR<listLength_61 || useLast_61){
			text_chars[168]=(char)valueList_61[aUnItCoUnTeR<listLength_61?aUnItCoUnTeR:listLength_61-1];

		}
		if(aUnItCoUnTeR<listLength_62 || useLast_62){
			text_chars[80]=(char)valueList_62[aUnItCoUnTeR<listLength_62?aUnItCoUnTeR:listLength_62-1];

		}
		if(aUnItCoUnTeR<listLength_63 || useLast_63){
			text_chars[92]=(char)valueList_63[aUnItCoUnTeR<listLength_63?aUnItCoUnTeR:listLength_63-1];

		}
		if(aUnItCoUnTeR<listLength_64 || useLast_64){
			text_chars[77]=(char)valueList_64[aUnItCoUnTeR<listLength_64?aUnItCoUnTeR:listLength_64-1];

		}
		if(aUnItCoUnTeR<listLength_65 || useLast_65){
			text_chars[89]=(char)valueList_65[aUnItCoUnTeR<listLength_65?aUnItCoUnTeR:listLength_65-1];

		}
		if(aUnItCoUnTeR<listLength_66 || useLast_66){
			text_chars[53]=(char)valueList_66[aUnItCoUnTeR<listLength_66?aUnItCoUnTeR:listLength_66-1];

		}
		if(aUnItCoUnTeR<listLength_67 || useLast_67){
			text_chars[65]=(char)valueList_67[aUnItCoUnTeR<listLength_67?aUnItCoUnTeR:listLength_67-1];

		}
		if(aUnItCoUnTeR<listLength_68 || useLast_68){
			text_chars[254]=(char)valueList_68[aUnItCoUnTeR<listLength_68?aUnItCoUnTeR:listLength_68-1];

		}
		if(aUnItCoUnTeR<listLength_69 || useLast_69){
			text_chars[242]=(char)valueList_69[aUnItCoUnTeR<listLength_69?aUnItCoUnTeR:listLength_69-1];

		}
		if(aUnItCoUnTeR<listLength_70 || useLast_70){
			text_chars[230]=(char)valueList_70[aUnItCoUnTeR<listLength_70?aUnItCoUnTeR:listLength_70-1];

		}
		if(aUnItCoUnTeR<listLength_71 || useLast_71){
			text_chars[121]=(char)valueList_71[aUnItCoUnTeR<listLength_71?aUnItCoUnTeR:listLength_71-1];

		}
		if(aUnItCoUnTeR<listLength_72 || useLast_72){
			text_chars[133]=(char)valueList_72[aUnItCoUnTeR<listLength_72?aUnItCoUnTeR:listLength_72-1];

		}
		if(aUnItCoUnTeR<listLength_73 || useLast_73){
			text_chars[145]=(char)valueList_73[aUnItCoUnTeR<listLength_73?aUnItCoUnTeR:listLength_73-1];

		}
		if(aUnItCoUnTeR<listLength_74 || useLast_74){
			text_chars[157]=(char)valueList_74[aUnItCoUnTeR<listLength_74?aUnItCoUnTeR:listLength_74-1];

		}
		if(aUnItCoUnTeR<listLength_75 || useLast_75){
			text_chars[169]=(char)valueList_75[aUnItCoUnTeR<listLength_75?aUnItCoUnTeR:listLength_75-1];

		}
		if(aUnItCoUnTeR<listLength_76 || useLast_76){
			text_chars[41]=(char)valueList_76[aUnItCoUnTeR<listLength_76?aUnItCoUnTeR:listLength_76-1];

		}
		if(aUnItCoUnTeR<listLength_77 || useLast_77){
			text_chars[66]=(char)valueList_77[aUnItCoUnTeR<listLength_77?aUnItCoUnTeR:listLength_77-1];

		}
		if(aUnItCoUnTeR<listLength_78 || useLast_78){
			text_chars[78]=(char)valueList_78[aUnItCoUnTeR<listLength_78?aUnItCoUnTeR:listLength_78-1];

		}
		if(aUnItCoUnTeR<listLength_79 || useLast_79){
			text_chars[42]=(char)valueList_79[aUnItCoUnTeR<listLength_79?aUnItCoUnTeR:listLength_79-1];

		}
		if(aUnItCoUnTeR<listLength_80 || useLast_80){
			text_chars[54]=(char)valueList_80[aUnItCoUnTeR<listLength_80?aUnItCoUnTeR:listLength_80-1];

		}
		if(aUnItCoUnTeR<listLength_81 || useLast_81){
			text_chars[255]=(char)valueList_81[aUnItCoUnTeR<listLength_81?aUnItCoUnTeR:listLength_81-1];

		}
		if(aUnItCoUnTeR<listLength_82 || useLast_82){
			text_chars[243]=(char)valueList_82[aUnItCoUnTeR<listLength_82?aUnItCoUnTeR:listLength_82-1];

		}
		if(aUnItCoUnTeR<listLength_83 || useLast_83){
			text_chars[231]=(char)valueList_83[aUnItCoUnTeR<listLength_83?aUnItCoUnTeR:listLength_83-1];

		}
		if(aUnItCoUnTeR<listLength_84 || useLast_84){
			text_chars[110]=(char)valueList_84[aUnItCoUnTeR<listLength_84?aUnItCoUnTeR:listLength_84-1];

		}
		if(aUnItCoUnTeR<listLength_85 || useLast_85){
			text_chars[122]=(char)valueList_85[aUnItCoUnTeR<listLength_85?aUnItCoUnTeR:listLength_85-1];

		}
		if(aUnItCoUnTeR<listLength_86 || useLast_86){
			text_chars[134]=(char)valueList_86[aUnItCoUnTeR<listLength_86?aUnItCoUnTeR:listLength_86-1];

		}
		if(aUnItCoUnTeR<listLength_87 || useLast_87){
			text_chars[146]=(char)valueList_87[aUnItCoUnTeR<listLength_87?aUnItCoUnTeR:listLength_87-1];

		}
		if(aUnItCoUnTeR<listLength_88 || useLast_88){
			text_chars[158]=(char)valueList_88[aUnItCoUnTeR<listLength_88?aUnItCoUnTeR:listLength_88-1];

		}
		if(aUnItCoUnTeR<listLength_89 || useLast_89){
			text_chars[30]=(char)valueList_89[aUnItCoUnTeR<listLength_89?aUnItCoUnTeR:listLength_89-1];

		}
		if(aUnItCoUnTeR<listLength_90 || useLast_90){
			text_chars[55]=(char)valueList_90[aUnItCoUnTeR<listLength_90?aUnItCoUnTeR:listLength_90-1];

		}
		if(aUnItCoUnTeR<listLength_91 || useLast_91){
			text_chars[67]=(char)valueList_91[aUnItCoUnTeR<listLength_91?aUnItCoUnTeR:listLength_91-1];

		}
		if(aUnItCoUnTeR<listLength_92 || useLast_92){
			text_chars[31]=(char)valueList_92[aUnItCoUnTeR<listLength_92?aUnItCoUnTeR:listLength_92-1];

		}
		if(aUnItCoUnTeR<listLength_93 || useLast_93){
			text_chars[43]=(char)valueList_93[aUnItCoUnTeR<listLength_93?aUnItCoUnTeR:listLength_93-1];

		}
		if(aUnItCoUnTeR<listLength_94 || useLast_94){
			text_chars[244]=(char)valueList_94[aUnItCoUnTeR<listLength_94?aUnItCoUnTeR:listLength_94-1];

		}
		if(aUnItCoUnTeR<listLength_95 || useLast_95){
			text_chars[232]=(char)valueList_95[aUnItCoUnTeR<listLength_95?aUnItCoUnTeR:listLength_95-1];

		}
		if(aUnItCoUnTeR<listLength_96 || useLast_96){
			text_chars[220]=(char)valueList_96[aUnItCoUnTeR<listLength_96?aUnItCoUnTeR:listLength_96-1];

		}
		if(aUnItCoUnTeR<listLength_97 || useLast_97){
			text_chars[79]=(char)valueList_97[aUnItCoUnTeR<listLength_97?aUnItCoUnTeR:listLength_97-1];

		}
		if(aUnItCoUnTeR<listLength_98 || useLast_98){
			text_chars[111]=(char)valueList_98[aUnItCoUnTeR<listLength_98?aUnItCoUnTeR:listLength_98-1];

		}
		if(aUnItCoUnTeR<listLength_99 || useLast_99){
			text_chars[123]=(char)valueList_99[aUnItCoUnTeR<listLength_99?aUnItCoUnTeR:listLength_99-1];

		}
		if(aUnItCoUnTeR<listLength_100 || useLast_100){
			text_chars[135]=(char)valueList_100[aUnItCoUnTeR<listLength_100?aUnItCoUnTeR:listLength_100-1];

		}
		if(aUnItCoUnTeR<listLength_101 || useLast_101){
			text_chars[147]=(char)valueList_101[aUnItCoUnTeR<listLength_101?aUnItCoUnTeR:listLength_101-1];

		}
		if(aUnItCoUnTeR<listLength_102 || useLast_102){
			text_chars[159]=(char)valueList_102[aUnItCoUnTeR<listLength_102?aUnItCoUnTeR:listLength_102-1];

		}
		if(aUnItCoUnTeR<listLength_103 || useLast_103){
			text_chars[190]=(char)valueList_103[aUnItCoUnTeR<listLength_103?aUnItCoUnTeR:listLength_103-1];

		}
		if(aUnItCoUnTeR<listLength_104 || useLast_104){
			text_chars[44]=(char)valueList_104[aUnItCoUnTeR<listLength_104?aUnItCoUnTeR:listLength_104-1];

		}
		if(aUnItCoUnTeR<listLength_105 || useLast_105){
			text_chars[56]=(char)valueList_105[aUnItCoUnTeR<listLength_105?aUnItCoUnTeR:listLength_105-1];

		}
		if(aUnItCoUnTeR<listLength_106 || useLast_106){
			text_chars[20]=(char)valueList_106[aUnItCoUnTeR<listLength_106?aUnItCoUnTeR:listLength_106-1];

		}
		if(aUnItCoUnTeR<listLength_107 || useLast_107){
			text_chars[245]=(char)valueList_107[aUnItCoUnTeR<listLength_107?aUnItCoUnTeR:listLength_107-1];

		}
		if(aUnItCoUnTeR<listLength_108 || useLast_108){
			text_chars[32]=(char)valueList_108[aUnItCoUnTeR<listLength_108?aUnItCoUnTeR:listLength_108-1];

		}
		if(aUnItCoUnTeR<listLength_109 || useLast_109){
			text_chars[233]=(char)valueList_109[aUnItCoUnTeR<listLength_109?aUnItCoUnTeR:listLength_109-1];

		}
		if(aUnItCoUnTeR<listLength_110 || useLast_110){
			text_chars[221]=(char)valueList_110[aUnItCoUnTeR<listLength_110?aUnItCoUnTeR:listLength_110-1];

		}
		if(aUnItCoUnTeR<listLength_111 || useLast_111){
			text_chars[68]=(char)valueList_111[aUnItCoUnTeR<listLength_111?aUnItCoUnTeR:listLength_111-1];

		}
		if(aUnItCoUnTeR<listLength_112 || useLast_112){
			text_chars[100]=(char)valueList_112[aUnItCoUnTeR<listLength_112?aUnItCoUnTeR:listLength_112-1];

		}
		if(aUnItCoUnTeR<listLength_113 || useLast_113){
			text_chars[112]=(char)valueList_113[aUnItCoUnTeR<listLength_113?aUnItCoUnTeR:listLength_113-1];

		}
		if(aUnItCoUnTeR<listLength_114 || useLast_114){
			text_chars[124]=(char)valueList_114[aUnItCoUnTeR<listLength_114?aUnItCoUnTeR:listLength_114-1];

		}
		if(aUnItCoUnTeR<listLength_115 || useLast_115){
			text_chars[136]=(char)valueList_115[aUnItCoUnTeR<listLength_115?aUnItCoUnTeR:listLength_115-1];

		}
		if(aUnItCoUnTeR<listLength_116 || useLast_116){
			text_chars[148]=(char)valueList_116[aUnItCoUnTeR<listLength_116?aUnItCoUnTeR:listLength_116-1];

		}
		if(aUnItCoUnTeR<listLength_117 || useLast_117){
			text_chars[191]=(char)valueList_117[aUnItCoUnTeR<listLength_117?aUnItCoUnTeR:listLength_117-1];

		}
		if(aUnItCoUnTeR<listLength_118 || useLast_118){
			text_chars[149]=(char)valueList_118[aUnItCoUnTeR<listLength_118?aUnItCoUnTeR:listLength_118-1];

		}
		if(aUnItCoUnTeR<listLength_119 || useLast_119){
			text_chars[246]=(char)valueList_119[aUnItCoUnTeR<listLength_119?aUnItCoUnTeR:listLength_119-1];

		}
		if(aUnItCoUnTeR<listLength_120 || useLast_120){
			text_chars[97]=(char)valueList_120[aUnItCoUnTeR<listLength_120?aUnItCoUnTeR:listLength_120-1];

		}
		if(aUnItCoUnTeR<listLength_121 || useLast_121){
			text_chars[234]=(char)valueList_121[aUnItCoUnTeR<listLength_121?aUnItCoUnTeR:listLength_121-1];

		}
		if(aUnItCoUnTeR<listLength_122 || useLast_122){
			text_chars[222]=(char)valueList_122[aUnItCoUnTeR<listLength_122?aUnItCoUnTeR:listLength_122-1];

		}
		if(aUnItCoUnTeR<listLength_123 || useLast_123){
			text_chars[210]=(char)valueList_123[aUnItCoUnTeR<listLength_123?aUnItCoUnTeR:listLength_123-1];

		}
		if(aUnItCoUnTeR<listLength_124 || useLast_124){
			text_chars[17]=(char)valueList_124[aUnItCoUnTeR<listLength_124?aUnItCoUnTeR:listLength_124-1];

		}
		if(aUnItCoUnTeR<listLength_125 || useLast_125){
			text_chars[29]=(char)valueList_125[aUnItCoUnTeR<listLength_125?aUnItCoUnTeR:listLength_125-1];

		}
		if(aUnItCoUnTeR<listLength_126 || useLast_126){
			text_chars[101]=(char)valueList_126[aUnItCoUnTeR<listLength_126?aUnItCoUnTeR:listLength_126-1];

		}
		if(aUnItCoUnTeR<listLength_127 || useLast_127){
			text_chars[113]=(char)valueList_127[aUnItCoUnTeR<listLength_127?aUnItCoUnTeR:listLength_127-1];

		}
		if(aUnItCoUnTeR<listLength_128 || useLast_128){
			ubuf_PTRTO[0]=(unsigned long int)valueList_128[aUnItCoUnTeR<listLength_128?aUnItCoUnTeR:listLength_128-1];

		}
		if(aUnItCoUnTeR<listLength_129 || useLast_129){
			text_chars[125]=(char)valueList_129[aUnItCoUnTeR<listLength_129?aUnItCoUnTeR:listLength_129-1];

		}
		if(aUnItCoUnTeR<listLength_130 || useLast_130){
			text_chars[137]=(char)valueList_130[aUnItCoUnTeR<listLength_130?aUnItCoUnTeR:listLength_130-1];

		}
		if(aUnItCoUnTeR<listLength_131 || useLast_131){
			text_chars[192]=(char)valueList_131[aUnItCoUnTeR<listLength_131?aUnItCoUnTeR:listLength_131-1];

		}
		if(aUnItCoUnTeR<listLength_132 || useLast_132){
			text_chars[73]=(char)valueList_132[aUnItCoUnTeR<listLength_132?aUnItCoUnTeR:listLength_132-1];

		}
		if(aUnItCoUnTeR<listLength_133 || useLast_133){
			text_chars[180]=(char)valueList_133[aUnItCoUnTeR<listLength_133?aUnItCoUnTeR:listLength_133-1];

		}
		if(aUnItCoUnTeR<listLength_134 || useLast_134){
			text_chars[85]=(char)valueList_134[aUnItCoUnTeR<listLength_134?aUnItCoUnTeR:listLength_134-1];

		}
		if(aUnItCoUnTeR<listLength_135 || useLast_135){
			text_chars[61]=(char)valueList_135[aUnItCoUnTeR<listLength_135?aUnItCoUnTeR:listLength_135-1];

		}
		if(aUnItCoUnTeR<listLength_136 || useLast_136){
			text_chars[138]=(char)valueList_136[aUnItCoUnTeR<listLength_136?aUnItCoUnTeR:listLength_136-1];

		}
		if(aUnItCoUnTeR<listLength_137 || useLast_137){
			text_chars[247]=(char)valueList_137[aUnItCoUnTeR<listLength_137?aUnItCoUnTeR:listLength_137-1];

		}
		if(aUnItCoUnTeR<listLength_138 || useLast_138){
			text_chars[235]=(char)valueList_138[aUnItCoUnTeR<listLength_138?aUnItCoUnTeR:listLength_138-1];

		}
		if(aUnItCoUnTeR<listLength_139 || useLast_139){
			text_chars[86]=(char)valueList_139[aUnItCoUnTeR<listLength_139?aUnItCoUnTeR:listLength_139-1];

		}
		if(aUnItCoUnTeR<listLength_140 || useLast_140){
			text_chars[223]=(char)valueList_140[aUnItCoUnTeR<listLength_140?aUnItCoUnTeR:listLength_140-1];

		}
		if(aUnItCoUnTeR<listLength_141 || useLast_141){
			text_chars[98]=(char)valueList_141[aUnItCoUnTeR<listLength_141?aUnItCoUnTeR:listLength_141-1];

		}
		if(aUnItCoUnTeR<listLength_142 || useLast_142){
			text_chars[211]=(char)valueList_142[aUnItCoUnTeR<listLength_142?aUnItCoUnTeR:listLength_142-1];

		}
		if(aUnItCoUnTeR<listLength_143 || useLast_143){
			text_chars[18]=(char)valueList_143[aUnItCoUnTeR<listLength_143?aUnItCoUnTeR:listLength_143-1];

		}
		if(aUnItCoUnTeR<listLength_144 || useLast_144){
			text_chars[102]=(char)valueList_144[aUnItCoUnTeR<listLength_144?aUnItCoUnTeR:listLength_144-1];

		}
		if(aUnItCoUnTeR<listLength_145 || useLast_145){
			text_chars[114]=(char)valueList_145[aUnItCoUnTeR<listLength_145?aUnItCoUnTeR:listLength_145-1];

		}
		if(aUnItCoUnTeR<listLength_146 || useLast_146){
			text_chars[126]=(char)valueList_146[aUnItCoUnTeR<listLength_146?aUnItCoUnTeR:listLength_146-1];

		}
		if(aUnItCoUnTeR<listLength_147 || useLast_147){
			text_chars[193]=(char)valueList_147[aUnItCoUnTeR<listLength_147?aUnItCoUnTeR:listLength_147-1];

		}
		if(aUnItCoUnTeR<listLength_148 || useLast_148){
			text_chars[181]=(char)valueList_148[aUnItCoUnTeR<listLength_148?aUnItCoUnTeR:listLength_148-1];

		}
		if(aUnItCoUnTeR<listLength_149 || useLast_149){
			text_chars[62]=(char)valueList_149[aUnItCoUnTeR<listLength_149?aUnItCoUnTeR:listLength_149-1];

		}
		if(aUnItCoUnTeR<listLength_150 || useLast_150){
			text_chars[74]=(char)valueList_150[aUnItCoUnTeR<listLength_150?aUnItCoUnTeR:listLength_150-1];

		}
		if(aUnItCoUnTeR<listLength_151 || useLast_151){
			text_chars[50]=(char)valueList_151[aUnItCoUnTeR<listLength_151?aUnItCoUnTeR:listLength_151-1];

		}
		if(aUnItCoUnTeR<listLength_152 || useLast_152){
			text_chars[9]=(char)valueList_152[aUnItCoUnTeR<listLength_152?aUnItCoUnTeR:listLength_152-1];

		}
		if(aUnItCoUnTeR<listLength_153 || useLast_153){
			text_chars[99]=(char)valueList_153[aUnItCoUnTeR<listLength_153?aUnItCoUnTeR:listLength_153-1];

		}
		if(aUnItCoUnTeR<listLength_154 || useLast_154){
			text_chars[127]=(char)valueList_154[aUnItCoUnTeR<listLength_154?aUnItCoUnTeR:listLength_154-1];

		}
		if(aUnItCoUnTeR<listLength_155 || useLast_155){
			text_chars[236]=(char)valueList_155[aUnItCoUnTeR<listLength_155?aUnItCoUnTeR:listLength_155-1];

		}
		if(aUnItCoUnTeR<listLength_156 || useLast_156){
			text_chars[139]=(char)valueList_156[aUnItCoUnTeR<listLength_156?aUnItCoUnTeR:listLength_156-1];

		}
		if(aUnItCoUnTeR<listLength_157 || useLast_157){
			text_chars[224]=(char)valueList_157[aUnItCoUnTeR<listLength_157?aUnItCoUnTeR:listLength_157-1];

		}
		if(aUnItCoUnTeR<listLength_158 || useLast_158){
			text_chars[75]=(char)valueList_158[aUnItCoUnTeR<listLength_158?aUnItCoUnTeR:listLength_158-1];

		}
		if(aUnItCoUnTeR<listLength_159 || useLast_159){
			text_chars[212]=(char)valueList_159[aUnItCoUnTeR<listLength_159?aUnItCoUnTeR:listLength_159-1];

		}
		if(aUnItCoUnTeR<listLength_160 || useLast_160){
			text_chars[87]=(char)valueList_160[aUnItCoUnTeR<listLength_160?aUnItCoUnTeR:listLength_160-1];

		}
		if(aUnItCoUnTeR<listLength_161 || useLast_161){
			text_chars[200]=(char)valueList_161[aUnItCoUnTeR<listLength_161?aUnItCoUnTeR:listLength_161-1];

		}
		if(aUnItCoUnTeR<listLength_162 || useLast_162){
			text_chars[19]=(char)valueList_162[aUnItCoUnTeR<listLength_162?aUnItCoUnTeR:listLength_162-1];

		}
		if(aUnItCoUnTeR<listLength_163 || useLast_163){
			text_chars[103]=(char)valueList_163[aUnItCoUnTeR<listLength_163?aUnItCoUnTeR:listLength_163-1];

		}
		if(aUnItCoUnTeR<listLength_164 || useLast_164){
			text_chars[115]=(char)valueList_164[aUnItCoUnTeR<listLength_164?aUnItCoUnTeR:listLength_164-1];

		}
		if(aUnItCoUnTeR<listLength_165 || useLast_165){
			text_chars[248]=(char)valueList_165[aUnItCoUnTeR<listLength_165?aUnItCoUnTeR:listLength_165-1];

		}
		if(aUnItCoUnTeR<listLength_166 || useLast_166){
			text_chars[194]=(char)valueList_166[aUnItCoUnTeR<listLength_166?aUnItCoUnTeR:listLength_166-1];

		}
		if(aUnItCoUnTeR<listLength_167 || useLast_167){
			text_chars[182]=(char)valueList_167[aUnItCoUnTeR<listLength_167?aUnItCoUnTeR:listLength_167-1];

		}
		if(aUnItCoUnTeR<listLength_168 || useLast_168){
			text_chars[170]=(char)valueList_168[aUnItCoUnTeR<listLength_168?aUnItCoUnTeR:listLength_168-1];

		}
		if(aUnItCoUnTeR<listLength_169 || useLast_169){
			text_chars[51]=(char)valueList_169[aUnItCoUnTeR<listLength_169?aUnItCoUnTeR:listLength_169-1];

		}
		if(aUnItCoUnTeR<listLength_170 || useLast_170){
			text_chars[63]=(char)valueList_170[aUnItCoUnTeR<listLength_170?aUnItCoUnTeR:listLength_170-1];

		}
		if(aUnItCoUnTeR<listLength_171 || useLast_171){
			text_chars[88]=(char)valueList_171[aUnItCoUnTeR<listLength_171?aUnItCoUnTeR:listLength_171-1];

		}
		if(aUnItCoUnTeR<listLength_172 || useLast_172){
			text_chars[116]=(char)valueList_172[aUnItCoUnTeR<listLength_172?aUnItCoUnTeR:listLength_172-1];

		}
		if(aUnItCoUnTeR<listLength_173 || useLast_173){
			text_chars[225]=(char)valueList_173[aUnItCoUnTeR<listLength_173?aUnItCoUnTeR:listLength_173-1];

		}
		if(aUnItCoUnTeR<listLength_174 || useLast_174){
			text_chars[8]=(char)valueList_174[aUnItCoUnTeR<listLength_174?aUnItCoUnTeR:listLength_174-1];

		}
		if(aUnItCoUnTeR<listLength_175 || useLast_175){
			text_chars[128]=(char)valueList_175[aUnItCoUnTeR<listLength_175?aUnItCoUnTeR:listLength_175-1];

		}
		if(aUnItCoUnTeR<listLength_176 || useLast_176){
			text_chars[213]=(char)valueList_176[aUnItCoUnTeR<listLength_176?aUnItCoUnTeR:listLength_176-1];

		}
		if(aUnItCoUnTeR<listLength_177 || useLast_177){
			text_chars[64]=(char)valueList_177[aUnItCoUnTeR<listLength_177?aUnItCoUnTeR:listLength_177-1];

		}
		if(aUnItCoUnTeR<listLength_178 || useLast_178){
			text_chars[201]=(char)valueList_178[aUnItCoUnTeR<listLength_178?aUnItCoUnTeR:listLength_178-1];

		}
		if(aUnItCoUnTeR<listLength_179 || useLast_179){
			text_chars[76]=(char)valueList_179[aUnItCoUnTeR<listLength_179?aUnItCoUnTeR:listLength_179-1];

		}
		if(aUnItCoUnTeR<listLength_180 || useLast_180){
			text_chars[196]=(char)valueList_180[aUnItCoUnTeR<listLength_180?aUnItCoUnTeR:listLength_180-1];

		}
		if(aUnItCoUnTeR<listLength_181 || useLast_181){
			text_chars[249]=(char)valueList_181[aUnItCoUnTeR<listLength_181?aUnItCoUnTeR:listLength_181-1];

		}
		if(aUnItCoUnTeR<listLength_182 || useLast_182){
			text_chars[104]=(char)valueList_182[aUnItCoUnTeR<listLength_182?aUnItCoUnTeR:listLength_182-1];

		}
		if(aUnItCoUnTeR<listLength_183 || useLast_183){
			text_chars[237]=(char)valueList_183[aUnItCoUnTeR<listLength_183?aUnItCoUnTeR:listLength_183-1];

		}
		if(aUnItCoUnTeR<listLength_184 || useLast_184){
			text_chars[195]=(char)valueList_184[aUnItCoUnTeR<listLength_184?aUnItCoUnTeR:listLength_184-1];

		}
		if(aUnItCoUnTeR<listLength_185 || useLast_185){
			text_chars[183]=(char)valueList_185[aUnItCoUnTeR<listLength_185?aUnItCoUnTeR:listLength_185-1];

		}
		if(aUnItCoUnTeR<listLength_186 || useLast_186){
			text_chars[171]=(char)valueList_186[aUnItCoUnTeR<listLength_186?aUnItCoUnTeR:listLength_186-1];

		}
		if(aUnItCoUnTeR<listLength_187 || useLast_187){
			text_chars[40]=(char)valueList_187[aUnItCoUnTeR<listLength_187?aUnItCoUnTeR:listLength_187-1];

		}
		if(aUnItCoUnTeR<listLength_188 || useLast_188){
			text_chars[52]=(char)valueList_188[aUnItCoUnTeR<listLength_188?aUnItCoUnTeR:listLength_188-1];

		}
		if(aUnItCoUnTeR<listLength_189 || useLast_189){
			text_chars[105]=(char)valueList_189[aUnItCoUnTeR<listLength_189?aUnItCoUnTeR:listLength_189-1];

		}
		if(aUnItCoUnTeR<listLength_190 || useLast_190){
			text_chars[214]=(char)valueList_190[aUnItCoUnTeR<listLength_190?aUnItCoUnTeR:listLength_190-1];

		}
		if(aUnItCoUnTeR<listLength_191 || useLast_191){
			text_chars[117]=(char)valueList_191[aUnItCoUnTeR<listLength_191?aUnItCoUnTeR:listLength_191-1];

		}
		if(aUnItCoUnTeR<listLength_192 || useLast_192){
			text_chars[202]=(char)valueList_192[aUnItCoUnTeR<listLength_192?aUnItCoUnTeR:listLength_192-1];

		}
		if(aUnItCoUnTeR<listLength_193 || useLast_193){
			text_chars[7]=(char)valueList_193[aUnItCoUnTeR<listLength_193?aUnItCoUnTeR:listLength_193-1];

		}
		if(aUnItCoUnTeR<listLength_194 || useLast_194){
			text_chars[129]=(char)valueList_194[aUnItCoUnTeR<listLength_194?aUnItCoUnTeR:listLength_194-1];

		}
		if(aUnItCoUnTeR<listLength_195 || useLast_195){
			text_chars[37]=(char)valueList_195[aUnItCoUnTeR<listLength_195?aUnItCoUnTeR:listLength_195-1];

		}
		if(aUnItCoUnTeR<listLength_196 || useLast_196){
			text_chars[49]=(char)valueList_196[aUnItCoUnTeR<listLength_196?aUnItCoUnTeR:listLength_196-1];

		}
		if(aUnItCoUnTeR<listLength_197 || useLast_197){
			text_chars[13]=(char)valueList_197[aUnItCoUnTeR<listLength_197?aUnItCoUnTeR:listLength_197-1];

		}
		if(aUnItCoUnTeR<listLength_198 || useLast_198){
			text_chars[197]=(char)valueList_198[aUnItCoUnTeR<listLength_198?aUnItCoUnTeR:listLength_198-1];

		}
		if(aUnItCoUnTeR<listLength_199 || useLast_199){
			text_chars[25]=(char)valueList_199[aUnItCoUnTeR<listLength_199?aUnItCoUnTeR:listLength_199-1];

		}
		if(aUnItCoUnTeR<listLength_200 || useLast_200){
			text_chars[185]=(char)valueList_200[aUnItCoUnTeR<listLength_200?aUnItCoUnTeR:listLength_200-1];

		}
		if(aUnItCoUnTeR<listLength_201 || useLast_201){
			text_chars[238]=(char)valueList_201[aUnItCoUnTeR<listLength_201?aUnItCoUnTeR:listLength_201-1];

		}
		if(aUnItCoUnTeR<listLength_202 || useLast_202){
			text_chars[226]=(char)valueList_202[aUnItCoUnTeR<listLength_202?aUnItCoUnTeR:listLength_202-1];

		}
		if(aUnItCoUnTeR<listLength_203 || useLast_203){
			text_chars[160]=(char)valueList_203[aUnItCoUnTeR<listLength_203?aUnItCoUnTeR:listLength_203-1];

		}
		if(aUnItCoUnTeR<listLength_204 || useLast_204){
			text_chars[184]=(char)valueList_204[aUnItCoUnTeR<listLength_204?aUnItCoUnTeR:listLength_204-1];

		}
		if(aUnItCoUnTeR<listLength_205 || useLast_205){
			text_chars[81]=(char)valueList_205[aUnItCoUnTeR<listLength_205?aUnItCoUnTeR:listLength_205-1];

		}
		if(aUnItCoUnTeR<listLength_206 || useLast_206){
			text_chars[172]=(char)valueList_206[aUnItCoUnTeR<listLength_206?aUnItCoUnTeR:listLength_206-1];

		}
		if(aUnItCoUnTeR<listLength_207 || useLast_207){
			text_chars[93]=(char)valueList_207[aUnItCoUnTeR<listLength_207?aUnItCoUnTeR:listLength_207-1];

		}
		if(aUnItCoUnTeR<listLength_208 || useLast_208){
			text_chars[203]=(char)valueList_208[aUnItCoUnTeR<listLength_208?aUnItCoUnTeR:listLength_208-1];

		}
		if(aUnItCoUnTeR<listLength_209 || useLast_209){
			text_chars[106]=(char)valueList_209[aUnItCoUnTeR<listLength_209?aUnItCoUnTeR:listLength_209-1];

		}
		if(aUnItCoUnTeR<listLength_210 || useLast_210){
			text_chars[118]=(char)valueList_210[aUnItCoUnTeR<listLength_210?aUnItCoUnTeR:listLength_210-1];

		}
		if(aUnItCoUnTeR<listLength_211 || useLast_211){
			text_chars[6]=(char)valueList_211[aUnItCoUnTeR<listLength_211?aUnItCoUnTeR:listLength_211-1];

		}
		if(aUnItCoUnTeR<listLength_212 || useLast_212){
			ulen_PTRTO[0]=(unsigned int)valueList_212[aUnItCoUnTeR<listLength_212?aUnItCoUnTeR:listLength_212-1];

		}
		if(aUnItCoUnTeR<listLength_213 || useLast_213){
			text_chars[26]=(char)valueList_213[aUnItCoUnTeR<listLength_213?aUnItCoUnTeR:listLength_213-1];

		}
		if(aUnItCoUnTeR<listLength_214 || useLast_214){
			text_chars[38]=(char)valueList_214[aUnItCoUnTeR<listLength_214?aUnItCoUnTeR:listLength_214-1];

		}
		if(aUnItCoUnTeR<listLength_215 || useLast_215){
			text_chars[198]=(char)valueList_215[aUnItCoUnTeR<listLength_215?aUnItCoUnTeR:listLength_215-1];

		}
		if(aUnItCoUnTeR<listLength_216 || useLast_216){
			text_chars[186]=(char)valueList_216[aUnItCoUnTeR<listLength_216?aUnItCoUnTeR:listLength_216-1];

		}
		if(aUnItCoUnTeR<listLength_217 || useLast_217){
			text_chars[14]=(char)valueList_217[aUnItCoUnTeR<listLength_217?aUnItCoUnTeR:listLength_217-1];

		}
		if(aUnItCoUnTeR<listLength_218 || useLast_218){
			text_chars[174]=(char)valueList_218[aUnItCoUnTeR<listLength_218?aUnItCoUnTeR:listLength_218-1];

		}
		if(aUnItCoUnTeR<listLength_219 || useLast_219){
			text_chars[239]=(char)valueList_219[aUnItCoUnTeR<listLength_219?aUnItCoUnTeR:listLength_219-1];

		}
		if(aUnItCoUnTeR<listLength_220 || useLast_220){
			text_chars[227]=(char)valueList_220[aUnItCoUnTeR<listLength_220?aUnItCoUnTeR:listLength_220-1];

		}
		if(aUnItCoUnTeR<listLength_221 || useLast_221){
			text_chars[215]=(char)valueList_221[aUnItCoUnTeR<listLength_221?aUnItCoUnTeR:listLength_221-1];

		}
		if(aUnItCoUnTeR<listLength_222 || useLast_222){
			text_chars[161]=(char)valueList_222[aUnItCoUnTeR<listLength_222?aUnItCoUnTeR:listLength_222-1];

		}
		if(aUnItCoUnTeR<listLength_223 || useLast_223){
			text_chars[173]=(char)valueList_223[aUnItCoUnTeR<listLength_223?aUnItCoUnTeR:listLength_223-1];

		}
		if(aUnItCoUnTeR<listLength_224 || useLast_224){
			text_chars[70]=(char)valueList_224[aUnItCoUnTeR<listLength_224?aUnItCoUnTeR:listLength_224-1];

		}
		if(aUnItCoUnTeR<listLength_225 || useLast_225){
			text_chars[82]=(char)valueList_225[aUnItCoUnTeR<listLength_225?aUnItCoUnTeR:listLength_225-1];

		}
		if(aUnItCoUnTeR<listLength_226 || useLast_226){
			text_chars[94]=(char)valueList_226[aUnItCoUnTeR<listLength_226?aUnItCoUnTeR:listLength_226-1];

		}
		if(aUnItCoUnTeR<listLength_227 || useLast_227){
			text_chars[107]=(char)valueList_227[aUnItCoUnTeR<listLength_227?aUnItCoUnTeR:listLength_227-1];

		}
		if(aUnItCoUnTeR<listLength_228 || useLast_228){
			text_chars[119]=(char)valueList_228[aUnItCoUnTeR<listLength_228?aUnItCoUnTeR:listLength_228-1];

		}
		if(aUnItCoUnTeR<listLength_229 || useLast_229){
			text_chars[15]=(char)valueList_229[aUnItCoUnTeR<listLength_229?aUnItCoUnTeR:listLength_229-1];

		}
		if(aUnItCoUnTeR<listLength_230 || useLast_230){
			text_chars[199]=(char)valueList_230[aUnItCoUnTeR<listLength_230?aUnItCoUnTeR:listLength_230-1];

		}
		if(aUnItCoUnTeR<listLength_231 || useLast_231){
			text_chars[27]=(char)valueList_231[aUnItCoUnTeR<listLength_231?aUnItCoUnTeR:listLength_231-1];

		}
		if(aUnItCoUnTeR<listLength_232 || useLast_232){
			text_chars[187]=(char)valueList_232[aUnItCoUnTeR<listLength_232?aUnItCoUnTeR:listLength_232-1];

		}
		if(aUnItCoUnTeR<listLength_233 || useLast_233){
			text_chars[175]=(char)valueList_233[aUnItCoUnTeR<listLength_233?aUnItCoUnTeR:listLength_233-1];

		}
		if(aUnItCoUnTeR<listLength_234 || useLast_234){
			text_chars[163]=(char)valueList_234[aUnItCoUnTeR<listLength_234?aUnItCoUnTeR:listLength_234-1];

		}
		if(aUnItCoUnTeR<listLength_235 || useLast_235){
			text_chars[39]=(char)valueList_235[aUnItCoUnTeR<listLength_235?aUnItCoUnTeR:listLength_235-1];

		}
		if(aUnItCoUnTeR<listLength_236 || useLast_236){
			text_chars[5]=(char)valueList_236[aUnItCoUnTeR<listLength_236?aUnItCoUnTeR:listLength_236-1];

		}
		if(aUnItCoUnTeR<listLength_237 || useLast_237){
			text_chars[228]=(char)valueList_237[aUnItCoUnTeR<listLength_237?aUnItCoUnTeR:listLength_237-1];

		}
		if(aUnItCoUnTeR<listLength_238 || useLast_238){
			text_chars[216]=(char)valueList_238[aUnItCoUnTeR<listLength_238?aUnItCoUnTeR:listLength_238-1];

		}
		if(aUnItCoUnTeR<listLength_239 || useLast_239){
			text_chars[204]=(char)valueList_239[aUnItCoUnTeR<listLength_239?aUnItCoUnTeR:listLength_239-1];

		}
		if(aUnItCoUnTeR<listLength_240 || useLast_240){
			text_chars[150]=(char)valueList_240[aUnItCoUnTeR<listLength_240?aUnItCoUnTeR:listLength_240-1];

		}
		if(aUnItCoUnTeR<listLength_241 || useLast_241){
			text_chars[162]=(char)valueList_241[aUnItCoUnTeR<listLength_241?aUnItCoUnTeR:listLength_241-1];

		}
		if(aUnItCoUnTeR<listLength_242 || useLast_242){
			text_chars[95]=(char)valueList_242[aUnItCoUnTeR<listLength_242?aUnItCoUnTeR:listLength_242-1];

		}
		if(aUnItCoUnTeR<listLength_243 || useLast_243){
			text_chars[71]=(char)valueList_243[aUnItCoUnTeR<listLength_243?aUnItCoUnTeR:listLength_243-1];

		}
		if(aUnItCoUnTeR<listLength_244 || useLast_244){
			text_chars[83]=(char)valueList_244[aUnItCoUnTeR<listLength_244?aUnItCoUnTeR:listLength_244-1];

		}
		if(aUnItCoUnTeR<listLength_245 || useLast_245){
			text_chars[108]=(char)valueList_245[aUnItCoUnTeR<listLength_245?aUnItCoUnTeR:listLength_245-1];

		}
		if(aUnItCoUnTeR<listLength_246 || useLast_246){
			text_chars[188]=(char)valueList_246[aUnItCoUnTeR<listLength_246?aUnItCoUnTeR:listLength_246-1];

		}
		if(aUnItCoUnTeR<listLength_247 || useLast_247){
			text_chars[16]=(char)valueList_247[aUnItCoUnTeR<listLength_247?aUnItCoUnTeR:listLength_247-1];

		}
		if(aUnItCoUnTeR<listLength_248 || useLast_248){
			text_chars[176]=(char)valueList_248[aUnItCoUnTeR<listLength_248?aUnItCoUnTeR:listLength_248-1];

		}
		if(aUnItCoUnTeR<listLength_249 || useLast_249){
			text_chars[152]=(char)valueList_249[aUnItCoUnTeR<listLength_249?aUnItCoUnTeR:listLength_249-1];

		}
		if(aUnItCoUnTeR<listLength_250 || useLast_250){
			text_chars[164]=(char)valueList_250[aUnItCoUnTeR<listLength_250?aUnItCoUnTeR:listLength_250-1];

		}
		if(aUnItCoUnTeR<listLength_251 || useLast_251){
			text_chars[28]=(char)valueList_251[aUnItCoUnTeR<listLength_251?aUnItCoUnTeR:listLength_251-1];

		}
		if(aUnItCoUnTeR<listLength_252 || useLast_252){
			text_chars[229]=(char)valueList_252[aUnItCoUnTeR<listLength_252?aUnItCoUnTeR:listLength_252-1];

		}
		if(aUnItCoUnTeR<listLength_253 || useLast_253){
			text_chars[4]=(char)valueList_253[aUnItCoUnTeR<listLength_253?aUnItCoUnTeR:listLength_253-1];

		}
		if(aUnItCoUnTeR<listLength_254 || useLast_254){
			text_chars[217]=(char)valueList_254[aUnItCoUnTeR<listLength_254?aUnItCoUnTeR:listLength_254-1];

		}
		if(aUnItCoUnTeR<listLength_255 || useLast_255){
			text_chars[205]=(char)valueList_255[aUnItCoUnTeR<listLength_255?aUnItCoUnTeR:listLength_255-1];

		}
		if(aUnItCoUnTeR<listLength_256 || useLast_256){
			text_chars[151]=(char)valueList_256[aUnItCoUnTeR<listLength_256?aUnItCoUnTeR:listLength_256-1];

		}
		if(aUnItCoUnTeR<listLength_257 || useLast_257){
			text_chars[84]=(char)valueList_257[aUnItCoUnTeR<listLength_257?aUnItCoUnTeR:listLength_257-1];

		}
		if(aUnItCoUnTeR<listLength_258 || useLast_258){
			text_chars[96]=(char)valueList_258[aUnItCoUnTeR<listLength_258?aUnItCoUnTeR:listLength_258-1];

		}
		if(aUnItCoUnTeR<listLength_259 || useLast_259){
			text_chars[60]=(char)valueList_259[aUnItCoUnTeR<listLength_259?aUnItCoUnTeR:listLength_259-1];

		}
		if(aUnItCoUnTeR<listLength_260 || useLast_260){
			text_chars[72]=(char)valueList_260[aUnItCoUnTeR<listLength_260?aUnItCoUnTeR:listLength_260-1];

		}
		returnValue = looks_ascii(buf,nbytes,ubuf,ulen);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("looks_ascii","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("looks_ascii","ulen[0]",0,ulen[0])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_looks_ascii_4\n");
}

void test_looks_ascii_5(void){
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
	unsigned char *valueList_0[]={(unsigned char *)"abc\x80def"};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)ulen_PTRTO};
	unsigned int listLength_1=1;
	file_unichar_t *valueList_2[]={(file_unichar_t *)ubuf_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={7};
	unsigned int listLength_3=1;
	char valueList_4[]={0};
	unsigned int listLength_4=1;
	char valueList_5[]={0};
	unsigned int listLength_5=1;
	char valueList_6[]={0};
	unsigned int listLength_6=1;
	char valueList_7[]={0};
	unsigned int listLength_7=1;
	char valueList_8[]={0};
	unsigned int listLength_8=1;
	char valueList_9[]={0};
	unsigned int listLength_9=1;
	char valueList_10[]={0};
	unsigned int listLength_10=1;
	char valueList_11[]={0};
	unsigned int listLength_11=1;
	char valueList_12[]={0};
	unsigned int listLength_12=1;
	char valueList_13[]={0};
	unsigned int listLength_13=1;
	char valueList_14[]={0};
	unsigned int listLength_14=1;
	char valueList_15[]={0};
	unsigned int listLength_15=1;
	char valueList_16[]={0};
	unsigned int listLength_16=1;
	char valueList_17[]={0};
	unsigned int listLength_17=1;
	char valueList_18[]={0};
	unsigned int listLength_18=1;
	char valueList_19[]={0};
	unsigned int listLength_19=1;
	char valueList_20[]={0};
	unsigned int listLength_20=1;
	char valueList_21[]={0};
	unsigned int listLength_21=1;
	char valueList_22[]={0};
	unsigned int listLength_22=1;
	char valueList_23[]={0};
	unsigned int listLength_23=1;
	char valueList_24[]={0};
	unsigned int listLength_24=1;
	char valueList_25[]={0};
	unsigned int listLength_25=1;
	char valueList_26[]={0};
	unsigned int listLength_26=1;
	char valueList_27[]={0};
	unsigned int listLength_27=1;
	char valueList_28[]={0};
	unsigned int listLength_28=1;
	char valueList_29[]={0};
	unsigned int listLength_29=1;
	char valueList_30[]={0};
	unsigned int listLength_30=1;
	char valueList_31[]={ 1};
	unsigned int listLength_31=1;
	char valueList_32[]={0};
	unsigned int listLength_32=1;
	char valueList_33[]={0};
	unsigned int listLength_33=1;
	char valueList_34[]={0};
	unsigned int listLength_34=1;
	char valueList_35[]={0};
	unsigned int listLength_35=1;
	char valueList_36[]={0};
	unsigned int listLength_36=1;
	char valueList_37[]={0};
	unsigned int listLength_37=1;
	char valueList_38[]={0};
	unsigned int listLength_38=1;
	char valueList_39[]={0};
	unsigned int listLength_39=1;
	char valueList_40[]={0};
	unsigned int listLength_40=1;
	char valueList_41[]={0};
	unsigned int listLength_41=1;
	char valueList_42[]={ 1};
	unsigned int listLength_42=1;
	char valueList_43[]={0};
	unsigned int listLength_43=1;
	char valueList_44[]={0};
	unsigned int listLength_44=1;
	char valueList_45[]={0};
	unsigned int listLength_45=1;
	char valueList_46[]={0};
	unsigned int listLength_46=1;
	char valueList_47[]={0};
	unsigned int listLength_47=1;
	char valueList_48[]={0};
	unsigned int listLength_48=1;
	char valueList_49[]={0};
	unsigned int listLength_49=1;
	char valueList_50[]={0};
	unsigned int listLength_50=1;
	char valueList_51[]={0};
	unsigned int listLength_51=1;
	char valueList_52[]={0};
	unsigned int listLength_52=1;
	char valueList_53[]={0};
	unsigned int listLength_53=1;
	char valueList_54[]={0};
	unsigned int listLength_54=1;
	char valueList_55[]={1};
	unsigned int listLength_55=1;
	char valueList_56[]={0};
	unsigned int listLength_56=1;
	char valueList_57[]={0};
	unsigned int listLength_57=1;
	char valueList_58[]={0};
	unsigned int listLength_58=1;
	char valueList_59[]={0};
	unsigned int listLength_59=1;
	char valueList_60[]={0};
	unsigned int listLength_60=1;
	char valueList_61[]={0};
	unsigned int listLength_61=1;
	char valueList_62[]={0};
	unsigned int listLength_62=1;
	char valueList_63[]={0};
	unsigned int listLength_63=1;
	char valueList_64[]={0};
	unsigned int listLength_64=1;
	char valueList_65[]={0};
	unsigned int listLength_65=1;
	char valueList_66[]={0};
	unsigned int listLength_66=1;
	char valueList_67[]={0};
	unsigned int listLength_67=1;
	char valueList_68[]={0};
	unsigned int listLength_68=1;
	char valueList_69[]={0};
	unsigned int listLength_69=1;
	char valueList_70[]={0};
	unsigned int listLength_70=1;
	char valueList_71[]={0};
	unsigned int listLength_71=1;
	char valueList_72[]={0};
	unsigned int listLength_72=1;
	char valueList_73[]={0};
	unsigned int listLength_73=1;
	char valueList_74[]={0};
	unsigned int listLength_74=1;
	char valueList_75[]={0};
	unsigned int listLength_75=1;
	char valueList_76[]={0};
	unsigned int listLength_76=1;
	char valueList_77[]={0};
	unsigned int listLength_77=1;
	char valueList_78[]={0};
	unsigned int listLength_78=1;
	char valueList_79[]={0};
	unsigned int listLength_79=1;
	char valueList_80[]={0};
	unsigned int listLength_80=1;
	char valueList_81[]={0};
	unsigned int listLength_81=1;
	char valueList_82[]={0};
	unsigned int listLength_82=1;
	char valueList_83[]={0};
	unsigned int listLength_83=1;
	char valueList_84[]={0};
	unsigned int listLength_84=1;
	char valueList_85[]={0};
	unsigned int listLength_85=1;
	char valueList_86[]={0};
	unsigned int listLength_86=1;
	char valueList_87[]={0};
	unsigned int listLength_87=1;
	char valueList_88[]={0};
	unsigned int listLength_88=1;
	char valueList_89[]={0};
	unsigned int listLength_89=1;
	char valueList_90[]={0};
	unsigned int listLength_90=1;
	char valueList_91[]={0};
	unsigned int listLength_91=1;
	char valueList_92[]={0};
	unsigned int listLength_92=1;
	char valueList_93[]={0};
	unsigned int listLength_93=1;
	char valueList_94[]={0};
	unsigned int listLength_94=1;
	char valueList_95[]={0};
	unsigned int listLength_95=1;
	char valueList_96[]={0};
	unsigned int listLength_96=1;
	char valueList_97[]={0};
	unsigned int listLength_97=1;
	char valueList_98[]={0};
	unsigned int listLength_98=1;
	char valueList_99[]={0};
	unsigned int listLength_99=1;
	char valueList_100[]={0};
	unsigned int listLength_100=1;
	char valueList_101[]={0};
	unsigned int listLength_101=1;
	char valueList_102[]={0};
	unsigned int listLength_102=1;
	char valueList_103[]={0};
	unsigned int listLength_103=1;
	char valueList_104[]={0};
	unsigned int listLength_104=1;
	char valueList_105[]={0};
	unsigned int listLength_105=1;
	char valueList_106[]={0};
	unsigned int listLength_106=1;
	char valueList_107[]={0};
	unsigned int listLength_107=1;
	char valueList_108[]={0};
	unsigned int listLength_108=1;
	char valueList_109[]={0};
	unsigned int listLength_109=1;
	char valueList_110[]={0};
	unsigned int listLength_110=1;
	char valueList_111[]={0};
	unsigned int listLength_111=1;
	char valueList_112[]={0};
	unsigned int listLength_112=1;
	char valueList_113[]={0};
	unsigned int listLength_113=1;
	char valueList_114[]={0};
	unsigned int listLength_114=1;
	char valueList_115[]={0};
	unsigned int listLength_115=1;
	char valueList_116[]={0};
	unsigned int listLength_116=1;
	char valueList_117[]={0};
	unsigned int listLength_117=1;
	char valueList_118[]={0};
	unsigned int listLength_118=1;
	char valueList_119[]={0};
	unsigned int listLength_119=1;
	char valueList_120[]={0};
	unsigned int listLength_120=1;
	char valueList_121[]={0};
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
	char valueList_127[]={0};
	unsigned int listLength_127=1;
	unsigned long int valueList_128[]={0};
	unsigned int listLength_128=1;
	char valueList_129[]={0};
	unsigned int listLength_129=1;
	char valueList_130[]={0};
	unsigned int listLength_130=1;
	char valueList_131[]={0};
	unsigned int listLength_131=1;
	char valueList_132[]={0};
	unsigned int listLength_132=1;
	char valueList_133[]={0};
	unsigned int listLength_133=1;
	char valueList_134[]={0};
	unsigned int listLength_134=1;
	char valueList_135[]={0};
	unsigned int listLength_135=1;
	char valueList_136[]={0};
	unsigned int listLength_136=1;
	char valueList_137[]={0};
	unsigned int listLength_137=1;
	char valueList_138[]={0};
	unsigned int listLength_138=1;
	char valueList_139[]={0};
	unsigned int listLength_139=1;
	char valueList_140[]={0};
	unsigned int listLength_140=1;
	char valueList_141[]={0};
	unsigned int listLength_141=1;
	char valueList_142[]={0};
	unsigned int listLength_142=1;
	char valueList_143[]={0};
	unsigned int listLength_143=1;
	char valueList_144[]={0};
	unsigned int listLength_144=1;
	char valueList_145[]={0};
	unsigned int listLength_145=1;
	char valueList_146[]={0};
	unsigned int listLength_146=1;
	char valueList_147[]={0};
	unsigned int listLength_147=1;
	char valueList_148[]={0};
	unsigned int listLength_148=1;
	char valueList_149[]={0};
	unsigned int listLength_149=1;
	char valueList_150[]={0};
	unsigned int listLength_150=1;
	char valueList_151[]={0};
	unsigned int listLength_151=1;
	char valueList_152[]={0};
	unsigned int listLength_152=1;
	char valueList_153[]={0};
	unsigned int listLength_153=1;
	char valueList_154[]={0};
	unsigned int listLength_154=1;
	char valueList_155[]={0};
	unsigned int listLength_155=1;
	char valueList_156[]={0};
	unsigned int listLength_156=1;
	char valueList_157[]={0};
	unsigned int listLength_157=1;
	char valueList_158[]={0};
	unsigned int listLength_158=1;
	char valueList_159[]={0};
	unsigned int listLength_159=1;
	char valueList_160[]={0};
	unsigned int listLength_160=1;
	char valueList_161[]={0};
	unsigned int listLength_161=1;
	char valueList_162[]={0};
	unsigned int listLength_162=1;
	char valueList_163[]={0};
	unsigned int listLength_163=1;
	char valueList_164[]={0};
	unsigned int listLength_164=1;
	char valueList_165[]={0};
	unsigned int listLength_165=1;
	char valueList_166[]={0};
	unsigned int listLength_166=1;
	char valueList_167[]={0};
	unsigned int listLength_167=1;
	char valueList_168[]={0};
	unsigned int listLength_168=1;
	char valueList_169[]={0};
	unsigned int listLength_169=1;
	char valueList_170[]={0};
	unsigned int listLength_170=1;
	char valueList_171[]={0};
	unsigned int listLength_171=1;
	char valueList_172[]={0};
	unsigned int listLength_172=1;
	char valueList_173[]={0};
	unsigned int listLength_173=1;
	char valueList_174[]={0};
	unsigned int listLength_174=1;
	char valueList_175[]={0};
	unsigned int listLength_175=1;
	char valueList_176[]={0};
	unsigned int listLength_176=1;
	char valueList_177[]={0};
	unsigned int listLength_177=1;
	char valueList_178[]={0};
	unsigned int listLength_178=1;
	char valueList_179[]={0};
	unsigned int listLength_179=1;
	char valueList_180[]={0};
	unsigned int listLength_180=1;
	char valueList_181[]={0};
	unsigned int listLength_181=1;
	char valueList_182[]={0};
	unsigned int listLength_182=1;
	char valueList_183[]={0};
	unsigned int listLength_183=1;
	char valueList_184[]={0};
	unsigned int listLength_184=1;
	char valueList_185[]={0};
	unsigned int listLength_185=1;
	char valueList_186[]={0};
	unsigned int listLength_186=1;
	char valueList_187[]={0};
	unsigned int listLength_187=1;
	char valueList_188[]={0};
	unsigned int listLength_188=1;
	char valueList_189[]={0};
	unsigned int listLength_189=1;
	char valueList_190[]={0};
	unsigned int listLength_190=1;
	char valueList_191[]={0};
	unsigned int listLength_191=1;
	char valueList_192[]={0};
	unsigned int listLength_192=1;
	char valueList_193[]={0};
	unsigned int listLength_193=1;
	char valueList_194[]={0};
	unsigned int listLength_194=1;
	char valueList_195[]={0};
	unsigned int listLength_195=1;
	char valueList_196[]={0};
	unsigned int listLength_196=1;
	char valueList_197[]={0};
	unsigned int listLength_197=1;
	char valueList_198[]={0};
	unsigned int listLength_198=1;
	char valueList_199[]={0};
	unsigned int listLength_199=1;
	char valueList_200[]={0};
	unsigned int listLength_200=1;
	char valueList_201[]={0};
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
	char valueList_207[]={0};
	unsigned int listLength_207=1;
	char valueList_208[]={0};
	unsigned int listLength_208=1;
	char valueList_209[]={0};
	unsigned int listLength_209=1;
	char valueList_210[]={0};
	unsigned int listLength_210=1;
	char valueList_211[]={0};
	unsigned int listLength_211=1;
	unsigned int valueList_212[]={0};
	unsigned int listLength_212=1;
	char valueList_213[]={0};
	unsigned int listLength_213=1;
	char valueList_214[]={0};
	unsigned int listLength_214=1;
	char valueList_215[]={0};
	unsigned int listLength_215=1;
	char valueList_216[]={0};
	unsigned int listLength_216=1;
	char valueList_217[]={0};
	unsigned int listLength_217=1;
	char valueList_218[]={0};
	unsigned int listLength_218=1;
	char valueList_219[]={0};
	unsigned int listLength_219=1;
	char valueList_220[]={0};
	unsigned int listLength_220=1;
	char valueList_221[]={0};
	unsigned int listLength_221=1;
	char valueList_222[]={0};
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
	char valueList_229[]={0};
	unsigned int listLength_229=1;
	char valueList_230[]={0};
	unsigned int listLength_230=1;
	char valueList_231[]={0};
	unsigned int listLength_231=1;
	char valueList_232[]={0};
	unsigned int listLength_232=1;
	char valueList_233[]={0};
	unsigned int listLength_233=1;
	char valueList_234[]={0};
	unsigned int listLength_234=1;
	char valueList_235[]={0};
	unsigned int listLength_235=1;
	char valueList_236[]={0};
	unsigned int listLength_236=1;
	char valueList_237[]={0};
	unsigned int listLength_237=1;
	char valueList_238[]={0};
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
	char valueList_245[]={0};
	unsigned int listLength_245=1;
	char valueList_246[]={0};
	unsigned int listLength_246=1;
	char valueList_247[]={0};
	unsigned int listLength_247=1;
	char valueList_248[]={0};
	unsigned int listLength_248=1;
	char valueList_249[]={0};
	unsigned int listLength_249=1;
	char valueList_250[]={0};
	unsigned int listLength_250=1;
	char valueList_251[]={0};
	unsigned int listLength_251=1;
	char valueList_252[]={0};
	unsigned int listLength_252=1;
	char valueList_253[]={ 0};
	unsigned int listLength_253=1;
	char valueList_254[]={0};
	unsigned int listLength_254=1;
	char valueList_255[]={0};
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_looks_ascii_5,false,0\n");
	aunit_printf("#CASE_START_test_looks_ascii_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ulen=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ubuf=(file_unichar_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			nbytes=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			text_chars[33]=(char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			text_chars[45]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			text_chars[21]=(char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			text_chars[189]=(char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			text_chars[109]=(char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			text_chars[177]=(char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			text_chars[57]=(char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			text_chars[69]=(char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			text_chars[141]=(char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			text_chars[153]=(char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			text_chars[165]=(char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			text_chars[218]=(char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			text_chars[206]=(char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			text_chars[140]=(char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			text_chars[22]=(char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			text_chars[34]=(char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			text_chars[10]=(char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			text_chars[178]=(char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			text_chars[46]=(char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			text_chars[58]=(char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			text_chars[251]=(char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			text_chars[130]=(char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			text_chars[142]=(char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			text_chars[154]=(char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			text_chars[166]=(char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			text_chars[219]=(char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			text_chars[207]=(char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			text_chars[2]=(char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			text_chars[250]=(char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			text_chars[90]=(char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			text_chars[11]=(char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			text_chars[23]=(char)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			text_chars[179]=(char)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			text_chars[59]=(char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			text_chars[35]=(char)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			text_chars[252]=(char)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			text_chars[47]=(char)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			text_chars[240]=(char)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			text_chars[1]=(char)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			text_chars[131]=(char)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			text_chars[143]=(char)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			text_chars[155]=(char)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			text_chars[208]=(char)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			text_chars[167]=(char)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			text_chars[91]=(char)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		if(aUnItCoUnTeR<listLength_49 || useLast_49){
			text_chars[12]=(char)valueList_49[aUnItCoUnTeR<listLength_49?aUnItCoUnTeR:listLength_49-1];

		}
		if(aUnItCoUnTeR<listLength_50 || useLast_50){
			text_chars[48]=(char)valueList_50[aUnItCoUnTeR<listLength_50?aUnItCoUnTeR:listLength_50-1];

		}
		if(aUnItCoUnTeR<listLength_51 || useLast_51){
			text_chars[253]=(char)valueList_51[aUnItCoUnTeR<listLength_51?aUnItCoUnTeR:listLength_51-1];

		}
		if(aUnItCoUnTeR<listLength_52 || useLast_52){
			text_chars[24]=(char)valueList_52[aUnItCoUnTeR<listLength_52?aUnItCoUnTeR:listLength_52-1];

		}
		if(aUnItCoUnTeR<listLength_53 || useLast_53){
			text_chars[241]=(char)valueList_53[aUnItCoUnTeR<listLength_53?aUnItCoUnTeR:listLength_53-1];

		}
		if(aUnItCoUnTeR<listLength_54 || useLast_54){
			text_chars[36]=(char)valueList_54[aUnItCoUnTeR<listLength_54?aUnItCoUnTeR:listLength_54-1];

		}
		if(aUnItCoUnTeR<listLength_55 || useLast_55){
			text_chars[0]=(char)valueList_55[aUnItCoUnTeR<listLength_55?aUnItCoUnTeR:listLength_55-1];

		}
		if(aUnItCoUnTeR<listLength_56 || useLast_56){
			text_chars[120]=(char)valueList_56[aUnItCoUnTeR<listLength_56?aUnItCoUnTeR:listLength_56-1];

		}
		if(aUnItCoUnTeR<listLength_57 || useLast_57){
			text_chars[132]=(char)valueList_57[aUnItCoUnTeR<listLength_57?aUnItCoUnTeR:listLength_57-1];

		}
		if(aUnItCoUnTeR<listLength_58 || useLast_58){
			text_chars[209]=(char)valueList_58[aUnItCoUnTeR<listLength_58?aUnItCoUnTeR:listLength_58-1];

		}
		if(aUnItCoUnTeR<listLength_59 || useLast_59){
			text_chars[144]=(char)valueList_59[aUnItCoUnTeR<listLength_59?aUnItCoUnTeR:listLength_59-1];

		}
		if(aUnItCoUnTeR<listLength_60 || useLast_60){
			text_chars[156]=(char)valueList_60[aUnItCoUnTeR<listLength_60?aUnItCoUnTeR:listLength_60-1];

		}
		if(aUnItCoUnTeR<listLength_61 || useLast_61){
			text_chars[168]=(char)valueList_61[aUnItCoUnTeR<listLength_61?aUnItCoUnTeR:listLength_61-1];

		}
		if(aUnItCoUnTeR<listLength_62 || useLast_62){
			text_chars[80]=(char)valueList_62[aUnItCoUnTeR<listLength_62?aUnItCoUnTeR:listLength_62-1];

		}
		if(aUnItCoUnTeR<listLength_63 || useLast_63){
			text_chars[92]=(char)valueList_63[aUnItCoUnTeR<listLength_63?aUnItCoUnTeR:listLength_63-1];

		}
		if(aUnItCoUnTeR<listLength_64 || useLast_64){
			text_chars[77]=(char)valueList_64[aUnItCoUnTeR<listLength_64?aUnItCoUnTeR:listLength_64-1];

		}
		if(aUnItCoUnTeR<listLength_65 || useLast_65){
			text_chars[89]=(char)valueList_65[aUnItCoUnTeR<listLength_65?aUnItCoUnTeR:listLength_65-1];

		}
		if(aUnItCoUnTeR<listLength_66 || useLast_66){
			text_chars[53]=(char)valueList_66[aUnItCoUnTeR<listLength_66?aUnItCoUnTeR:listLength_66-1];

		}
		if(aUnItCoUnTeR<listLength_67 || useLast_67){
			text_chars[65]=(char)valueList_67[aUnItCoUnTeR<listLength_67?aUnItCoUnTeR:listLength_67-1];

		}
		if(aUnItCoUnTeR<listLength_68 || useLast_68){
			text_chars[254]=(char)valueList_68[aUnItCoUnTeR<listLength_68?aUnItCoUnTeR:listLength_68-1];

		}
		if(aUnItCoUnTeR<listLength_69 || useLast_69){
			text_chars[242]=(char)valueList_69[aUnItCoUnTeR<listLength_69?aUnItCoUnTeR:listLength_69-1];

		}
		if(aUnItCoUnTeR<listLength_70 || useLast_70){
			text_chars[230]=(char)valueList_70[aUnItCoUnTeR<listLength_70?aUnItCoUnTeR:listLength_70-1];

		}
		if(aUnItCoUnTeR<listLength_71 || useLast_71){
			text_chars[121]=(char)valueList_71[aUnItCoUnTeR<listLength_71?aUnItCoUnTeR:listLength_71-1];

		}
		if(aUnItCoUnTeR<listLength_72 || useLast_72){
			text_chars[133]=(char)valueList_72[aUnItCoUnTeR<listLength_72?aUnItCoUnTeR:listLength_72-1];

		}
		if(aUnItCoUnTeR<listLength_73 || useLast_73){
			text_chars[145]=(char)valueList_73[aUnItCoUnTeR<listLength_73?aUnItCoUnTeR:listLength_73-1];

		}
		if(aUnItCoUnTeR<listLength_74 || useLast_74){
			text_chars[157]=(char)valueList_74[aUnItCoUnTeR<listLength_74?aUnItCoUnTeR:listLength_74-1];

		}
		if(aUnItCoUnTeR<listLength_75 || useLast_75){
			text_chars[169]=(char)valueList_75[aUnItCoUnTeR<listLength_75?aUnItCoUnTeR:listLength_75-1];

		}
		if(aUnItCoUnTeR<listLength_76 || useLast_76){
			text_chars[41]=(char)valueList_76[aUnItCoUnTeR<listLength_76?aUnItCoUnTeR:listLength_76-1];

		}
		if(aUnItCoUnTeR<listLength_77 || useLast_77){
			text_chars[66]=(char)valueList_77[aUnItCoUnTeR<listLength_77?aUnItCoUnTeR:listLength_77-1];

		}
		if(aUnItCoUnTeR<listLength_78 || useLast_78){
			text_chars[78]=(char)valueList_78[aUnItCoUnTeR<listLength_78?aUnItCoUnTeR:listLength_78-1];

		}
		if(aUnItCoUnTeR<listLength_79 || useLast_79){
			text_chars[42]=(char)valueList_79[aUnItCoUnTeR<listLength_79?aUnItCoUnTeR:listLength_79-1];

		}
		if(aUnItCoUnTeR<listLength_80 || useLast_80){
			text_chars[54]=(char)valueList_80[aUnItCoUnTeR<listLength_80?aUnItCoUnTeR:listLength_80-1];

		}
		if(aUnItCoUnTeR<listLength_81 || useLast_81){
			text_chars[255]=(char)valueList_81[aUnItCoUnTeR<listLength_81?aUnItCoUnTeR:listLength_81-1];

		}
		if(aUnItCoUnTeR<listLength_82 || useLast_82){
			text_chars[243]=(char)valueList_82[aUnItCoUnTeR<listLength_82?aUnItCoUnTeR:listLength_82-1];

		}
		if(aUnItCoUnTeR<listLength_83 || useLast_83){
			text_chars[231]=(char)valueList_83[aUnItCoUnTeR<listLength_83?aUnItCoUnTeR:listLength_83-1];

		}
		if(aUnItCoUnTeR<listLength_84 || useLast_84){
			text_chars[110]=(char)valueList_84[aUnItCoUnTeR<listLength_84?aUnItCoUnTeR:listLength_84-1];

		}
		if(aUnItCoUnTeR<listLength_85 || useLast_85){
			text_chars[122]=(char)valueList_85[aUnItCoUnTeR<listLength_85?aUnItCoUnTeR:listLength_85-1];

		}
		if(aUnItCoUnTeR<listLength_86 || useLast_86){
			text_chars[134]=(char)valueList_86[aUnItCoUnTeR<listLength_86?aUnItCoUnTeR:listLength_86-1];

		}
		if(aUnItCoUnTeR<listLength_87 || useLast_87){
			text_chars[146]=(char)valueList_87[aUnItCoUnTeR<listLength_87?aUnItCoUnTeR:listLength_87-1];

		}
		if(aUnItCoUnTeR<listLength_88 || useLast_88){
			text_chars[158]=(char)valueList_88[aUnItCoUnTeR<listLength_88?aUnItCoUnTeR:listLength_88-1];

		}
		if(aUnItCoUnTeR<listLength_89 || useLast_89){
			text_chars[30]=(char)valueList_89[aUnItCoUnTeR<listLength_89?aUnItCoUnTeR:listLength_89-1];

		}
		if(aUnItCoUnTeR<listLength_90 || useLast_90){
			text_chars[55]=(char)valueList_90[aUnItCoUnTeR<listLength_90?aUnItCoUnTeR:listLength_90-1];

		}
		if(aUnItCoUnTeR<listLength_91 || useLast_91){
			text_chars[67]=(char)valueList_91[aUnItCoUnTeR<listLength_91?aUnItCoUnTeR:listLength_91-1];

		}
		if(aUnItCoUnTeR<listLength_92 || useLast_92){
			text_chars[31]=(char)valueList_92[aUnItCoUnTeR<listLength_92?aUnItCoUnTeR:listLength_92-1];

		}
		if(aUnItCoUnTeR<listLength_93 || useLast_93){
			text_chars[43]=(char)valueList_93[aUnItCoUnTeR<listLength_93?aUnItCoUnTeR:listLength_93-1];

		}
		if(aUnItCoUnTeR<listLength_94 || useLast_94){
			text_chars[244]=(char)valueList_94[aUnItCoUnTeR<listLength_94?aUnItCoUnTeR:listLength_94-1];

		}
		if(aUnItCoUnTeR<listLength_95 || useLast_95){
			text_chars[232]=(char)valueList_95[aUnItCoUnTeR<listLength_95?aUnItCoUnTeR:listLength_95-1];

		}
		if(aUnItCoUnTeR<listLength_96 || useLast_96){
			text_chars[220]=(char)valueList_96[aUnItCoUnTeR<listLength_96?aUnItCoUnTeR:listLength_96-1];

		}
		if(aUnItCoUnTeR<listLength_97 || useLast_97){
			text_chars[79]=(char)valueList_97[aUnItCoUnTeR<listLength_97?aUnItCoUnTeR:listLength_97-1];

		}
		if(aUnItCoUnTeR<listLength_98 || useLast_98){
			text_chars[111]=(char)valueList_98[aUnItCoUnTeR<listLength_98?aUnItCoUnTeR:listLength_98-1];

		}
		if(aUnItCoUnTeR<listLength_99 || useLast_99){
			text_chars[123]=(char)valueList_99[aUnItCoUnTeR<listLength_99?aUnItCoUnTeR:listLength_99-1];

		}
		if(aUnItCoUnTeR<listLength_100 || useLast_100){
			text_chars[135]=(char)valueList_100[aUnItCoUnTeR<listLength_100?aUnItCoUnTeR:listLength_100-1];

		}
		if(aUnItCoUnTeR<listLength_101 || useLast_101){
			text_chars[147]=(char)valueList_101[aUnItCoUnTeR<listLength_101?aUnItCoUnTeR:listLength_101-1];

		}
		if(aUnItCoUnTeR<listLength_102 || useLast_102){
			text_chars[159]=(char)valueList_102[aUnItCoUnTeR<listLength_102?aUnItCoUnTeR:listLength_102-1];

		}
		if(aUnItCoUnTeR<listLength_103 || useLast_103){
			text_chars[190]=(char)valueList_103[aUnItCoUnTeR<listLength_103?aUnItCoUnTeR:listLength_103-1];

		}
		if(aUnItCoUnTeR<listLength_104 || useLast_104){
			text_chars[44]=(char)valueList_104[aUnItCoUnTeR<listLength_104?aUnItCoUnTeR:listLength_104-1];

		}
		if(aUnItCoUnTeR<listLength_105 || useLast_105){
			text_chars[56]=(char)valueList_105[aUnItCoUnTeR<listLength_105?aUnItCoUnTeR:listLength_105-1];

		}
		if(aUnItCoUnTeR<listLength_106 || useLast_106){
			text_chars[20]=(char)valueList_106[aUnItCoUnTeR<listLength_106?aUnItCoUnTeR:listLength_106-1];

		}
		if(aUnItCoUnTeR<listLength_107 || useLast_107){
			text_chars[245]=(char)valueList_107[aUnItCoUnTeR<listLength_107?aUnItCoUnTeR:listLength_107-1];

		}
		if(aUnItCoUnTeR<listLength_108 || useLast_108){
			text_chars[32]=(char)valueList_108[aUnItCoUnTeR<listLength_108?aUnItCoUnTeR:listLength_108-1];

		}
		if(aUnItCoUnTeR<listLength_109 || useLast_109){
			text_chars[233]=(char)valueList_109[aUnItCoUnTeR<listLength_109?aUnItCoUnTeR:listLength_109-1];

		}
		if(aUnItCoUnTeR<listLength_110 || useLast_110){
			text_chars[221]=(char)valueList_110[aUnItCoUnTeR<listLength_110?aUnItCoUnTeR:listLength_110-1];

		}
		if(aUnItCoUnTeR<listLength_111 || useLast_111){
			text_chars[68]=(char)valueList_111[aUnItCoUnTeR<listLength_111?aUnItCoUnTeR:listLength_111-1];

		}
		if(aUnItCoUnTeR<listLength_112 || useLast_112){
			text_chars[100]=(char)valueList_112[aUnItCoUnTeR<listLength_112?aUnItCoUnTeR:listLength_112-1];

		}
		if(aUnItCoUnTeR<listLength_113 || useLast_113){
			text_chars[112]=(char)valueList_113[aUnItCoUnTeR<listLength_113?aUnItCoUnTeR:listLength_113-1];

		}
		if(aUnItCoUnTeR<listLength_114 || useLast_114){
			text_chars[124]=(char)valueList_114[aUnItCoUnTeR<listLength_114?aUnItCoUnTeR:listLength_114-1];

		}
		if(aUnItCoUnTeR<listLength_115 || useLast_115){
			text_chars[136]=(char)valueList_115[aUnItCoUnTeR<listLength_115?aUnItCoUnTeR:listLength_115-1];

		}
		if(aUnItCoUnTeR<listLength_116 || useLast_116){
			text_chars[148]=(char)valueList_116[aUnItCoUnTeR<listLength_116?aUnItCoUnTeR:listLength_116-1];

		}
		if(aUnItCoUnTeR<listLength_117 || useLast_117){
			text_chars[191]=(char)valueList_117[aUnItCoUnTeR<listLength_117?aUnItCoUnTeR:listLength_117-1];

		}
		if(aUnItCoUnTeR<listLength_118 || useLast_118){
			text_chars[149]=(char)valueList_118[aUnItCoUnTeR<listLength_118?aUnItCoUnTeR:listLength_118-1];

		}
		if(aUnItCoUnTeR<listLength_119 || useLast_119){
			text_chars[246]=(char)valueList_119[aUnItCoUnTeR<listLength_119?aUnItCoUnTeR:listLength_119-1];

		}
		if(aUnItCoUnTeR<listLength_120 || useLast_120){
			text_chars[97]=(char)valueList_120[aUnItCoUnTeR<listLength_120?aUnItCoUnTeR:listLength_120-1];

		}
		if(aUnItCoUnTeR<listLength_121 || useLast_121){
			text_chars[234]=(char)valueList_121[aUnItCoUnTeR<listLength_121?aUnItCoUnTeR:listLength_121-1];

		}
		if(aUnItCoUnTeR<listLength_122 || useLast_122){
			text_chars[222]=(char)valueList_122[aUnItCoUnTeR<listLength_122?aUnItCoUnTeR:listLength_122-1];

		}
		if(aUnItCoUnTeR<listLength_123 || useLast_123){
			text_chars[210]=(char)valueList_123[aUnItCoUnTeR<listLength_123?aUnItCoUnTeR:listLength_123-1];

		}
		if(aUnItCoUnTeR<listLength_124 || useLast_124){
			text_chars[17]=(char)valueList_124[aUnItCoUnTeR<listLength_124?aUnItCoUnTeR:listLength_124-1];

		}
		if(aUnItCoUnTeR<listLength_125 || useLast_125){
			text_chars[29]=(char)valueList_125[aUnItCoUnTeR<listLength_125?aUnItCoUnTeR:listLength_125-1];

		}
		if(aUnItCoUnTeR<listLength_126 || useLast_126){
			text_chars[101]=(char)valueList_126[aUnItCoUnTeR<listLength_126?aUnItCoUnTeR:listLength_126-1];

		}
		if(aUnItCoUnTeR<listLength_127 || useLast_127){
			text_chars[113]=(char)valueList_127[aUnItCoUnTeR<listLength_127?aUnItCoUnTeR:listLength_127-1];

		}
		if(aUnItCoUnTeR<listLength_128 || useLast_128){
			ubuf_PTRTO[0]=(unsigned long int)valueList_128[aUnItCoUnTeR<listLength_128?aUnItCoUnTeR:listLength_128-1];

		}
		if(aUnItCoUnTeR<listLength_129 || useLast_129){
			text_chars[125]=(char)valueList_129[aUnItCoUnTeR<listLength_129?aUnItCoUnTeR:listLength_129-1];

		}
		if(aUnItCoUnTeR<listLength_130 || useLast_130){
			text_chars[137]=(char)valueList_130[aUnItCoUnTeR<listLength_130?aUnItCoUnTeR:listLength_130-1];

		}
		if(aUnItCoUnTeR<listLength_131 || useLast_131){
			text_chars[192]=(char)valueList_131[aUnItCoUnTeR<listLength_131?aUnItCoUnTeR:listLength_131-1];

		}
		if(aUnItCoUnTeR<listLength_132 || useLast_132){
			text_chars[73]=(char)valueList_132[aUnItCoUnTeR<listLength_132?aUnItCoUnTeR:listLength_132-1];

		}
		if(aUnItCoUnTeR<listLength_133 || useLast_133){
			text_chars[180]=(char)valueList_133[aUnItCoUnTeR<listLength_133?aUnItCoUnTeR:listLength_133-1];

		}
		if(aUnItCoUnTeR<listLength_134 || useLast_134){
			text_chars[85]=(char)valueList_134[aUnItCoUnTeR<listLength_134?aUnItCoUnTeR:listLength_134-1];

		}
		if(aUnItCoUnTeR<listLength_135 || useLast_135){
			text_chars[61]=(char)valueList_135[aUnItCoUnTeR<listLength_135?aUnItCoUnTeR:listLength_135-1];

		}
		if(aUnItCoUnTeR<listLength_136 || useLast_136){
			text_chars[138]=(char)valueList_136[aUnItCoUnTeR<listLength_136?aUnItCoUnTeR:listLength_136-1];

		}
		if(aUnItCoUnTeR<listLength_137 || useLast_137){
			text_chars[247]=(char)valueList_137[aUnItCoUnTeR<listLength_137?aUnItCoUnTeR:listLength_137-1];

		}
		if(aUnItCoUnTeR<listLength_138 || useLast_138){
			text_chars[235]=(char)valueList_138[aUnItCoUnTeR<listLength_138?aUnItCoUnTeR:listLength_138-1];

		}
		if(aUnItCoUnTeR<listLength_139 || useLast_139){
			text_chars[86]=(char)valueList_139[aUnItCoUnTeR<listLength_139?aUnItCoUnTeR:listLength_139-1];

		}
		if(aUnItCoUnTeR<listLength_140 || useLast_140){
			text_chars[223]=(char)valueList_140[aUnItCoUnTeR<listLength_140?aUnItCoUnTeR:listLength_140-1];

		}
		if(aUnItCoUnTeR<listLength_141 || useLast_141){
			text_chars[98]=(char)valueList_141[aUnItCoUnTeR<listLength_141?aUnItCoUnTeR:listLength_141-1];

		}
		if(aUnItCoUnTeR<listLength_142 || useLast_142){
			text_chars[211]=(char)valueList_142[aUnItCoUnTeR<listLength_142?aUnItCoUnTeR:listLength_142-1];

		}
		if(aUnItCoUnTeR<listLength_143 || useLast_143){
			text_chars[18]=(char)valueList_143[aUnItCoUnTeR<listLength_143?aUnItCoUnTeR:listLength_143-1];

		}
		if(aUnItCoUnTeR<listLength_144 || useLast_144){
			text_chars[102]=(char)valueList_144[aUnItCoUnTeR<listLength_144?aUnItCoUnTeR:listLength_144-1];

		}
		if(aUnItCoUnTeR<listLength_145 || useLast_145){
			text_chars[114]=(char)valueList_145[aUnItCoUnTeR<listLength_145?aUnItCoUnTeR:listLength_145-1];

		}
		if(aUnItCoUnTeR<listLength_146 || useLast_146){
			text_chars[126]=(char)valueList_146[aUnItCoUnTeR<listLength_146?aUnItCoUnTeR:listLength_146-1];

		}
		if(aUnItCoUnTeR<listLength_147 || useLast_147){
			text_chars[193]=(char)valueList_147[aUnItCoUnTeR<listLength_147?aUnItCoUnTeR:listLength_147-1];

		}
		if(aUnItCoUnTeR<listLength_148 || useLast_148){
			text_chars[181]=(char)valueList_148[aUnItCoUnTeR<listLength_148?aUnItCoUnTeR:listLength_148-1];

		}
		if(aUnItCoUnTeR<listLength_149 || useLast_149){
			text_chars[62]=(char)valueList_149[aUnItCoUnTeR<listLength_149?aUnItCoUnTeR:listLength_149-1];

		}
		if(aUnItCoUnTeR<listLength_150 || useLast_150){
			text_chars[74]=(char)valueList_150[aUnItCoUnTeR<listLength_150?aUnItCoUnTeR:listLength_150-1];

		}
		if(aUnItCoUnTeR<listLength_151 || useLast_151){
			text_chars[50]=(char)valueList_151[aUnItCoUnTeR<listLength_151?aUnItCoUnTeR:listLength_151-1];

		}
		if(aUnItCoUnTeR<listLength_152 || useLast_152){
			text_chars[9]=(char)valueList_152[aUnItCoUnTeR<listLength_152?aUnItCoUnTeR:listLength_152-1];

		}
		if(aUnItCoUnTeR<listLength_153 || useLast_153){
			text_chars[99]=(char)valueList_153[aUnItCoUnTeR<listLength_153?aUnItCoUnTeR:listLength_153-1];

		}
		if(aUnItCoUnTeR<listLength_154 || useLast_154){
			text_chars[127]=(char)valueList_154[aUnItCoUnTeR<listLength_154?aUnItCoUnTeR:listLength_154-1];

		}
		if(aUnItCoUnTeR<listLength_155 || useLast_155){
			text_chars[236]=(char)valueList_155[aUnItCoUnTeR<listLength_155?aUnItCoUnTeR:listLength_155-1];

		}
		if(aUnItCoUnTeR<listLength_156 || useLast_156){
			text_chars[139]=(char)valueList_156[aUnItCoUnTeR<listLength_156?aUnItCoUnTeR:listLength_156-1];

		}
		if(aUnItCoUnTeR<listLength_157 || useLast_157){
			text_chars[224]=(char)valueList_157[aUnItCoUnTeR<listLength_157?aUnItCoUnTeR:listLength_157-1];

		}
		if(aUnItCoUnTeR<listLength_158 || useLast_158){
			text_chars[75]=(char)valueList_158[aUnItCoUnTeR<listLength_158?aUnItCoUnTeR:listLength_158-1];

		}
		if(aUnItCoUnTeR<listLength_159 || useLast_159){
			text_chars[212]=(char)valueList_159[aUnItCoUnTeR<listLength_159?aUnItCoUnTeR:listLength_159-1];

		}
		if(aUnItCoUnTeR<listLength_160 || useLast_160){
			text_chars[87]=(char)valueList_160[aUnItCoUnTeR<listLength_160?aUnItCoUnTeR:listLength_160-1];

		}
		if(aUnItCoUnTeR<listLength_161 || useLast_161){
			text_chars[200]=(char)valueList_161[aUnItCoUnTeR<listLength_161?aUnItCoUnTeR:listLength_161-1];

		}
		if(aUnItCoUnTeR<listLength_162 || useLast_162){
			text_chars[19]=(char)valueList_162[aUnItCoUnTeR<listLength_162?aUnItCoUnTeR:listLength_162-1];

		}
		if(aUnItCoUnTeR<listLength_163 || useLast_163){
			text_chars[103]=(char)valueList_163[aUnItCoUnTeR<listLength_163?aUnItCoUnTeR:listLength_163-1];

		}
		if(aUnItCoUnTeR<listLength_164 || useLast_164){
			text_chars[115]=(char)valueList_164[aUnItCoUnTeR<listLength_164?aUnItCoUnTeR:listLength_164-1];

		}
		if(aUnItCoUnTeR<listLength_165 || useLast_165){
			text_chars[248]=(char)valueList_165[aUnItCoUnTeR<listLength_165?aUnItCoUnTeR:listLength_165-1];

		}
		if(aUnItCoUnTeR<listLength_166 || useLast_166){
			text_chars[194]=(char)valueList_166[aUnItCoUnTeR<listLength_166?aUnItCoUnTeR:listLength_166-1];

		}
		if(aUnItCoUnTeR<listLength_167 || useLast_167){
			text_chars[182]=(char)valueList_167[aUnItCoUnTeR<listLength_167?aUnItCoUnTeR:listLength_167-1];

		}
		if(aUnItCoUnTeR<listLength_168 || useLast_168){
			text_chars[170]=(char)valueList_168[aUnItCoUnTeR<listLength_168?aUnItCoUnTeR:listLength_168-1];

		}
		if(aUnItCoUnTeR<listLength_169 || useLast_169){
			text_chars[51]=(char)valueList_169[aUnItCoUnTeR<listLength_169?aUnItCoUnTeR:listLength_169-1];

		}
		if(aUnItCoUnTeR<listLength_170 || useLast_170){
			text_chars[63]=(char)valueList_170[aUnItCoUnTeR<listLength_170?aUnItCoUnTeR:listLength_170-1];

		}
		if(aUnItCoUnTeR<listLength_171 || useLast_171){
			text_chars[88]=(char)valueList_171[aUnItCoUnTeR<listLength_171?aUnItCoUnTeR:listLength_171-1];

		}
		if(aUnItCoUnTeR<listLength_172 || useLast_172){
			text_chars[116]=(char)valueList_172[aUnItCoUnTeR<listLength_172?aUnItCoUnTeR:listLength_172-1];

		}
		if(aUnItCoUnTeR<listLength_173 || useLast_173){
			text_chars[225]=(char)valueList_173[aUnItCoUnTeR<listLength_173?aUnItCoUnTeR:listLength_173-1];

		}
		if(aUnItCoUnTeR<listLength_174 || useLast_174){
			text_chars[8]=(char)valueList_174[aUnItCoUnTeR<listLength_174?aUnItCoUnTeR:listLength_174-1];

		}
		if(aUnItCoUnTeR<listLength_175 || useLast_175){
			text_chars[128]=(char)valueList_175[aUnItCoUnTeR<listLength_175?aUnItCoUnTeR:listLength_175-1];

		}
		if(aUnItCoUnTeR<listLength_176 || useLast_176){
			text_chars[213]=(char)valueList_176[aUnItCoUnTeR<listLength_176?aUnItCoUnTeR:listLength_176-1];

		}
		if(aUnItCoUnTeR<listLength_177 || useLast_177){
			text_chars[64]=(char)valueList_177[aUnItCoUnTeR<listLength_177?aUnItCoUnTeR:listLength_177-1];

		}
		if(aUnItCoUnTeR<listLength_178 || useLast_178){
			text_chars[201]=(char)valueList_178[aUnItCoUnTeR<listLength_178?aUnItCoUnTeR:listLength_178-1];

		}
		if(aUnItCoUnTeR<listLength_179 || useLast_179){
			text_chars[76]=(char)valueList_179[aUnItCoUnTeR<listLength_179?aUnItCoUnTeR:listLength_179-1];

		}
		if(aUnItCoUnTeR<listLength_180 || useLast_180){
			text_chars[196]=(char)valueList_180[aUnItCoUnTeR<listLength_180?aUnItCoUnTeR:listLength_180-1];

		}
		if(aUnItCoUnTeR<listLength_181 || useLast_181){
			text_chars[249]=(char)valueList_181[aUnItCoUnTeR<listLength_181?aUnItCoUnTeR:listLength_181-1];

		}
		if(aUnItCoUnTeR<listLength_182 || useLast_182){
			text_chars[104]=(char)valueList_182[aUnItCoUnTeR<listLength_182?aUnItCoUnTeR:listLength_182-1];

		}
		if(aUnItCoUnTeR<listLength_183 || useLast_183){
			text_chars[237]=(char)valueList_183[aUnItCoUnTeR<listLength_183?aUnItCoUnTeR:listLength_183-1];

		}
		if(aUnItCoUnTeR<listLength_184 || useLast_184){
			text_chars[195]=(char)valueList_184[aUnItCoUnTeR<listLength_184?aUnItCoUnTeR:listLength_184-1];

		}
		if(aUnItCoUnTeR<listLength_185 || useLast_185){
			text_chars[183]=(char)valueList_185[aUnItCoUnTeR<listLength_185?aUnItCoUnTeR:listLength_185-1];

		}
		if(aUnItCoUnTeR<listLength_186 || useLast_186){
			text_chars[171]=(char)valueList_186[aUnItCoUnTeR<listLength_186?aUnItCoUnTeR:listLength_186-1];

		}
		if(aUnItCoUnTeR<listLength_187 || useLast_187){
			text_chars[40]=(char)valueList_187[aUnItCoUnTeR<listLength_187?aUnItCoUnTeR:listLength_187-1];

		}
		if(aUnItCoUnTeR<listLength_188 || useLast_188){
			text_chars[52]=(char)valueList_188[aUnItCoUnTeR<listLength_188?aUnItCoUnTeR:listLength_188-1];

		}
		if(aUnItCoUnTeR<listLength_189 || useLast_189){
			text_chars[105]=(char)valueList_189[aUnItCoUnTeR<listLength_189?aUnItCoUnTeR:listLength_189-1];

		}
		if(aUnItCoUnTeR<listLength_190 || useLast_190){
			text_chars[214]=(char)valueList_190[aUnItCoUnTeR<listLength_190?aUnItCoUnTeR:listLength_190-1];

		}
		if(aUnItCoUnTeR<listLength_191 || useLast_191){
			text_chars[117]=(char)valueList_191[aUnItCoUnTeR<listLength_191?aUnItCoUnTeR:listLength_191-1];

		}
		if(aUnItCoUnTeR<listLength_192 || useLast_192){
			text_chars[202]=(char)valueList_192[aUnItCoUnTeR<listLength_192?aUnItCoUnTeR:listLength_192-1];

		}
		if(aUnItCoUnTeR<listLength_193 || useLast_193){
			text_chars[7]=(char)valueList_193[aUnItCoUnTeR<listLength_193?aUnItCoUnTeR:listLength_193-1];

		}
		if(aUnItCoUnTeR<listLength_194 || useLast_194){
			text_chars[129]=(char)valueList_194[aUnItCoUnTeR<listLength_194?aUnItCoUnTeR:listLength_194-1];

		}
		if(aUnItCoUnTeR<listLength_195 || useLast_195){
			text_chars[37]=(char)valueList_195[aUnItCoUnTeR<listLength_195?aUnItCoUnTeR:listLength_195-1];

		}
		if(aUnItCoUnTeR<listLength_196 || useLast_196){
			text_chars[49]=(char)valueList_196[aUnItCoUnTeR<listLength_196?aUnItCoUnTeR:listLength_196-1];

		}
		if(aUnItCoUnTeR<listLength_197 || useLast_197){
			text_chars[13]=(char)valueList_197[aUnItCoUnTeR<listLength_197?aUnItCoUnTeR:listLength_197-1];

		}
		if(aUnItCoUnTeR<listLength_198 || useLast_198){
			text_chars[197]=(char)valueList_198[aUnItCoUnTeR<listLength_198?aUnItCoUnTeR:listLength_198-1];

		}
		if(aUnItCoUnTeR<listLength_199 || useLast_199){
			text_chars[25]=(char)valueList_199[aUnItCoUnTeR<listLength_199?aUnItCoUnTeR:listLength_199-1];

		}
		if(aUnItCoUnTeR<listLength_200 || useLast_200){
			text_chars[185]=(char)valueList_200[aUnItCoUnTeR<listLength_200?aUnItCoUnTeR:listLength_200-1];

		}
		if(aUnItCoUnTeR<listLength_201 || useLast_201){
			text_chars[238]=(char)valueList_201[aUnItCoUnTeR<listLength_201?aUnItCoUnTeR:listLength_201-1];

		}
		if(aUnItCoUnTeR<listLength_202 || useLast_202){
			text_chars[226]=(char)valueList_202[aUnItCoUnTeR<listLength_202?aUnItCoUnTeR:listLength_202-1];

		}
		if(aUnItCoUnTeR<listLength_203 || useLast_203){
			text_chars[160]=(char)valueList_203[aUnItCoUnTeR<listLength_203?aUnItCoUnTeR:listLength_203-1];

		}
		if(aUnItCoUnTeR<listLength_204 || useLast_204){
			text_chars[184]=(char)valueList_204[aUnItCoUnTeR<listLength_204?aUnItCoUnTeR:listLength_204-1];

		}
		if(aUnItCoUnTeR<listLength_205 || useLast_205){
			text_chars[81]=(char)valueList_205[aUnItCoUnTeR<listLength_205?aUnItCoUnTeR:listLength_205-1];

		}
		if(aUnItCoUnTeR<listLength_206 || useLast_206){
			text_chars[172]=(char)valueList_206[aUnItCoUnTeR<listLength_206?aUnItCoUnTeR:listLength_206-1];

		}
		if(aUnItCoUnTeR<listLength_207 || useLast_207){
			text_chars[93]=(char)valueList_207[aUnItCoUnTeR<listLength_207?aUnItCoUnTeR:listLength_207-1];

		}
		if(aUnItCoUnTeR<listLength_208 || useLast_208){
			text_chars[203]=(char)valueList_208[aUnItCoUnTeR<listLength_208?aUnItCoUnTeR:listLength_208-1];

		}
		if(aUnItCoUnTeR<listLength_209 || useLast_209){
			text_chars[106]=(char)valueList_209[aUnItCoUnTeR<listLength_209?aUnItCoUnTeR:listLength_209-1];

		}
		if(aUnItCoUnTeR<listLength_210 || useLast_210){
			text_chars[118]=(char)valueList_210[aUnItCoUnTeR<listLength_210?aUnItCoUnTeR:listLength_210-1];

		}
		if(aUnItCoUnTeR<listLength_211 || useLast_211){
			text_chars[6]=(char)valueList_211[aUnItCoUnTeR<listLength_211?aUnItCoUnTeR:listLength_211-1];

		}
		if(aUnItCoUnTeR<listLength_212 || useLast_212){
			ulen_PTRTO[0]=(unsigned int)valueList_212[aUnItCoUnTeR<listLength_212?aUnItCoUnTeR:listLength_212-1];

		}
		if(aUnItCoUnTeR<listLength_213 || useLast_213){
			text_chars[26]=(char)valueList_213[aUnItCoUnTeR<listLength_213?aUnItCoUnTeR:listLength_213-1];

		}
		if(aUnItCoUnTeR<listLength_214 || useLast_214){
			text_chars[38]=(char)valueList_214[aUnItCoUnTeR<listLength_214?aUnItCoUnTeR:listLength_214-1];

		}
		if(aUnItCoUnTeR<listLength_215 || useLast_215){
			text_chars[198]=(char)valueList_215[aUnItCoUnTeR<listLength_215?aUnItCoUnTeR:listLength_215-1];

		}
		if(aUnItCoUnTeR<listLength_216 || useLast_216){
			text_chars[186]=(char)valueList_216[aUnItCoUnTeR<listLength_216?aUnItCoUnTeR:listLength_216-1];

		}
		if(aUnItCoUnTeR<listLength_217 || useLast_217){
			text_chars[14]=(char)valueList_217[aUnItCoUnTeR<listLength_217?aUnItCoUnTeR:listLength_217-1];

		}
		if(aUnItCoUnTeR<listLength_218 || useLast_218){
			text_chars[174]=(char)valueList_218[aUnItCoUnTeR<listLength_218?aUnItCoUnTeR:listLength_218-1];

		}
		if(aUnItCoUnTeR<listLength_219 || useLast_219){
			text_chars[239]=(char)valueList_219[aUnItCoUnTeR<listLength_219?aUnItCoUnTeR:listLength_219-1];

		}
		if(aUnItCoUnTeR<listLength_220 || useLast_220){
			text_chars[227]=(char)valueList_220[aUnItCoUnTeR<listLength_220?aUnItCoUnTeR:listLength_220-1];

		}
		if(aUnItCoUnTeR<listLength_221 || useLast_221){
			text_chars[215]=(char)valueList_221[aUnItCoUnTeR<listLength_221?aUnItCoUnTeR:listLength_221-1];

		}
		if(aUnItCoUnTeR<listLength_222 || useLast_222){
			text_chars[161]=(char)valueList_222[aUnItCoUnTeR<listLength_222?aUnItCoUnTeR:listLength_222-1];

		}
		if(aUnItCoUnTeR<listLength_223 || useLast_223){
			text_chars[173]=(char)valueList_223[aUnItCoUnTeR<listLength_223?aUnItCoUnTeR:listLength_223-1];

		}
		if(aUnItCoUnTeR<listLength_224 || useLast_224){
			text_chars[70]=(char)valueList_224[aUnItCoUnTeR<listLength_224?aUnItCoUnTeR:listLength_224-1];

		}
		if(aUnItCoUnTeR<listLength_225 || useLast_225){
			text_chars[82]=(char)valueList_225[aUnItCoUnTeR<listLength_225?aUnItCoUnTeR:listLength_225-1];

		}
		if(aUnItCoUnTeR<listLength_226 || useLast_226){
			text_chars[94]=(char)valueList_226[aUnItCoUnTeR<listLength_226?aUnItCoUnTeR:listLength_226-1];

		}
		if(aUnItCoUnTeR<listLength_227 || useLast_227){
			text_chars[107]=(char)valueList_227[aUnItCoUnTeR<listLength_227?aUnItCoUnTeR:listLength_227-1];

		}
		if(aUnItCoUnTeR<listLength_228 || useLast_228){
			text_chars[119]=(char)valueList_228[aUnItCoUnTeR<listLength_228?aUnItCoUnTeR:listLength_228-1];

		}
		if(aUnItCoUnTeR<listLength_229 || useLast_229){
			text_chars[15]=(char)valueList_229[aUnItCoUnTeR<listLength_229?aUnItCoUnTeR:listLength_229-1];

		}
		if(aUnItCoUnTeR<listLength_230 || useLast_230){
			text_chars[199]=(char)valueList_230[aUnItCoUnTeR<listLength_230?aUnItCoUnTeR:listLength_230-1];

		}
		if(aUnItCoUnTeR<listLength_231 || useLast_231){
			text_chars[27]=(char)valueList_231[aUnItCoUnTeR<listLength_231?aUnItCoUnTeR:listLength_231-1];

		}
		if(aUnItCoUnTeR<listLength_232 || useLast_232){
			text_chars[187]=(char)valueList_232[aUnItCoUnTeR<listLength_232?aUnItCoUnTeR:listLength_232-1];

		}
		if(aUnItCoUnTeR<listLength_233 || useLast_233){
			text_chars[175]=(char)valueList_233[aUnItCoUnTeR<listLength_233?aUnItCoUnTeR:listLength_233-1];

		}
		if(aUnItCoUnTeR<listLength_234 || useLast_234){
			text_chars[163]=(char)valueList_234[aUnItCoUnTeR<listLength_234?aUnItCoUnTeR:listLength_234-1];

		}
		if(aUnItCoUnTeR<listLength_235 || useLast_235){
			text_chars[39]=(char)valueList_235[aUnItCoUnTeR<listLength_235?aUnItCoUnTeR:listLength_235-1];

		}
		if(aUnItCoUnTeR<listLength_236 || useLast_236){
			text_chars[5]=(char)valueList_236[aUnItCoUnTeR<listLength_236?aUnItCoUnTeR:listLength_236-1];

		}
		if(aUnItCoUnTeR<listLength_237 || useLast_237){
			text_chars[228]=(char)valueList_237[aUnItCoUnTeR<listLength_237?aUnItCoUnTeR:listLength_237-1];

		}
		if(aUnItCoUnTeR<listLength_238 || useLast_238){
			text_chars[216]=(char)valueList_238[aUnItCoUnTeR<listLength_238?aUnItCoUnTeR:listLength_238-1];

		}
		if(aUnItCoUnTeR<listLength_239 || useLast_239){
			text_chars[204]=(char)valueList_239[aUnItCoUnTeR<listLength_239?aUnItCoUnTeR:listLength_239-1];

		}
		if(aUnItCoUnTeR<listLength_240 || useLast_240){
			text_chars[150]=(char)valueList_240[aUnItCoUnTeR<listLength_240?aUnItCoUnTeR:listLength_240-1];

		}
		if(aUnItCoUnTeR<listLength_241 || useLast_241){
			text_chars[162]=(char)valueList_241[aUnItCoUnTeR<listLength_241?aUnItCoUnTeR:listLength_241-1];

		}
		if(aUnItCoUnTeR<listLength_242 || useLast_242){
			text_chars[95]=(char)valueList_242[aUnItCoUnTeR<listLength_242?aUnItCoUnTeR:listLength_242-1];

		}
		if(aUnItCoUnTeR<listLength_243 || useLast_243){
			text_chars[71]=(char)valueList_243[aUnItCoUnTeR<listLength_243?aUnItCoUnTeR:listLength_243-1];

		}
		if(aUnItCoUnTeR<listLength_244 || useLast_244){
			text_chars[83]=(char)valueList_244[aUnItCoUnTeR<listLength_244?aUnItCoUnTeR:listLength_244-1];

		}
		if(aUnItCoUnTeR<listLength_245 || useLast_245){
			text_chars[108]=(char)valueList_245[aUnItCoUnTeR<listLength_245?aUnItCoUnTeR:listLength_245-1];

		}
		if(aUnItCoUnTeR<listLength_246 || useLast_246){
			text_chars[188]=(char)valueList_246[aUnItCoUnTeR<listLength_246?aUnItCoUnTeR:listLength_246-1];

		}
		if(aUnItCoUnTeR<listLength_247 || useLast_247){
			text_chars[16]=(char)valueList_247[aUnItCoUnTeR<listLength_247?aUnItCoUnTeR:listLength_247-1];

		}
		if(aUnItCoUnTeR<listLength_248 || useLast_248){
			text_chars[176]=(char)valueList_248[aUnItCoUnTeR<listLength_248?aUnItCoUnTeR:listLength_248-1];

		}
		if(aUnItCoUnTeR<listLength_249 || useLast_249){
			text_chars[152]=(char)valueList_249[aUnItCoUnTeR<listLength_249?aUnItCoUnTeR:listLength_249-1];

		}
		if(aUnItCoUnTeR<listLength_250 || useLast_250){
			text_chars[164]=(char)valueList_250[aUnItCoUnTeR<listLength_250?aUnItCoUnTeR:listLength_250-1];

		}
		if(aUnItCoUnTeR<listLength_251 || useLast_251){
			text_chars[28]=(char)valueList_251[aUnItCoUnTeR<listLength_251?aUnItCoUnTeR:listLength_251-1];

		}
		if(aUnItCoUnTeR<listLength_252 || useLast_252){
			text_chars[229]=(char)valueList_252[aUnItCoUnTeR<listLength_252?aUnItCoUnTeR:listLength_252-1];

		}
		if(aUnItCoUnTeR<listLength_253 || useLast_253){
			text_chars[4]=(char)valueList_253[aUnItCoUnTeR<listLength_253?aUnItCoUnTeR:listLength_253-1];

		}
		if(aUnItCoUnTeR<listLength_254 || useLast_254){
			text_chars[217]=(char)valueList_254[aUnItCoUnTeR<listLength_254?aUnItCoUnTeR:listLength_254-1];

		}
		if(aUnItCoUnTeR<listLength_255 || useLast_255){
			text_chars[205]=(char)valueList_255[aUnItCoUnTeR<listLength_255?aUnItCoUnTeR:listLength_255-1];

		}
		if(aUnItCoUnTeR<listLength_256 || useLast_256){
			text_chars[151]=(char)valueList_256[aUnItCoUnTeR<listLength_256?aUnItCoUnTeR:listLength_256-1];

		}
		if(aUnItCoUnTeR<listLength_257 || useLast_257){
			text_chars[84]=(char)valueList_257[aUnItCoUnTeR<listLength_257?aUnItCoUnTeR:listLength_257-1];

		}
		if(aUnItCoUnTeR<listLength_258 || useLast_258){
			text_chars[96]=(char)valueList_258[aUnItCoUnTeR<listLength_258?aUnItCoUnTeR:listLength_258-1];

		}
		if(aUnItCoUnTeR<listLength_259 || useLast_259){
			text_chars[60]=(char)valueList_259[aUnItCoUnTeR<listLength_259?aUnItCoUnTeR:listLength_259-1];

		}
		if(aUnItCoUnTeR<listLength_260 || useLast_260){
			text_chars[72]=(char)valueList_260[aUnItCoUnTeR<listLength_260?aUnItCoUnTeR:listLength_260-1];

		}
		returnValue = looks_ascii(buf,nbytes,ubuf,ulen);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("looks_ascii","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("looks_ascii","ubuf[2]",99,ubuf[2])
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("looks_ascii","ubuf[1]",98,ubuf[1])
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("looks_ascii","ubuf[0]",97,ubuf[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("looks_ascii","ulen[0]",3,ulen[0])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_looks_ascii_5\n");
}

void test_looks_ascii_6(void){
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
	unsigned char *valueList_0[]={(unsigned char *)"A"};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)ulen_PTRTO};
	unsigned int listLength_1=1;
	file_unichar_t *valueList_2[]={(file_unichar_t *)ubuf_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={1};
	unsigned int listLength_3=1;
	char valueList_4[]={0};
	unsigned int listLength_4=1;
	char valueList_5[]={0};
	unsigned int listLength_5=1;
	char valueList_6[]={0};
	unsigned int listLength_6=1;
	char valueList_7[]={0};
	unsigned int listLength_7=1;
	char valueList_8[]={0};
	unsigned int listLength_8=1;
	char valueList_9[]={0};
	unsigned int listLength_9=1;
	char valueList_10[]={0};
	unsigned int listLength_10=1;
	char valueList_11[]={0};
	unsigned int listLength_11=1;
	char valueList_12[]={0};
	unsigned int listLength_12=1;
	char valueList_13[]={0};
	unsigned int listLength_13=1;
	char valueList_14[]={0};
	unsigned int listLength_14=1;
	char valueList_15[]={0};
	unsigned int listLength_15=1;
	char valueList_16[]={0};
	unsigned int listLength_16=1;
	char valueList_17[]={0};
	unsigned int listLength_17=1;
	char valueList_18[]={0};
	unsigned int listLength_18=1;
	char valueList_19[]={0};
	unsigned int listLength_19=1;
	char valueList_20[]={0};
	unsigned int listLength_20=1;
	char valueList_21[]={0};
	unsigned int listLength_21=1;
	char valueList_22[]={0};
	unsigned int listLength_22=1;
	char valueList_23[]={0};
	unsigned int listLength_23=1;
	char valueList_24[]={0};
	unsigned int listLength_24=1;
	char valueList_25[]={0};
	unsigned int listLength_25=1;
	char valueList_26[]={0};
	unsigned int listLength_26=1;
	char valueList_27[]={0};
	unsigned int listLength_27=1;
	char valueList_28[]={0};
	unsigned int listLength_28=1;
	char valueList_29[]={0};
	unsigned int listLength_29=1;
	char valueList_30[]={0};
	unsigned int listLength_30=1;
	char valueList_31[]={ 1};
	unsigned int listLength_31=1;
	char valueList_32[]={0};
	unsigned int listLength_32=1;
	char valueList_33[]={0};
	unsigned int listLength_33=1;
	char valueList_34[]={0};
	unsigned int listLength_34=1;
	char valueList_35[]={0};
	unsigned int listLength_35=1;
	char valueList_36[]={0};
	unsigned int listLength_36=1;
	char valueList_37[]={0};
	unsigned int listLength_37=1;
	char valueList_38[]={0};
	unsigned int listLength_38=1;
	char valueList_39[]={0};
	unsigned int listLength_39=1;
	char valueList_40[]={0};
	unsigned int listLength_40=1;
	char valueList_41[]={0};
	unsigned int listLength_41=1;
	char valueList_42[]={ 1};
	unsigned int listLength_42=1;
	char valueList_43[]={0};
	unsigned int listLength_43=1;
	char valueList_44[]={0};
	unsigned int listLength_44=1;
	char valueList_45[]={0};
	unsigned int listLength_45=1;
	char valueList_46[]={0};
	unsigned int listLength_46=1;
	char valueList_47[]={0};
	unsigned int listLength_47=1;
	char valueList_48[]={0};
	unsigned int listLength_48=1;
	char valueList_49[]={0};
	unsigned int listLength_49=1;
	char valueList_50[]={0};
	unsigned int listLength_50=1;
	char valueList_51[]={0};
	unsigned int listLength_51=1;
	char valueList_52[]={0};
	unsigned int listLength_52=1;
	char valueList_53[]={0};
	unsigned int listLength_53=1;
	char valueList_54[]={0};
	unsigned int listLength_54=1;
	char valueList_55[]={1};
	unsigned int listLength_55=1;
	char valueList_56[]={0};
	unsigned int listLength_56=1;
	char valueList_57[]={0};
	unsigned int listLength_57=1;
	char valueList_58[]={0};
	unsigned int listLength_58=1;
	char valueList_59[]={0};
	unsigned int listLength_59=1;
	char valueList_60[]={0};
	unsigned int listLength_60=1;
	char valueList_61[]={0};
	unsigned int listLength_61=1;
	char valueList_62[]={0};
	unsigned int listLength_62=1;
	char valueList_63[]={0};
	unsigned int listLength_63=1;
	char valueList_64[]={0};
	unsigned int listLength_64=1;
	char valueList_65[]={0};
	unsigned int listLength_65=1;
	char valueList_66[]={0};
	unsigned int listLength_66=1;
	char valueList_67[]={0};
	unsigned int listLength_67=1;
	char valueList_68[]={0};
	unsigned int listLength_68=1;
	char valueList_69[]={0};
	unsigned int listLength_69=1;
	char valueList_70[]={0};
	unsigned int listLength_70=1;
	char valueList_71[]={0};
	unsigned int listLength_71=1;
	char valueList_72[]={0};
	unsigned int listLength_72=1;
	char valueList_73[]={0};
	unsigned int listLength_73=1;
	char valueList_74[]={0};
	unsigned int listLength_74=1;
	char valueList_75[]={0};
	unsigned int listLength_75=1;
	char valueList_76[]={0};
	unsigned int listLength_76=1;
	char valueList_77[]={0};
	unsigned int listLength_77=1;
	char valueList_78[]={0};
	unsigned int listLength_78=1;
	char valueList_79[]={0};
	unsigned int listLength_79=1;
	char valueList_80[]={0};
	unsigned int listLength_80=1;
	char valueList_81[]={0};
	unsigned int listLength_81=1;
	char valueList_82[]={0};
	unsigned int listLength_82=1;
	char valueList_83[]={0};
	unsigned int listLength_83=1;
	char valueList_84[]={0};
	unsigned int listLength_84=1;
	char valueList_85[]={0};
	unsigned int listLength_85=1;
	char valueList_86[]={0};
	unsigned int listLength_86=1;
	char valueList_87[]={0};
	unsigned int listLength_87=1;
	char valueList_88[]={0};
	unsigned int listLength_88=1;
	char valueList_89[]={0};
	unsigned int listLength_89=1;
	char valueList_90[]={0};
	unsigned int listLength_90=1;
	char valueList_91[]={0};
	unsigned int listLength_91=1;
	char valueList_92[]={0};
	unsigned int listLength_92=1;
	char valueList_93[]={0};
	unsigned int listLength_93=1;
	char valueList_94[]={0};
	unsigned int listLength_94=1;
	char valueList_95[]={0};
	unsigned int listLength_95=1;
	char valueList_96[]={0};
	unsigned int listLength_96=1;
	char valueList_97[]={0};
	unsigned int listLength_97=1;
	char valueList_98[]={0};
	unsigned int listLength_98=1;
	char valueList_99[]={0};
	unsigned int listLength_99=1;
	char valueList_100[]={0};
	unsigned int listLength_100=1;
	char valueList_101[]={0};
	unsigned int listLength_101=1;
	char valueList_102[]={0};
	unsigned int listLength_102=1;
	char valueList_103[]={0};
	unsigned int listLength_103=1;
	char valueList_104[]={0};
	unsigned int listLength_104=1;
	char valueList_105[]={0};
	unsigned int listLength_105=1;
	char valueList_106[]={0};
	unsigned int listLength_106=1;
	char valueList_107[]={0};
	unsigned int listLength_107=1;
	char valueList_108[]={0};
	unsigned int listLength_108=1;
	char valueList_109[]={0};
	unsigned int listLength_109=1;
	char valueList_110[]={0};
	unsigned int listLength_110=1;
	char valueList_111[]={0};
	unsigned int listLength_111=1;
	char valueList_112[]={0};
	unsigned int listLength_112=1;
	char valueList_113[]={0};
	unsigned int listLength_113=1;
	char valueList_114[]={0};
	unsigned int listLength_114=1;
	char valueList_115[]={0};
	unsigned int listLength_115=1;
	char valueList_116[]={0};
	unsigned int listLength_116=1;
	char valueList_117[]={0};
	unsigned int listLength_117=1;
	char valueList_118[]={0};
	unsigned int listLength_118=1;
	char valueList_119[]={0};
	unsigned int listLength_119=1;
	char valueList_120[]={0};
	unsigned int listLength_120=1;
	char valueList_121[]={0};
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
	char valueList_127[]={0};
	unsigned int listLength_127=1;
	unsigned long int valueList_128[]={0};
	unsigned int listLength_128=1;
	char valueList_129[]={0};
	unsigned int listLength_129=1;
	char valueList_130[]={0};
	unsigned int listLength_130=1;
	char valueList_131[]={0};
	unsigned int listLength_131=1;
	char valueList_132[]={0};
	unsigned int listLength_132=1;
	char valueList_133[]={0};
	unsigned int listLength_133=1;
	char valueList_134[]={0};
	unsigned int listLength_134=1;
	char valueList_135[]={0};
	unsigned int listLength_135=1;
	char valueList_136[]={0};
	unsigned int listLength_136=1;
	char valueList_137[]={0};
	unsigned int listLength_137=1;
	char valueList_138[]={0};
	unsigned int listLength_138=1;
	char valueList_139[]={0};
	unsigned int listLength_139=1;
	char valueList_140[]={0};
	unsigned int listLength_140=1;
	char valueList_141[]={0};
	unsigned int listLength_141=1;
	char valueList_142[]={0};
	unsigned int listLength_142=1;
	char valueList_143[]={0};
	unsigned int listLength_143=1;
	char valueList_144[]={0};
	unsigned int listLength_144=1;
	char valueList_145[]={0};
	unsigned int listLength_145=1;
	char valueList_146[]={0};
	unsigned int listLength_146=1;
	char valueList_147[]={0};
	unsigned int listLength_147=1;
	char valueList_148[]={0};
	unsigned int listLength_148=1;
	char valueList_149[]={0};
	unsigned int listLength_149=1;
	char valueList_150[]={0};
	unsigned int listLength_150=1;
	char valueList_151[]={0};
	unsigned int listLength_151=1;
	char valueList_152[]={0};
	unsigned int listLength_152=1;
	char valueList_153[]={0};
	unsigned int listLength_153=1;
	char valueList_154[]={0};
	unsigned int listLength_154=1;
	char valueList_155[]={0};
	unsigned int listLength_155=1;
	char valueList_156[]={0};
	unsigned int listLength_156=1;
	char valueList_157[]={0};
	unsigned int listLength_157=1;
	char valueList_158[]={0};
	unsigned int listLength_158=1;
	char valueList_159[]={0};
	unsigned int listLength_159=1;
	char valueList_160[]={0};
	unsigned int listLength_160=1;
	char valueList_161[]={0};
	unsigned int listLength_161=1;
	char valueList_162[]={0};
	unsigned int listLength_162=1;
	char valueList_163[]={0};
	unsigned int listLength_163=1;
	char valueList_164[]={0};
	unsigned int listLength_164=1;
	char valueList_165[]={0};
	unsigned int listLength_165=1;
	char valueList_166[]={0};
	unsigned int listLength_166=1;
	char valueList_167[]={0};
	unsigned int listLength_167=1;
	char valueList_168[]={0};
	unsigned int listLength_168=1;
	char valueList_169[]={0};
	unsigned int listLength_169=1;
	char valueList_170[]={0};
	unsigned int listLength_170=1;
	char valueList_171[]={0};
	unsigned int listLength_171=1;
	char valueList_172[]={0};
	unsigned int listLength_172=1;
	char valueList_173[]={0};
	unsigned int listLength_173=1;
	char valueList_174[]={0};
	unsigned int listLength_174=1;
	char valueList_175[]={0};
	unsigned int listLength_175=1;
	char valueList_176[]={0};
	unsigned int listLength_176=1;
	char valueList_177[]={0};
	unsigned int listLength_177=1;
	char valueList_178[]={0};
	unsigned int listLength_178=1;
	char valueList_179[]={0};
	unsigned int listLength_179=1;
	char valueList_180[]={0};
	unsigned int listLength_180=1;
	char valueList_181[]={0};
	unsigned int listLength_181=1;
	char valueList_182[]={0};
	unsigned int listLength_182=1;
	char valueList_183[]={0};
	unsigned int listLength_183=1;
	char valueList_184[]={0};
	unsigned int listLength_184=1;
	char valueList_185[]={0};
	unsigned int listLength_185=1;
	char valueList_186[]={0};
	unsigned int listLength_186=1;
	char valueList_187[]={0};
	unsigned int listLength_187=1;
	char valueList_188[]={0};
	unsigned int listLength_188=1;
	char valueList_189[]={0};
	unsigned int listLength_189=1;
	char valueList_190[]={0};
	unsigned int listLength_190=1;
	char valueList_191[]={0};
	unsigned int listLength_191=1;
	char valueList_192[]={0};
	unsigned int listLength_192=1;
	char valueList_193[]={0};
	unsigned int listLength_193=1;
	char valueList_194[]={0};
	unsigned int listLength_194=1;
	char valueList_195[]={0};
	unsigned int listLength_195=1;
	char valueList_196[]={0};
	unsigned int listLength_196=1;
	char valueList_197[]={0};
	unsigned int listLength_197=1;
	char valueList_198[]={0};
	unsigned int listLength_198=1;
	char valueList_199[]={0};
	unsigned int listLength_199=1;
	char valueList_200[]={0};
	unsigned int listLength_200=1;
	char valueList_201[]={0};
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
	char valueList_207[]={0};
	unsigned int listLength_207=1;
	char valueList_208[]={0};
	unsigned int listLength_208=1;
	char valueList_209[]={0};
	unsigned int listLength_209=1;
	char valueList_210[]={0};
	unsigned int listLength_210=1;
	char valueList_211[]={0};
	unsigned int listLength_211=1;
	unsigned int valueList_212[]={0};
	unsigned int listLength_212=1;
	char valueList_213[]={0};
	unsigned int listLength_213=1;
	char valueList_214[]={0};
	unsigned int listLength_214=1;
	char valueList_215[]={0};
	unsigned int listLength_215=1;
	char valueList_216[]={0};
	unsigned int listLength_216=1;
	char valueList_217[]={0};
	unsigned int listLength_217=1;
	char valueList_218[]={0};
	unsigned int listLength_218=1;
	char valueList_219[]={0};
	unsigned int listLength_219=1;
	char valueList_220[]={0};
	unsigned int listLength_220=1;
	char valueList_221[]={0};
	unsigned int listLength_221=1;
	char valueList_222[]={0};
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
	char valueList_229[]={0};
	unsigned int listLength_229=1;
	char valueList_230[]={0};
	unsigned int listLength_230=1;
	char valueList_231[]={0};
	unsigned int listLength_231=1;
	char valueList_232[]={0};
	unsigned int listLength_232=1;
	char valueList_233[]={0};
	unsigned int listLength_233=1;
	char valueList_234[]={0};
	unsigned int listLength_234=1;
	char valueList_235[]={0};
	unsigned int listLength_235=1;
	char valueList_236[]={0};
	unsigned int listLength_236=1;
	char valueList_237[]={0};
	unsigned int listLength_237=1;
	char valueList_238[]={0};
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
	char valueList_245[]={0};
	unsigned int listLength_245=1;
	char valueList_246[]={0};
	unsigned int listLength_246=1;
	char valueList_247[]={0};
	unsigned int listLength_247=1;
	char valueList_248[]={0};
	unsigned int listLength_248=1;
	char valueList_249[]={0};
	unsigned int listLength_249=1;
	char valueList_250[]={0};
	unsigned int listLength_250=1;
	char valueList_251[]={0};
	unsigned int listLength_251=1;
	char valueList_252[]={0};
	unsigned int listLength_252=1;
	char valueList_253[]={0};
	unsigned int listLength_253=1;
	char valueList_254[]={0};
	unsigned int listLength_254=1;
	char valueList_255[]={0};
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_looks_ascii_6,false,0\n");
	aunit_printf("#CASE_START_test_looks_ascii_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ulen=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ubuf=(file_unichar_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			nbytes=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			text_chars[33]=(char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			text_chars[45]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			text_chars[21]=(char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			text_chars[189]=(char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			text_chars[109]=(char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			text_chars[177]=(char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			text_chars[57]=(char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			text_chars[69]=(char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			text_chars[141]=(char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			text_chars[153]=(char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			text_chars[165]=(char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			text_chars[218]=(char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			text_chars[206]=(char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			text_chars[140]=(char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			text_chars[22]=(char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			text_chars[34]=(char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			text_chars[10]=(char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			text_chars[178]=(char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			text_chars[46]=(char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			text_chars[58]=(char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			text_chars[251]=(char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			text_chars[130]=(char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			text_chars[142]=(char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			text_chars[154]=(char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			text_chars[166]=(char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			text_chars[219]=(char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			text_chars[207]=(char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			text_chars[2]=(char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			text_chars[250]=(char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			text_chars[90]=(char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			text_chars[11]=(char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			text_chars[23]=(char)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			text_chars[179]=(char)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			text_chars[59]=(char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			text_chars[35]=(char)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			text_chars[252]=(char)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			text_chars[47]=(char)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			text_chars[240]=(char)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			text_chars[1]=(char)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			text_chars[131]=(char)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			text_chars[143]=(char)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			text_chars[155]=(char)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			text_chars[208]=(char)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			text_chars[167]=(char)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			text_chars[91]=(char)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		if(aUnItCoUnTeR<listLength_49 || useLast_49){
			text_chars[12]=(char)valueList_49[aUnItCoUnTeR<listLength_49?aUnItCoUnTeR:listLength_49-1];

		}
		if(aUnItCoUnTeR<listLength_50 || useLast_50){
			text_chars[48]=(char)valueList_50[aUnItCoUnTeR<listLength_50?aUnItCoUnTeR:listLength_50-1];

		}
		if(aUnItCoUnTeR<listLength_51 || useLast_51){
			text_chars[253]=(char)valueList_51[aUnItCoUnTeR<listLength_51?aUnItCoUnTeR:listLength_51-1];

		}
		if(aUnItCoUnTeR<listLength_52 || useLast_52){
			text_chars[24]=(char)valueList_52[aUnItCoUnTeR<listLength_52?aUnItCoUnTeR:listLength_52-1];

		}
		if(aUnItCoUnTeR<listLength_53 || useLast_53){
			text_chars[241]=(char)valueList_53[aUnItCoUnTeR<listLength_53?aUnItCoUnTeR:listLength_53-1];

		}
		if(aUnItCoUnTeR<listLength_54 || useLast_54){
			text_chars[36]=(char)valueList_54[aUnItCoUnTeR<listLength_54?aUnItCoUnTeR:listLength_54-1];

		}
		if(aUnItCoUnTeR<listLength_55 || useLast_55){
			text_chars[0]=(char)valueList_55[aUnItCoUnTeR<listLength_55?aUnItCoUnTeR:listLength_55-1];

		}
		if(aUnItCoUnTeR<listLength_56 || useLast_56){
			text_chars[120]=(char)valueList_56[aUnItCoUnTeR<listLength_56?aUnItCoUnTeR:listLength_56-1];

		}
		if(aUnItCoUnTeR<listLength_57 || useLast_57){
			text_chars[132]=(char)valueList_57[aUnItCoUnTeR<listLength_57?aUnItCoUnTeR:listLength_57-1];

		}
		if(aUnItCoUnTeR<listLength_58 || useLast_58){
			text_chars[209]=(char)valueList_58[aUnItCoUnTeR<listLength_58?aUnItCoUnTeR:listLength_58-1];

		}
		if(aUnItCoUnTeR<listLength_59 || useLast_59){
			text_chars[144]=(char)valueList_59[aUnItCoUnTeR<listLength_59?aUnItCoUnTeR:listLength_59-1];

		}
		if(aUnItCoUnTeR<listLength_60 || useLast_60){
			text_chars[156]=(char)valueList_60[aUnItCoUnTeR<listLength_60?aUnItCoUnTeR:listLength_60-1];

		}
		if(aUnItCoUnTeR<listLength_61 || useLast_61){
			text_chars[168]=(char)valueList_61[aUnItCoUnTeR<listLength_61?aUnItCoUnTeR:listLength_61-1];

		}
		if(aUnItCoUnTeR<listLength_62 || useLast_62){
			text_chars[80]=(char)valueList_62[aUnItCoUnTeR<listLength_62?aUnItCoUnTeR:listLength_62-1];

		}
		if(aUnItCoUnTeR<listLength_63 || useLast_63){
			text_chars[92]=(char)valueList_63[aUnItCoUnTeR<listLength_63?aUnItCoUnTeR:listLength_63-1];

		}
		if(aUnItCoUnTeR<listLength_64 || useLast_64){
			text_chars[77]=(char)valueList_64[aUnItCoUnTeR<listLength_64?aUnItCoUnTeR:listLength_64-1];

		}
		if(aUnItCoUnTeR<listLength_65 || useLast_65){
			text_chars[89]=(char)valueList_65[aUnItCoUnTeR<listLength_65?aUnItCoUnTeR:listLength_65-1];

		}
		if(aUnItCoUnTeR<listLength_66 || useLast_66){
			text_chars[53]=(char)valueList_66[aUnItCoUnTeR<listLength_66?aUnItCoUnTeR:listLength_66-1];

		}
		if(aUnItCoUnTeR<listLength_67 || useLast_67){
			text_chars[65]=(char)valueList_67[aUnItCoUnTeR<listLength_67?aUnItCoUnTeR:listLength_67-1];

		}
		if(aUnItCoUnTeR<listLength_68 || useLast_68){
			text_chars[254]=(char)valueList_68[aUnItCoUnTeR<listLength_68?aUnItCoUnTeR:listLength_68-1];

		}
		if(aUnItCoUnTeR<listLength_69 || useLast_69){
			text_chars[242]=(char)valueList_69[aUnItCoUnTeR<listLength_69?aUnItCoUnTeR:listLength_69-1];

		}
		if(aUnItCoUnTeR<listLength_70 || useLast_70){
			text_chars[230]=(char)valueList_70[aUnItCoUnTeR<listLength_70?aUnItCoUnTeR:listLength_70-1];

		}
		if(aUnItCoUnTeR<listLength_71 || useLast_71){
			text_chars[121]=(char)valueList_71[aUnItCoUnTeR<listLength_71?aUnItCoUnTeR:listLength_71-1];

		}
		if(aUnItCoUnTeR<listLength_72 || useLast_72){
			text_chars[133]=(char)valueList_72[aUnItCoUnTeR<listLength_72?aUnItCoUnTeR:listLength_72-1];

		}
		if(aUnItCoUnTeR<listLength_73 || useLast_73){
			text_chars[145]=(char)valueList_73[aUnItCoUnTeR<listLength_73?aUnItCoUnTeR:listLength_73-1];

		}
		if(aUnItCoUnTeR<listLength_74 || useLast_74){
			text_chars[157]=(char)valueList_74[aUnItCoUnTeR<listLength_74?aUnItCoUnTeR:listLength_74-1];

		}
		if(aUnItCoUnTeR<listLength_75 || useLast_75){
			text_chars[169]=(char)valueList_75[aUnItCoUnTeR<listLength_75?aUnItCoUnTeR:listLength_75-1];

		}
		if(aUnItCoUnTeR<listLength_76 || useLast_76){
			text_chars[41]=(char)valueList_76[aUnItCoUnTeR<listLength_76?aUnItCoUnTeR:listLength_76-1];

		}
		if(aUnItCoUnTeR<listLength_77 || useLast_77){
			text_chars[66]=(char)valueList_77[aUnItCoUnTeR<listLength_77?aUnItCoUnTeR:listLength_77-1];

		}
		if(aUnItCoUnTeR<listLength_78 || useLast_78){
			text_chars[78]=(char)valueList_78[aUnItCoUnTeR<listLength_78?aUnItCoUnTeR:listLength_78-1];

		}
		if(aUnItCoUnTeR<listLength_79 || useLast_79){
			text_chars[42]=(char)valueList_79[aUnItCoUnTeR<listLength_79?aUnItCoUnTeR:listLength_79-1];

		}
		if(aUnItCoUnTeR<listLength_80 || useLast_80){
			text_chars[54]=(char)valueList_80[aUnItCoUnTeR<listLength_80?aUnItCoUnTeR:listLength_80-1];

		}
		if(aUnItCoUnTeR<listLength_81 || useLast_81){
			text_chars[255]=(char)valueList_81[aUnItCoUnTeR<listLength_81?aUnItCoUnTeR:listLength_81-1];

		}
		if(aUnItCoUnTeR<listLength_82 || useLast_82){
			text_chars[243]=(char)valueList_82[aUnItCoUnTeR<listLength_82?aUnItCoUnTeR:listLength_82-1];

		}
		if(aUnItCoUnTeR<listLength_83 || useLast_83){
			text_chars[231]=(char)valueList_83[aUnItCoUnTeR<listLength_83?aUnItCoUnTeR:listLength_83-1];

		}
		if(aUnItCoUnTeR<listLength_84 || useLast_84){
			text_chars[110]=(char)valueList_84[aUnItCoUnTeR<listLength_84?aUnItCoUnTeR:listLength_84-1];

		}
		if(aUnItCoUnTeR<listLength_85 || useLast_85){
			text_chars[122]=(char)valueList_85[aUnItCoUnTeR<listLength_85?aUnItCoUnTeR:listLength_85-1];

		}
		if(aUnItCoUnTeR<listLength_86 || useLast_86){
			text_chars[134]=(char)valueList_86[aUnItCoUnTeR<listLength_86?aUnItCoUnTeR:listLength_86-1];

		}
		if(aUnItCoUnTeR<listLength_87 || useLast_87){
			text_chars[146]=(char)valueList_87[aUnItCoUnTeR<listLength_87?aUnItCoUnTeR:listLength_87-1];

		}
		if(aUnItCoUnTeR<listLength_88 || useLast_88){
			text_chars[158]=(char)valueList_88[aUnItCoUnTeR<listLength_88?aUnItCoUnTeR:listLength_88-1];

		}
		if(aUnItCoUnTeR<listLength_89 || useLast_89){
			text_chars[30]=(char)valueList_89[aUnItCoUnTeR<listLength_89?aUnItCoUnTeR:listLength_89-1];

		}
		if(aUnItCoUnTeR<listLength_90 || useLast_90){
			text_chars[55]=(char)valueList_90[aUnItCoUnTeR<listLength_90?aUnItCoUnTeR:listLength_90-1];

		}
		if(aUnItCoUnTeR<listLength_91 || useLast_91){
			text_chars[67]=(char)valueList_91[aUnItCoUnTeR<listLength_91?aUnItCoUnTeR:listLength_91-1];

		}
		if(aUnItCoUnTeR<listLength_92 || useLast_92){
			text_chars[31]=(char)valueList_92[aUnItCoUnTeR<listLength_92?aUnItCoUnTeR:listLength_92-1];

		}
		if(aUnItCoUnTeR<listLength_93 || useLast_93){
			text_chars[43]=(char)valueList_93[aUnItCoUnTeR<listLength_93?aUnItCoUnTeR:listLength_93-1];

		}
		if(aUnItCoUnTeR<listLength_94 || useLast_94){
			text_chars[244]=(char)valueList_94[aUnItCoUnTeR<listLength_94?aUnItCoUnTeR:listLength_94-1];

		}
		if(aUnItCoUnTeR<listLength_95 || useLast_95){
			text_chars[232]=(char)valueList_95[aUnItCoUnTeR<listLength_95?aUnItCoUnTeR:listLength_95-1];

		}
		if(aUnItCoUnTeR<listLength_96 || useLast_96){
			text_chars[220]=(char)valueList_96[aUnItCoUnTeR<listLength_96?aUnItCoUnTeR:listLength_96-1];

		}
		if(aUnItCoUnTeR<listLength_97 || useLast_97){
			text_chars[79]=(char)valueList_97[aUnItCoUnTeR<listLength_97?aUnItCoUnTeR:listLength_97-1];

		}
		if(aUnItCoUnTeR<listLength_98 || useLast_98){
			text_chars[111]=(char)valueList_98[aUnItCoUnTeR<listLength_98?aUnItCoUnTeR:listLength_98-1];

		}
		if(aUnItCoUnTeR<listLength_99 || useLast_99){
			text_chars[123]=(char)valueList_99[aUnItCoUnTeR<listLength_99?aUnItCoUnTeR:listLength_99-1];

		}
		if(aUnItCoUnTeR<listLength_100 || useLast_100){
			text_chars[135]=(char)valueList_100[aUnItCoUnTeR<listLength_100?aUnItCoUnTeR:listLength_100-1];

		}
		if(aUnItCoUnTeR<listLength_101 || useLast_101){
			text_chars[147]=(char)valueList_101[aUnItCoUnTeR<listLength_101?aUnItCoUnTeR:listLength_101-1];

		}
		if(aUnItCoUnTeR<listLength_102 || useLast_102){
			text_chars[159]=(char)valueList_102[aUnItCoUnTeR<listLength_102?aUnItCoUnTeR:listLength_102-1];

		}
		if(aUnItCoUnTeR<listLength_103 || useLast_103){
			text_chars[190]=(char)valueList_103[aUnItCoUnTeR<listLength_103?aUnItCoUnTeR:listLength_103-1];

		}
		if(aUnItCoUnTeR<listLength_104 || useLast_104){
			text_chars[44]=(char)valueList_104[aUnItCoUnTeR<listLength_104?aUnItCoUnTeR:listLength_104-1];

		}
		if(aUnItCoUnTeR<listLength_105 || useLast_105){
			text_chars[56]=(char)valueList_105[aUnItCoUnTeR<listLength_105?aUnItCoUnTeR:listLength_105-1];

		}
		if(aUnItCoUnTeR<listLength_106 || useLast_106){
			text_chars[20]=(char)valueList_106[aUnItCoUnTeR<listLength_106?aUnItCoUnTeR:listLength_106-1];

		}
		if(aUnItCoUnTeR<listLength_107 || useLast_107){
			text_chars[245]=(char)valueList_107[aUnItCoUnTeR<listLength_107?aUnItCoUnTeR:listLength_107-1];

		}
		if(aUnItCoUnTeR<listLength_108 || useLast_108){
			text_chars[32]=(char)valueList_108[aUnItCoUnTeR<listLength_108?aUnItCoUnTeR:listLength_108-1];

		}
		if(aUnItCoUnTeR<listLength_109 || useLast_109){
			text_chars[233]=(char)valueList_109[aUnItCoUnTeR<listLength_109?aUnItCoUnTeR:listLength_109-1];

		}
		if(aUnItCoUnTeR<listLength_110 || useLast_110){
			text_chars[221]=(char)valueList_110[aUnItCoUnTeR<listLength_110?aUnItCoUnTeR:listLength_110-1];

		}
		if(aUnItCoUnTeR<listLength_111 || useLast_111){
			text_chars[68]=(char)valueList_111[aUnItCoUnTeR<listLength_111?aUnItCoUnTeR:listLength_111-1];

		}
		if(aUnItCoUnTeR<listLength_112 || useLast_112){
			text_chars[100]=(char)valueList_112[aUnItCoUnTeR<listLength_112?aUnItCoUnTeR:listLength_112-1];

		}
		if(aUnItCoUnTeR<listLength_113 || useLast_113){
			text_chars[112]=(char)valueList_113[aUnItCoUnTeR<listLength_113?aUnItCoUnTeR:listLength_113-1];

		}
		if(aUnItCoUnTeR<listLength_114 || useLast_114){
			text_chars[124]=(char)valueList_114[aUnItCoUnTeR<listLength_114?aUnItCoUnTeR:listLength_114-1];

		}
		if(aUnItCoUnTeR<listLength_115 || useLast_115){
			text_chars[136]=(char)valueList_115[aUnItCoUnTeR<listLength_115?aUnItCoUnTeR:listLength_115-1];

		}
		if(aUnItCoUnTeR<listLength_116 || useLast_116){
			text_chars[148]=(char)valueList_116[aUnItCoUnTeR<listLength_116?aUnItCoUnTeR:listLength_116-1];

		}
		if(aUnItCoUnTeR<listLength_117 || useLast_117){
			text_chars[191]=(char)valueList_117[aUnItCoUnTeR<listLength_117?aUnItCoUnTeR:listLength_117-1];

		}
		if(aUnItCoUnTeR<listLength_118 || useLast_118){
			text_chars[149]=(char)valueList_118[aUnItCoUnTeR<listLength_118?aUnItCoUnTeR:listLength_118-1];

		}
		if(aUnItCoUnTeR<listLength_119 || useLast_119){
			text_chars[246]=(char)valueList_119[aUnItCoUnTeR<listLength_119?aUnItCoUnTeR:listLength_119-1];

		}
		if(aUnItCoUnTeR<listLength_120 || useLast_120){
			text_chars[97]=(char)valueList_120[aUnItCoUnTeR<listLength_120?aUnItCoUnTeR:listLength_120-1];

		}
		if(aUnItCoUnTeR<listLength_121 || useLast_121){
			text_chars[234]=(char)valueList_121[aUnItCoUnTeR<listLength_121?aUnItCoUnTeR:listLength_121-1];

		}
		if(aUnItCoUnTeR<listLength_122 || useLast_122){
			text_chars[222]=(char)valueList_122[aUnItCoUnTeR<listLength_122?aUnItCoUnTeR:listLength_122-1];

		}
		if(aUnItCoUnTeR<listLength_123 || useLast_123){
			text_chars[210]=(char)valueList_123[aUnItCoUnTeR<listLength_123?aUnItCoUnTeR:listLength_123-1];

		}
		if(aUnItCoUnTeR<listLength_124 || useLast_124){
			text_chars[17]=(char)valueList_124[aUnItCoUnTeR<listLength_124?aUnItCoUnTeR:listLength_124-1];

		}
		if(aUnItCoUnTeR<listLength_125 || useLast_125){
			text_chars[29]=(char)valueList_125[aUnItCoUnTeR<listLength_125?aUnItCoUnTeR:listLength_125-1];

		}
		if(aUnItCoUnTeR<listLength_126 || useLast_126){
			text_chars[101]=(char)valueList_126[aUnItCoUnTeR<listLength_126?aUnItCoUnTeR:listLength_126-1];

		}
		if(aUnItCoUnTeR<listLength_127 || useLast_127){
			text_chars[113]=(char)valueList_127[aUnItCoUnTeR<listLength_127?aUnItCoUnTeR:listLength_127-1];

		}
		if(aUnItCoUnTeR<listLength_128 || useLast_128){
			ubuf_PTRTO[0]=(unsigned long int)valueList_128[aUnItCoUnTeR<listLength_128?aUnItCoUnTeR:listLength_128-1];

		}
		if(aUnItCoUnTeR<listLength_129 || useLast_129){
			text_chars[125]=(char)valueList_129[aUnItCoUnTeR<listLength_129?aUnItCoUnTeR:listLength_129-1];

		}
		if(aUnItCoUnTeR<listLength_130 || useLast_130){
			text_chars[137]=(char)valueList_130[aUnItCoUnTeR<listLength_130?aUnItCoUnTeR:listLength_130-1];

		}
		if(aUnItCoUnTeR<listLength_131 || useLast_131){
			text_chars[192]=(char)valueList_131[aUnItCoUnTeR<listLength_131?aUnItCoUnTeR:listLength_131-1];

		}
		if(aUnItCoUnTeR<listLength_132 || useLast_132){
			text_chars[73]=(char)valueList_132[aUnItCoUnTeR<listLength_132?aUnItCoUnTeR:listLength_132-1];

		}
		if(aUnItCoUnTeR<listLength_133 || useLast_133){
			text_chars[180]=(char)valueList_133[aUnItCoUnTeR<listLength_133?aUnItCoUnTeR:listLength_133-1];

		}
		if(aUnItCoUnTeR<listLength_134 || useLast_134){
			text_chars[85]=(char)valueList_134[aUnItCoUnTeR<listLength_134?aUnItCoUnTeR:listLength_134-1];

		}
		if(aUnItCoUnTeR<listLength_135 || useLast_135){
			text_chars[61]=(char)valueList_135[aUnItCoUnTeR<listLength_135?aUnItCoUnTeR:listLength_135-1];

		}
		if(aUnItCoUnTeR<listLength_136 || useLast_136){
			text_chars[138]=(char)valueList_136[aUnItCoUnTeR<listLength_136?aUnItCoUnTeR:listLength_136-1];

		}
		if(aUnItCoUnTeR<listLength_137 || useLast_137){
			text_chars[247]=(char)valueList_137[aUnItCoUnTeR<listLength_137?aUnItCoUnTeR:listLength_137-1];

		}
		if(aUnItCoUnTeR<listLength_138 || useLast_138){
			text_chars[235]=(char)valueList_138[aUnItCoUnTeR<listLength_138?aUnItCoUnTeR:listLength_138-1];

		}
		if(aUnItCoUnTeR<listLength_139 || useLast_139){
			text_chars[86]=(char)valueList_139[aUnItCoUnTeR<listLength_139?aUnItCoUnTeR:listLength_139-1];

		}
		if(aUnItCoUnTeR<listLength_140 || useLast_140){
			text_chars[223]=(char)valueList_140[aUnItCoUnTeR<listLength_140?aUnItCoUnTeR:listLength_140-1];

		}
		if(aUnItCoUnTeR<listLength_141 || useLast_141){
			text_chars[98]=(char)valueList_141[aUnItCoUnTeR<listLength_141?aUnItCoUnTeR:listLength_141-1];

		}
		if(aUnItCoUnTeR<listLength_142 || useLast_142){
			text_chars[211]=(char)valueList_142[aUnItCoUnTeR<listLength_142?aUnItCoUnTeR:listLength_142-1];

		}
		if(aUnItCoUnTeR<listLength_143 || useLast_143){
			text_chars[18]=(char)valueList_143[aUnItCoUnTeR<listLength_143?aUnItCoUnTeR:listLength_143-1];

		}
		if(aUnItCoUnTeR<listLength_144 || useLast_144){
			text_chars[102]=(char)valueList_144[aUnItCoUnTeR<listLength_144?aUnItCoUnTeR:listLength_144-1];

		}
		if(aUnItCoUnTeR<listLength_145 || useLast_145){
			text_chars[114]=(char)valueList_145[aUnItCoUnTeR<listLength_145?aUnItCoUnTeR:listLength_145-1];

		}
		if(aUnItCoUnTeR<listLength_146 || useLast_146){
			text_chars[126]=(char)valueList_146[aUnItCoUnTeR<listLength_146?aUnItCoUnTeR:listLength_146-1];

		}
		if(aUnItCoUnTeR<listLength_147 || useLast_147){
			text_chars[193]=(char)valueList_147[aUnItCoUnTeR<listLength_147?aUnItCoUnTeR:listLength_147-1];

		}
		if(aUnItCoUnTeR<listLength_148 || useLast_148){
			text_chars[181]=(char)valueList_148[aUnItCoUnTeR<listLength_148?aUnItCoUnTeR:listLength_148-1];

		}
		if(aUnItCoUnTeR<listLength_149 || useLast_149){
			text_chars[62]=(char)valueList_149[aUnItCoUnTeR<listLength_149?aUnItCoUnTeR:listLength_149-1];

		}
		if(aUnItCoUnTeR<listLength_150 || useLast_150){
			text_chars[74]=(char)valueList_150[aUnItCoUnTeR<listLength_150?aUnItCoUnTeR:listLength_150-1];

		}
		if(aUnItCoUnTeR<listLength_151 || useLast_151){
			text_chars[50]=(char)valueList_151[aUnItCoUnTeR<listLength_151?aUnItCoUnTeR:listLength_151-1];

		}
		if(aUnItCoUnTeR<listLength_152 || useLast_152){
			text_chars[9]=(char)valueList_152[aUnItCoUnTeR<listLength_152?aUnItCoUnTeR:listLength_152-1];

		}
		if(aUnItCoUnTeR<listLength_153 || useLast_153){
			text_chars[99]=(char)valueList_153[aUnItCoUnTeR<listLength_153?aUnItCoUnTeR:listLength_153-1];

		}
		if(aUnItCoUnTeR<listLength_154 || useLast_154){
			text_chars[127]=(char)valueList_154[aUnItCoUnTeR<listLength_154?aUnItCoUnTeR:listLength_154-1];

		}
		if(aUnItCoUnTeR<listLength_155 || useLast_155){
			text_chars[236]=(char)valueList_155[aUnItCoUnTeR<listLength_155?aUnItCoUnTeR:listLength_155-1];

		}
		if(aUnItCoUnTeR<listLength_156 || useLast_156){
			text_chars[139]=(char)valueList_156[aUnItCoUnTeR<listLength_156?aUnItCoUnTeR:listLength_156-1];

		}
		if(aUnItCoUnTeR<listLength_157 || useLast_157){
			text_chars[224]=(char)valueList_157[aUnItCoUnTeR<listLength_157?aUnItCoUnTeR:listLength_157-1];

		}
		if(aUnItCoUnTeR<listLength_158 || useLast_158){
			text_chars[75]=(char)valueList_158[aUnItCoUnTeR<listLength_158?aUnItCoUnTeR:listLength_158-1];

		}
		if(aUnItCoUnTeR<listLength_159 || useLast_159){
			text_chars[212]=(char)valueList_159[aUnItCoUnTeR<listLength_159?aUnItCoUnTeR:listLength_159-1];

		}
		if(aUnItCoUnTeR<listLength_160 || useLast_160){
			text_chars[87]=(char)valueList_160[aUnItCoUnTeR<listLength_160?aUnItCoUnTeR:listLength_160-1];

		}
		if(aUnItCoUnTeR<listLength_161 || useLast_161){
			text_chars[200]=(char)valueList_161[aUnItCoUnTeR<listLength_161?aUnItCoUnTeR:listLength_161-1];

		}
		if(aUnItCoUnTeR<listLength_162 || useLast_162){
			text_chars[19]=(char)valueList_162[aUnItCoUnTeR<listLength_162?aUnItCoUnTeR:listLength_162-1];

		}
		if(aUnItCoUnTeR<listLength_163 || useLast_163){
			text_chars[103]=(char)valueList_163[aUnItCoUnTeR<listLength_163?aUnItCoUnTeR:listLength_163-1];

		}
		if(aUnItCoUnTeR<listLength_164 || useLast_164){
			text_chars[115]=(char)valueList_164[aUnItCoUnTeR<listLength_164?aUnItCoUnTeR:listLength_164-1];

		}
		if(aUnItCoUnTeR<listLength_165 || useLast_165){
			text_chars[248]=(char)valueList_165[aUnItCoUnTeR<listLength_165?aUnItCoUnTeR:listLength_165-1];

		}
		if(aUnItCoUnTeR<listLength_166 || useLast_166){
			text_chars[194]=(char)valueList_166[aUnItCoUnTeR<listLength_166?aUnItCoUnTeR:listLength_166-1];

		}
		if(aUnItCoUnTeR<listLength_167 || useLast_167){
			text_chars[182]=(char)valueList_167[aUnItCoUnTeR<listLength_167?aUnItCoUnTeR:listLength_167-1];

		}
		if(aUnItCoUnTeR<listLength_168 || useLast_168){
			text_chars[170]=(char)valueList_168[aUnItCoUnTeR<listLength_168?aUnItCoUnTeR:listLength_168-1];

		}
		if(aUnItCoUnTeR<listLength_169 || useLast_169){
			text_chars[51]=(char)valueList_169[aUnItCoUnTeR<listLength_169?aUnItCoUnTeR:listLength_169-1];

		}
		if(aUnItCoUnTeR<listLength_170 || useLast_170){
			text_chars[63]=(char)valueList_170[aUnItCoUnTeR<listLength_170?aUnItCoUnTeR:listLength_170-1];

		}
		if(aUnItCoUnTeR<listLength_171 || useLast_171){
			text_chars[88]=(char)valueList_171[aUnItCoUnTeR<listLength_171?aUnItCoUnTeR:listLength_171-1];

		}
		if(aUnItCoUnTeR<listLength_172 || useLast_172){
			text_chars[116]=(char)valueList_172[aUnItCoUnTeR<listLength_172?aUnItCoUnTeR:listLength_172-1];

		}
		if(aUnItCoUnTeR<listLength_173 || useLast_173){
			text_chars[225]=(char)valueList_173[aUnItCoUnTeR<listLength_173?aUnItCoUnTeR:listLength_173-1];

		}
		if(aUnItCoUnTeR<listLength_174 || useLast_174){
			text_chars[8]=(char)valueList_174[aUnItCoUnTeR<listLength_174?aUnItCoUnTeR:listLength_174-1];

		}
		if(aUnItCoUnTeR<listLength_175 || useLast_175){
			text_chars[128]=(char)valueList_175[aUnItCoUnTeR<listLength_175?aUnItCoUnTeR:listLength_175-1];

		}
		if(aUnItCoUnTeR<listLength_176 || useLast_176){
			text_chars[213]=(char)valueList_176[aUnItCoUnTeR<listLength_176?aUnItCoUnTeR:listLength_176-1];

		}
		if(aUnItCoUnTeR<listLength_177 || useLast_177){
			text_chars[64]=(char)valueList_177[aUnItCoUnTeR<listLength_177?aUnItCoUnTeR:listLength_177-1];

		}
		if(aUnItCoUnTeR<listLength_178 || useLast_178){
			text_chars[201]=(char)valueList_178[aUnItCoUnTeR<listLength_178?aUnItCoUnTeR:listLength_178-1];

		}
		if(aUnItCoUnTeR<listLength_179 || useLast_179){
			text_chars[76]=(char)valueList_179[aUnItCoUnTeR<listLength_179?aUnItCoUnTeR:listLength_179-1];

		}
		if(aUnItCoUnTeR<listLength_180 || useLast_180){
			text_chars[196]=(char)valueList_180[aUnItCoUnTeR<listLength_180?aUnItCoUnTeR:listLength_180-1];

		}
		if(aUnItCoUnTeR<listLength_181 || useLast_181){
			text_chars[249]=(char)valueList_181[aUnItCoUnTeR<listLength_181?aUnItCoUnTeR:listLength_181-1];

		}
		if(aUnItCoUnTeR<listLength_182 || useLast_182){
			text_chars[104]=(char)valueList_182[aUnItCoUnTeR<listLength_182?aUnItCoUnTeR:listLength_182-1];

		}
		if(aUnItCoUnTeR<listLength_183 || useLast_183){
			text_chars[237]=(char)valueList_183[aUnItCoUnTeR<listLength_183?aUnItCoUnTeR:listLength_183-1];

		}
		if(aUnItCoUnTeR<listLength_184 || useLast_184){
			text_chars[195]=(char)valueList_184[aUnItCoUnTeR<listLength_184?aUnItCoUnTeR:listLength_184-1];

		}
		if(aUnItCoUnTeR<listLength_185 || useLast_185){
			text_chars[183]=(char)valueList_185[aUnItCoUnTeR<listLength_185?aUnItCoUnTeR:listLength_185-1];

		}
		if(aUnItCoUnTeR<listLength_186 || useLast_186){
			text_chars[171]=(char)valueList_186[aUnItCoUnTeR<listLength_186?aUnItCoUnTeR:listLength_186-1];

		}
		if(aUnItCoUnTeR<listLength_187 || useLast_187){
			text_chars[40]=(char)valueList_187[aUnItCoUnTeR<listLength_187?aUnItCoUnTeR:listLength_187-1];

		}
		if(aUnItCoUnTeR<listLength_188 || useLast_188){
			text_chars[52]=(char)valueList_188[aUnItCoUnTeR<listLength_188?aUnItCoUnTeR:listLength_188-1];

		}
		if(aUnItCoUnTeR<listLength_189 || useLast_189){
			text_chars[105]=(char)valueList_189[aUnItCoUnTeR<listLength_189?aUnItCoUnTeR:listLength_189-1];

		}
		if(aUnItCoUnTeR<listLength_190 || useLast_190){
			text_chars[214]=(char)valueList_190[aUnItCoUnTeR<listLength_190?aUnItCoUnTeR:listLength_190-1];

		}
		if(aUnItCoUnTeR<listLength_191 || useLast_191){
			text_chars[117]=(char)valueList_191[aUnItCoUnTeR<listLength_191?aUnItCoUnTeR:listLength_191-1];

		}
		if(aUnItCoUnTeR<listLength_192 || useLast_192){
			text_chars[202]=(char)valueList_192[aUnItCoUnTeR<listLength_192?aUnItCoUnTeR:listLength_192-1];

		}
		if(aUnItCoUnTeR<listLength_193 || useLast_193){
			text_chars[7]=(char)valueList_193[aUnItCoUnTeR<listLength_193?aUnItCoUnTeR:listLength_193-1];

		}
		if(aUnItCoUnTeR<listLength_194 || useLast_194){
			text_chars[129]=(char)valueList_194[aUnItCoUnTeR<listLength_194?aUnItCoUnTeR:listLength_194-1];

		}
		if(aUnItCoUnTeR<listLength_195 || useLast_195){
			text_chars[37]=(char)valueList_195[aUnItCoUnTeR<listLength_195?aUnItCoUnTeR:listLength_195-1];

		}
		if(aUnItCoUnTeR<listLength_196 || useLast_196){
			text_chars[49]=(char)valueList_196[aUnItCoUnTeR<listLength_196?aUnItCoUnTeR:listLength_196-1];

		}
		if(aUnItCoUnTeR<listLength_197 || useLast_197){
			text_chars[13]=(char)valueList_197[aUnItCoUnTeR<listLength_197?aUnItCoUnTeR:listLength_197-1];

		}
		if(aUnItCoUnTeR<listLength_198 || useLast_198){
			text_chars[197]=(char)valueList_198[aUnItCoUnTeR<listLength_198?aUnItCoUnTeR:listLength_198-1];

		}
		if(aUnItCoUnTeR<listLength_199 || useLast_199){
			text_chars[25]=(char)valueList_199[aUnItCoUnTeR<listLength_199?aUnItCoUnTeR:listLength_199-1];

		}
		if(aUnItCoUnTeR<listLength_200 || useLast_200){
			text_chars[185]=(char)valueList_200[aUnItCoUnTeR<listLength_200?aUnItCoUnTeR:listLength_200-1];

		}
		if(aUnItCoUnTeR<listLength_201 || useLast_201){
			text_chars[238]=(char)valueList_201[aUnItCoUnTeR<listLength_201?aUnItCoUnTeR:listLength_201-1];

		}
		if(aUnItCoUnTeR<listLength_202 || useLast_202){
			text_chars[226]=(char)valueList_202[aUnItCoUnTeR<listLength_202?aUnItCoUnTeR:listLength_202-1];

		}
		if(aUnItCoUnTeR<listLength_203 || useLast_203){
			text_chars[160]=(char)valueList_203[aUnItCoUnTeR<listLength_203?aUnItCoUnTeR:listLength_203-1];

		}
		if(aUnItCoUnTeR<listLength_204 || useLast_204){
			text_chars[184]=(char)valueList_204[aUnItCoUnTeR<listLength_204?aUnItCoUnTeR:listLength_204-1];

		}
		if(aUnItCoUnTeR<listLength_205 || useLast_205){
			text_chars[81]=(char)valueList_205[aUnItCoUnTeR<listLength_205?aUnItCoUnTeR:listLength_205-1];

		}
		if(aUnItCoUnTeR<listLength_206 || useLast_206){
			text_chars[172]=(char)valueList_206[aUnItCoUnTeR<listLength_206?aUnItCoUnTeR:listLength_206-1];

		}
		if(aUnItCoUnTeR<listLength_207 || useLast_207){
			text_chars[93]=(char)valueList_207[aUnItCoUnTeR<listLength_207?aUnItCoUnTeR:listLength_207-1];

		}
		if(aUnItCoUnTeR<listLength_208 || useLast_208){
			text_chars[203]=(char)valueList_208[aUnItCoUnTeR<listLength_208?aUnItCoUnTeR:listLength_208-1];

		}
		if(aUnItCoUnTeR<listLength_209 || useLast_209){
			text_chars[106]=(char)valueList_209[aUnItCoUnTeR<listLength_209?aUnItCoUnTeR:listLength_209-1];

		}
		if(aUnItCoUnTeR<listLength_210 || useLast_210){
			text_chars[118]=(char)valueList_210[aUnItCoUnTeR<listLength_210?aUnItCoUnTeR:listLength_210-1];

		}
		if(aUnItCoUnTeR<listLength_211 || useLast_211){
			text_chars[6]=(char)valueList_211[aUnItCoUnTeR<listLength_211?aUnItCoUnTeR:listLength_211-1];

		}
		if(aUnItCoUnTeR<listLength_212 || useLast_212){
			ulen_PTRTO[0]=(unsigned int)valueList_212[aUnItCoUnTeR<listLength_212?aUnItCoUnTeR:listLength_212-1];

		}
		if(aUnItCoUnTeR<listLength_213 || useLast_213){
			text_chars[26]=(char)valueList_213[aUnItCoUnTeR<listLength_213?aUnItCoUnTeR:listLength_213-1];

		}
		if(aUnItCoUnTeR<listLength_214 || useLast_214){
			text_chars[38]=(char)valueList_214[aUnItCoUnTeR<listLength_214?aUnItCoUnTeR:listLength_214-1];

		}
		if(aUnItCoUnTeR<listLength_215 || useLast_215){
			text_chars[198]=(char)valueList_215[aUnItCoUnTeR<listLength_215?aUnItCoUnTeR:listLength_215-1];

		}
		if(aUnItCoUnTeR<listLength_216 || useLast_216){
			text_chars[186]=(char)valueList_216[aUnItCoUnTeR<listLength_216?aUnItCoUnTeR:listLength_216-1];

		}
		if(aUnItCoUnTeR<listLength_217 || useLast_217){
			text_chars[14]=(char)valueList_217[aUnItCoUnTeR<listLength_217?aUnItCoUnTeR:listLength_217-1];

		}
		if(aUnItCoUnTeR<listLength_218 || useLast_218){
			text_chars[174]=(char)valueList_218[aUnItCoUnTeR<listLength_218?aUnItCoUnTeR:listLength_218-1];

		}
		if(aUnItCoUnTeR<listLength_219 || useLast_219){
			text_chars[239]=(char)valueList_219[aUnItCoUnTeR<listLength_219?aUnItCoUnTeR:listLength_219-1];

		}
		if(aUnItCoUnTeR<listLength_220 || useLast_220){
			text_chars[227]=(char)valueList_220[aUnItCoUnTeR<listLength_220?aUnItCoUnTeR:listLength_220-1];

		}
		if(aUnItCoUnTeR<listLength_221 || useLast_221){
			text_chars[215]=(char)valueList_221[aUnItCoUnTeR<listLength_221?aUnItCoUnTeR:listLength_221-1];

		}
		if(aUnItCoUnTeR<listLength_222 || useLast_222){
			text_chars[161]=(char)valueList_222[aUnItCoUnTeR<listLength_222?aUnItCoUnTeR:listLength_222-1];

		}
		if(aUnItCoUnTeR<listLength_223 || useLast_223){
			text_chars[173]=(char)valueList_223[aUnItCoUnTeR<listLength_223?aUnItCoUnTeR:listLength_223-1];

		}
		if(aUnItCoUnTeR<listLength_224 || useLast_224){
			text_chars[70]=(char)valueList_224[aUnItCoUnTeR<listLength_224?aUnItCoUnTeR:listLength_224-1];

		}
		if(aUnItCoUnTeR<listLength_225 || useLast_225){
			text_chars[82]=(char)valueList_225[aUnItCoUnTeR<listLength_225?aUnItCoUnTeR:listLength_225-1];

		}
		if(aUnItCoUnTeR<listLength_226 || useLast_226){
			text_chars[94]=(char)valueList_226[aUnItCoUnTeR<listLength_226?aUnItCoUnTeR:listLength_226-1];

		}
		if(aUnItCoUnTeR<listLength_227 || useLast_227){
			text_chars[107]=(char)valueList_227[aUnItCoUnTeR<listLength_227?aUnItCoUnTeR:listLength_227-1];

		}
		if(aUnItCoUnTeR<listLength_228 || useLast_228){
			text_chars[119]=(char)valueList_228[aUnItCoUnTeR<listLength_228?aUnItCoUnTeR:listLength_228-1];

		}
		if(aUnItCoUnTeR<listLength_229 || useLast_229){
			text_chars[15]=(char)valueList_229[aUnItCoUnTeR<listLength_229?aUnItCoUnTeR:listLength_229-1];

		}
		if(aUnItCoUnTeR<listLength_230 || useLast_230){
			text_chars[199]=(char)valueList_230[aUnItCoUnTeR<listLength_230?aUnItCoUnTeR:listLength_230-1];

		}
		if(aUnItCoUnTeR<listLength_231 || useLast_231){
			text_chars[27]=(char)valueList_231[aUnItCoUnTeR<listLength_231?aUnItCoUnTeR:listLength_231-1];

		}
		if(aUnItCoUnTeR<listLength_232 || useLast_232){
			text_chars[187]=(char)valueList_232[aUnItCoUnTeR<listLength_232?aUnItCoUnTeR:listLength_232-1];

		}
		if(aUnItCoUnTeR<listLength_233 || useLast_233){
			text_chars[175]=(char)valueList_233[aUnItCoUnTeR<listLength_233?aUnItCoUnTeR:listLength_233-1];

		}
		if(aUnItCoUnTeR<listLength_234 || useLast_234){
			text_chars[163]=(char)valueList_234[aUnItCoUnTeR<listLength_234?aUnItCoUnTeR:listLength_234-1];

		}
		if(aUnItCoUnTeR<listLength_235 || useLast_235){
			text_chars[39]=(char)valueList_235[aUnItCoUnTeR<listLength_235?aUnItCoUnTeR:listLength_235-1];

		}
		if(aUnItCoUnTeR<listLength_236 || useLast_236){
			text_chars[5]=(char)valueList_236[aUnItCoUnTeR<listLength_236?aUnItCoUnTeR:listLength_236-1];

		}
		if(aUnItCoUnTeR<listLength_237 || useLast_237){
			text_chars[228]=(char)valueList_237[aUnItCoUnTeR<listLength_237?aUnItCoUnTeR:listLength_237-1];

		}
		if(aUnItCoUnTeR<listLength_238 || useLast_238){
			text_chars[216]=(char)valueList_238[aUnItCoUnTeR<listLength_238?aUnItCoUnTeR:listLength_238-1];

		}
		if(aUnItCoUnTeR<listLength_239 || useLast_239){
			text_chars[204]=(char)valueList_239[aUnItCoUnTeR<listLength_239?aUnItCoUnTeR:listLength_239-1];

		}
		if(aUnItCoUnTeR<listLength_240 || useLast_240){
			text_chars[150]=(char)valueList_240[aUnItCoUnTeR<listLength_240?aUnItCoUnTeR:listLength_240-1];

		}
		if(aUnItCoUnTeR<listLength_241 || useLast_241){
			text_chars[162]=(char)valueList_241[aUnItCoUnTeR<listLength_241?aUnItCoUnTeR:listLength_241-1];

		}
		if(aUnItCoUnTeR<listLength_242 || useLast_242){
			text_chars[95]=(char)valueList_242[aUnItCoUnTeR<listLength_242?aUnItCoUnTeR:listLength_242-1];

		}
		if(aUnItCoUnTeR<listLength_243 || useLast_243){
			text_chars[71]=(char)valueList_243[aUnItCoUnTeR<listLength_243?aUnItCoUnTeR:listLength_243-1];

		}
		if(aUnItCoUnTeR<listLength_244 || useLast_244){
			text_chars[83]=(char)valueList_244[aUnItCoUnTeR<listLength_244?aUnItCoUnTeR:listLength_244-1];

		}
		if(aUnItCoUnTeR<listLength_245 || useLast_245){
			text_chars[108]=(char)valueList_245[aUnItCoUnTeR<listLength_245?aUnItCoUnTeR:listLength_245-1];

		}
		if(aUnItCoUnTeR<listLength_246 || useLast_246){
			text_chars[188]=(char)valueList_246[aUnItCoUnTeR<listLength_246?aUnItCoUnTeR:listLength_246-1];

		}
		if(aUnItCoUnTeR<listLength_247 || useLast_247){
			text_chars[16]=(char)valueList_247[aUnItCoUnTeR<listLength_247?aUnItCoUnTeR:listLength_247-1];

		}
		if(aUnItCoUnTeR<listLength_248 || useLast_248){
			text_chars[176]=(char)valueList_248[aUnItCoUnTeR<listLength_248?aUnItCoUnTeR:listLength_248-1];

		}
		if(aUnItCoUnTeR<listLength_249 || useLast_249){
			text_chars[152]=(char)valueList_249[aUnItCoUnTeR<listLength_249?aUnItCoUnTeR:listLength_249-1];

		}
		if(aUnItCoUnTeR<listLength_250 || useLast_250){
			text_chars[164]=(char)valueList_250[aUnItCoUnTeR<listLength_250?aUnItCoUnTeR:listLength_250-1];

		}
		if(aUnItCoUnTeR<listLength_251 || useLast_251){
			text_chars[28]=(char)valueList_251[aUnItCoUnTeR<listLength_251?aUnItCoUnTeR:listLength_251-1];

		}
		if(aUnItCoUnTeR<listLength_252 || useLast_252){
			text_chars[229]=(char)valueList_252[aUnItCoUnTeR<listLength_252?aUnItCoUnTeR:listLength_252-1];

		}
		if(aUnItCoUnTeR<listLength_253 || useLast_253){
			text_chars[4]=(char)valueList_253[aUnItCoUnTeR<listLength_253?aUnItCoUnTeR:listLength_253-1];

		}
		if(aUnItCoUnTeR<listLength_254 || useLast_254){
			text_chars[217]=(char)valueList_254[aUnItCoUnTeR<listLength_254?aUnItCoUnTeR:listLength_254-1];

		}
		if(aUnItCoUnTeR<listLength_255 || useLast_255){
			text_chars[205]=(char)valueList_255[aUnItCoUnTeR<listLength_255?aUnItCoUnTeR:listLength_255-1];

		}
		if(aUnItCoUnTeR<listLength_256 || useLast_256){
			text_chars[151]=(char)valueList_256[aUnItCoUnTeR<listLength_256?aUnItCoUnTeR:listLength_256-1];

		}
		if(aUnItCoUnTeR<listLength_257 || useLast_257){
			text_chars[84]=(char)valueList_257[aUnItCoUnTeR<listLength_257?aUnItCoUnTeR:listLength_257-1];

		}
		if(aUnItCoUnTeR<listLength_258 || useLast_258){
			text_chars[96]=(char)valueList_258[aUnItCoUnTeR<listLength_258?aUnItCoUnTeR:listLength_258-1];

		}
		if(aUnItCoUnTeR<listLength_259 || useLast_259){
			text_chars[60]=(char)valueList_259[aUnItCoUnTeR<listLength_259?aUnItCoUnTeR:listLength_259-1];

		}
		if(aUnItCoUnTeR<listLength_260 || useLast_260){
			text_chars[72]=(char)valueList_260[aUnItCoUnTeR<listLength_260?aUnItCoUnTeR:listLength_260-1];

		}
		returnValue = looks_ascii(buf,nbytes,ubuf,ulen);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("looks_ascii","returnValue",1,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("looks_ascii","ubuf[0]",65,ubuf[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("looks_ascii","ulen[0]",1,ulen[0])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_looks_ascii_6\n");
}

void test_looks_ascii_7(void){
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
	unsigned char *valueList_0[]={(unsigned char *)"\x80"};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)ulen_PTRTO};
	unsigned int listLength_1=1;
	file_unichar_t *valueList_2[]={(file_unichar_t *)ubuf_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={1};
	unsigned int listLength_3=1;
	char valueList_4[]={0};
	unsigned int listLength_4=1;
	char valueList_5[]={0};
	unsigned int listLength_5=1;
	char valueList_6[]={0};
	unsigned int listLength_6=1;
	char valueList_7[]={0};
	unsigned int listLength_7=1;
	char valueList_8[]={0};
	unsigned int listLength_8=1;
	char valueList_9[]={0};
	unsigned int listLength_9=1;
	char valueList_10[]={0};
	unsigned int listLength_10=1;
	char valueList_11[]={0};
	unsigned int listLength_11=1;
	char valueList_12[]={0};
	unsigned int listLength_12=1;
	char valueList_13[]={0};
	unsigned int listLength_13=1;
	char valueList_14[]={0};
	unsigned int listLength_14=1;
	char valueList_15[]={0};
	unsigned int listLength_15=1;
	char valueList_16[]={0};
	unsigned int listLength_16=1;
	char valueList_17[]={0};
	unsigned int listLength_17=1;
	char valueList_18[]={0};
	unsigned int listLength_18=1;
	char valueList_19[]={0};
	unsigned int listLength_19=1;
	char valueList_20[]={0};
	unsigned int listLength_20=1;
	char valueList_21[]={0};
	unsigned int listLength_21=1;
	char valueList_22[]={0};
	unsigned int listLength_22=1;
	char valueList_23[]={0};
	unsigned int listLength_23=1;
	char valueList_24[]={0};
	unsigned int listLength_24=1;
	char valueList_25[]={0};
	unsigned int listLength_25=1;
	char valueList_26[]={0};
	unsigned int listLength_26=1;
	char valueList_27[]={0};
	unsigned int listLength_27=1;
	char valueList_28[]={0};
	unsigned int listLength_28=1;
	char valueList_29[]={0};
	unsigned int listLength_29=1;
	char valueList_30[]={0};
	unsigned int listLength_30=1;
	char valueList_31[]={ 1};
	unsigned int listLength_31=1;
	char valueList_32[]={0};
	unsigned int listLength_32=1;
	char valueList_33[]={0};
	unsigned int listLength_33=1;
	char valueList_34[]={0};
	unsigned int listLength_34=1;
	char valueList_35[]={0};
	unsigned int listLength_35=1;
	char valueList_36[]={0};
	unsigned int listLength_36=1;
	char valueList_37[]={0};
	unsigned int listLength_37=1;
	char valueList_38[]={0};
	unsigned int listLength_38=1;
	char valueList_39[]={0};
	unsigned int listLength_39=1;
	char valueList_40[]={0};
	unsigned int listLength_40=1;
	char valueList_41[]={0};
	unsigned int listLength_41=1;
	char valueList_42[]={ 1};
	unsigned int listLength_42=1;
	char valueList_43[]={0};
	unsigned int listLength_43=1;
	char valueList_44[]={0};
	unsigned int listLength_44=1;
	char valueList_45[]={0};
	unsigned int listLength_45=1;
	char valueList_46[]={0};
	unsigned int listLength_46=1;
	char valueList_47[]={0};
	unsigned int listLength_47=1;
	char valueList_48[]={0};
	unsigned int listLength_48=1;
	char valueList_49[]={0};
	unsigned int listLength_49=1;
	char valueList_50[]={0};
	unsigned int listLength_50=1;
	char valueList_51[]={0};
	unsigned int listLength_51=1;
	char valueList_52[]={0};
	unsigned int listLength_52=1;
	char valueList_53[]={0};
	unsigned int listLength_53=1;
	char valueList_54[]={0};
	unsigned int listLength_54=1;
	char valueList_55[]={1};
	unsigned int listLength_55=1;
	char valueList_56[]={0};
	unsigned int listLength_56=1;
	char valueList_57[]={0};
	unsigned int listLength_57=1;
	char valueList_58[]={0};
	unsigned int listLength_58=1;
	char valueList_59[]={0};
	unsigned int listLength_59=1;
	char valueList_60[]={0};
	unsigned int listLength_60=1;
	char valueList_61[]={0};
	unsigned int listLength_61=1;
	char valueList_62[]={0};
	unsigned int listLength_62=1;
	char valueList_63[]={0};
	unsigned int listLength_63=1;
	char valueList_64[]={0};
	unsigned int listLength_64=1;
	char valueList_65[]={0};
	unsigned int listLength_65=1;
	char valueList_66[]={0};
	unsigned int listLength_66=1;
	char valueList_67[]={0};
	unsigned int listLength_67=1;
	char valueList_68[]={0};
	unsigned int listLength_68=1;
	char valueList_69[]={0};
	unsigned int listLength_69=1;
	char valueList_70[]={0};
	unsigned int listLength_70=1;
	char valueList_71[]={0};
	unsigned int listLength_71=1;
	char valueList_72[]={0};
	unsigned int listLength_72=1;
	char valueList_73[]={0};
	unsigned int listLength_73=1;
	char valueList_74[]={0};
	unsigned int listLength_74=1;
	char valueList_75[]={0};
	unsigned int listLength_75=1;
	char valueList_76[]={0};
	unsigned int listLength_76=1;
	char valueList_77[]={0};
	unsigned int listLength_77=1;
	char valueList_78[]={0};
	unsigned int listLength_78=1;
	char valueList_79[]={0};
	unsigned int listLength_79=1;
	char valueList_80[]={0};
	unsigned int listLength_80=1;
	char valueList_81[]={0};
	unsigned int listLength_81=1;
	char valueList_82[]={0};
	unsigned int listLength_82=1;
	char valueList_83[]={0};
	unsigned int listLength_83=1;
	char valueList_84[]={0};
	unsigned int listLength_84=1;
	char valueList_85[]={0};
	unsigned int listLength_85=1;
	char valueList_86[]={0};
	unsigned int listLength_86=1;
	char valueList_87[]={0};
	unsigned int listLength_87=1;
	char valueList_88[]={0};
	unsigned int listLength_88=1;
	char valueList_89[]={0};
	unsigned int listLength_89=1;
	char valueList_90[]={0};
	unsigned int listLength_90=1;
	char valueList_91[]={0};
	unsigned int listLength_91=1;
	char valueList_92[]={0};
	unsigned int listLength_92=1;
	char valueList_93[]={0};
	unsigned int listLength_93=1;
	char valueList_94[]={0};
	unsigned int listLength_94=1;
	char valueList_95[]={0};
	unsigned int listLength_95=1;
	char valueList_96[]={0};
	unsigned int listLength_96=1;
	char valueList_97[]={0};
	unsigned int listLength_97=1;
	char valueList_98[]={0};
	unsigned int listLength_98=1;
	char valueList_99[]={0};
	unsigned int listLength_99=1;
	char valueList_100[]={0};
	unsigned int listLength_100=1;
	char valueList_101[]={0};
	unsigned int listLength_101=1;
	char valueList_102[]={0};
	unsigned int listLength_102=1;
	char valueList_103[]={0};
	unsigned int listLength_103=1;
	char valueList_104[]={0};
	unsigned int listLength_104=1;
	char valueList_105[]={0};
	unsigned int listLength_105=1;
	char valueList_106[]={0};
	unsigned int listLength_106=1;
	char valueList_107[]={0};
	unsigned int listLength_107=1;
	char valueList_108[]={0};
	unsigned int listLength_108=1;
	char valueList_109[]={0};
	unsigned int listLength_109=1;
	char valueList_110[]={0};
	unsigned int listLength_110=1;
	char valueList_111[]={0};
	unsigned int listLength_111=1;
	char valueList_112[]={0};
	unsigned int listLength_112=1;
	char valueList_113[]={0};
	unsigned int listLength_113=1;
	char valueList_114[]={0};
	unsigned int listLength_114=1;
	char valueList_115[]={0};
	unsigned int listLength_115=1;
	char valueList_116[]={0};
	unsigned int listLength_116=1;
	char valueList_117[]={0};
	unsigned int listLength_117=1;
	char valueList_118[]={0};
	unsigned int listLength_118=1;
	char valueList_119[]={0};
	unsigned int listLength_119=1;
	char valueList_120[]={0};
	unsigned int listLength_120=1;
	char valueList_121[]={0};
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
	char valueList_127[]={0};
	unsigned int listLength_127=1;
	unsigned long int valueList_128[]={0};
	unsigned int listLength_128=1;
	char valueList_129[]={0};
	unsigned int listLength_129=1;
	char valueList_130[]={0};
	unsigned int listLength_130=1;
	char valueList_131[]={0};
	unsigned int listLength_131=1;
	char valueList_132[]={0};
	unsigned int listLength_132=1;
	char valueList_133[]={0};
	unsigned int listLength_133=1;
	char valueList_134[]={0};
	unsigned int listLength_134=1;
	char valueList_135[]={0};
	unsigned int listLength_135=1;
	char valueList_136[]={0};
	unsigned int listLength_136=1;
	char valueList_137[]={0};
	unsigned int listLength_137=1;
	char valueList_138[]={0};
	unsigned int listLength_138=1;
	char valueList_139[]={0};
	unsigned int listLength_139=1;
	char valueList_140[]={0};
	unsigned int listLength_140=1;
	char valueList_141[]={0};
	unsigned int listLength_141=1;
	char valueList_142[]={0};
	unsigned int listLength_142=1;
	char valueList_143[]={0};
	unsigned int listLength_143=1;
	char valueList_144[]={0};
	unsigned int listLength_144=1;
	char valueList_145[]={0};
	unsigned int listLength_145=1;
	char valueList_146[]={0};
	unsigned int listLength_146=1;
	char valueList_147[]={0};
	unsigned int listLength_147=1;
	char valueList_148[]={0};
	unsigned int listLength_148=1;
	char valueList_149[]={0};
	unsigned int listLength_149=1;
	char valueList_150[]={0};
	unsigned int listLength_150=1;
	char valueList_151[]={0};
	unsigned int listLength_151=1;
	char valueList_152[]={0};
	unsigned int listLength_152=1;
	char valueList_153[]={0};
	unsigned int listLength_153=1;
	char valueList_154[]={0};
	unsigned int listLength_154=1;
	char valueList_155[]={0};
	unsigned int listLength_155=1;
	char valueList_156[]={0};
	unsigned int listLength_156=1;
	char valueList_157[]={0};
	unsigned int listLength_157=1;
	char valueList_158[]={0};
	unsigned int listLength_158=1;
	char valueList_159[]={0};
	unsigned int listLength_159=1;
	char valueList_160[]={0};
	unsigned int listLength_160=1;
	char valueList_161[]={0};
	unsigned int listLength_161=1;
	char valueList_162[]={0};
	unsigned int listLength_162=1;
	char valueList_163[]={0};
	unsigned int listLength_163=1;
	char valueList_164[]={0};
	unsigned int listLength_164=1;
	char valueList_165[]={0};
	unsigned int listLength_165=1;
	char valueList_166[]={0};
	unsigned int listLength_166=1;
	char valueList_167[]={0};
	unsigned int listLength_167=1;
	char valueList_168[]={0};
	unsigned int listLength_168=1;
	char valueList_169[]={0};
	unsigned int listLength_169=1;
	char valueList_170[]={0};
	unsigned int listLength_170=1;
	char valueList_171[]={0};
	unsigned int listLength_171=1;
	char valueList_172[]={0};
	unsigned int listLength_172=1;
	char valueList_173[]={0};
	unsigned int listLength_173=1;
	char valueList_174[]={0};
	unsigned int listLength_174=1;
	char valueList_175[]={0};
	unsigned int listLength_175=1;
	char valueList_176[]={0};
	unsigned int listLength_176=1;
	char valueList_177[]={0};
	unsigned int listLength_177=1;
	char valueList_178[]={0};
	unsigned int listLength_178=1;
	char valueList_179[]={0};
	unsigned int listLength_179=1;
	char valueList_180[]={0};
	unsigned int listLength_180=1;
	char valueList_181[]={0};
	unsigned int listLength_181=1;
	char valueList_182[]={0};
	unsigned int listLength_182=1;
	char valueList_183[]={0};
	unsigned int listLength_183=1;
	char valueList_184[]={0};
	unsigned int listLength_184=1;
	char valueList_185[]={0};
	unsigned int listLength_185=1;
	char valueList_186[]={0};
	unsigned int listLength_186=1;
	char valueList_187[]={0};
	unsigned int listLength_187=1;
	char valueList_188[]={0};
	unsigned int listLength_188=1;
	char valueList_189[]={0};
	unsigned int listLength_189=1;
	char valueList_190[]={0};
	unsigned int listLength_190=1;
	char valueList_191[]={0};
	unsigned int listLength_191=1;
	char valueList_192[]={0};
	unsigned int listLength_192=1;
	char valueList_193[]={0};
	unsigned int listLength_193=1;
	char valueList_194[]={0};
	unsigned int listLength_194=1;
	char valueList_195[]={0};
	unsigned int listLength_195=1;
	char valueList_196[]={0};
	unsigned int listLength_196=1;
	char valueList_197[]={0};
	unsigned int listLength_197=1;
	char valueList_198[]={0};
	unsigned int listLength_198=1;
	char valueList_199[]={0};
	unsigned int listLength_199=1;
	char valueList_200[]={0};
	unsigned int listLength_200=1;
	char valueList_201[]={0};
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
	char valueList_207[]={0};
	unsigned int listLength_207=1;
	char valueList_208[]={0};
	unsigned int listLength_208=1;
	char valueList_209[]={0};
	unsigned int listLength_209=1;
	char valueList_210[]={0};
	unsigned int listLength_210=1;
	char valueList_211[]={0};
	unsigned int listLength_211=1;
	unsigned int valueList_212[]={0};
	unsigned int listLength_212=1;
	char valueList_213[]={0};
	unsigned int listLength_213=1;
	char valueList_214[]={0};
	unsigned int listLength_214=1;
	char valueList_215[]={0};
	unsigned int listLength_215=1;
	char valueList_216[]={0};
	unsigned int listLength_216=1;
	char valueList_217[]={0};
	unsigned int listLength_217=1;
	char valueList_218[]={0};
	unsigned int listLength_218=1;
	char valueList_219[]={0};
	unsigned int listLength_219=1;
	char valueList_220[]={0};
	unsigned int listLength_220=1;
	char valueList_221[]={0};
	unsigned int listLength_221=1;
	char valueList_222[]={0};
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
	char valueList_229[]={0};
	unsigned int listLength_229=1;
	char valueList_230[]={0};
	unsigned int listLength_230=1;
	char valueList_231[]={0};
	unsigned int listLength_231=1;
	char valueList_232[]={0};
	unsigned int listLength_232=1;
	char valueList_233[]={0};
	unsigned int listLength_233=1;
	char valueList_234[]={0};
	unsigned int listLength_234=1;
	char valueList_235[]={0};
	unsigned int listLength_235=1;
	char valueList_236[]={0};
	unsigned int listLength_236=1;
	char valueList_237[]={0};
	unsigned int listLength_237=1;
	char valueList_238[]={0};
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
	char valueList_245[]={0};
	unsigned int listLength_245=1;
	char valueList_246[]={0};
	unsigned int listLength_246=1;
	char valueList_247[]={0};
	unsigned int listLength_247=1;
	char valueList_248[]={0};
	unsigned int listLength_248=1;
	char valueList_249[]={0};
	unsigned int listLength_249=1;
	char valueList_250[]={0};
	unsigned int listLength_250=1;
	char valueList_251[]={0};
	unsigned int listLength_251=1;
	char valueList_252[]={0};
	unsigned int listLength_252=1;
	char valueList_253[]={ 0};
	unsigned int listLength_253=1;
	char valueList_254[]={0};
	unsigned int listLength_254=1;
	char valueList_255[]={0};
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_looks_ascii_7,false,0\n");
	aunit_printf("#CASE_START_test_looks_ascii_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ulen=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ubuf=(file_unichar_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			nbytes=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			text_chars[33]=(char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			text_chars[45]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			text_chars[21]=(char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			text_chars[189]=(char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			text_chars[109]=(char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			text_chars[177]=(char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			text_chars[57]=(char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			text_chars[69]=(char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			text_chars[141]=(char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			text_chars[153]=(char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			text_chars[165]=(char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			text_chars[218]=(char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			text_chars[206]=(char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			text_chars[140]=(char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			text_chars[22]=(char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			text_chars[34]=(char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			text_chars[10]=(char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			text_chars[178]=(char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			text_chars[46]=(char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			text_chars[58]=(char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			text_chars[251]=(char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			text_chars[130]=(char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			text_chars[142]=(char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			text_chars[154]=(char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			text_chars[166]=(char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			text_chars[219]=(char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			text_chars[207]=(char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			text_chars[2]=(char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			text_chars[250]=(char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			text_chars[90]=(char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			text_chars[11]=(char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			text_chars[23]=(char)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			text_chars[179]=(char)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			text_chars[59]=(char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			text_chars[35]=(char)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			text_chars[252]=(char)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			text_chars[47]=(char)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			text_chars[240]=(char)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			text_chars[1]=(char)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			text_chars[131]=(char)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			text_chars[143]=(char)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			text_chars[155]=(char)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			text_chars[208]=(char)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			text_chars[167]=(char)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			text_chars[91]=(char)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		if(aUnItCoUnTeR<listLength_49 || useLast_49){
			text_chars[12]=(char)valueList_49[aUnItCoUnTeR<listLength_49?aUnItCoUnTeR:listLength_49-1];

		}
		if(aUnItCoUnTeR<listLength_50 || useLast_50){
			text_chars[48]=(char)valueList_50[aUnItCoUnTeR<listLength_50?aUnItCoUnTeR:listLength_50-1];

		}
		if(aUnItCoUnTeR<listLength_51 || useLast_51){
			text_chars[253]=(char)valueList_51[aUnItCoUnTeR<listLength_51?aUnItCoUnTeR:listLength_51-1];

		}
		if(aUnItCoUnTeR<listLength_52 || useLast_52){
			text_chars[24]=(char)valueList_52[aUnItCoUnTeR<listLength_52?aUnItCoUnTeR:listLength_52-1];

		}
		if(aUnItCoUnTeR<listLength_53 || useLast_53){
			text_chars[241]=(char)valueList_53[aUnItCoUnTeR<listLength_53?aUnItCoUnTeR:listLength_53-1];

		}
		if(aUnItCoUnTeR<listLength_54 || useLast_54){
			text_chars[36]=(char)valueList_54[aUnItCoUnTeR<listLength_54?aUnItCoUnTeR:listLength_54-1];

		}
		if(aUnItCoUnTeR<listLength_55 || useLast_55){
			text_chars[0]=(char)valueList_55[aUnItCoUnTeR<listLength_55?aUnItCoUnTeR:listLength_55-1];

		}
		if(aUnItCoUnTeR<listLength_56 || useLast_56){
			text_chars[120]=(char)valueList_56[aUnItCoUnTeR<listLength_56?aUnItCoUnTeR:listLength_56-1];

		}
		if(aUnItCoUnTeR<listLength_57 || useLast_57){
			text_chars[132]=(char)valueList_57[aUnItCoUnTeR<listLength_57?aUnItCoUnTeR:listLength_57-1];

		}
		if(aUnItCoUnTeR<listLength_58 || useLast_58){
			text_chars[209]=(char)valueList_58[aUnItCoUnTeR<listLength_58?aUnItCoUnTeR:listLength_58-1];

		}
		if(aUnItCoUnTeR<listLength_59 || useLast_59){
			text_chars[144]=(char)valueList_59[aUnItCoUnTeR<listLength_59?aUnItCoUnTeR:listLength_59-1];

		}
		if(aUnItCoUnTeR<listLength_60 || useLast_60){
			text_chars[156]=(char)valueList_60[aUnItCoUnTeR<listLength_60?aUnItCoUnTeR:listLength_60-1];

		}
		if(aUnItCoUnTeR<listLength_61 || useLast_61){
			text_chars[168]=(char)valueList_61[aUnItCoUnTeR<listLength_61?aUnItCoUnTeR:listLength_61-1];

		}
		if(aUnItCoUnTeR<listLength_62 || useLast_62){
			text_chars[80]=(char)valueList_62[aUnItCoUnTeR<listLength_62?aUnItCoUnTeR:listLength_62-1];

		}
		if(aUnItCoUnTeR<listLength_63 || useLast_63){
			text_chars[92]=(char)valueList_63[aUnItCoUnTeR<listLength_63?aUnItCoUnTeR:listLength_63-1];

		}
		if(aUnItCoUnTeR<listLength_64 || useLast_64){
			text_chars[77]=(char)valueList_64[aUnItCoUnTeR<listLength_64?aUnItCoUnTeR:listLength_64-1];

		}
		if(aUnItCoUnTeR<listLength_65 || useLast_65){
			text_chars[89]=(char)valueList_65[aUnItCoUnTeR<listLength_65?aUnItCoUnTeR:listLength_65-1];

		}
		if(aUnItCoUnTeR<listLength_66 || useLast_66){
			text_chars[53]=(char)valueList_66[aUnItCoUnTeR<listLength_66?aUnItCoUnTeR:listLength_66-1];

		}
		if(aUnItCoUnTeR<listLength_67 || useLast_67){
			text_chars[65]=(char)valueList_67[aUnItCoUnTeR<listLength_67?aUnItCoUnTeR:listLength_67-1];

		}
		if(aUnItCoUnTeR<listLength_68 || useLast_68){
			text_chars[254]=(char)valueList_68[aUnItCoUnTeR<listLength_68?aUnItCoUnTeR:listLength_68-1];

		}
		if(aUnItCoUnTeR<listLength_69 || useLast_69){
			text_chars[242]=(char)valueList_69[aUnItCoUnTeR<listLength_69?aUnItCoUnTeR:listLength_69-1];

		}
		if(aUnItCoUnTeR<listLength_70 || useLast_70){
			text_chars[230]=(char)valueList_70[aUnItCoUnTeR<listLength_70?aUnItCoUnTeR:listLength_70-1];

		}
		if(aUnItCoUnTeR<listLength_71 || useLast_71){
			text_chars[121]=(char)valueList_71[aUnItCoUnTeR<listLength_71?aUnItCoUnTeR:listLength_71-1];

		}
		if(aUnItCoUnTeR<listLength_72 || useLast_72){
			text_chars[133]=(char)valueList_72[aUnItCoUnTeR<listLength_72?aUnItCoUnTeR:listLength_72-1];

		}
		if(aUnItCoUnTeR<listLength_73 || useLast_73){
			text_chars[145]=(char)valueList_73[aUnItCoUnTeR<listLength_73?aUnItCoUnTeR:listLength_73-1];

		}
		if(aUnItCoUnTeR<listLength_74 || useLast_74){
			text_chars[157]=(char)valueList_74[aUnItCoUnTeR<listLength_74?aUnItCoUnTeR:listLength_74-1];

		}
		if(aUnItCoUnTeR<listLength_75 || useLast_75){
			text_chars[169]=(char)valueList_75[aUnItCoUnTeR<listLength_75?aUnItCoUnTeR:listLength_75-1];

		}
		if(aUnItCoUnTeR<listLength_76 || useLast_76){
			text_chars[41]=(char)valueList_76[aUnItCoUnTeR<listLength_76?aUnItCoUnTeR:listLength_76-1];

		}
		if(aUnItCoUnTeR<listLength_77 || useLast_77){
			text_chars[66]=(char)valueList_77[aUnItCoUnTeR<listLength_77?aUnItCoUnTeR:listLength_77-1];

		}
		if(aUnItCoUnTeR<listLength_78 || useLast_78){
			text_chars[78]=(char)valueList_78[aUnItCoUnTeR<listLength_78?aUnItCoUnTeR:listLength_78-1];

		}
		if(aUnItCoUnTeR<listLength_79 || useLast_79){
			text_chars[42]=(char)valueList_79[aUnItCoUnTeR<listLength_79?aUnItCoUnTeR:listLength_79-1];

		}
		if(aUnItCoUnTeR<listLength_80 || useLast_80){
			text_chars[54]=(char)valueList_80[aUnItCoUnTeR<listLength_80?aUnItCoUnTeR:listLength_80-1];

		}
		if(aUnItCoUnTeR<listLength_81 || useLast_81){
			text_chars[255]=(char)valueList_81[aUnItCoUnTeR<listLength_81?aUnItCoUnTeR:listLength_81-1];

		}
		if(aUnItCoUnTeR<listLength_82 || useLast_82){
			text_chars[243]=(char)valueList_82[aUnItCoUnTeR<listLength_82?aUnItCoUnTeR:listLength_82-1];

		}
		if(aUnItCoUnTeR<listLength_83 || useLast_83){
			text_chars[231]=(char)valueList_83[aUnItCoUnTeR<listLength_83?aUnItCoUnTeR:listLength_83-1];

		}
		if(aUnItCoUnTeR<listLength_84 || useLast_84){
			text_chars[110]=(char)valueList_84[aUnItCoUnTeR<listLength_84?aUnItCoUnTeR:listLength_84-1];

		}
		if(aUnItCoUnTeR<listLength_85 || useLast_85){
			text_chars[122]=(char)valueList_85[aUnItCoUnTeR<listLength_85?aUnItCoUnTeR:listLength_85-1];

		}
		if(aUnItCoUnTeR<listLength_86 || useLast_86){
			text_chars[134]=(char)valueList_86[aUnItCoUnTeR<listLength_86?aUnItCoUnTeR:listLength_86-1];

		}
		if(aUnItCoUnTeR<listLength_87 || useLast_87){
			text_chars[146]=(char)valueList_87[aUnItCoUnTeR<listLength_87?aUnItCoUnTeR:listLength_87-1];

		}
		if(aUnItCoUnTeR<listLength_88 || useLast_88){
			text_chars[158]=(char)valueList_88[aUnItCoUnTeR<listLength_88?aUnItCoUnTeR:listLength_88-1];

		}
		if(aUnItCoUnTeR<listLength_89 || useLast_89){
			text_chars[30]=(char)valueList_89[aUnItCoUnTeR<listLength_89?aUnItCoUnTeR:listLength_89-1];

		}
		if(aUnItCoUnTeR<listLength_90 || useLast_90){
			text_chars[55]=(char)valueList_90[aUnItCoUnTeR<listLength_90?aUnItCoUnTeR:listLength_90-1];

		}
		if(aUnItCoUnTeR<listLength_91 || useLast_91){
			text_chars[67]=(char)valueList_91[aUnItCoUnTeR<listLength_91?aUnItCoUnTeR:listLength_91-1];

		}
		if(aUnItCoUnTeR<listLength_92 || useLast_92){
			text_chars[31]=(char)valueList_92[aUnItCoUnTeR<listLength_92?aUnItCoUnTeR:listLength_92-1];

		}
		if(aUnItCoUnTeR<listLength_93 || useLast_93){
			text_chars[43]=(char)valueList_93[aUnItCoUnTeR<listLength_93?aUnItCoUnTeR:listLength_93-1];

		}
		if(aUnItCoUnTeR<listLength_94 || useLast_94){
			text_chars[244]=(char)valueList_94[aUnItCoUnTeR<listLength_94?aUnItCoUnTeR:listLength_94-1];

		}
		if(aUnItCoUnTeR<listLength_95 || useLast_95){
			text_chars[232]=(char)valueList_95[aUnItCoUnTeR<listLength_95?aUnItCoUnTeR:listLength_95-1];

		}
		if(aUnItCoUnTeR<listLength_96 || useLast_96){
			text_chars[220]=(char)valueList_96[aUnItCoUnTeR<listLength_96?aUnItCoUnTeR:listLength_96-1];

		}
		if(aUnItCoUnTeR<listLength_97 || useLast_97){
			text_chars[79]=(char)valueList_97[aUnItCoUnTeR<listLength_97?aUnItCoUnTeR:listLength_97-1];

		}
		if(aUnItCoUnTeR<listLength_98 || useLast_98){
			text_chars[111]=(char)valueList_98[aUnItCoUnTeR<listLength_98?aUnItCoUnTeR:listLength_98-1];

		}
		if(aUnItCoUnTeR<listLength_99 || useLast_99){
			text_chars[123]=(char)valueList_99[aUnItCoUnTeR<listLength_99?aUnItCoUnTeR:listLength_99-1];

		}
		if(aUnItCoUnTeR<listLength_100 || useLast_100){
			text_chars[135]=(char)valueList_100[aUnItCoUnTeR<listLength_100?aUnItCoUnTeR:listLength_100-1];

		}
		if(aUnItCoUnTeR<listLength_101 || useLast_101){
			text_chars[147]=(char)valueList_101[aUnItCoUnTeR<listLength_101?aUnItCoUnTeR:listLength_101-1];

		}
		if(aUnItCoUnTeR<listLength_102 || useLast_102){
			text_chars[159]=(char)valueList_102[aUnItCoUnTeR<listLength_102?aUnItCoUnTeR:listLength_102-1];

		}
		if(aUnItCoUnTeR<listLength_103 || useLast_103){
			text_chars[190]=(char)valueList_103[aUnItCoUnTeR<listLength_103?aUnItCoUnTeR:listLength_103-1];

		}
		if(aUnItCoUnTeR<listLength_104 || useLast_104){
			text_chars[44]=(char)valueList_104[aUnItCoUnTeR<listLength_104?aUnItCoUnTeR:listLength_104-1];

		}
		if(aUnItCoUnTeR<listLength_105 || useLast_105){
			text_chars[56]=(char)valueList_105[aUnItCoUnTeR<listLength_105?aUnItCoUnTeR:listLength_105-1];

		}
		if(aUnItCoUnTeR<listLength_106 || useLast_106){
			text_chars[20]=(char)valueList_106[aUnItCoUnTeR<listLength_106?aUnItCoUnTeR:listLength_106-1];

		}
		if(aUnItCoUnTeR<listLength_107 || useLast_107){
			text_chars[245]=(char)valueList_107[aUnItCoUnTeR<listLength_107?aUnItCoUnTeR:listLength_107-1];

		}
		if(aUnItCoUnTeR<listLength_108 || useLast_108){
			text_chars[32]=(char)valueList_108[aUnItCoUnTeR<listLength_108?aUnItCoUnTeR:listLength_108-1];

		}
		if(aUnItCoUnTeR<listLength_109 || useLast_109){
			text_chars[233]=(char)valueList_109[aUnItCoUnTeR<listLength_109?aUnItCoUnTeR:listLength_109-1];

		}
		if(aUnItCoUnTeR<listLength_110 || useLast_110){
			text_chars[221]=(char)valueList_110[aUnItCoUnTeR<listLength_110?aUnItCoUnTeR:listLength_110-1];

		}
		if(aUnItCoUnTeR<listLength_111 || useLast_111){
			text_chars[68]=(char)valueList_111[aUnItCoUnTeR<listLength_111?aUnItCoUnTeR:listLength_111-1];

		}
		if(aUnItCoUnTeR<listLength_112 || useLast_112){
			text_chars[100]=(char)valueList_112[aUnItCoUnTeR<listLength_112?aUnItCoUnTeR:listLength_112-1];

		}
		if(aUnItCoUnTeR<listLength_113 || useLast_113){
			text_chars[112]=(char)valueList_113[aUnItCoUnTeR<listLength_113?aUnItCoUnTeR:listLength_113-1];

		}
		if(aUnItCoUnTeR<listLength_114 || useLast_114){
			text_chars[124]=(char)valueList_114[aUnItCoUnTeR<listLength_114?aUnItCoUnTeR:listLength_114-1];

		}
		if(aUnItCoUnTeR<listLength_115 || useLast_115){
			text_chars[136]=(char)valueList_115[aUnItCoUnTeR<listLength_115?aUnItCoUnTeR:listLength_115-1];

		}
		if(aUnItCoUnTeR<listLength_116 || useLast_116){
			text_chars[148]=(char)valueList_116[aUnItCoUnTeR<listLength_116?aUnItCoUnTeR:listLength_116-1];

		}
		if(aUnItCoUnTeR<listLength_117 || useLast_117){
			text_chars[191]=(char)valueList_117[aUnItCoUnTeR<listLength_117?aUnItCoUnTeR:listLength_117-1];

		}
		if(aUnItCoUnTeR<listLength_118 || useLast_118){
			text_chars[149]=(char)valueList_118[aUnItCoUnTeR<listLength_118?aUnItCoUnTeR:listLength_118-1];

		}
		if(aUnItCoUnTeR<listLength_119 || useLast_119){
			text_chars[246]=(char)valueList_119[aUnItCoUnTeR<listLength_119?aUnItCoUnTeR:listLength_119-1];

		}
		if(aUnItCoUnTeR<listLength_120 || useLast_120){
			text_chars[97]=(char)valueList_120[aUnItCoUnTeR<listLength_120?aUnItCoUnTeR:listLength_120-1];

		}
		if(aUnItCoUnTeR<listLength_121 || useLast_121){
			text_chars[234]=(char)valueList_121[aUnItCoUnTeR<listLength_121?aUnItCoUnTeR:listLength_121-1];

		}
		if(aUnItCoUnTeR<listLength_122 || useLast_122){
			text_chars[222]=(char)valueList_122[aUnItCoUnTeR<listLength_122?aUnItCoUnTeR:listLength_122-1];

		}
		if(aUnItCoUnTeR<listLength_123 || useLast_123){
			text_chars[210]=(char)valueList_123[aUnItCoUnTeR<listLength_123?aUnItCoUnTeR:listLength_123-1];

		}
		if(aUnItCoUnTeR<listLength_124 || useLast_124){
			text_chars[17]=(char)valueList_124[aUnItCoUnTeR<listLength_124?aUnItCoUnTeR:listLength_124-1];

		}
		if(aUnItCoUnTeR<listLength_125 || useLast_125){
			text_chars[29]=(char)valueList_125[aUnItCoUnTeR<listLength_125?aUnItCoUnTeR:listLength_125-1];

		}
		if(aUnItCoUnTeR<listLength_126 || useLast_126){
			text_chars[101]=(char)valueList_126[aUnItCoUnTeR<listLength_126?aUnItCoUnTeR:listLength_126-1];

		}
		if(aUnItCoUnTeR<listLength_127 || useLast_127){
			text_chars[113]=(char)valueList_127[aUnItCoUnTeR<listLength_127?aUnItCoUnTeR:listLength_127-1];

		}
		if(aUnItCoUnTeR<listLength_128 || useLast_128){
			ubuf_PTRTO[0]=(unsigned long int)valueList_128[aUnItCoUnTeR<listLength_128?aUnItCoUnTeR:listLength_128-1];

		}
		if(aUnItCoUnTeR<listLength_129 || useLast_129){
			text_chars[125]=(char)valueList_129[aUnItCoUnTeR<listLength_129?aUnItCoUnTeR:listLength_129-1];

		}
		if(aUnItCoUnTeR<listLength_130 || useLast_130){
			text_chars[137]=(char)valueList_130[aUnItCoUnTeR<listLength_130?aUnItCoUnTeR:listLength_130-1];

		}
		if(aUnItCoUnTeR<listLength_131 || useLast_131){
			text_chars[192]=(char)valueList_131[aUnItCoUnTeR<listLength_131?aUnItCoUnTeR:listLength_131-1];

		}
		if(aUnItCoUnTeR<listLength_132 || useLast_132){
			text_chars[73]=(char)valueList_132[aUnItCoUnTeR<listLength_132?aUnItCoUnTeR:listLength_132-1];

		}
		if(aUnItCoUnTeR<listLength_133 || useLast_133){
			text_chars[180]=(char)valueList_133[aUnItCoUnTeR<listLength_133?aUnItCoUnTeR:listLength_133-1];

		}
		if(aUnItCoUnTeR<listLength_134 || useLast_134){
			text_chars[85]=(char)valueList_134[aUnItCoUnTeR<listLength_134?aUnItCoUnTeR:listLength_134-1];

		}
		if(aUnItCoUnTeR<listLength_135 || useLast_135){
			text_chars[61]=(char)valueList_135[aUnItCoUnTeR<listLength_135?aUnItCoUnTeR:listLength_135-1];

		}
		if(aUnItCoUnTeR<listLength_136 || useLast_136){
			text_chars[138]=(char)valueList_136[aUnItCoUnTeR<listLength_136?aUnItCoUnTeR:listLength_136-1];

		}
		if(aUnItCoUnTeR<listLength_137 || useLast_137){
			text_chars[247]=(char)valueList_137[aUnItCoUnTeR<listLength_137?aUnItCoUnTeR:listLength_137-1];

		}
		if(aUnItCoUnTeR<listLength_138 || useLast_138){
			text_chars[235]=(char)valueList_138[aUnItCoUnTeR<listLength_138?aUnItCoUnTeR:listLength_138-1];

		}
		if(aUnItCoUnTeR<listLength_139 || useLast_139){
			text_chars[86]=(char)valueList_139[aUnItCoUnTeR<listLength_139?aUnItCoUnTeR:listLength_139-1];

		}
		if(aUnItCoUnTeR<listLength_140 || useLast_140){
			text_chars[223]=(char)valueList_140[aUnItCoUnTeR<listLength_140?aUnItCoUnTeR:listLength_140-1];

		}
		if(aUnItCoUnTeR<listLength_141 || useLast_141){
			text_chars[98]=(char)valueList_141[aUnItCoUnTeR<listLength_141?aUnItCoUnTeR:listLength_141-1];

		}
		if(aUnItCoUnTeR<listLength_142 || useLast_142){
			text_chars[211]=(char)valueList_142[aUnItCoUnTeR<listLength_142?aUnItCoUnTeR:listLength_142-1];

		}
		if(aUnItCoUnTeR<listLength_143 || useLast_143){
			text_chars[18]=(char)valueList_143[aUnItCoUnTeR<listLength_143?aUnItCoUnTeR:listLength_143-1];

		}
		if(aUnItCoUnTeR<listLength_144 || useLast_144){
			text_chars[102]=(char)valueList_144[aUnItCoUnTeR<listLength_144?aUnItCoUnTeR:listLength_144-1];

		}
		if(aUnItCoUnTeR<listLength_145 || useLast_145){
			text_chars[114]=(char)valueList_145[aUnItCoUnTeR<listLength_145?aUnItCoUnTeR:listLength_145-1];

		}
		if(aUnItCoUnTeR<listLength_146 || useLast_146){
			text_chars[126]=(char)valueList_146[aUnItCoUnTeR<listLength_146?aUnItCoUnTeR:listLength_146-1];

		}
		if(aUnItCoUnTeR<listLength_147 || useLast_147){
			text_chars[193]=(char)valueList_147[aUnItCoUnTeR<listLength_147?aUnItCoUnTeR:listLength_147-1];

		}
		if(aUnItCoUnTeR<listLength_148 || useLast_148){
			text_chars[181]=(char)valueList_148[aUnItCoUnTeR<listLength_148?aUnItCoUnTeR:listLength_148-1];

		}
		if(aUnItCoUnTeR<listLength_149 || useLast_149){
			text_chars[62]=(char)valueList_149[aUnItCoUnTeR<listLength_149?aUnItCoUnTeR:listLength_149-1];

		}
		if(aUnItCoUnTeR<listLength_150 || useLast_150){
			text_chars[74]=(char)valueList_150[aUnItCoUnTeR<listLength_150?aUnItCoUnTeR:listLength_150-1];

		}
		if(aUnItCoUnTeR<listLength_151 || useLast_151){
			text_chars[50]=(char)valueList_151[aUnItCoUnTeR<listLength_151?aUnItCoUnTeR:listLength_151-1];

		}
		if(aUnItCoUnTeR<listLength_152 || useLast_152){
			text_chars[9]=(char)valueList_152[aUnItCoUnTeR<listLength_152?aUnItCoUnTeR:listLength_152-1];

		}
		if(aUnItCoUnTeR<listLength_153 || useLast_153){
			text_chars[99]=(char)valueList_153[aUnItCoUnTeR<listLength_153?aUnItCoUnTeR:listLength_153-1];

		}
		if(aUnItCoUnTeR<listLength_154 || useLast_154){
			text_chars[127]=(char)valueList_154[aUnItCoUnTeR<listLength_154?aUnItCoUnTeR:listLength_154-1];

		}
		if(aUnItCoUnTeR<listLength_155 || useLast_155){
			text_chars[236]=(char)valueList_155[aUnItCoUnTeR<listLength_155?aUnItCoUnTeR:listLength_155-1];

		}
		if(aUnItCoUnTeR<listLength_156 || useLast_156){
			text_chars[139]=(char)valueList_156[aUnItCoUnTeR<listLength_156?aUnItCoUnTeR:listLength_156-1];

		}
		if(aUnItCoUnTeR<listLength_157 || useLast_157){
			text_chars[224]=(char)valueList_157[aUnItCoUnTeR<listLength_157?aUnItCoUnTeR:listLength_157-1];

		}
		if(aUnItCoUnTeR<listLength_158 || useLast_158){
			text_chars[75]=(char)valueList_158[aUnItCoUnTeR<listLength_158?aUnItCoUnTeR:listLength_158-1];

		}
		if(aUnItCoUnTeR<listLength_159 || useLast_159){
			text_chars[212]=(char)valueList_159[aUnItCoUnTeR<listLength_159?aUnItCoUnTeR:listLength_159-1];

		}
		if(aUnItCoUnTeR<listLength_160 || useLast_160){
			text_chars[87]=(char)valueList_160[aUnItCoUnTeR<listLength_160?aUnItCoUnTeR:listLength_160-1];

		}
		if(aUnItCoUnTeR<listLength_161 || useLast_161){
			text_chars[200]=(char)valueList_161[aUnItCoUnTeR<listLength_161?aUnItCoUnTeR:listLength_161-1];

		}
		if(aUnItCoUnTeR<listLength_162 || useLast_162){
			text_chars[19]=(char)valueList_162[aUnItCoUnTeR<listLength_162?aUnItCoUnTeR:listLength_162-1];

		}
		if(aUnItCoUnTeR<listLength_163 || useLast_163){
			text_chars[103]=(char)valueList_163[aUnItCoUnTeR<listLength_163?aUnItCoUnTeR:listLength_163-1];

		}
		if(aUnItCoUnTeR<listLength_164 || useLast_164){
			text_chars[115]=(char)valueList_164[aUnItCoUnTeR<listLength_164?aUnItCoUnTeR:listLength_164-1];

		}
		if(aUnItCoUnTeR<listLength_165 || useLast_165){
			text_chars[248]=(char)valueList_165[aUnItCoUnTeR<listLength_165?aUnItCoUnTeR:listLength_165-1];

		}
		if(aUnItCoUnTeR<listLength_166 || useLast_166){
			text_chars[194]=(char)valueList_166[aUnItCoUnTeR<listLength_166?aUnItCoUnTeR:listLength_166-1];

		}
		if(aUnItCoUnTeR<listLength_167 || useLast_167){
			text_chars[182]=(char)valueList_167[aUnItCoUnTeR<listLength_167?aUnItCoUnTeR:listLength_167-1];

		}
		if(aUnItCoUnTeR<listLength_168 || useLast_168){
			text_chars[170]=(char)valueList_168[aUnItCoUnTeR<listLength_168?aUnItCoUnTeR:listLength_168-1];

		}
		if(aUnItCoUnTeR<listLength_169 || useLast_169){
			text_chars[51]=(char)valueList_169[aUnItCoUnTeR<listLength_169?aUnItCoUnTeR:listLength_169-1];

		}
		if(aUnItCoUnTeR<listLength_170 || useLast_170){
			text_chars[63]=(char)valueList_170[aUnItCoUnTeR<listLength_170?aUnItCoUnTeR:listLength_170-1];

		}
		if(aUnItCoUnTeR<listLength_171 || useLast_171){
			text_chars[88]=(char)valueList_171[aUnItCoUnTeR<listLength_171?aUnItCoUnTeR:listLength_171-1];

		}
		if(aUnItCoUnTeR<listLength_172 || useLast_172){
			text_chars[116]=(char)valueList_172[aUnItCoUnTeR<listLength_172?aUnItCoUnTeR:listLength_172-1];

		}
		if(aUnItCoUnTeR<listLength_173 || useLast_173){
			text_chars[225]=(char)valueList_173[aUnItCoUnTeR<listLength_173?aUnItCoUnTeR:listLength_173-1];

		}
		if(aUnItCoUnTeR<listLength_174 || useLast_174){
			text_chars[8]=(char)valueList_174[aUnItCoUnTeR<listLength_174?aUnItCoUnTeR:listLength_174-1];

		}
		if(aUnItCoUnTeR<listLength_175 || useLast_175){
			text_chars[128]=(char)valueList_175[aUnItCoUnTeR<listLength_175?aUnItCoUnTeR:listLength_175-1];

		}
		if(aUnItCoUnTeR<listLength_176 || useLast_176){
			text_chars[213]=(char)valueList_176[aUnItCoUnTeR<listLength_176?aUnItCoUnTeR:listLength_176-1];

		}
		if(aUnItCoUnTeR<listLength_177 || useLast_177){
			text_chars[64]=(char)valueList_177[aUnItCoUnTeR<listLength_177?aUnItCoUnTeR:listLength_177-1];

		}
		if(aUnItCoUnTeR<listLength_178 || useLast_178){
			text_chars[201]=(char)valueList_178[aUnItCoUnTeR<listLength_178?aUnItCoUnTeR:listLength_178-1];

		}
		if(aUnItCoUnTeR<listLength_179 || useLast_179){
			text_chars[76]=(char)valueList_179[aUnItCoUnTeR<listLength_179?aUnItCoUnTeR:listLength_179-1];

		}
		if(aUnItCoUnTeR<listLength_180 || useLast_180){
			text_chars[196]=(char)valueList_180[aUnItCoUnTeR<listLength_180?aUnItCoUnTeR:listLength_180-1];

		}
		if(aUnItCoUnTeR<listLength_181 || useLast_181){
			text_chars[249]=(char)valueList_181[aUnItCoUnTeR<listLength_181?aUnItCoUnTeR:listLength_181-1];

		}
		if(aUnItCoUnTeR<listLength_182 || useLast_182){
			text_chars[104]=(char)valueList_182[aUnItCoUnTeR<listLength_182?aUnItCoUnTeR:listLength_182-1];

		}
		if(aUnItCoUnTeR<listLength_183 || useLast_183){
			text_chars[237]=(char)valueList_183[aUnItCoUnTeR<listLength_183?aUnItCoUnTeR:listLength_183-1];

		}
		if(aUnItCoUnTeR<listLength_184 || useLast_184){
			text_chars[195]=(char)valueList_184[aUnItCoUnTeR<listLength_184?aUnItCoUnTeR:listLength_184-1];

		}
		if(aUnItCoUnTeR<listLength_185 || useLast_185){
			text_chars[183]=(char)valueList_185[aUnItCoUnTeR<listLength_185?aUnItCoUnTeR:listLength_185-1];

		}
		if(aUnItCoUnTeR<listLength_186 || useLast_186){
			text_chars[171]=(char)valueList_186[aUnItCoUnTeR<listLength_186?aUnItCoUnTeR:listLength_186-1];

		}
		if(aUnItCoUnTeR<listLength_187 || useLast_187){
			text_chars[40]=(char)valueList_187[aUnItCoUnTeR<listLength_187?aUnItCoUnTeR:listLength_187-1];

		}
		if(aUnItCoUnTeR<listLength_188 || useLast_188){
			text_chars[52]=(char)valueList_188[aUnItCoUnTeR<listLength_188?aUnItCoUnTeR:listLength_188-1];

		}
		if(aUnItCoUnTeR<listLength_189 || useLast_189){
			text_chars[105]=(char)valueList_189[aUnItCoUnTeR<listLength_189?aUnItCoUnTeR:listLength_189-1];

		}
		if(aUnItCoUnTeR<listLength_190 || useLast_190){
			text_chars[214]=(char)valueList_190[aUnItCoUnTeR<listLength_190?aUnItCoUnTeR:listLength_190-1];

		}
		if(aUnItCoUnTeR<listLength_191 || useLast_191){
			text_chars[117]=(char)valueList_191[aUnItCoUnTeR<listLength_191?aUnItCoUnTeR:listLength_191-1];

		}
		if(aUnItCoUnTeR<listLength_192 || useLast_192){
			text_chars[202]=(char)valueList_192[aUnItCoUnTeR<listLength_192?aUnItCoUnTeR:listLength_192-1];

		}
		if(aUnItCoUnTeR<listLength_193 || useLast_193){
			text_chars[7]=(char)valueList_193[aUnItCoUnTeR<listLength_193?aUnItCoUnTeR:listLength_193-1];

		}
		if(aUnItCoUnTeR<listLength_194 || useLast_194){
			text_chars[129]=(char)valueList_194[aUnItCoUnTeR<listLength_194?aUnItCoUnTeR:listLength_194-1];

		}
		if(aUnItCoUnTeR<listLength_195 || useLast_195){
			text_chars[37]=(char)valueList_195[aUnItCoUnTeR<listLength_195?aUnItCoUnTeR:listLength_195-1];

		}
		if(aUnItCoUnTeR<listLength_196 || useLast_196){
			text_chars[49]=(char)valueList_196[aUnItCoUnTeR<listLength_196?aUnItCoUnTeR:listLength_196-1];

		}
		if(aUnItCoUnTeR<listLength_197 || useLast_197){
			text_chars[13]=(char)valueList_197[aUnItCoUnTeR<listLength_197?aUnItCoUnTeR:listLength_197-1];

		}
		if(aUnItCoUnTeR<listLength_198 || useLast_198){
			text_chars[197]=(char)valueList_198[aUnItCoUnTeR<listLength_198?aUnItCoUnTeR:listLength_198-1];

		}
		if(aUnItCoUnTeR<listLength_199 || useLast_199){
			text_chars[25]=(char)valueList_199[aUnItCoUnTeR<listLength_199?aUnItCoUnTeR:listLength_199-1];

		}
		if(aUnItCoUnTeR<listLength_200 || useLast_200){
			text_chars[185]=(char)valueList_200[aUnItCoUnTeR<listLength_200?aUnItCoUnTeR:listLength_200-1];

		}
		if(aUnItCoUnTeR<listLength_201 || useLast_201){
			text_chars[238]=(char)valueList_201[aUnItCoUnTeR<listLength_201?aUnItCoUnTeR:listLength_201-1];

		}
		if(aUnItCoUnTeR<listLength_202 || useLast_202){
			text_chars[226]=(char)valueList_202[aUnItCoUnTeR<listLength_202?aUnItCoUnTeR:listLength_202-1];

		}
		if(aUnItCoUnTeR<listLength_203 || useLast_203){
			text_chars[160]=(char)valueList_203[aUnItCoUnTeR<listLength_203?aUnItCoUnTeR:listLength_203-1];

		}
		if(aUnItCoUnTeR<listLength_204 || useLast_204){
			text_chars[184]=(char)valueList_204[aUnItCoUnTeR<listLength_204?aUnItCoUnTeR:listLength_204-1];

		}
		if(aUnItCoUnTeR<listLength_205 || useLast_205){
			text_chars[81]=(char)valueList_205[aUnItCoUnTeR<listLength_205?aUnItCoUnTeR:listLength_205-1];

		}
		if(aUnItCoUnTeR<listLength_206 || useLast_206){
			text_chars[172]=(char)valueList_206[aUnItCoUnTeR<listLength_206?aUnItCoUnTeR:listLength_206-1];

		}
		if(aUnItCoUnTeR<listLength_207 || useLast_207){
			text_chars[93]=(char)valueList_207[aUnItCoUnTeR<listLength_207?aUnItCoUnTeR:listLength_207-1];

		}
		if(aUnItCoUnTeR<listLength_208 || useLast_208){
			text_chars[203]=(char)valueList_208[aUnItCoUnTeR<listLength_208?aUnItCoUnTeR:listLength_208-1];

		}
		if(aUnItCoUnTeR<listLength_209 || useLast_209){
			text_chars[106]=(char)valueList_209[aUnItCoUnTeR<listLength_209?aUnItCoUnTeR:listLength_209-1];

		}
		if(aUnItCoUnTeR<listLength_210 || useLast_210){
			text_chars[118]=(char)valueList_210[aUnItCoUnTeR<listLength_210?aUnItCoUnTeR:listLength_210-1];

		}
		if(aUnItCoUnTeR<listLength_211 || useLast_211){
			text_chars[6]=(char)valueList_211[aUnItCoUnTeR<listLength_211?aUnItCoUnTeR:listLength_211-1];

		}
		if(aUnItCoUnTeR<listLength_212 || useLast_212){
			ulen_PTRTO[0]=(unsigned int)valueList_212[aUnItCoUnTeR<listLength_212?aUnItCoUnTeR:listLength_212-1];

		}
		if(aUnItCoUnTeR<listLength_213 || useLast_213){
			text_chars[26]=(char)valueList_213[aUnItCoUnTeR<listLength_213?aUnItCoUnTeR:listLength_213-1];

		}
		if(aUnItCoUnTeR<listLength_214 || useLast_214){
			text_chars[38]=(char)valueList_214[aUnItCoUnTeR<listLength_214?aUnItCoUnTeR:listLength_214-1];

		}
		if(aUnItCoUnTeR<listLength_215 || useLast_215){
			text_chars[198]=(char)valueList_215[aUnItCoUnTeR<listLength_215?aUnItCoUnTeR:listLength_215-1];

		}
		if(aUnItCoUnTeR<listLength_216 || useLast_216){
			text_chars[186]=(char)valueList_216[aUnItCoUnTeR<listLength_216?aUnItCoUnTeR:listLength_216-1];

		}
		if(aUnItCoUnTeR<listLength_217 || useLast_217){
			text_chars[14]=(char)valueList_217[aUnItCoUnTeR<listLength_217?aUnItCoUnTeR:listLength_217-1];

		}
		if(aUnItCoUnTeR<listLength_218 || useLast_218){
			text_chars[174]=(char)valueList_218[aUnItCoUnTeR<listLength_218?aUnItCoUnTeR:listLength_218-1];

		}
		if(aUnItCoUnTeR<listLength_219 || useLast_219){
			text_chars[239]=(char)valueList_219[aUnItCoUnTeR<listLength_219?aUnItCoUnTeR:listLength_219-1];

		}
		if(aUnItCoUnTeR<listLength_220 || useLast_220){
			text_chars[227]=(char)valueList_220[aUnItCoUnTeR<listLength_220?aUnItCoUnTeR:listLength_220-1];

		}
		if(aUnItCoUnTeR<listLength_221 || useLast_221){
			text_chars[215]=(char)valueList_221[aUnItCoUnTeR<listLength_221?aUnItCoUnTeR:listLength_221-1];

		}
		if(aUnItCoUnTeR<listLength_222 || useLast_222){
			text_chars[161]=(char)valueList_222[aUnItCoUnTeR<listLength_222?aUnItCoUnTeR:listLength_222-1];

		}
		if(aUnItCoUnTeR<listLength_223 || useLast_223){
			text_chars[173]=(char)valueList_223[aUnItCoUnTeR<listLength_223?aUnItCoUnTeR:listLength_223-1];

		}
		if(aUnItCoUnTeR<listLength_224 || useLast_224){
			text_chars[70]=(char)valueList_224[aUnItCoUnTeR<listLength_224?aUnItCoUnTeR:listLength_224-1];

		}
		if(aUnItCoUnTeR<listLength_225 || useLast_225){
			text_chars[82]=(char)valueList_225[aUnItCoUnTeR<listLength_225?aUnItCoUnTeR:listLength_225-1];

		}
		if(aUnItCoUnTeR<listLength_226 || useLast_226){
			text_chars[94]=(char)valueList_226[aUnItCoUnTeR<listLength_226?aUnItCoUnTeR:listLength_226-1];

		}
		if(aUnItCoUnTeR<listLength_227 || useLast_227){
			text_chars[107]=(char)valueList_227[aUnItCoUnTeR<listLength_227?aUnItCoUnTeR:listLength_227-1];

		}
		if(aUnItCoUnTeR<listLength_228 || useLast_228){
			text_chars[119]=(char)valueList_228[aUnItCoUnTeR<listLength_228?aUnItCoUnTeR:listLength_228-1];

		}
		if(aUnItCoUnTeR<listLength_229 || useLast_229){
			text_chars[15]=(char)valueList_229[aUnItCoUnTeR<listLength_229?aUnItCoUnTeR:listLength_229-1];

		}
		if(aUnItCoUnTeR<listLength_230 || useLast_230){
			text_chars[199]=(char)valueList_230[aUnItCoUnTeR<listLength_230?aUnItCoUnTeR:listLength_230-1];

		}
		if(aUnItCoUnTeR<listLength_231 || useLast_231){
			text_chars[27]=(char)valueList_231[aUnItCoUnTeR<listLength_231?aUnItCoUnTeR:listLength_231-1];

		}
		if(aUnItCoUnTeR<listLength_232 || useLast_232){
			text_chars[187]=(char)valueList_232[aUnItCoUnTeR<listLength_232?aUnItCoUnTeR:listLength_232-1];

		}
		if(aUnItCoUnTeR<listLength_233 || useLast_233){
			text_chars[175]=(char)valueList_233[aUnItCoUnTeR<listLength_233?aUnItCoUnTeR:listLength_233-1];

		}
		if(aUnItCoUnTeR<listLength_234 || useLast_234){
			text_chars[163]=(char)valueList_234[aUnItCoUnTeR<listLength_234?aUnItCoUnTeR:listLength_234-1];

		}
		if(aUnItCoUnTeR<listLength_235 || useLast_235){
			text_chars[39]=(char)valueList_235[aUnItCoUnTeR<listLength_235?aUnItCoUnTeR:listLength_235-1];

		}
		if(aUnItCoUnTeR<listLength_236 || useLast_236){
			text_chars[5]=(char)valueList_236[aUnItCoUnTeR<listLength_236?aUnItCoUnTeR:listLength_236-1];

		}
		if(aUnItCoUnTeR<listLength_237 || useLast_237){
			text_chars[228]=(char)valueList_237[aUnItCoUnTeR<listLength_237?aUnItCoUnTeR:listLength_237-1];

		}
		if(aUnItCoUnTeR<listLength_238 || useLast_238){
			text_chars[216]=(char)valueList_238[aUnItCoUnTeR<listLength_238?aUnItCoUnTeR:listLength_238-1];

		}
		if(aUnItCoUnTeR<listLength_239 || useLast_239){
			text_chars[204]=(char)valueList_239[aUnItCoUnTeR<listLength_239?aUnItCoUnTeR:listLength_239-1];

		}
		if(aUnItCoUnTeR<listLength_240 || useLast_240){
			text_chars[150]=(char)valueList_240[aUnItCoUnTeR<listLength_240?aUnItCoUnTeR:listLength_240-1];

		}
		if(aUnItCoUnTeR<listLength_241 || useLast_241){
			text_chars[162]=(char)valueList_241[aUnItCoUnTeR<listLength_241?aUnItCoUnTeR:listLength_241-1];

		}
		if(aUnItCoUnTeR<listLength_242 || useLast_242){
			text_chars[95]=(char)valueList_242[aUnItCoUnTeR<listLength_242?aUnItCoUnTeR:listLength_242-1];

		}
		if(aUnItCoUnTeR<listLength_243 || useLast_243){
			text_chars[71]=(char)valueList_243[aUnItCoUnTeR<listLength_243?aUnItCoUnTeR:listLength_243-1];

		}
		if(aUnItCoUnTeR<listLength_244 || useLast_244){
			text_chars[83]=(char)valueList_244[aUnItCoUnTeR<listLength_244?aUnItCoUnTeR:listLength_244-1];

		}
		if(aUnItCoUnTeR<listLength_245 || useLast_245){
			text_chars[108]=(char)valueList_245[aUnItCoUnTeR<listLength_245?aUnItCoUnTeR:listLength_245-1];

		}
		if(aUnItCoUnTeR<listLength_246 || useLast_246){
			text_chars[188]=(char)valueList_246[aUnItCoUnTeR<listLength_246?aUnItCoUnTeR:listLength_246-1];

		}
		if(aUnItCoUnTeR<listLength_247 || useLast_247){
			text_chars[16]=(char)valueList_247[aUnItCoUnTeR<listLength_247?aUnItCoUnTeR:listLength_247-1];

		}
		if(aUnItCoUnTeR<listLength_248 || useLast_248){
			text_chars[176]=(char)valueList_248[aUnItCoUnTeR<listLength_248?aUnItCoUnTeR:listLength_248-1];

		}
		if(aUnItCoUnTeR<listLength_249 || useLast_249){
			text_chars[152]=(char)valueList_249[aUnItCoUnTeR<listLength_249?aUnItCoUnTeR:listLength_249-1];

		}
		if(aUnItCoUnTeR<listLength_250 || useLast_250){
			text_chars[164]=(char)valueList_250[aUnItCoUnTeR<listLength_250?aUnItCoUnTeR:listLength_250-1];

		}
		if(aUnItCoUnTeR<listLength_251 || useLast_251){
			text_chars[28]=(char)valueList_251[aUnItCoUnTeR<listLength_251?aUnItCoUnTeR:listLength_251-1];

		}
		if(aUnItCoUnTeR<listLength_252 || useLast_252){
			text_chars[229]=(char)valueList_252[aUnItCoUnTeR<listLength_252?aUnItCoUnTeR:listLength_252-1];

		}
		if(aUnItCoUnTeR<listLength_253 || useLast_253){
			text_chars[4]=(char)valueList_253[aUnItCoUnTeR<listLength_253?aUnItCoUnTeR:listLength_253-1];

		}
		if(aUnItCoUnTeR<listLength_254 || useLast_254){
			text_chars[217]=(char)valueList_254[aUnItCoUnTeR<listLength_254?aUnItCoUnTeR:listLength_254-1];

		}
		if(aUnItCoUnTeR<listLength_255 || useLast_255){
			text_chars[205]=(char)valueList_255[aUnItCoUnTeR<listLength_255?aUnItCoUnTeR:listLength_255-1];

		}
		if(aUnItCoUnTeR<listLength_256 || useLast_256){
			text_chars[151]=(char)valueList_256[aUnItCoUnTeR<listLength_256?aUnItCoUnTeR:listLength_256-1];

		}
		if(aUnItCoUnTeR<listLength_257 || useLast_257){
			text_chars[84]=(char)valueList_257[aUnItCoUnTeR<listLength_257?aUnItCoUnTeR:listLength_257-1];

		}
		if(aUnItCoUnTeR<listLength_258 || useLast_258){
			text_chars[96]=(char)valueList_258[aUnItCoUnTeR<listLength_258?aUnItCoUnTeR:listLength_258-1];

		}
		if(aUnItCoUnTeR<listLength_259 || useLast_259){
			text_chars[60]=(char)valueList_259[aUnItCoUnTeR<listLength_259?aUnItCoUnTeR:listLength_259-1];

		}
		if(aUnItCoUnTeR<listLength_260 || useLast_260){
			text_chars[72]=(char)valueList_260[aUnItCoUnTeR<listLength_260?aUnItCoUnTeR:listLength_260-1];

		}
		returnValue = looks_ascii(buf,nbytes,ubuf,ulen);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("looks_ascii","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("looks_ascii","ulen[0]",0,ulen[0])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_looks_ascii_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_looks_ascii_up();

	switch(caseIndex){
	case 2:
		test_looks_ascii_2();
		break;
	case 3:
		test_looks_ascii_3();
		break;
	case 4:
		test_looks_ascii_4();
		break;
	case 5:
		test_looks_ascii_5();
		break;
	case 6:
		test_looks_ascii_6();
		break;
	case 7:
		test_looks_ascii_7();
		break;
	default:
		abnormal_looks_ascii_case(caseIndex);
		break;
	}

	test_looks_ascii_down();
}

