void test_xshort_up(void);
void test_xshort_down(void);


void test_xshort_up(void){

	aunit_printf("\n##FUNCTION_START_xshort\n");
 }

void test_xshort_down(void){
	aunit_printf("\n##FUNCTION_END_xshort\n");
 }



void abnormal_xshort_case(int index);

void abnormal_xshort_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_xshort_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned short int x;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	ushort returnValue = 0;

	//ֵ�������
	unsigned short int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_xshort_1,false,0\n");
	aunit_printf("#CASE_START_test_xshort_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xshort(x);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("xshort","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_xshort_1\n");
}

void test_xshort_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned short int x;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	ushort returnValue = 0;

	//ֵ�������
	unsigned short int valueList_0[]={65535};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_xshort_2,false,0\n");
	aunit_printf("#CASE_START_test_xshort_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xshort(x);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("xshort","returnValue",65535,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_xshort_2\n");
}

void test_xshort_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned short int x;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	ushort returnValue = 0;

	//ֵ�������
	unsigned short int valueList_0[]={1};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_xshort_3,false,0\n");
	aunit_printf("#CASE_START_test_xshort_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xshort(x);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("xshort","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_xshort_3\n");
}

void test_xshort_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned short int x;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	ushort returnValue = 0;

	//ֵ�������
	unsigned short int valueList_0[]={256};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_xshort_4,false,0\n");
	aunit_printf("#CASE_START_test_xshort_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xshort(x);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("xshort","returnValue",256,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_xshort_4\n");
}

void test_xshort_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned short int x;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	ushort returnValue = 0;

	//ֵ�������
	unsigned short int valueList_0[]={257};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_xshort_5,false,0\n");
	aunit_printf("#CASE_START_test_xshort_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xshort(x);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("xshort","returnValue",257,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_xshort_5\n");
}

void test_xshort_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned short int x;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	ushort returnValue = 0;

	//ֵ�������
	unsigned short int valueList_0[]={32768};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_xshort_6,false,0\n");
	aunit_printf("#CASE_START_test_xshort_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xshort(x);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("xshort","returnValue",32768,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_xshort_6\n");
}

void test_xshort_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned short int x;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	ushort returnValue = 0;

	//ֵ�������
	unsigned short int valueList_0[]={65280};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_xshort_7,false,0\n");
	aunit_printf("#CASE_START_test_xshort_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xshort(x);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("xshort","returnValue",65280,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_xshort_7\n");
}

void test_xshort_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned short int x;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	ushort returnValue = 0;

	//ֵ�������
	unsigned short int valueList_0[]={4660};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_xshort_8,false,0\n");
	aunit_printf("#CASE_START_test_xshort_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xshort(x);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("xshort","returnValue",4660,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_xshort_8\n");
}

void test_xshort_9(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned short int x;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	ushort returnValue = 0;

	//ֵ�������
	unsigned short int valueList_0[]={43981};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=9;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_xshort_9,false,0\n");
	aunit_printf("#CASE_START_test_xshort_9\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xshort(x);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("xshort","returnValue",43981,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_xshort_9\n");
}

void test_xshort_10(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned short int x;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	ushort returnValue = 0;

	//ֵ�������
	unsigned short int valueList_0[]={4660};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=10;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_xshort_10,false,0\n");
	aunit_printf("#CASE_START_test_xshort_10\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xshort(x);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("xshort","returnValue",4660,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_xshort_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_xshort_up();

	switch(caseIndex){
	case 1:
		test_xshort_1();
		break;
	case 2:
		test_xshort_2();
		break;
	case 3:
		test_xshort_3();
		break;
	case 4:
		test_xshort_4();
		break;
	case 5:
		test_xshort_5();
		break;
	case 6:
		test_xshort_6();
		break;
	case 7:
		test_xshort_7();
		break;
	case 8:
		test_xshort_8();
		break;
	case 9:
		test_xshort_9();
		break;
	case 10:
		test_xshort_10();
		break;
	default:
		abnormal_xshort_case(caseIndex);
		break;
	}

	test_xshort_down();
}

