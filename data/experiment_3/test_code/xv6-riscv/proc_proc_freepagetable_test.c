void test_proc_freepagetable_up(void);
void test_proc_freepagetable_down(void);


void test_proc_freepagetable_up(void){

	aunit_printf("\n##FUNCTION_START_proc_freepagetable\n");
 }

void test_proc_freepagetable_down(void){
	aunit_printf("\n##FUNCTION_END_proc_freepagetable\n");
 }



void abnormal_proc_freepagetable_case(int index);

void abnormal_proc_freepagetable_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_proc_freepagetable_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64 *pagetable;
	unsigned long int sz;


	//ֵ�������
	uint64 *valueList_0[]={(uint64 *)pagetable_PTRTO};
	unsigned int listLength_0=1;
	unsigned long int valueList_1[]={4096};
	unsigned int listLength_1=1;
	unsigned long int valueList_2[]={12345};
	unsigned int listLength_2=1;
	unsigned long int valueList_3[]={67890};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	uvmunmap_call_counter = 0;
	uvmfree_call_counter = 0;

	aunit_printf("###TEST_TREE_test_proc_freepagetable_1,false,0\n");
	aunit_printf("#CASE_START_test_proc_freepagetable_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			pagetable=(uint64 *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sz=(unsigned long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			pagetable_PTRTO[0]=(unsigned long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			pagetable_PTRTO[1]=(unsigned long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		proc_freepagetable(pagetable,sz);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("uvmunmap","uvmunmap_call_counter",uvmunmap_call_counter)
	OB_INT_EXPR("uvmfree","uvmfree_call_counter",uvmfree_call_counter)

	aunit_printf("#CASE_END_test_proc_freepagetable_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_proc_freepagetable_up();

	switch(caseIndex){
	case 1:
		test_proc_freepagetable_1();
		break;
	default:
		abnormal_proc_freepagetable_case(caseIndex);
		break;
	}

	test_proc_freepagetable_down();
}

