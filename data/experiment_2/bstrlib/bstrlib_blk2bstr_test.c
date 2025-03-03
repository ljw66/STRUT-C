void test_blk2bstr_up(void);
void test_blk2bstr_down(void);


void test_blk2bstr_up(void){

	aunit_printf("\n##FUNCTION_START_blk2bstr\n");
 }

void test_blk2bstr_down(void){
	aunit_printf("\n##FUNCTION_END_blk2bstr\n");
 }



void abnormal_blk2bstr_case(int index);

void abnormal_blk2bstr_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_blk2bstr_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *blk;
	int len;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	bstring returnValue = 0;

	//ֵ�������
	int valueList_0[]={5};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	snapUpSize_call_counter = 0;

	aunit_printf("###TEST_TREE_test_blk2bstr_1,false,0\n");
	aunit_printf("#CASE_START_test_blk2bstr_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = blk2bstr(blk,len);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("blk2bstr","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("snapUpSize","snapUpSize_call_counter",snapUpSize_call_counter)

	aunit_printf("#CASE_END_test_blk2bstr_1\n");
}

void test_blk2bstr_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *blk;
	int len;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	bstring returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)"some data"};
	unsigned int listLength_0=1;
	int valueList_1[]={-1};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	snapUpSize_call_counter = 0;

	aunit_printf("###TEST_TREE_test_blk2bstr_2,false,0\n");
	aunit_printf("#CASE_START_test_blk2bstr_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			blk=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = blk2bstr(blk,len);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("blk2bstr","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("snapUpSize","snapUpSize_call_counter",snapUpSize_call_counter)

	aunit_printf("#CASE_END_test_blk2bstr_2\n");
}

void test_blk2bstr_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *blk;
	int len;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	bstring returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)"some data"};
	unsigned int listLength_0=1;
	int valueList_1[]={5};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	snapUpSize_call_counter = 0;

	aunit_printf("###TEST_TREE_test_blk2bstr_3,false,0\n");
	aunit_printf("#CASE_START_test_blk2bstr_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			blk=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = blk2bstr(blk,len);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("blk2bstr","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("snapUpSize","snapUpSize_call_counter",snapUpSize_call_counter)

	aunit_printf("#CASE_END_test_blk2bstr_3\n");
}

void test_blk2bstr_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *blk;
	int len;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	bstring returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)"some data"};
	unsigned int listLength_0=1;
	int valueList_1[]={5};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	snapUpSize_call_counter = 0;

	aunit_printf("###TEST_TREE_test_blk2bstr_4,false,0\n");
	aunit_printf("#CASE_START_test_blk2bstr_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			blk=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = blk2bstr(blk,len);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("blk2bstr","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("snapUpSize","snapUpSize_call_counter",snapUpSize_call_counter)

	aunit_printf("#CASE_END_test_blk2bstr_4\n");
}

void test_blk2bstr_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *blk;
	int len;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	bstring returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)"some data"};
	unsigned int listLength_0=1;
	int valueList_1[]={5};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	snapUpSize_call_counter = 0;

	aunit_printf("###TEST_TREE_test_blk2bstr_5,false,0\n");
	aunit_printf("#CASE_START_test_blk2bstr_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			blk=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = blk2bstr(blk,len);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("blk2bstr","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("snapUpSize","snapUpSize_call_counter",snapUpSize_call_counter)

	aunit_printf("#CASE_END_test_blk2bstr_5\n");
}

void test_blk2bstr_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *blk;
	int len;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	bstring returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)"some data"};
	unsigned int listLength_0=1;
	int valueList_1[]={5};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	snapUpSize_call_counter = 0;

	aunit_printf("###TEST_TREE_test_blk2bstr_6,false,0\n");
	aunit_printf("#CASE_START_test_blk2bstr_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			blk=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = blk2bstr(blk,len);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("blk2bstr","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("snapUpSize","snapUpSize_call_counter",snapUpSize_call_counter)

	aunit_printf("#CASE_END_test_blk2bstr_6\n");
}

void test_blk2bstr_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *blk;
	int len;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	bstring returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)"some data"};
	unsigned int listLength_0=1;
	int valueList_1[]={5};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	snapUpSize_call_counter = 0;

	aunit_printf("###TEST_TREE_test_blk2bstr_7,false,0\n");
	aunit_printf("#CASE_START_test_blk2bstr_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			blk=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = blk2bstr(blk,len);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("blk2bstr","returnValue",returnValue)
	TEST_ASSERT_EQUAL_INT("blk2bstr","returnValue->slen",5,returnValue->slen)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("snapUpSize","snapUpSize_call_counter",snapUpSize_call_counter)

	aunit_printf("#CASE_END_test_blk2bstr_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_blk2bstr_up();

	switch(caseIndex){
	case 1:
		test_blk2bstr_1();
		break;
	case 2:
		test_blk2bstr_2();
		break;
	case 3:
		test_blk2bstr_3();
		break;
	case 4:
		test_blk2bstr_4();
		break;
	case 5:
		test_blk2bstr_5();
		break;
	case 6:
		test_blk2bstr_6();
		break;
	case 7:
		test_blk2bstr_7();
		break;
	default:
		abnormal_blk2bstr_case(caseIndex);
		break;
	}

	test_blk2bstr_down();
}

