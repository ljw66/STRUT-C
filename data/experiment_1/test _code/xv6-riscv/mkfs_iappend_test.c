void test_iappend_up(void);
void test_iappend_down(void);


void test_iappend_up(void){

	aunit_printf("\n##FUNCTION_START_iappend\n");
 }

void test_iappend_down(void){
	aunit_printf("\n##FUNCTION_END_iappend\n");
 }



void abnormal_iappend_case(int index);

void abnormal_iappend_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_iappend_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int inum;
	void *xp;
	int n;


	//ֵ�������
	unsigned int valueList_0[]={600};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={6};
	unsigned int listLength_1=1;
	int valueList_2[]={2048};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	bcopy_call_counter = 0;
	abort_call_counter = 0;
	wsect_call_counter = 0;
	winode_call_counter = 0;
	rsect_call_counter = 0;
	rinode_call_counter = 0;
	xint_call_counter = 0;

	aunit_printf("###TEST_TREE_test_iappend_6,false,0\n");
	aunit_printf("#CASE_START_test_iappend_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			freeblock=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			inum=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		iappend(inum,xp,n);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("iappend","freeblock",602,freeblock)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("bcopy","bcopy_call_counter",bcopy_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("wsect","wsect_call_counter",wsect_call_counter)
	OB_INT_EXPR("winode","winode_call_counter",winode_call_counter)
	OB_INT_EXPR("rsect","rsect_call_counter",rsect_call_counter)
	OB_INT_EXPR("rinode","rinode_call_counter",rinode_call_counter)
	OB_INT_EXPR("xint","xint_call_counter",xint_call_counter)

	aunit_printf("#CASE_END_test_iappend_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_iappend_up();

	switch(caseIndex){
	case 6:
		test_iappend_6();
		break;
	default:
		abnormal_iappend_case(caseIndex);
		break;
	}

	test_iappend_down();
}

