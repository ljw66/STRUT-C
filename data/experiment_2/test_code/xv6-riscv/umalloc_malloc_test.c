void test_malloc_up(void);
void test_malloc_down(void);


void test_malloc_up(void){

	aunit_printf("\n##FUNCTION_START_malloc\n");
 }

void test_malloc_down(void){
	aunit_printf("\n##FUNCTION_END_malloc\n");
 }



void abnormal_malloc_case(int index);

void abnormal_malloc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_malloc_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int nbytes;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	Header *valueList_0[]={(Header *)freep_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={64};
	unsigned int listLength_1=1;
	long int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={20};
	unsigned int listLength_3=1;
	union header *valueList_4[]={(union header *)1};
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
	morecore_call_counter = 0;

	aunit_printf("###TEST_TREE_test_malloc_3,false,0\n");
	aunit_printf("#CASE_START_test_malloc_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			freep=(Header *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nbytes=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			base.x=(long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(freep_PTRTO[0]).s.size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(freep_PTRTO[0]).s.ptr=(union header *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = malloc(nbytes);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("malloc","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("malloc","freep->s.ptr",1,freep->s.ptr)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("malloc","freep->s.size",20,freep->s.size)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("morecore","morecore_call_counter",morecore_call_counter)

	aunit_printf("#CASE_END_test_malloc_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_malloc_up();

	switch(caseIndex){
	case 3:
		test_malloc_3();
		break;
	default:
		abnormal_malloc_case(caseIndex);
		break;
	}

	test_malloc_down();
}

