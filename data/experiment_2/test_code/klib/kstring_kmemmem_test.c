void test_kmemmem_up(void);
void test_kmemmem_down(void);


void test_kmemmem_up(void){

	aunit_printf("\n##FUNCTION_START_kmemmem\n");
 }

void test_kmemmem_down(void){
	aunit_printf("\n##FUNCTION_END_kmemmem\n");
 }



void abnormal_kmemmem_case(int index);

void abnormal_kmemmem_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kmemmem_11(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *_str;
	int n;
	void *_pat;
	int m;
	int **_prep;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	int **valueList_0[]={(int * *)0};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)"cd"};
	unsigned int listLength_1=1;
	int valueList_2[]={2};
	unsigned int listLength_2=1;
	void *valueList_3[]={(void *)"abcdef"};
	unsigned int listLength_3=1;
	int valueList_4[]={6};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=11;
	//��ʼ����׮�������ü�����
	ksBM_prep_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kmemmem_11,false,0\n");
	aunit_printf("#CASE_START_test_kmemmem_11\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			_prep=(int * *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			_pat=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			m=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			_str=(void *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			n=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = kmemmem(_str,n,_pat,m,_prep);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("kmemmem","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("ksBM_prep","ksBM_prep_call_counter",ksBM_prep_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_kmemmem_11\n");
}

void aunit_test_func_run(int caseIndex){

	test_kmemmem_up();

	switch(caseIndex){
	case 11:
		test_kmemmem_11();
		break;
	default:
		abnormal_kmemmem_case(caseIndex);
		break;
	}

	test_kmemmem_down();
}

