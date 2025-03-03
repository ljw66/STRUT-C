void test_readsb_up(void);
void test_readsb_down(void);


void test_readsb_up(void){

	aunit_printf("\n##FUNCTION_START_readsb\n");
 }

void test_readsb_down(void){
	aunit_printf("\n##FUNCTION_END_readsb\n");
 }



void abnormal_readsb_case(int index);

void abnormal_readsb_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_readsb_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int dev;
	struct superblock *sb;


	//ֵ�������
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	bread_call_counter = 0;
	memmove_call_counter = 0;
	brelse_call_counter = 0;

	aunit_printf("###TEST_TREE_test_readsb_1,false,0\n");
	aunit_printf("#CASE_START_test_readsb_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		readsb(dev,sb);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb.nblocks",0xEF00,sb.nblocks)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb.size",0xABCD,sb.size)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readsb","sb.magic",0x12345678,sb.magic)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("bread","bread_call_counter",bread_call_counter)
	OB_INT_EXPR("memmove","memmove_call_counter",memmove_call_counter)
	OB_INT_EXPR("brelse","brelse_call_counter",brelse_call_counter)

	aunit_printf("#CASE_END_test_readsb_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_readsb_up();

	switch(caseIndex){
	case 1:
		test_readsb_1();
		break;
	default:
		abnormal_readsb_case(caseIndex);
		break;
	}

	test_readsb_down();
}

