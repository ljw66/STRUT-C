void test_closeFile_up(void);
void test_closeFile_down(void);


void test_closeFile_up(void){

	aunit_printf("\n##FUNCTION_START_closeFile\n");
 }

void test_closeFile_down(void){
	aunit_printf("\n##FUNCTION_END_closeFile\n");
 }



void abnormal_closeFile_case(int index);

void abnormal_closeFile_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_closeFile_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	FILE *file;


	//ֵ�������
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	fclose_call_counter = 0;
	endProgramAbruptly_call_counter = 0;

	aunit_printf("###TEST_TREE_test_closeFile_1,false,0\n");
	aunit_printf("#CASE_START_test_closeFile_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(file_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		closeFile(file);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fclose","fclose_call_counter",fclose_call_counter)
	OB_INT_EXPR("endProgramAbruptly","endProgramAbruptly_call_counter",endProgramAbruptly_call_counter)

	aunit_printf("#CASE_END_test_closeFile_1\n");
}

void test_closeFile_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	FILE *file;


	//ֵ�������
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	fclose_call_counter = 0;
	endProgramAbruptly_call_counter = 0;

	aunit_printf("###TEST_TREE_test_closeFile_2,false,0\n");
	aunit_printf("#CASE_START_test_closeFile_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(file_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		closeFile(file);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fclose","fclose_call_counter",fclose_call_counter)
	OB_INT_EXPR("endProgramAbruptly","endProgramAbruptly_call_counter",endProgramAbruptly_call_counter)

	aunit_printf("#CASE_END_test_closeFile_2\n");
}

void test_closeFile_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	FILE *file;


	//ֵ�������
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	fclose_call_counter = 0;
	endProgramAbruptly_call_counter = 0;

	aunit_printf("###TEST_TREE_test_closeFile_3,false,0\n");
	aunit_printf("#CASE_START_test_closeFile_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(file_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		closeFile(file);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fclose","fclose_call_counter",fclose_call_counter)
	OB_INT_EXPR("endProgramAbruptly","endProgramAbruptly_call_counter",endProgramAbruptly_call_counter)

	aunit_printf("#CASE_END_test_closeFile_3\n");
}

void test_closeFile_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	FILE *file;


	//ֵ�������
	unsigned int valueList_0[]={1234};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	fclose_call_counter = 0;
	endProgramAbruptly_call_counter = 0;

	aunit_printf("###TEST_TREE_test_closeFile_4,false,0\n");
	aunit_printf("#CASE_START_test_closeFile_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(file_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		closeFile(file);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fclose","fclose_call_counter",fclose_call_counter)
	OB_INT_EXPR("endProgramAbruptly","endProgramAbruptly_call_counter",endProgramAbruptly_call_counter)

	aunit_printf("#CASE_END_test_closeFile_4\n");
}

void test_closeFile_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	FILE *file;


	//ֵ�������
	unsigned int valueList_0[]={5678};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	fclose_call_counter = 0;
	endProgramAbruptly_call_counter = 0;

	aunit_printf("###TEST_TREE_test_closeFile_5,false,0\n");
	aunit_printf("#CASE_START_test_closeFile_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(file_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		closeFile(file);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fclose","fclose_call_counter",fclose_call_counter)
	OB_INT_EXPR("endProgramAbruptly","endProgramAbruptly_call_counter",endProgramAbruptly_call_counter)

	aunit_printf("#CASE_END_test_closeFile_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_closeFile_up();

	switch(caseIndex){
	case 1:
		test_closeFile_1();
		break;
	case 2:
		test_closeFile_2();
		break;
	case 3:
		test_closeFile_3();
		break;
	case 4:
		test_closeFile_4();
		break;
	case 5:
		test_closeFile_5();
		break;
	default:
		abnormal_closeFile_case(caseIndex);
		break;
	}

	test_closeFile_down();
}

