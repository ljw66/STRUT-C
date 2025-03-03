void test_ksw_qinit_up(void);
void test_ksw_qinit_down(void);


void test_ksw_qinit_up(void){

	aunit_printf("\n##FUNCTION_START_ksw_qinit\n");
 }

void test_ksw_qinit_down(void){
	aunit_printf("\n##FUNCTION_END_ksw_qinit\n");
 }



void abnormal_ksw_qinit_case(int index);

void abnormal_ksw_qinit_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ksw_qinit_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int size;
	int qlen;
	uint8_t *query;
	int m;
	int8_t *mat;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	kswq_t *returnValue = 0;

	//ֵ�������
	int valueList_0[]={5};
	unsigned int listLength_0=1;
	int8_t *valueList_1[]={(int8_t *)"\01\02\03\04\05\06\07\08\09"};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	uint8_t *valueList_3[]={(uint8_t *)"abcde"};
	unsigned int listLength_3=1;
	int valueList_4[]={3};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ksw_qinit_3,false,0\n");
	aunit_printf("#CASE_START_test_ksw_qinit_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			qlen=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			mat=(int8_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			size=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			query=(uint8_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			m=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = ksw_qinit(size,qlen,query,m,mat);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("ksw_qinit","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)

	aunit_printf("#CASE_END_test_ksw_qinit_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_ksw_qinit_up();

	switch(caseIndex){
	case 3:
		test_ksw_qinit_3();
		break;
	default:
		abnormal_ksw_qinit_case(caseIndex);
		break;
	}

	test_ksw_qinit_down();
}

