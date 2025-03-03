void test_rsect_up(void);
void test_rsect_down(void);


void test_rsect_up(void){

	aunit_printf("\n##FUNCTION_START_rsect\n");
 }

void test_rsect_down(void){
	aunit_printf("\n##FUNCTION_END_rsect\n");
 }



void abnormal_rsect_case(int index);

void abnormal_rsect_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_rsect_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int sec;
	void *buf;


	//ֵ�������
	unsigned int valueList_0[]={1};
	unsigned int listLength_0=1;
	int valueList_1[]={20};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	die_call_counter = 0;
	read_call_counter = 0;
	lseek_call_counter = 0;

	aunit_printf("###TEST_TREE_test_rsect_1,false,0\n");
	aunit_printf("#CASE_START_test_rsect_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sec=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fsfd=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		rsect(sec,buf);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("die","die_call_counter",die_call_counter)
	OB_INT_EXPR("read","read_call_counter",read_call_counter)
	OB_INT_EXPR("lseek","lseek_call_counter",lseek_call_counter)

	aunit_printf("#CASE_END_test_rsect_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_rsect_up();

	switch(caseIndex){
	case 1:
		test_rsect_1();
		break;
	default:
		abnormal_rsect_case(caseIndex);
		break;
	}

	test_rsect_down();
}

