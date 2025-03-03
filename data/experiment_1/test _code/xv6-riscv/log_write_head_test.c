void test_write_head_up(void);
void test_write_head_down(void);


void test_write_head_up(void){

	aunit_printf("\n##FUNCTION_START_write_head\n");
 }

void test_write_head_down(void){
	aunit_printf("\n##FUNCTION_END_write_head\n");
 }



void abnormal_write_head_case(int index);

void abnormal_write_head_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_write_head_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	int valueList_0[]={5};
	unsigned int listLength_0=1;
	int valueList_1[]={35};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����
	bwrite_call_counter = 0;
	bread_call_counter = 0;
	brelse_call_counter = 0;

	aunit_printf("###TEST_TREE_test_write_head_8,false,0\n");
	aunit_printf("#CASE_START_test_write_head_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			log.start=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			log.lh.n=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		write_head();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("bwrite","bwrite_call_counter",bwrite_call_counter)
	OB_INT_EXPR("bread","bread_call_counter",bread_call_counter)
	OB_INT_EXPR("brelse","brelse_call_counter",brelse_call_counter)

	aunit_printf("#CASE_END_test_write_head_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_write_head_up();

	switch(caseIndex){
	case 8:
		test_write_head_8();
		break;
	default:
		abnormal_write_head_case(caseIndex);
		break;
	}

	test_write_head_down();
}

