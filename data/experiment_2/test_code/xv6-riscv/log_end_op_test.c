void test_end_op_up(void);
void test_end_op_down(void);


void test_end_op_up(void){

	aunit_printf("\n##FUNCTION_START_end_op\n");
 }

void test_end_op_down(void){
	aunit_printf("\n##FUNCTION_END_end_op\n");
 }



void abnormal_end_op_case(int index);

void abnormal_end_op_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_end_op_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	wakeup_call_counter = 0;
	release_call_counter = 0;
	commit_call_counter = 0;
	acquire_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_end_op_3,false,0\n");
	aunit_printf("#CASE_START_test_end_op_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			log.outstanding=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			log.committing=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		end_op();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("end_op","log.outstanding",0,log.outstanding)
	TEST_ASSERT_EQUAL_INT("end_op","log.committing",1,log.committing)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("wakeup","wakeup_call_counter",wakeup_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("commit","commit_call_counter",commit_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_end_op_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_end_op_up();

	switch(caseIndex){
	case 3:
		test_end_op_3();
		break;
	default:
		abnormal_end_op_case(caseIndex);
		break;
	}

	test_end_op_down();
}

