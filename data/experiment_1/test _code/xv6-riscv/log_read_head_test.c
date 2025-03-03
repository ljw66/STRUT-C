void test_read_head_up(void);
void test_read_head_down(void);


void test_read_head_up(void){

	aunit_printf("\n##FUNCTION_START_read_head\n");
 }

void test_read_head_down(void){
	aunit_printf("\n##FUNCTION_END_read_head\n");
 }



void abnormal_read_head_case(int index);

void abnormal_read_head_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_read_head_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	int valueList_0[]={25};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	bread_call_counter = 0;
	brelse_call_counter = 0;

	aunit_printf("###TEST_TREE_test_read_head_5,false,0\n");
	aunit_printf("#CASE_START_test_read_head_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			log.start=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		read_head();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("read_head","log.lh.n",-1,log.lh.n)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("bread","bread_call_counter",bread_call_counter)
	OB_INT_EXPR("brelse","brelse_call_counter",brelse_call_counter)

	aunit_printf("#CASE_END_test_read_head_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_read_head_up();

	switch(caseIndex){
	case 5:
		test_read_head_5();
		break;
	default:
		abnormal_read_head_case(caseIndex);
		break;
	}

	test_read_head_down();
}

