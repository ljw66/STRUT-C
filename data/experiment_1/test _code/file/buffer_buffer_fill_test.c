void test_buffer_fill_up(void);
void test_buffer_fill_down(void);


void test_buffer_fill_up(void){

	aunit_printf("\n##FUNCTION_START_buffer_fill\n");
 }

void test_buffer_fill_down(void){
	aunit_printf("\n##FUNCTION_END_buffer_fill\n");
 }



void abnormal_buffer_fill_case(int index);

void abnormal_buffer_fill_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_buffer_fill_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct buffer *bb;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct buffer *valueList_0[]={(struct buffer *)bb_PTRTO};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0};
	unsigned int listLength_1=1;
	void *valueList_2[]={(void *)0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={100};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	long int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={1};
	unsigned int listLength_6=1;
	long int valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={32768};
	unsigned int listLength_8=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����
	pread_call_counter = 0;

	aunit_printf("###TEST_TREE_test_buffer_fill_8,false,0\n");
	aunit_printf("#CASE_START_test_buffer_fill_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			bb=(struct buffer *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(bb_PTRTO[0]).fbuf=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(bb_PTRTO[0]).ebuf=(void *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(bb_PTRTO[0]).flen=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(bb_PTRTO[0]).elen=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(bb_PTRTO[0]).eoff=(long int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(bb_PTRTO[0]).fd=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(bb_PTRTO[0]).st.st_size=(long int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(bb_PTRTO[0]).st.st_mode=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = buffer_fill(bb);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("buffer_fill","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("pread","pread_call_counter",pread_call_counter)

	aunit_printf("#CASE_END_test_buffer_fill_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_buffer_fill_up();

	switch(caseIndex){
	case 8:
		test_buffer_fill_8();
		break;
	default:
		abnormal_buffer_fill_case(caseIndex);
		break;
	}

	test_buffer_fill_down();
}

