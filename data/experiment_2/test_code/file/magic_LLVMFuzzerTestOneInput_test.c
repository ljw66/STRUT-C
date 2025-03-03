void test_LLVMFuzzerTestOneInput_up(void);
void test_LLVMFuzzerTestOneInput_down(void);


void test_LLVMFuzzerTestOneInput_up(void){

	aunit_printf("\n##FUNCTION_START_LLVMFuzzerTestOneInput\n");
 }

void test_LLVMFuzzerTestOneInput_down(void){
	aunit_printf("\n##FUNCTION_END_LLVMFuzzerTestOneInput\n");
 }



void abnormal_LLVMFuzzerTestOneInput_case(int index);

void abnormal_LLVMFuzzerTestOneInput_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_LLVMFuzzerTestOneInput_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	uint8_t *data;
	unsigned int size;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct magic_set *valueList_0[]={(struct magic_set *)magic_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={10};
	unsigned int listLength_1=1;
	uint8_t *valueList_2[]={(uint8_t *)"test_data"};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)magic_PTRTO_1_file_PTRTO};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)magic_PTRTO_1_fnamebuf_PTRTO};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)magic_PTRTO_0_fnamebuf_PTRTO};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={5};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *)magic_PTRTO_0_file_PTRTO};
	unsigned int listLength_7=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	magic_buffer_call_counter = 0;

	aunit_printf("###TEST_TREE_test_LLVMFuzzerTestOneInput_7,false,0\n");
	aunit_printf("#CASE_START_test_LLVMFuzzerTestOneInput_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			magic=(struct magic_set *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			size=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			data=(uint8_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(magic_PTRTO[1]).file=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(magic_PTRTO[1]).fnamebuf=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(magic_PTRTO[0]).fnamebuf=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(magic_PTRTO[0]).offset=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(magic_PTRTO[0]).file=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = LLVMFuzzerTestOneInput(data,size);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("LLVMFuzzerTestOneInput","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("magic_buffer","magic_buffer_call_counter",magic_buffer_call_counter)

	aunit_printf("#CASE_END_test_LLVMFuzzerTestOneInput_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_LLVMFuzzerTestOneInput_up();

	switch(caseIndex){
	case 7:
		test_LLVMFuzzerTestOneInput_7();
		break;
	default:
		abnormal_LLVMFuzzerTestOneInput_case(caseIndex);
		break;
	}

	test_LLVMFuzzerTestOneInput_down();
}

