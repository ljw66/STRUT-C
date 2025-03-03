void test_namei_up(void);
void test_namei_down(void);


void test_namei_up(void){

	aunit_printf("\n##FUNCTION_START_namei\n");
 }

void test_namei_down(void){
	aunit_printf("\n##FUNCTION_END_namei\n");
 }



void abnormal_namei_case(int index);

void abnormal_namei_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_namei_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *path;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct inode *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	namex_call_counter = 0;

	aunit_printf("###TEST_TREE_test_namei_1,false,0\n");
	aunit_printf("#CASE_START_test_namei_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = namei(path);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("namei","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("namex","namex_call_counter",namex_call_counter)

	aunit_printf("#CASE_END_test_namei_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_namei_up();

	switch(caseIndex){
	case 1:
		test_namei_1();
		break;
	default:
		abnormal_namei_case(caseIndex);
		break;
	}

	test_namei_down();
}

