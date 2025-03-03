void test_buffer_fini_up(void);
void test_buffer_fini_down(void);


void test_buffer_fini_up(void){

	aunit_printf("\n##FUNCTION_START_buffer_fini\n");
 }

void test_buffer_fini_down(void){
	aunit_printf("\n##FUNCTION_END_buffer_fini\n");
 }



void abnormal_buffer_fini_case(int index);

void abnormal_buffer_fini_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_buffer_fini_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct buffer *b;


	//ֵ�������
	struct buffer *valueList_0[]={(struct buffer *)b_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	void *valueList_2[]={(void *)0};
	unsigned int listLength_2=1;
	void *valueList_3[]={(void *)0};
	unsigned int listLength_3=1;
	long int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={1024};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={512};
	unsigned int listLength_6=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_buffer_fini_1,false,0\n");
	aunit_printf("#CASE_START_test_buffer_fini_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct buffer *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(b_PTRTO[0]).fd=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(b_PTRTO[0]).fbuf=(void *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b_PTRTO[0]).ebuf=(void *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).eoff=(long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b_PTRTO[0]).flen=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(b_PTRTO[0]).elen=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		buffer_fini(b);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("buffer_fini","b->ebuf",0,b->ebuf)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("buffer_fini","b->elen",0,b->elen)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_buffer_fini_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_buffer_fini_up();

	switch(caseIndex){
	case 1:
		test_buffer_fini_1();
		break;
	default:
		abnormal_buffer_fini_case(caseIndex);
		break;
	}

	test_buffer_fini_down();
}

