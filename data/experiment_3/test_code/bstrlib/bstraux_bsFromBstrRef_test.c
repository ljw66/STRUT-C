void test_bsFromBstrRef_up(void);
void test_bsFromBstrRef_down(void);


void test_bsFromBstrRef_up(void){

	aunit_printf("\n##FUNCTION_START_bsFromBstrRef\n");
 }

void test_bsFromBstrRef_down(void){
	aunit_printf("\n##FUNCTION_END_bsFromBstrRef\n");
 }



void abnormal_bsFromBstrRef_case(int index);

void abnormal_bsFromBstrRef_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bsFromBstrRef_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct tagbstring *t;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct bStream *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	bsopen_call_counter = 0;
	readRef_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bsFromBstrRef_1,false,0\n");
	aunit_printf("#CASE_START_test_bsFromBstrRef_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = bsFromBstrRef(t);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("bsFromBstrRef","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("bsopen","bsopen_call_counter",bsopen_call_counter)
	OB_INT_EXPR("readRef","readRef_call_counter",readRef_call_counter)

	aunit_printf("#CASE_END_test_bsFromBstrRef_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_bsFromBstrRef_up();

	switch(caseIndex){
	case 1:
		test_bsFromBstrRef_1();
		break;
	default:
		abnormal_bsFromBstrRef_case(caseIndex);
		break;
	}

	test_bsFromBstrRef_down();
}

