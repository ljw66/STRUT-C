void test_magic_load_buffers_up(void);
void test_magic_load_buffers_down(void);


void test_magic_load_buffers_up(void){

	aunit_printf("\n##FUNCTION_START_magic_load_buffers\n");
 }

void test_magic_load_buffers_down(void){
	aunit_printf("\n##FUNCTION_END_magic_load_buffers\n");
 }



void abnormal_magic_load_buffers_case(int index);

void abnormal_magic_load_buffers_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_magic_load_buffers_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	void **bufs;
	size_t *sizes;
	unsigned int nbufs;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)sizes_PTRTO};
	unsigned int listLength_1=1;
	void *valueList_2[]={(void *)0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
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
	buffer_apprentice_call_counter = 0;

	aunit_printf("###TEST_TREE_test_magic_load_buffers_1,false,0\n");
	aunit_printf("#CASE_START_test_magic_load_buffers_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nbufs=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sizes=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			*bufs=(void *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			sizes_PTRTO[0]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = magic_load_buffers(ms,bufs,sizes,nbufs);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("magic_load_buffers","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("buffer_apprentice","buffer_apprentice_call_counter",buffer_apprentice_call_counter)

	aunit_printf("#CASE_END_test_magic_load_buffers_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_magic_load_buffers_up();

	switch(caseIndex){
	case 1:
		test_magic_load_buffers_1();
		break;
	default:
		abnormal_magic_load_buffers_case(caseIndex);
		break;
	}

	test_magic_load_buffers_down();
}

