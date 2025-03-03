void test_magic_getparam_up(void);
void test_magic_getparam_down(void);


void test_magic_getparam_up(void){

	aunit_printf("\n##FUNCTION_START_magic_getparam\n");
 }

void test_magic_getparam_down(void){
	aunit_printf("\n##FUNCTION_END_magic_getparam\n");
 }



void abnormal_magic_getparam_case(int index);

void abnormal_magic_getparam_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_magic_getparam_13(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	int param;
	void *val;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	struct magic_set *valueList_2[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=13;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_magic_getparam_13,false,0\n");
	aunit_printf("#CASE_START_test_magic_getparam_13\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			param=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ms=(struct magic_set *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = magic_getparam(ms,param,val);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("magic_getparam","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("magic_getparam","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_magic_getparam_13\n");
}

void aunit_test_func_run(int caseIndex){

	test_magic_getparam_up();

	switch(caseIndex){
	case 13:
		test_magic_getparam_13();
		break;
	default:
		abnormal_magic_getparam_case(caseIndex);
		break;
	}

	test_magic_getparam_down();
}

