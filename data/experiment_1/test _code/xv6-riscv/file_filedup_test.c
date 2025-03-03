void test_filedup_up(void);
void test_filedup_down(void);


void test_filedup_up(void){

	aunit_printf("\n##FUNCTION_START_filedup\n");
 }

void test_filedup_down(void){
	aunit_printf("\n##FUNCTION_END_filedup\n");
 }



void abnormal_filedup_case(int index);

void abnormal_filedup_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_filedup_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct file *f;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct file *returnValue = 0;

	//ֵ�������
	struct file *valueList_0[]={(struct file *)f_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={100};
	unsigned int listLength_1=1;
	struct inode *valueList_2[]={(struct inode *)&struct_inode2};
	unsigned int listLength_2=1;
	int valueList_3[]={1};
	unsigned int listLength_3=1;
	short int valueList_4[]={2};
	unsigned int listLength_4=1;
	char valueList_5[]={'b'};
	unsigned int listLength_5=1;
	char valueList_6[]={'b'};
	unsigned int listLength_6=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	release_call_counter = 0;
	acquire_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_filedup_2,false,0\n");
	aunit_printf("#CASE_START_test_filedup_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f=(struct file *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(f_PTRTO[0]).off=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(f_PTRTO[0]).ip=(struct inode *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(f_PTRTO[0]).ref=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(f_PTRTO[0]).major=(short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(f_PTRTO[0]).readable=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(f_PTRTO[0]).writable=(char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = filedup(f);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("filedup","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_filedup_2\n");
}

void test_filedup_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct file *f;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct file *returnValue = 0;

	//ֵ�������
	struct file *valueList_0[]={(struct file *)f_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={200};
	unsigned int listLength_1=1;
	struct inode *valueList_2[]={(struct inode *)&struct_inode3};
	unsigned int listLength_2=1;
	int valueList_3[]={5};
	unsigned int listLength_3=1;
	short int valueList_4[]={3};
	unsigned int listLength_4=1;
	char valueList_5[]={'c'};
	unsigned int listLength_5=1;
	char valueList_6[]={'c'};
	unsigned int listLength_6=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	release_call_counter = 0;
	acquire_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_filedup_3,false,0\n");
	aunit_printf("#CASE_START_test_filedup_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f=(struct file *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(f_PTRTO[0]).off=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(f_PTRTO[0]).ip=(struct inode *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(f_PTRTO[0]).ref=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(f_PTRTO[0]).major=(short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(f_PTRTO[0]).readable=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(f_PTRTO[0]).writable=(char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = filedup(f);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("filedup","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_filedup_3\n");
}

void test_filedup_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct file *f;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct file *returnValue = 0;

	//ֵ�������
	struct file *valueList_0[]={(struct file *)f_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={300};
	unsigned int listLength_1=1;
	struct inode *valueList_2[]={(struct inode *)&struct_inode4};
	unsigned int listLength_2=1;
	int valueList_3[]={2147483647};
	unsigned int listLength_3=1;
	short int valueList_4[]={4};
	unsigned int listLength_4=1;
	char valueList_5[]={'d'};
	unsigned int listLength_5=1;
	char valueList_6[]={'d'};
	unsigned int listLength_6=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	release_call_counter = 0;
	acquire_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_filedup_4,false,0\n");
	aunit_printf("#CASE_START_test_filedup_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f=(struct file *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(f_PTRTO[0]).off=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(f_PTRTO[0]).ip=(struct inode *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(f_PTRTO[0]).ref=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(f_PTRTO[0]).major=(short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(f_PTRTO[0]).readable=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(f_PTRTO[0]).writable=(char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = filedup(f);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("filedup","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_filedup_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_filedup_up();

	switch(caseIndex){
	case 2:
		test_filedup_2();
		break;
	case 3:
		test_filedup_3();
		break;
	case 4:
		test_filedup_4();
		break;
	default:
		abnormal_filedup_case(caseIndex);
		break;
	}

	test_filedup_down();
}

