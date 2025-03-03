void test_free_up(void);
void test_free_down(void);


void test_free_up(void){

	aunit_printf("\n##FUNCTION_START_free\n");
 }

void test_free_down(void){
	aunit_printf("\n##FUNCTION_END_free\n");
 }



void abnormal_free_case(int index);

void abnormal_free_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_free_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *ap;


	//ֵ�������
	Header *valueList_0[]={(Header *)freep_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={1};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={1};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_free_2,false,0\n");
	aunit_printf("#CASE_START_test_free_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			freep=(Header *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(freep_PTRTO[0]).s.ptr->s.size=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(freep_PTRTO[0]).s.ptr->s.ptr->s.size=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		free(ap);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_free_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_free_up();

	switch(caseIndex){
	case 2:
		test_free_2();
		break;
	default:
		abnormal_free_case(caseIndex);
		break;
	}

	test_free_down();
}

