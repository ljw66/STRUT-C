void test_SubWord_up(void);
void test_SubWord_down(void);


void test_SubWord_up(void){

	aunit_printf("\n##FUNCTION_START_SubWord\n");
 }

void test_SubWord_down(void){
	aunit_printf("\n##FUNCTION_END_SubWord\n");
 }



void abnormal_SubWord_case(int index);

void abnormal_SubWord_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_SubWord_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int word;

	//声明返回值局部变量，若为基本类型赋默认值
	WORD returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={11};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={7};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={14};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={3};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={5};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={3};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={13};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={5};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={9};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={10};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={11};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={9};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={3};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={6};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={2};
	unsigned int listLength_14=1;
	unsigned char valueList_15[]={14};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={7};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={1};
	unsigned int listLength_17=1;
	unsigned char valueList_18[]={7};
	unsigned int listLength_18=1;
	unsigned char valueList_19[]={3};
	unsigned int listLength_19=1;
	unsigned char valueList_20[]={9};
	unsigned int listLength_20=1;
	unsigned char valueList_21[]={5};
	unsigned int listLength_21=1;
	unsigned char valueList_22[]={13};
	unsigned int listLength_22=1;
	unsigned char valueList_23[]={5};
	unsigned int listLength_23=1;
	unsigned char valueList_24[]={9};
	unsigned int listLength_24=1;
	unsigned char valueList_25[]={10};
	unsigned int listLength_25=1;
	unsigned char valueList_26[]={11};
	unsigned int listLength_26=1;
	unsigned char valueList_27[]={6};
	unsigned int listLength_27=1;
	unsigned char valueList_28[]={2};
	unsigned int listLength_28=1;
	unsigned char valueList_29[]={7};
	unsigned int listLength_29=1;
	unsigned char valueList_30[]={11};
	unsigned int listLength_30=1;
	unsigned char valueList_31[]={14};
	unsigned int listLength_31=1;
	unsigned char valueList_32[]={3};
	unsigned int listLength_32=1;
	unsigned char valueList_33[]={13};
	unsigned int listLength_33=1;
	unsigned char valueList_34[]={5};
	unsigned int listLength_34=1;
	unsigned char valueList_35[]={13};
	unsigned int listLength_35=1;
	unsigned char valueList_36[]={9};
	unsigned int listLength_36=1;
	unsigned char valueList_37[]={13};
	unsigned int listLength_37=1;
	unsigned char valueList_38[]={2};
	unsigned int listLength_38=1;
	unsigned char valueList_39[]={11};
	unsigned int listLength_39=1;
	unsigned char valueList_40[]={5};
	unsigned int listLength_40=1;
	unsigned char valueList_41[]={6};
	unsigned int listLength_41=1;
	unsigned char valueList_42[]={9};
	unsigned int listLength_42=1;
	unsigned char valueList_43[]={3};
	unsigned int listLength_43=1;
	unsigned char valueList_44[]={10};
	unsigned int listLength_44=1;
	unsigned char valueList_45[]={1};
	unsigned int listLength_45=1;
	unsigned char valueList_46[]={8};
	unsigned int listLength_46=1;
	unsigned char valueList_47[]={11};
	unsigned int listLength_47=1;
	unsigned char valueList_48[]={7};
	unsigned int listLength_48=1;
	unsigned char valueList_49[]={14};
	unsigned int listLength_49=1;
	unsigned char valueList_50[]={2};
	unsigned int listLength_50=1;
	unsigned char valueList_51[]={5};
	unsigned int listLength_51=1;
	unsigned char valueList_52[]={3};
	unsigned int listLength_52=1;
	unsigned char valueList_53[]={13};
	unsigned int listLength_53=1;
	unsigned char valueList_54[]={2};
	unsigned int listLength_54=1;
	unsigned char valueList_55[]={9};
	unsigned int listLength_55=1;
	unsigned char valueList_56[]={6};
	unsigned int listLength_56=1;
	unsigned char valueList_57[]={4};
	unsigned int listLength_57=1;
	unsigned char valueList_58[]={11};
	unsigned int listLength_58=1;
	unsigned char valueList_59[]={5};
	unsigned int listLength_59=1;
	unsigned char valueList_60[]={12};
	unsigned int listLength_60=1;
	unsigned char valueList_61[]={9};
	unsigned int listLength_61=1;
	unsigned char valueList_62[]={3};
	unsigned int listLength_62=1;
	unsigned char valueList_63[]={10};
	unsigned int listLength_63=1;
	unsigned char valueList_64[]={13};
	unsigned int listLength_64=1;
	unsigned char valueList_65[]={1};
	unsigned int listLength_65=1;
	unsigned char valueList_66[]={14};
	unsigned int listLength_66=1;
	unsigned char valueList_67[]={12};
	unsigned int listLength_67=1;
	unsigned char valueList_68[]={7};
	unsigned int listLength_68=1;
	unsigned char valueList_69[]={11};
	unsigned int listLength_69=1;
	unsigned char valueList_70[]={1};
	unsigned int listLength_70=1;
	unsigned char valueList_71[]={2};
	unsigned int listLength_71=1;
	unsigned char valueList_72[]={14};
	unsigned int listLength_72=1;
	unsigned char valueList_73[]={8};
	unsigned int listLength_73=1;
	unsigned char valueList_74[]={10};
	unsigned int listLength_74=1;
	unsigned char valueList_75[]={2};
	unsigned int listLength_75=1;
	unsigned char valueList_76[]={4};
	unsigned int listLength_76=1;
	unsigned char valueList_77[]={9};
	unsigned int listLength_77=1;
	unsigned char valueList_78[]={1};
	unsigned int listLength_78=1;
	unsigned char valueList_79[]={6};
	unsigned int listLength_79=1;
	unsigned char valueList_80[]={12};
	unsigned int listLength_80=1;
	unsigned char valueList_81[]={13};
	unsigned int listLength_81=1;
	unsigned char valueList_82[]={14};
	unsigned int listLength_82=1;
	unsigned char valueList_83[]={11};
	unsigned int listLength_83=1;
	unsigned char valueList_84[]={13};
	unsigned int listLength_84=1;
	unsigned char valueList_85[]={1};
	unsigned int listLength_85=1;
	unsigned char valueList_86[]={8};
	unsigned int listLength_86=1;
	unsigned char valueList_87[]={7};
	unsigned int listLength_87=1;
	unsigned char valueList_88[]={15};
	unsigned int listLength_88=1;
	unsigned char valueList_89[]={2};
	unsigned int listLength_89=1;
	unsigned char valueList_90[]={14};
	unsigned int listLength_90=1;
	unsigned char valueList_91[]={14};
	unsigned int listLength_91=1;
	unsigned char valueList_92[]={2};
	unsigned int listLength_92=1;
	unsigned char valueList_93[]={9};
	unsigned int listLength_93=1;
	unsigned char valueList_94[]={10};
	unsigned int listLength_94=1;
	unsigned char valueList_95[]={14};
	unsigned int listLength_95=1;
	unsigned char valueList_96[]={1};
	unsigned int listLength_96=1;
	unsigned char valueList_97[]={6};
	unsigned int listLength_97=1;
	unsigned char valueList_98[]={12};
	unsigned int listLength_98=1;
	unsigned char valueList_99[]={1};
	unsigned int listLength_99=1;
	unsigned char valueList_100[]={13};
	unsigned int listLength_100=1;
	unsigned char valueList_101[]={1};
	unsigned int listLength_101=1;
	unsigned char valueList_102[]={7};
	unsigned int listLength_102=1;
	unsigned char valueList_103[]={12};
	unsigned int listLength_103=1;
	unsigned char valueList_104[]={15};
	unsigned int listLength_104=1;
	unsigned char valueList_105[]={11};
	unsigned int listLength_105=1;
	unsigned char valueList_106[]={9};
	unsigned int listLength_106=1;
	unsigned char valueList_107[]={7};
	unsigned int listLength_107=1;
	unsigned char valueList_108[]={2};
	unsigned int listLength_108=1;
	unsigned char valueList_109[]={2};
	unsigned int listLength_109=1;
	unsigned char valueList_110[]={8};
	unsigned int listLength_110=1;
	unsigned char valueList_111[]={0};
	unsigned int listLength_111=1;
	unsigned char valueList_112[]={14};
	unsigned int listLength_112=1;
	unsigned char valueList_113[]={15};
	unsigned int listLength_113=1;
	unsigned char valueList_114[]={6};
	unsigned int listLength_114=1;
	unsigned char valueList_115[]={14};
	unsigned int listLength_115=1;
	unsigned char valueList_116[]={6};
	unsigned int listLength_116=1;
	unsigned char valueList_117[]={12};
	unsigned int listLength_117=1;
	unsigned char valueList_118[]={10};
	unsigned int listLength_118=1;
	unsigned char valueList_119[]={2};
	unsigned int listLength_119=1;
	unsigned char valueList_120[]={7};
	unsigned int listLength_120=1;
	unsigned char valueList_121[]={1};
	unsigned int listLength_121=1;
	unsigned char valueList_122[]={13};
	unsigned int listLength_122=1;
	unsigned char valueList_123[]={7};
	unsigned int listLength_123=1;
	unsigned char valueList_124[]={11};
	unsigned int listLength_124=1;
	unsigned char valueList_125[]={5};
	unsigned int listLength_125=1;
	unsigned char valueList_126[]={12};
	unsigned int listLength_126=1;
	unsigned char valueList_127[]={15};
	unsigned int listLength_127=1;
	unsigned char valueList_128[]={3};
	unsigned int listLength_128=1;
	unsigned char valueList_129[]={1};
	unsigned int listLength_129=1;
	unsigned char valueList_130[]={2};
	unsigned int listLength_130=1;
	unsigned char valueList_131[]={15};
	unsigned int listLength_131=1;
	unsigned char valueList_132[]={8};
	unsigned int listLength_132=1;
	unsigned char valueList_133[]={6};
	unsigned int listLength_133=1;
	unsigned char valueList_134[]={12};
	unsigned int listLength_134=1;
	unsigned char valueList_135[]={2};
	unsigned int listLength_135=1;
	unsigned char valueList_136[]={10};
	unsigned int listLength_136=1;
	unsigned char valueList_137[]={5};
	unsigned int listLength_137=1;
	unsigned char valueList_138[]={10};
	unsigned int listLength_138=1;
	unsigned char valueList_139[]={3};
	unsigned int listLength_139=1;
	unsigned char valueList_140[]={4};
	unsigned int listLength_140=1;
	unsigned char valueList_141[]={8};
	unsigned int listLength_141=1;
	unsigned char valueList_142[]={12};
	unsigned int listLength_142=1;
	unsigned char valueList_143[]={7};
	unsigned int listLength_143=1;
	unsigned char valueList_144[]={11};
	unsigned int listLength_144=1;
	unsigned char valueList_145[]={1};
	unsigned int listLength_145=1;
	unsigned char valueList_146[]={12};
	unsigned int listLength_146=1;
	unsigned char valueList_147[]={15};
	unsigned int listLength_147=1;
	unsigned char valueList_148[]={2};
	unsigned int listLength_148=1;
	unsigned char valueList_149[]={8};
	unsigned int listLength_149=1;
	unsigned char valueList_150[]={4};
	unsigned int listLength_150=1;
	unsigned char valueList_151[]={6};
	unsigned int listLength_151=1;
	unsigned char valueList_152[]={10};
	unsigned int listLength_152=1;
	unsigned char valueList_153[]={8};
	unsigned int listLength_153=1;
	unsigned char valueList_154[]={4};
	unsigned int listLength_154=1;
	unsigned char valueList_155[]={12};
	unsigned int listLength_155=1;
	unsigned char valueList_156[]={11};
	unsigned int listLength_156=1;
	unsigned char valueList_157[]={1};
	unsigned int listLength_157=1;
	unsigned char valueList_158[]={7};
	unsigned int listLength_158=1;
	unsigned char valueList_159[]={9};
	unsigned int listLength_159=1;
	unsigned char valueList_160[]={15};
	unsigned int listLength_160=1;
	unsigned char valueList_161[]={8};
	unsigned int listLength_161=1;
	unsigned char valueList_162[]={14};
	unsigned int listLength_162=1;
	unsigned char valueList_163[]={1};
	unsigned int listLength_163=1;
	unsigned char valueList_164[]={6};
	unsigned int listLength_164=1;
	unsigned char valueList_165[]={4};
	unsigned int listLength_165=1;
	unsigned char valueList_166[]={10};
	unsigned int listLength_166=1;
	unsigned char valueList_167[]={12};
	unsigned int listLength_167=1;
	unsigned char valueList_168[]={8};
	unsigned int listLength_168=1;
	unsigned char valueList_169[]={1};
	unsigned int listLength_169=1;
	unsigned char valueList_170[]={7};
	unsigned int listLength_170=1;
	unsigned char valueList_171[]={11};
	unsigned int listLength_171=1;
	unsigned char valueList_172[]={15};
	unsigned int listLength_172=1;
	unsigned char valueList_173[]={6};
	unsigned int listLength_173=1;
	unsigned char valueList_174[]={4};
	unsigned int listLength_174=1;
	unsigned char valueList_175[]={15};
	unsigned int listLength_175=1;
	unsigned char valueList_176[]={13};
	unsigned int listLength_176=1;
	unsigned char valueList_177[]={2};
	unsigned int listLength_177=1;
	unsigned char valueList_178[]={14};
	unsigned int listLength_178=1;
	unsigned char valueList_179[]={4};
	unsigned int listLength_179=1;
	unsigned char valueList_180[]={10};
	unsigned int listLength_180=1;
	unsigned char valueList_181[]={11};
	unsigned int listLength_181=1;
	unsigned char valueList_182[]={4};
	unsigned int listLength_182=1;
	unsigned char valueList_183[]={12};
	unsigned int listLength_183=1;
	unsigned char valueList_184[]={8};
	unsigned int listLength_184=1;
	unsigned char valueList_185[]={7};
	unsigned int listLength_185=1;
	unsigned char valueList_186[]={11};
	unsigned int listLength_186=1;
	unsigned char valueList_187[]={1};
	unsigned int listLength_187=1;
	unsigned char valueList_188[]={15};
	unsigned int listLength_188=1;
	unsigned char valueList_189[]={13};
	unsigned int listLength_189=1;
	unsigned char valueList_190[]={14};
	unsigned int listLength_190=1;
	unsigned char valueList_191[]={3};
	unsigned int listLength_191=1;
	unsigned char valueList_192[]={8};
	unsigned int listLength_192=1;
	unsigned char valueList_193[]={15};
	unsigned int listLength_193=1;
	unsigned char valueList_194[]={6};
	unsigned int listLength_194=1;
	unsigned char valueList_195[]={4};
	unsigned int listLength_195=1;
	unsigned char valueList_196[]={6};
	unsigned int listLength_196=1;
	unsigned char valueList_197[]={4};
	unsigned int listLength_197=1;
	unsigned char valueList_198[]={8};
	unsigned int listLength_198=1;
	unsigned char valueList_199[]={12};
	unsigned int listLength_199=1;
	unsigned char valueList_200[]={10};
	unsigned int listLength_200=1;
	unsigned char valueList_201[]={5};
	unsigned int listLength_201=1;
	unsigned char valueList_202[]={3};
	unsigned int listLength_202=1;
	unsigned char valueList_203[]={4};
	unsigned int listLength_203=1;
	unsigned char valueList_204[]={11};
	unsigned int listLength_204=1;
	unsigned char valueList_205[]={15};
	unsigned int listLength_205=1;
	unsigned char valueList_206[]={15};
	unsigned int listLength_206=1;
	unsigned char valueList_207[]={13};
	unsigned int listLength_207=1;
	unsigned char valueList_208[]={6};
	unsigned int listLength_208=1;
	unsigned char valueList_209[]={9};
	unsigned int listLength_209=1;
	unsigned char valueList_210[]={6};
	unsigned int listLength_210=1;
	unsigned char valueList_211[]={3};
	unsigned int listLength_211=1;
	unsigned char valueList_212[]={3};
	unsigned int listLength_212=1;
	unsigned char valueList_213[]={8};
	unsigned int listLength_213=1;
	unsigned char valueList_214[]={5};
	unsigned int listLength_214=1;
	unsigned char valueList_215[]={12};
	unsigned int listLength_215=1;
	unsigned char valueList_216[]={2};
	unsigned int listLength_216=1;
	unsigned char valueList_217[]={9};
	unsigned int listLength_217=1;
	unsigned char valueList_218[]={15};
	unsigned int listLength_218=1;
	unsigned char valueList_219[]={4};
	unsigned int listLength_219=1;
	unsigned char valueList_220[]={11};
	unsigned int listLength_220=1;
	unsigned char valueList_221[]={15};
	unsigned int listLength_221=1;
	unsigned char valueList_222[]={13};
	unsigned int listLength_222=1;
	unsigned char valueList_223[]={3};
	unsigned int listLength_223=1;
	unsigned char valueList_224[]={6};
	unsigned int listLength_224=1;
	unsigned char valueList_225[]={5};
	unsigned int listLength_225=1;
	unsigned char valueList_226[]={12};
	unsigned int listLength_226=1;
	unsigned char valueList_227[]={9};
	unsigned int listLength_227=1;
	unsigned char valueList_228[]={3};
	unsigned int listLength_228=1;
	unsigned char valueList_229[]={5};
	unsigned int listLength_229=1;
	unsigned char valueList_230[]={8};
	unsigned int listLength_230=1;
	unsigned char valueList_231[]={14};
	unsigned int listLength_231=1;
	unsigned char valueList_232[]={4};
	unsigned int listLength_232=1;
	unsigned char valueList_233[]={10};
	unsigned int listLength_233=1;
	unsigned char valueList_234[]={1};
	unsigned int listLength_234=1;
	unsigned char valueList_235[]={7};
	unsigned int listLength_235=1;
	unsigned char valueList_236[]={4};
	unsigned int listLength_236=1;
	unsigned char valueList_237[]={5};
	unsigned int listLength_237=1;
	unsigned char valueList_238[]={9};
	unsigned int listLength_238=1;
	unsigned char valueList_239[]={10};
	unsigned int listLength_239=1;
	unsigned char valueList_240[]={15};
	unsigned int listLength_240=1;
	unsigned char valueList_241[]={13};
	unsigned int listLength_241=1;
	unsigned char valueList_242[]={8};
	unsigned int listLength_242=1;
	unsigned char valueList_243[]={4};
	unsigned int listLength_243=1;
	unsigned char valueList_244[]={5};
	unsigned int listLength_244=1;
	unsigned char valueList_245[]={12};
	unsigned int listLength_245=1;
	unsigned char valueList_246[]={3};
	unsigned int listLength_246=1;
	unsigned char valueList_247[]={14};
	unsigned int listLength_247=1;
	unsigned char valueList_248[]={8};
	unsigned int listLength_248=1;
	unsigned char valueList_249[]={10};
	unsigned int listLength_249=1;
	unsigned char valueList_250[]={4};
	unsigned int listLength_250=1;
	unsigned char valueList_251[]={13};
	unsigned int listLength_251=1;
	unsigned char valueList_252[]={5};
	unsigned int listLength_252=1;
	unsigned char valueList_253[]={9};
	unsigned int listLength_253=1;
	unsigned char valueList_254[]={10};
	unsigned int listLength_254=1;
	unsigned char valueList_255[]={15};
	unsigned int listLength_255=1;
	unsigned char valueList_256[]={7};
	unsigned int listLength_256=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_SubWord_1,false,0\n");
	aunit_printf("#CASE_START_test_SubWord_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			word=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			aes_sbox[7][13]=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			aes_sbox[14][7]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			aes_sbox[3][10]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			aes_sbox[5][1]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			aes_sbox[3][8]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			aes_sbox[13][3]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			aes_sbox[5][12]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			aes_sbox[9][2]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			aes_sbox[10][6]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			aes_sbox[11][14]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			aes_sbox[9][15]=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			aes_sbox[3][11]=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			aes_sbox[6][5]=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			aes_sbox[2][3]=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			aes_sbox[14][6]=(unsigned char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			aes_sbox[7][12]=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			aes_sbox[1][0]=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			aes_sbox[7][9]=(unsigned char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			aes_sbox[3][7]=(unsigned char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			aes_sbox[9][1]=(unsigned char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			aes_sbox[5][2]=(unsigned char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			aes_sbox[13][2]=(unsigned char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			aes_sbox[5][13]=(unsigned char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			aes_sbox[9][14]=(unsigned char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			aes_sbox[10][7]=(unsigned char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			aes_sbox[11][15]=(unsigned char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			aes_sbox[6][6]=(unsigned char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			aes_sbox[2][4]=(unsigned char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			aes_sbox[7][11]=(unsigned char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			aes_sbox[11][8]=(unsigned char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			aes_sbox[14][5]=(unsigned char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			aes_sbox[3][6]=(unsigned char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			aes_sbox[13][0]=(unsigned char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			aes_sbox[5][3]=(unsigned char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			aes_sbox[13][14]=(unsigned char)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			aes_sbox[9][4]=(unsigned char)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			aes_sbox[13][1]=(unsigned char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			aes_sbox[2][1]=(unsigned char)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			aes_sbox[11][12]=(unsigned char)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			aes_sbox[5][14]=(unsigned char)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			aes_sbox[6][7]=(unsigned char)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			aes_sbox[9][13]=(unsigned char)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			aes_sbox[3][13]=(unsigned char)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			aes_sbox[10][4]=(unsigned char)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			aes_sbox[1][10]=(unsigned char)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			aes_sbox[8][0]=(unsigned char)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			aes_sbox[11][9]=(unsigned char)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			aes_sbox[7][10]=(unsigned char)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		if(aUnItCoUnTeR<listLength_49 || useLast_49){
			aes_sbox[14][4]=(unsigned char)valueList_49[aUnItCoUnTeR<listLength_49?aUnItCoUnTeR:listLength_49-1];

		}
		if(aUnItCoUnTeR<listLength_50 || useLast_50){
			aes_sbox[2][15]=(unsigned char)valueList_50[aUnItCoUnTeR<listLength_50?aUnItCoUnTeR:listLength_50-1];

		}
		if(aUnItCoUnTeR<listLength_51 || useLast_51){
			aes_sbox[5][4]=(unsigned char)valueList_51[aUnItCoUnTeR<listLength_51?aUnItCoUnTeR:listLength_51-1];

		}
		if(aUnItCoUnTeR<listLength_52 || useLast_52){
			aes_sbox[3][5]=(unsigned char)valueList_52[aUnItCoUnTeR<listLength_52?aUnItCoUnTeR:listLength_52-1];

		}
		if(aUnItCoUnTeR<listLength_53 || useLast_53){
			aes_sbox[13][15]=(unsigned char)valueList_53[aUnItCoUnTeR<listLength_53?aUnItCoUnTeR:listLength_53-1];

		}
		if(aUnItCoUnTeR<listLength_54 || useLast_54){
			aes_sbox[2][2]=(unsigned char)valueList_54[aUnItCoUnTeR<listLength_54?aUnItCoUnTeR:listLength_54-1];

		}
		if(aUnItCoUnTeR<listLength_55 || useLast_55){
			aes_sbox[9][3]=(unsigned char)valueList_55[aUnItCoUnTeR<listLength_55?aUnItCoUnTeR:listLength_55-1];

		}
		if(aUnItCoUnTeR<listLength_56 || useLast_56){
			aes_sbox[6][8]=(unsigned char)valueList_56[aUnItCoUnTeR<listLength_56?aUnItCoUnTeR:listLength_56-1];

		}
		if(aUnItCoUnTeR<listLength_57 || useLast_57){
			aes_sbox[4][9]=(unsigned char)valueList_57[aUnItCoUnTeR<listLength_57?aUnItCoUnTeR:listLength_57-1];

		}
		if(aUnItCoUnTeR<listLength_58 || useLast_58){
			aes_sbox[11][13]=(unsigned char)valueList_58[aUnItCoUnTeR<listLength_58?aUnItCoUnTeR:listLength_58-1];

		}
		if(aUnItCoUnTeR<listLength_59 || useLast_59){
			aes_sbox[5][15]=(unsigned char)valueList_59[aUnItCoUnTeR<listLength_59?aUnItCoUnTeR:listLength_59-1];

		}
		if(aUnItCoUnTeR<listLength_60 || useLast_60){
			aes_sbox[12][10]=(unsigned char)valueList_60[aUnItCoUnTeR<listLength_60?aUnItCoUnTeR:listLength_60-1];

		}
		if(aUnItCoUnTeR<listLength_61 || useLast_61){
			aes_sbox[9][12]=(unsigned char)valueList_61[aUnItCoUnTeR<listLength_61?aUnItCoUnTeR:listLength_61-1];

		}
		if(aUnItCoUnTeR<listLength_62 || useLast_62){
			aes_sbox[3][12]=(unsigned char)valueList_62[aUnItCoUnTeR<listLength_62?aUnItCoUnTeR:listLength_62-1];

		}
		if(aUnItCoUnTeR<listLength_63 || useLast_63){
			aes_sbox[10][5]=(unsigned char)valueList_63[aUnItCoUnTeR<listLength_63?aUnItCoUnTeR:listLength_63-1];

		}
		if(aUnItCoUnTeR<listLength_64 || useLast_64){
			aes_sbox[13][12]=(unsigned char)valueList_64[aUnItCoUnTeR<listLength_64?aUnItCoUnTeR:listLength_64-1];

		}
		if(aUnItCoUnTeR<listLength_65 || useLast_65){
			aes_sbox[1][13]=(unsigned char)valueList_65[aUnItCoUnTeR<listLength_65?aUnItCoUnTeR:listLength_65-1];

		}
		if(aUnItCoUnTeR<listLength_66 || useLast_66){
			aes_sbox[14][3]=(unsigned char)valueList_66[aUnItCoUnTeR<listLength_66?aUnItCoUnTeR:listLength_66-1];

		}
		if(aUnItCoUnTeR<listLength_67 || useLast_67){
			aes_sbox[0][12]=(unsigned char)valueList_67[aUnItCoUnTeR<listLength_67?aUnItCoUnTeR:listLength_67-1];

		}
		if(aUnItCoUnTeR<listLength_68 || useLast_68){
			aes_sbox[7][6]=(unsigned char)valueList_68[aUnItCoUnTeR<listLength_68?aUnItCoUnTeR:listLength_68-1];

		}
		if(aUnItCoUnTeR<listLength_69 || useLast_69){
			aes_sbox[11][6]=(unsigned char)valueList_69[aUnItCoUnTeR<listLength_69?aUnItCoUnTeR:listLength_69-1];

		}
		if(aUnItCoUnTeR<listLength_70 || useLast_70){
			aes_sbox[1][3]=(unsigned char)valueList_70[aUnItCoUnTeR<listLength_70?aUnItCoUnTeR:listLength_70-1];

		}
		if(aUnItCoUnTeR<listLength_71 || useLast_71){
			aes_sbox[2][14]=(unsigned char)valueList_71[aUnItCoUnTeR<listLength_71?aUnItCoUnTeR:listLength_71-1];

		}
		if(aUnItCoUnTeR<listLength_72 || useLast_72){
			aes_sbox[14][12]=(unsigned char)valueList_72[aUnItCoUnTeR<listLength_72?aUnItCoUnTeR:listLength_72-1];

		}
		if(aUnItCoUnTeR<listLength_73 || useLast_73){
			aes_sbox[8][10]=(unsigned char)valueList_73[aUnItCoUnTeR<listLength_73?aUnItCoUnTeR:listLength_73-1];

		}
		if(aUnItCoUnTeR<listLength_74 || useLast_74){
			aes_sbox[10][2]=(unsigned char)valueList_74[aUnItCoUnTeR<listLength_74?aUnItCoUnTeR:listLength_74-1];

		}
		if(aUnItCoUnTeR<listLength_75 || useLast_75){
			aes_sbox[2][7]=(unsigned char)valueList_75[aUnItCoUnTeR<listLength_75?aUnItCoUnTeR:listLength_75-1];

		}
		if(aUnItCoUnTeR<listLength_76 || useLast_76){
			aes_sbox[4][0]=(unsigned char)valueList_76[aUnItCoUnTeR<listLength_76?aUnItCoUnTeR:listLength_76-1];

		}
		if(aUnItCoUnTeR<listLength_77 || useLast_77){
			aes_sbox[9][11]=(unsigned char)valueList_77[aUnItCoUnTeR<listLength_77?aUnItCoUnTeR:listLength_77-1];

		}
		if(aUnItCoUnTeR<listLength_78 || useLast_78){
			aes_sbox[1][12]=(unsigned char)valueList_78[aUnItCoUnTeR<listLength_78?aUnItCoUnTeR:listLength_78-1];

		}
		if(aUnItCoUnTeR<listLength_79 || useLast_79){
			aes_sbox[6][1]=(unsigned char)valueList_79[aUnItCoUnTeR<listLength_79?aUnItCoUnTeR:listLength_79-1];

		}
		if(aUnItCoUnTeR<listLength_80 || useLast_80){
			aes_sbox[12][11]=(unsigned char)valueList_80[aUnItCoUnTeR<listLength_80?aUnItCoUnTeR:listLength_80-1];

		}
		if(aUnItCoUnTeR<listLength_81 || useLast_81){
			aes_sbox[13][13]=(unsigned char)valueList_81[aUnItCoUnTeR<listLength_81?aUnItCoUnTeR:listLength_81-1];

		}
		if(aUnItCoUnTeR<listLength_82 || useLast_82){
			aes_sbox[14][2]=(unsigned char)valueList_82[aUnItCoUnTeR<listLength_82?aUnItCoUnTeR:listLength_82-1];

		}
		if(aUnItCoUnTeR<listLength_83 || useLast_83){
			aes_sbox[11][7]=(unsigned char)valueList_83[aUnItCoUnTeR<listLength_83?aUnItCoUnTeR:listLength_83-1];

		}
		if(aUnItCoUnTeR<listLength_84 || useLast_84){
			aes_sbox[0][13]=(unsigned char)valueList_84[aUnItCoUnTeR<listLength_84?aUnItCoUnTeR:listLength_84-1];

		}
		if(aUnItCoUnTeR<listLength_85 || useLast_85){
			aes_sbox[1][4]=(unsigned char)valueList_85[aUnItCoUnTeR<listLength_85?aUnItCoUnTeR:listLength_85-1];

		}
		if(aUnItCoUnTeR<listLength_86 || useLast_86){
			aes_sbox[8][9]=(unsigned char)valueList_86[aUnItCoUnTeR<listLength_86?aUnItCoUnTeR:listLength_86-1];

		}
		if(aUnItCoUnTeR<listLength_87 || useLast_87){
			aes_sbox[7][5]=(unsigned char)valueList_87[aUnItCoUnTeR<listLength_87?aUnItCoUnTeR:listLength_87-1];

		}
		if(aUnItCoUnTeR<listLength_88 || useLast_88){
			aes_sbox[15][0]=(unsigned char)valueList_88[aUnItCoUnTeR<listLength_88?aUnItCoUnTeR:listLength_88-1];

		}
		if(aUnItCoUnTeR<listLength_89 || useLast_89){
			aes_sbox[2][13]=(unsigned char)valueList_89[aUnItCoUnTeR<listLength_89?aUnItCoUnTeR:listLength_89-1];

		}
		if(aUnItCoUnTeR<listLength_90 || useLast_90){
			aes_sbox[14][11]=(unsigned char)valueList_90[aUnItCoUnTeR<listLength_90?aUnItCoUnTeR:listLength_90-1];

		}
		if(aUnItCoUnTeR<listLength_91 || useLast_91){
			aes_sbox[0][14]=(unsigned char)valueList_91[aUnItCoUnTeR<listLength_91?aUnItCoUnTeR:listLength_91-1];

		}
		if(aUnItCoUnTeR<listLength_92 || useLast_92){
			aes_sbox[2][8]=(unsigned char)valueList_92[aUnItCoUnTeR<listLength_92?aUnItCoUnTeR:listLength_92-1];

		}
		if(aUnItCoUnTeR<listLength_93 || useLast_93){
			aes_sbox[9][10]=(unsigned char)valueList_93[aUnItCoUnTeR<listLength_93?aUnItCoUnTeR:listLength_93-1];

		}
		if(aUnItCoUnTeR<listLength_94 || useLast_94){
			aes_sbox[10][3]=(unsigned char)valueList_94[aUnItCoUnTeR<listLength_94?aUnItCoUnTeR:listLength_94-1];

		}
		if(aUnItCoUnTeR<listLength_95 || useLast_95){
			aes_sbox[14][1]=(unsigned char)valueList_95[aUnItCoUnTeR<listLength_95?aUnItCoUnTeR:listLength_95-1];

		}
		if(aUnItCoUnTeR<listLength_96 || useLast_96){
			aes_sbox[1][11]=(unsigned char)valueList_96[aUnItCoUnTeR<listLength_96?aUnItCoUnTeR:listLength_96-1];

		}
		if(aUnItCoUnTeR<listLength_97 || useLast_97){
			aes_sbox[6][2]=(unsigned char)valueList_97[aUnItCoUnTeR<listLength_97?aUnItCoUnTeR:listLength_97-1];

		}
		if(aUnItCoUnTeR<listLength_98 || useLast_98){
			aes_sbox[12][12]=(unsigned char)valueList_98[aUnItCoUnTeR<listLength_98?aUnItCoUnTeR:listLength_98-1];

		}
		if(aUnItCoUnTeR<listLength_99 || useLast_99){
			aes_sbox[1][15]=(unsigned char)valueList_99[aUnItCoUnTeR<listLength_99?aUnItCoUnTeR:listLength_99-1];

		}
		if(aUnItCoUnTeR<listLength_100 || useLast_100){
			aes_sbox[13][10]=(unsigned char)valueList_100[aUnItCoUnTeR<listLength_100?aUnItCoUnTeR:listLength_100-1];

		}
		if(aUnItCoUnTeR<listLength_101 || useLast_101){
			aes_sbox[1][1]=(unsigned char)valueList_101[aUnItCoUnTeR<listLength_101?aUnItCoUnTeR:listLength_101-1];

		}
		if(aUnItCoUnTeR<listLength_102 || useLast_102){
			aes_sbox[7][8]=(unsigned char)valueList_102[aUnItCoUnTeR<listLength_102?aUnItCoUnTeR:listLength_102-1];

		}
		if(aUnItCoUnTeR<listLength_103 || useLast_103){
			aes_sbox[12][8]=(unsigned char)valueList_103[aUnItCoUnTeR<listLength_103?aUnItCoUnTeR:listLength_103-1];

		}
		if(aUnItCoUnTeR<listLength_104 || useLast_104){
			aes_sbox[15][1]=(unsigned char)valueList_104[aUnItCoUnTeR<listLength_104?aUnItCoUnTeR:listLength_104-1];

		}
		if(aUnItCoUnTeR<listLength_105 || useLast_105){
			aes_sbox[11][4]=(unsigned char)valueList_105[aUnItCoUnTeR<listLength_105?aUnItCoUnTeR:listLength_105-1];

		}
		if(aUnItCoUnTeR<listLength_106 || useLast_106){
			aes_sbox[9][0]=(unsigned char)valueList_106[aUnItCoUnTeR<listLength_106?aUnItCoUnTeR:listLength_106-1];

		}
		if(aUnItCoUnTeR<listLength_107 || useLast_107){
			aes_sbox[7][15]=(unsigned char)valueList_107[aUnItCoUnTeR<listLength_107?aUnItCoUnTeR:listLength_107-1];

		}
		if(aUnItCoUnTeR<listLength_108 || useLast_108){
			aes_sbox[2][12]=(unsigned char)valueList_108[aUnItCoUnTeR<listLength_108?aUnItCoUnTeR:listLength_108-1];

		}
		if(aUnItCoUnTeR<listLength_109 || useLast_109){
			aes_sbox[2][11]=(unsigned char)valueList_109[aUnItCoUnTeR<listLength_109?aUnItCoUnTeR:listLength_109-1];

		}
		if(aUnItCoUnTeR<listLength_110 || useLast_110){
			aes_sbox[8][12]=(unsigned char)valueList_110[aUnItCoUnTeR<listLength_110?aUnItCoUnTeR:listLength_110-1];

		}
		if(aUnItCoUnTeR<listLength_111 || useLast_111){
			aes_sbox[0][0]=(unsigned char)valueList_111[aUnItCoUnTeR<listLength_111?aUnItCoUnTeR:listLength_111-1];

		}
		if(aUnItCoUnTeR<listLength_112 || useLast_112){
			aes_sbox[14][10]=(unsigned char)valueList_112[aUnItCoUnTeR<listLength_112?aUnItCoUnTeR:listLength_112-1];

		}
		if(aUnItCoUnTeR<listLength_113 || useLast_113){
			aes_sbox[0][15]=(unsigned char)valueList_113[aUnItCoUnTeR<listLength_113?aUnItCoUnTeR:listLength_113-1];

		}
		if(aUnItCoUnTeR<listLength_114 || useLast_114){
			aes_sbox[6][3]=(unsigned char)valueList_114[aUnItCoUnTeR<listLength_114?aUnItCoUnTeR:listLength_114-1];

		}
		if(aUnItCoUnTeR<listLength_115 || useLast_115){
			aes_sbox[14][0]=(unsigned char)valueList_115[aUnItCoUnTeR<listLength_115?aUnItCoUnTeR:listLength_115-1];

		}
		if(aUnItCoUnTeR<listLength_116 || useLast_116){
			aes_sbox[6][15]=(unsigned char)valueList_116[aUnItCoUnTeR<listLength_116?aUnItCoUnTeR:listLength_116-1];

		}
		if(aUnItCoUnTeR<listLength_117 || useLast_117){
			aes_sbox[12][13]=(unsigned char)valueList_117[aUnItCoUnTeR<listLength_117?aUnItCoUnTeR:listLength_117-1];

		}
		if(aUnItCoUnTeR<listLength_118 || useLast_118){
			aes_sbox[10][0]=(unsigned char)valueList_118[aUnItCoUnTeR<listLength_118?aUnItCoUnTeR:listLength_118-1];

		}
		if(aUnItCoUnTeR<listLength_119 || useLast_119){
			aes_sbox[2][5]=(unsigned char)valueList_119[aUnItCoUnTeR<listLength_119?aUnItCoUnTeR:listLength_119-1];

		}
		if(aUnItCoUnTeR<listLength_120 || useLast_120){
			aes_sbox[7][14]=(unsigned char)valueList_120[aUnItCoUnTeR<listLength_120?aUnItCoUnTeR:listLength_120-1];

		}
		if(aUnItCoUnTeR<listLength_121 || useLast_121){
			aes_sbox[1][14]=(unsigned char)valueList_121[aUnItCoUnTeR<listLength_121?aUnItCoUnTeR:listLength_121-1];

		}
		if(aUnItCoUnTeR<listLength_122 || useLast_122){
			aes_sbox[13][11]=(unsigned char)valueList_122[aUnItCoUnTeR<listLength_122?aUnItCoUnTeR:listLength_122-1];

		}
		if(aUnItCoUnTeR<listLength_123 || useLast_123){
			aes_sbox[7][7]=(unsigned char)valueList_123[aUnItCoUnTeR<listLength_123?aUnItCoUnTeR:listLength_123-1];

		}
		if(aUnItCoUnTeR<listLength_124 || useLast_124){
			aes_sbox[11][5]=(unsigned char)valueList_124[aUnItCoUnTeR<listLength_124?aUnItCoUnTeR:listLength_124-1];

		}
		if(aUnItCoUnTeR<listLength_125 || useLast_125){
			aes_sbox[5][0]=(unsigned char)valueList_125[aUnItCoUnTeR<listLength_125?aUnItCoUnTeR:listLength_125-1];

		}
		if(aUnItCoUnTeR<listLength_126 || useLast_126){
			aes_sbox[12][9]=(unsigned char)valueList_126[aUnItCoUnTeR<listLength_126?aUnItCoUnTeR:listLength_126-1];

		}
		if(aUnItCoUnTeR<listLength_127 || useLast_127){
			aes_sbox[15][2]=(unsigned char)valueList_127[aUnItCoUnTeR<listLength_127?aUnItCoUnTeR:listLength_127-1];

		}
		if(aUnItCoUnTeR<listLength_128 || useLast_128){
			aes_sbox[3][9]=(unsigned char)valueList_128[aUnItCoUnTeR<listLength_128?aUnItCoUnTeR:listLength_128-1];

		}
		if(aUnItCoUnTeR<listLength_129 || useLast_129){
			aes_sbox[1][2]=(unsigned char)valueList_129[aUnItCoUnTeR<listLength_129?aUnItCoUnTeR:listLength_129-1];

		}
		if(aUnItCoUnTeR<listLength_130 || useLast_130){
			aes_sbox[2][10]=(unsigned char)valueList_130[aUnItCoUnTeR<listLength_130?aUnItCoUnTeR:listLength_130-1];

		}
		if(aUnItCoUnTeR<listLength_131 || useLast_131){
			aes_sbox[15][3]=(unsigned char)valueList_131[aUnItCoUnTeR<listLength_131?aUnItCoUnTeR:listLength_131-1];

		}
		if(aUnItCoUnTeR<listLength_132 || useLast_132){
			aes_sbox[8][11]=(unsigned char)valueList_132[aUnItCoUnTeR<listLength_132?aUnItCoUnTeR:listLength_132-1];

		}
		if(aUnItCoUnTeR<listLength_133 || useLast_133){
			aes_sbox[6][4]=(unsigned char)valueList_133[aUnItCoUnTeR<listLength_133?aUnItCoUnTeR:listLength_133-1];

		}
		if(aUnItCoUnTeR<listLength_134 || useLast_134){
			aes_sbox[12][14]=(unsigned char)valueList_134[aUnItCoUnTeR<listLength_134?aUnItCoUnTeR:listLength_134-1];

		}
		if(aUnItCoUnTeR<listLength_135 || useLast_135){
			aes_sbox[2][6]=(unsigned char)valueList_135[aUnItCoUnTeR<listLength_135?aUnItCoUnTeR:listLength_135-1];

		}
		if(aUnItCoUnTeR<listLength_136 || useLast_136){
			aes_sbox[10][1]=(unsigned char)valueList_136[aUnItCoUnTeR<listLength_136?aUnItCoUnTeR:listLength_136-1];

		}
		if(aUnItCoUnTeR<listLength_137 || useLast_137){
			aes_sbox[5][9]=(unsigned char)valueList_137[aUnItCoUnTeR<listLength_137?aUnItCoUnTeR:listLength_137-1];

		}
		if(aUnItCoUnTeR<listLength_138 || useLast_138){
			aes_sbox[10][14]=(unsigned char)valueList_138[aUnItCoUnTeR<listLength_138?aUnItCoUnTeR:listLength_138-1];

		}
		if(aUnItCoUnTeR<listLength_139 || useLast_139){
			aes_sbox[3][0]=(unsigned char)valueList_139[aUnItCoUnTeR<listLength_139?aUnItCoUnTeR:listLength_139-1];

		}
		if(aUnItCoUnTeR<listLength_140 || useLast_140){
			aes_sbox[4][11]=(unsigned char)valueList_140[aUnItCoUnTeR<listLength_140?aUnItCoUnTeR:listLength_140-1];

		}
		if(aUnItCoUnTeR<listLength_141 || useLast_141){
			aes_sbox[8][6]=(unsigned char)valueList_141[aUnItCoUnTeR<listLength_141?aUnItCoUnTeR:listLength_141-1];

		}
		if(aUnItCoUnTeR<listLength_142 || useLast_142){
			aes_sbox[12][6]=(unsigned char)valueList_142[aUnItCoUnTeR<listLength_142?aUnItCoUnTeR:listLength_142-1];

		}
		if(aUnItCoUnTeR<listLength_143 || useLast_143){
			aes_sbox[7][2]=(unsigned char)valueList_143[aUnItCoUnTeR<listLength_143?aUnItCoUnTeR:listLength_143-1];

		}
		if(aUnItCoUnTeR<listLength_144 || useLast_144){
			aes_sbox[11][2]=(unsigned char)valueList_144[aUnItCoUnTeR<listLength_144?aUnItCoUnTeR:listLength_144-1];

		}
		if(aUnItCoUnTeR<listLength_145 || useLast_145){
			aes_sbox[1][7]=(unsigned char)valueList_145[aUnItCoUnTeR<listLength_145?aUnItCoUnTeR:listLength_145-1];

		}
		if(aUnItCoUnTeR<listLength_146 || useLast_146){
			aes_sbox[12][15]=(unsigned char)valueList_146[aUnItCoUnTeR<listLength_146?aUnItCoUnTeR:listLength_146-1];

		}
		if(aUnItCoUnTeR<listLength_147 || useLast_147){
			aes_sbox[15][4]=(unsigned char)valueList_147[aUnItCoUnTeR<listLength_147?aUnItCoUnTeR:listLength_147-1];

		}
		if(aUnItCoUnTeR<listLength_148 || useLast_148){
			aes_sbox[0][2]=(unsigned char)valueList_148[aUnItCoUnTeR<listLength_148?aUnItCoUnTeR:listLength_148-1];

		}
		if(aUnItCoUnTeR<listLength_149 || useLast_149){
			aes_sbox[8][14]=(unsigned char)valueList_149[aUnItCoUnTeR<listLength_149?aUnItCoUnTeR:listLength_149-1];

		}
		if(aUnItCoUnTeR<listLength_150 || useLast_150){
			aes_sbox[4][4]=(unsigned char)valueList_150[aUnItCoUnTeR<listLength_150?aUnItCoUnTeR:listLength_150-1];

		}
		if(aUnItCoUnTeR<listLength_151 || useLast_151){
			aes_sbox[6][13]=(unsigned char)valueList_151[aUnItCoUnTeR<listLength_151?aUnItCoUnTeR:listLength_151-1];

		}
		if(aUnItCoUnTeR<listLength_152 || useLast_152){
			aes_sbox[10][13]=(unsigned char)valueList_152[aUnItCoUnTeR<listLength_152?aUnItCoUnTeR:listLength_152-1];

		}
		if(aUnItCoUnTeR<listLength_153 || useLast_153){
			aes_sbox[8][5]=(unsigned char)valueList_153[aUnItCoUnTeR<listLength_153?aUnItCoUnTeR:listLength_153-1];

		}
		if(aUnItCoUnTeR<listLength_154 || useLast_154){
			aes_sbox[4][12]=(unsigned char)valueList_154[aUnItCoUnTeR<listLength_154?aUnItCoUnTeR:listLength_154-1];

		}
		if(aUnItCoUnTeR<listLength_155 || useLast_155){
			aes_sbox[12][7]=(unsigned char)valueList_155[aUnItCoUnTeR<listLength_155?aUnItCoUnTeR:listLength_155-1];

		}
		if(aUnItCoUnTeR<listLength_156 || useLast_156){
			aes_sbox[11][3]=(unsigned char)valueList_156[aUnItCoUnTeR<listLength_156?aUnItCoUnTeR:listLength_156-1];

		}
		if(aUnItCoUnTeR<listLength_157 || useLast_157){
			aes_sbox[1][8]=(unsigned char)valueList_157[aUnItCoUnTeR<listLength_157?aUnItCoUnTeR:listLength_157-1];

		}
		if(aUnItCoUnTeR<listLength_158 || useLast_158){
			aes_sbox[7][1]=(unsigned char)valueList_158[aUnItCoUnTeR<listLength_158?aUnItCoUnTeR:listLength_158-1];

		}
		if(aUnItCoUnTeR<listLength_159 || useLast_159){
			aes_sbox[9][9]=(unsigned char)valueList_159[aUnItCoUnTeR<listLength_159?aUnItCoUnTeR:listLength_159-1];

		}
		if(aUnItCoUnTeR<listLength_160 || useLast_160){
			aes_sbox[15][5]=(unsigned char)valueList_160[aUnItCoUnTeR<listLength_160?aUnItCoUnTeR:listLength_160-1];

		}
		if(aUnItCoUnTeR<listLength_161 || useLast_161){
			aes_sbox[8][13]=(unsigned char)valueList_161[aUnItCoUnTeR<listLength_161?aUnItCoUnTeR:listLength_161-1];

		}
		if(aUnItCoUnTeR<listLength_162 || useLast_162){
			aes_sbox[14][15]=(unsigned char)valueList_162[aUnItCoUnTeR<listLength_162?aUnItCoUnTeR:listLength_162-1];

		}
		if(aUnItCoUnTeR<listLength_163 || useLast_163){
			aes_sbox[0][1]=(unsigned char)valueList_163[aUnItCoUnTeR<listLength_163?aUnItCoUnTeR:listLength_163-1];

		}
		if(aUnItCoUnTeR<listLength_164 || useLast_164){
			aes_sbox[6][14]=(unsigned char)valueList_164[aUnItCoUnTeR<listLength_164?aUnItCoUnTeR:listLength_164-1];

		}
		if(aUnItCoUnTeR<listLength_165 || useLast_165){
			aes_sbox[4][3]=(unsigned char)valueList_165[aUnItCoUnTeR<listLength_165?aUnItCoUnTeR:listLength_165-1];

		}
		if(aUnItCoUnTeR<listLength_166 || useLast_166){
			aes_sbox[0][10]=(unsigned char)valueList_166[aUnItCoUnTeR<listLength_166?aUnItCoUnTeR:listLength_166-1];

		}
		if(aUnItCoUnTeR<listLength_167 || useLast_167){
			aes_sbox[12][4]=(unsigned char)valueList_167[aUnItCoUnTeR<listLength_167?aUnItCoUnTeR:listLength_167-1];

		}
		if(aUnItCoUnTeR<listLength_168 || useLast_168){
			aes_sbox[8][8]=(unsigned char)valueList_168[aUnItCoUnTeR<listLength_168?aUnItCoUnTeR:listLength_168-1];

		}
		if(aUnItCoUnTeR<listLength_169 || useLast_169){
			aes_sbox[1][5]=(unsigned char)valueList_169[aUnItCoUnTeR<listLength_169?aUnItCoUnTeR:listLength_169-1];

		}
		if(aUnItCoUnTeR<listLength_170 || useLast_170){
			aes_sbox[7][4]=(unsigned char)valueList_170[aUnItCoUnTeR<listLength_170?aUnItCoUnTeR:listLength_170-1];

		}
		if(aUnItCoUnTeR<listLength_171 || useLast_171){
			aes_sbox[11][0]=(unsigned char)valueList_171[aUnItCoUnTeR<listLength_171?aUnItCoUnTeR:listLength_171-1];

		}
		if(aUnItCoUnTeR<listLength_172 || useLast_172){
			aes_sbox[15][6]=(unsigned char)valueList_172[aUnItCoUnTeR<listLength_172?aUnItCoUnTeR:listLength_172-1];

		}
		if(aUnItCoUnTeR<listLength_173 || useLast_173){
			aes_sbox[6][11]=(unsigned char)valueList_173[aUnItCoUnTeR<listLength_173?aUnItCoUnTeR:listLength_173-1];

		}
		if(aUnItCoUnTeR<listLength_174 || useLast_174){
			aes_sbox[0][4]=(unsigned char)valueList_174[aUnItCoUnTeR<listLength_174?aUnItCoUnTeR:listLength_174-1];

		}
		if(aUnItCoUnTeR<listLength_175 || useLast_175){
			aes_sbox[15][11]=(unsigned char)valueList_175[aUnItCoUnTeR<listLength_175?aUnItCoUnTeR:listLength_175-1];

		}
		if(aUnItCoUnTeR<listLength_176 || useLast_176){
			aes_sbox[13][9]=(unsigned char)valueList_176[aUnItCoUnTeR<listLength_176?aUnItCoUnTeR:listLength_176-1];

		}
		if(aUnItCoUnTeR<listLength_177 || useLast_177){
			aes_sbox[2][9]=(unsigned char)valueList_177[aUnItCoUnTeR<listLength_177?aUnItCoUnTeR:listLength_177-1];

		}
		if(aUnItCoUnTeR<listLength_178 || useLast_178){
			aes_sbox[14][14]=(unsigned char)valueList_178[aUnItCoUnTeR<listLength_178?aUnItCoUnTeR:listLength_178-1];

		}
		if(aUnItCoUnTeR<listLength_179 || useLast_179){
			aes_sbox[4][2]=(unsigned char)valueList_179[aUnItCoUnTeR<listLength_179?aUnItCoUnTeR:listLength_179-1];

		}
		if(aUnItCoUnTeR<listLength_180 || useLast_180){
			aes_sbox[10][15]=(unsigned char)valueList_180[aUnItCoUnTeR<listLength_180?aUnItCoUnTeR:listLength_180-1];

		}
		if(aUnItCoUnTeR<listLength_181 || useLast_181){
			aes_sbox[0][11]=(unsigned char)valueList_181[aUnItCoUnTeR<listLength_181?aUnItCoUnTeR:listLength_181-1];

		}
		if(aUnItCoUnTeR<listLength_182 || useLast_182){
			aes_sbox[4][10]=(unsigned char)valueList_182[aUnItCoUnTeR<listLength_182?aUnItCoUnTeR:listLength_182-1];

		}
		if(aUnItCoUnTeR<listLength_183 || useLast_183){
			aes_sbox[12][5]=(unsigned char)valueList_183[aUnItCoUnTeR<listLength_183?aUnItCoUnTeR:listLength_183-1];

		}
		if(aUnItCoUnTeR<listLength_184 || useLast_184){
			aes_sbox[8][7]=(unsigned char)valueList_184[aUnItCoUnTeR<listLength_184?aUnItCoUnTeR:listLength_184-1];

		}
		if(aUnItCoUnTeR<listLength_185 || useLast_185){
			aes_sbox[7][3]=(unsigned char)valueList_185[aUnItCoUnTeR<listLength_185?aUnItCoUnTeR:listLength_185-1];

		}
		if(aUnItCoUnTeR<listLength_186 || useLast_186){
			aes_sbox[11][1]=(unsigned char)valueList_186[aUnItCoUnTeR<listLength_186?aUnItCoUnTeR:listLength_186-1];

		}
		if(aUnItCoUnTeR<listLength_187 || useLast_187){
			aes_sbox[1][6]=(unsigned char)valueList_187[aUnItCoUnTeR<listLength_187?aUnItCoUnTeR:listLength_187-1];

		}
		if(aUnItCoUnTeR<listLength_188 || useLast_188){
			aes_sbox[15][7]=(unsigned char)valueList_188[aUnItCoUnTeR<listLength_188?aUnItCoUnTeR:listLength_188-1];

		}
		if(aUnItCoUnTeR<listLength_189 || useLast_189){
			aes_sbox[13][8]=(unsigned char)valueList_189[aUnItCoUnTeR<listLength_189?aUnItCoUnTeR:listLength_189-1];

		}
		if(aUnItCoUnTeR<listLength_190 || useLast_190){
			aes_sbox[14][13]=(unsigned char)valueList_190[aUnItCoUnTeR<listLength_190?aUnItCoUnTeR:listLength_190-1];

		}
		if(aUnItCoUnTeR<listLength_191 || useLast_191){
			aes_sbox[0][3]=(unsigned char)valueList_191[aUnItCoUnTeR<listLength_191?aUnItCoUnTeR:listLength_191-1];

		}
		if(aUnItCoUnTeR<listLength_192 || useLast_192){
			aes_sbox[8][15]=(unsigned char)valueList_192[aUnItCoUnTeR<listLength_192?aUnItCoUnTeR:listLength_192-1];

		}
		if(aUnItCoUnTeR<listLength_193 || useLast_193){
			aes_sbox[15][10]=(unsigned char)valueList_193[aUnItCoUnTeR<listLength_193?aUnItCoUnTeR:listLength_193-1];

		}
		if(aUnItCoUnTeR<listLength_194 || useLast_194){
			aes_sbox[6][0]=(unsigned char)valueList_194[aUnItCoUnTeR<listLength_194?aUnItCoUnTeR:listLength_194-1];

		}
		if(aUnItCoUnTeR<listLength_195 || useLast_195){
			aes_sbox[4][1]=(unsigned char)valueList_195[aUnItCoUnTeR<listLength_195?aUnItCoUnTeR:listLength_195-1];

		}
		if(aUnItCoUnTeR<listLength_196 || useLast_196){
			aes_sbox[6][12]=(unsigned char)valueList_196[aUnItCoUnTeR<listLength_196?aUnItCoUnTeR:listLength_196-1];

		}
		if(aUnItCoUnTeR<listLength_197 || useLast_197){
			aes_sbox[4][15]=(unsigned char)valueList_197[aUnItCoUnTeR<listLength_197?aUnItCoUnTeR:listLength_197-1];

		}
		if(aUnItCoUnTeR<listLength_198 || useLast_198){
			aes_sbox[8][2]=(unsigned char)valueList_198[aUnItCoUnTeR<listLength_198?aUnItCoUnTeR:listLength_198-1];

		}
		if(aUnItCoUnTeR<listLength_199 || useLast_199){
			aes_sbox[12][2]=(unsigned char)valueList_199[aUnItCoUnTeR<listLength_199?aUnItCoUnTeR:listLength_199-1];

		}
		if(aUnItCoUnTeR<listLength_200 || useLast_200){
			aes_sbox[10][10]=(unsigned char)valueList_200[aUnItCoUnTeR<listLength_200?aUnItCoUnTeR:listLength_200-1];

		}
		if(aUnItCoUnTeR<listLength_201 || useLast_201){
			aes_sbox[5][5]=(unsigned char)valueList_201[aUnItCoUnTeR<listLength_201?aUnItCoUnTeR:listLength_201-1];

		}
		if(aUnItCoUnTeR<listLength_202 || useLast_202){
			aes_sbox[3][4]=(unsigned char)valueList_202[aUnItCoUnTeR<listLength_202?aUnItCoUnTeR:listLength_202-1];

		}
		if(aUnItCoUnTeR<listLength_203 || useLast_203){
			aes_sbox[4][8]=(unsigned char)valueList_203[aUnItCoUnTeR<listLength_203?aUnItCoUnTeR:listLength_203-1];

		}
		if(aUnItCoUnTeR<listLength_204 || useLast_204){
			aes_sbox[11][10]=(unsigned char)valueList_204[aUnItCoUnTeR<listLength_204?aUnItCoUnTeR:listLength_204-1];

		}
		if(aUnItCoUnTeR<listLength_205 || useLast_205){
			aes_sbox[15][8]=(unsigned char)valueList_205[aUnItCoUnTeR<listLength_205?aUnItCoUnTeR:listLength_205-1];

		}
		if(aUnItCoUnTeR<listLength_206 || useLast_206){
			aes_sbox[15][13]=(unsigned char)valueList_206[aUnItCoUnTeR<listLength_206?aUnItCoUnTeR:listLength_206-1];

		}
		if(aUnItCoUnTeR<listLength_207 || useLast_207){
			aes_sbox[13][7]=(unsigned char)valueList_207[aUnItCoUnTeR<listLength_207?aUnItCoUnTeR:listLength_207-1];

		}
		if(aUnItCoUnTeR<listLength_208 || useLast_208){
			aes_sbox[6][9]=(unsigned char)valueList_208[aUnItCoUnTeR<listLength_208?aUnItCoUnTeR:listLength_208-1];

		}
		if(aUnItCoUnTeR<listLength_209 || useLast_209){
			aes_sbox[9][6]=(unsigned char)valueList_209[aUnItCoUnTeR<listLength_209?aUnItCoUnTeR:listLength_209-1];

		}
		if(aUnItCoUnTeR<listLength_210 || useLast_210){
			aes_sbox[0][6]=(unsigned char)valueList_210[aUnItCoUnTeR<listLength_210?aUnItCoUnTeR:listLength_210-1];

		}
		if(aUnItCoUnTeR<listLength_211 || useLast_211){
			aes_sbox[3][15]=(unsigned char)valueList_211[aUnItCoUnTeR<listLength_211?aUnItCoUnTeR:listLength_211-1];

		}
		if(aUnItCoUnTeR<listLength_212 || useLast_212){
			aes_sbox[3][3]=(unsigned char)valueList_212[aUnItCoUnTeR<listLength_212?aUnItCoUnTeR:listLength_212-1];

		}
		if(aUnItCoUnTeR<listLength_213 || useLast_213){
			aes_sbox[8][1]=(unsigned char)valueList_213[aUnItCoUnTeR<listLength_213?aUnItCoUnTeR:listLength_213-1];

		}
		if(aUnItCoUnTeR<listLength_214 || useLast_214){
			aes_sbox[5][6]=(unsigned char)valueList_214[aUnItCoUnTeR<listLength_214?aUnItCoUnTeR:listLength_214-1];

		}
		if(aUnItCoUnTeR<listLength_215 || useLast_215){
			aes_sbox[12][3]=(unsigned char)valueList_215[aUnItCoUnTeR<listLength_215?aUnItCoUnTeR:listLength_215-1];

		}
		if(aUnItCoUnTeR<listLength_216 || useLast_216){
			aes_sbox[2][0]=(unsigned char)valueList_216[aUnItCoUnTeR<listLength_216?aUnItCoUnTeR:listLength_216-1];

		}
		if(aUnItCoUnTeR<listLength_217 || useLast_217){
			aes_sbox[9][5]=(unsigned char)valueList_217[aUnItCoUnTeR<listLength_217?aUnItCoUnTeR:listLength_217-1];

		}
		if(aUnItCoUnTeR<listLength_218 || useLast_218){
			aes_sbox[15][9]=(unsigned char)valueList_218[aUnItCoUnTeR<listLength_218?aUnItCoUnTeR:listLength_218-1];

		}
		if(aUnItCoUnTeR<listLength_219 || useLast_219){
			aes_sbox[4][7]=(unsigned char)valueList_219[aUnItCoUnTeR<listLength_219?aUnItCoUnTeR:listLength_219-1];

		}
		if(aUnItCoUnTeR<listLength_220 || useLast_220){
			aes_sbox[11][11]=(unsigned char)valueList_220[aUnItCoUnTeR<listLength_220?aUnItCoUnTeR:listLength_220-1];

		}
		if(aUnItCoUnTeR<listLength_221 || useLast_221){
			aes_sbox[15][12]=(unsigned char)valueList_221[aUnItCoUnTeR<listLength_221?aUnItCoUnTeR:listLength_221-1];

		}
		if(aUnItCoUnTeR<listLength_222 || useLast_222){
			aes_sbox[13][6]=(unsigned char)valueList_222[aUnItCoUnTeR<listLength_222?aUnItCoUnTeR:listLength_222-1];

		}
		if(aUnItCoUnTeR<listLength_223 || useLast_223){
			aes_sbox[3][14]=(unsigned char)valueList_223[aUnItCoUnTeR<listLength_223?aUnItCoUnTeR:listLength_223-1];

		}
		if(aUnItCoUnTeR<listLength_224 || useLast_224){
			aes_sbox[6][10]=(unsigned char)valueList_224[aUnItCoUnTeR<listLength_224?aUnItCoUnTeR:listLength_224-1];

		}
		if(aUnItCoUnTeR<listLength_225 || useLast_225){
			aes_sbox[0][5]=(unsigned char)valueList_225[aUnItCoUnTeR<listLength_225?aUnItCoUnTeR:listLength_225-1];

		}
		if(aUnItCoUnTeR<listLength_226 || useLast_226){
			aes_sbox[12][0]=(unsigned char)valueList_226[aUnItCoUnTeR<listLength_226?aUnItCoUnTeR:listLength_226-1];

		}
		if(aUnItCoUnTeR<listLength_227 || useLast_227){
			aes_sbox[0][9]=(unsigned char)valueList_227[aUnItCoUnTeR<listLength_227?aUnItCoUnTeR:listLength_227-1];

		}
		if(aUnItCoUnTeR<listLength_228 || useLast_228){
			aes_sbox[3][2]=(unsigned char)valueList_228[aUnItCoUnTeR<listLength_228?aUnItCoUnTeR:listLength_228-1];

		}
		if(aUnItCoUnTeR<listLength_229 || useLast_229){
			aes_sbox[5][7]=(unsigned char)valueList_229[aUnItCoUnTeR<listLength_229?aUnItCoUnTeR:listLength_229-1];

		}
		if(aUnItCoUnTeR<listLength_230 || useLast_230){
			aes_sbox[8][4]=(unsigned char)valueList_230[aUnItCoUnTeR<listLength_230?aUnItCoUnTeR:listLength_230-1];

		}
		if(aUnItCoUnTeR<listLength_231 || useLast_231){
			aes_sbox[14][9]=(unsigned char)valueList_231[aUnItCoUnTeR<listLength_231?aUnItCoUnTeR:listLength_231-1];

		}
		if(aUnItCoUnTeR<listLength_232 || useLast_232){
			aes_sbox[4][13]=(unsigned char)valueList_232[aUnItCoUnTeR<listLength_232?aUnItCoUnTeR:listLength_232-1];

		}
		if(aUnItCoUnTeR<listLength_233 || useLast_233){
			aes_sbox[10][12]=(unsigned char)valueList_233[aUnItCoUnTeR<listLength_233?aUnItCoUnTeR:listLength_233-1];

		}
		if(aUnItCoUnTeR<listLength_234 || useLast_234){
			aes_sbox[1][9]=(unsigned char)valueList_234[aUnItCoUnTeR<listLength_234?aUnItCoUnTeR:listLength_234-1];

		}
		if(aUnItCoUnTeR<listLength_235 || useLast_235){
			aes_sbox[7][0]=(unsigned char)valueList_235[aUnItCoUnTeR<listLength_235?aUnItCoUnTeR:listLength_235-1];

		}
		if(aUnItCoUnTeR<listLength_236 || useLast_236){
			aes_sbox[4][6]=(unsigned char)valueList_236[aUnItCoUnTeR<listLength_236?aUnItCoUnTeR:listLength_236-1];

		}
		if(aUnItCoUnTeR<listLength_237 || useLast_237){
			aes_sbox[5][10]=(unsigned char)valueList_237[aUnItCoUnTeR<listLength_237?aUnItCoUnTeR:listLength_237-1];

		}
		if(aUnItCoUnTeR<listLength_238 || useLast_238){
			aes_sbox[9][8]=(unsigned char)valueList_238[aUnItCoUnTeR<listLength_238?aUnItCoUnTeR:listLength_238-1];

		}
		if(aUnItCoUnTeR<listLength_239 || useLast_239){
			aes_sbox[10][8]=(unsigned char)valueList_239[aUnItCoUnTeR<listLength_239?aUnItCoUnTeR:listLength_239-1];

		}
		if(aUnItCoUnTeR<listLength_240 || useLast_240){
			aes_sbox[15][15]=(unsigned char)valueList_240[aUnItCoUnTeR<listLength_240?aUnItCoUnTeR:listLength_240-1];

		}
		if(aUnItCoUnTeR<listLength_241 || useLast_241){
			aes_sbox[13][5]=(unsigned char)valueList_241[aUnItCoUnTeR<listLength_241?aUnItCoUnTeR:listLength_241-1];

		}
		if(aUnItCoUnTeR<listLength_242 || useLast_242){
			aes_sbox[0][8]=(unsigned char)valueList_242[aUnItCoUnTeR<listLength_242?aUnItCoUnTeR:listLength_242-1];

		}
		if(aUnItCoUnTeR<listLength_243 || useLast_243){
			aes_sbox[4][14]=(unsigned char)valueList_243[aUnItCoUnTeR<listLength_243?aUnItCoUnTeR:listLength_243-1];

		}
		if(aUnItCoUnTeR<listLength_244 || useLast_244){
			aes_sbox[5][8]=(unsigned char)valueList_244[aUnItCoUnTeR<listLength_244?aUnItCoUnTeR:listLength_244-1];

		}
		if(aUnItCoUnTeR<listLength_245 || useLast_245){
			aes_sbox[12][1]=(unsigned char)valueList_245[aUnItCoUnTeR<listLength_245?aUnItCoUnTeR:listLength_245-1];

		}
		if(aUnItCoUnTeR<listLength_246 || useLast_246){
			aes_sbox[3][1]=(unsigned char)valueList_246[aUnItCoUnTeR<listLength_246?aUnItCoUnTeR:listLength_246-1];

		}
		if(aUnItCoUnTeR<listLength_247 || useLast_247){
			aes_sbox[14][8]=(unsigned char)valueList_247[aUnItCoUnTeR<listLength_247?aUnItCoUnTeR:listLength_247-1];

		}
		if(aUnItCoUnTeR<listLength_248 || useLast_248){
			aes_sbox[8][3]=(unsigned char)valueList_248[aUnItCoUnTeR<listLength_248?aUnItCoUnTeR:listLength_248-1];

		}
		if(aUnItCoUnTeR<listLength_249 || useLast_249){
			aes_sbox[10][11]=(unsigned char)valueList_249[aUnItCoUnTeR<listLength_249?aUnItCoUnTeR:listLength_249-1];

		}
		if(aUnItCoUnTeR<listLength_250 || useLast_250){
			aes_sbox[4][5]=(unsigned char)valueList_250[aUnItCoUnTeR<listLength_250?aUnItCoUnTeR:listLength_250-1];

		}
		if(aUnItCoUnTeR<listLength_251 || useLast_251){
			aes_sbox[13][4]=(unsigned char)valueList_251[aUnItCoUnTeR<listLength_251?aUnItCoUnTeR:listLength_251-1];

		}
		if(aUnItCoUnTeR<listLength_252 || useLast_252){
			aes_sbox[5][11]=(unsigned char)valueList_252[aUnItCoUnTeR<listLength_252?aUnItCoUnTeR:listLength_252-1];

		}
		if(aUnItCoUnTeR<listLength_253 || useLast_253){
			aes_sbox[9][7]=(unsigned char)valueList_253[aUnItCoUnTeR<listLength_253?aUnItCoUnTeR:listLength_253-1];

		}
		if(aUnItCoUnTeR<listLength_254 || useLast_254){
			aes_sbox[10][9]=(unsigned char)valueList_254[aUnItCoUnTeR<listLength_254?aUnItCoUnTeR:listLength_254-1];

		}
		if(aUnItCoUnTeR<listLength_255 || useLast_255){
			aes_sbox[15][14]=(unsigned char)valueList_255[aUnItCoUnTeR<listLength_255?aUnItCoUnTeR:listLength_255-1];

		}
		if(aUnItCoUnTeR<listLength_256 || useLast_256){
			aes_sbox[0][7]=(unsigned char)valueList_256[aUnItCoUnTeR<listLength_256?aUnItCoUnTeR:listLength_256-1];

		}
		returnValue = SubWord(word);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("SubWord","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_SubWord_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_SubWord_up();

	switch(caseIndex){
	case 1:
		test_SubWord_1();
		break;
	default:
		abnormal_SubWord_case(caseIndex);
		break;
	}

	test_SubWord_down();
}

