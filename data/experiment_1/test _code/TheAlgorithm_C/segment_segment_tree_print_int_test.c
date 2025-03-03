void test_segment_tree_print_int_up(void);
void test_segment_tree_print_int_down(void);


void test_segment_tree_print_int_up(void){

	aunit_printf("\n##FUNCTION_START_segment_tree_print_int\n");
 }

void test_segment_tree_print_int_down(void){
	aunit_printf("\n##FUNCTION_END_segment_tree_print_int\n");
 }



void abnormal_segment_tree_print_int_case(int index);

void abnormal_segment_tree_print_int_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_segment_tree_print_int_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	segment_tree *tree;


	//ֵ�������
	segment_tree *valueList_0[]={(segment_tree *)tree_PTRTO};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0};
	unsigned int listLength_1=1;
	void *valueList_2[]={(void *)0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={4};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	void (*valueList_5[])(const void *, const void *, void *)={(void (*)(const void *, const void *, void *))0};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_segment_tree_print_int_1,false,0\n");
	aunit_printf("#CASE_START_test_segment_tree_print_int_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			tree=(segment_tree *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(tree_PTRTO[0]).root=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(tree_PTRTO[0]).identity=(void *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(tree_PTRTO[0]).elem_size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(tree_PTRTO[0]).length=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(tree_PTRTO[0]).combine=(void (*)(const void *, const void *, void *))valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		segment_tree_print_int(tree);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_segment_tree_print_int_1\n");
}

void test_segment_tree_print_int_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	segment_tree *tree;


	//ֵ�������
	segment_tree *valueList_0[]={(segment_tree *)tree_PTRTO};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x1000};
	unsigned int listLength_1=1;
	void *valueList_2[]={(void *)0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={4};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={1};
	unsigned int listLength_4=1;
	void (*valueList_5[])(const void *, const void *, void *)={(void (*)(const void *, const void *, void *))0};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_segment_tree_print_int_2,false,0\n");
	aunit_printf("#CASE_START_test_segment_tree_print_int_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			tree=(segment_tree *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(tree_PTRTO[0]).root=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(tree_PTRTO[0]).identity=(void *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(tree_PTRTO[0]).elem_size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(tree_PTRTO[0]).length=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(tree_PTRTO[0]).combine=(void (*)(const void *, const void *, void *))valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		segment_tree_print_int(tree);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_segment_tree_print_int_2\n");
}

void test_segment_tree_print_int_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	segment_tree *tree;


	//ֵ�������
	segment_tree *valueList_0[]={(segment_tree *)tree_PTRTO};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x2000};
	unsigned int listLength_1=1;
	void *valueList_2[]={(void *)0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={4};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={3};
	unsigned int listLength_4=1;
	void (*valueList_5[])(const void *, const void *, void *)={(void (*)(const void *, const void *, void *))0};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_segment_tree_print_int_3,false,0\n");
	aunit_printf("#CASE_START_test_segment_tree_print_int_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			tree=(segment_tree *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(tree_PTRTO[0]).root=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(tree_PTRTO[0]).identity=(void *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(tree_PTRTO[0]).elem_size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(tree_PTRTO[0]).length=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(tree_PTRTO[0]).combine=(void (*)(const void *, const void *, void *))valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		segment_tree_print_int(tree);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_segment_tree_print_int_3\n");
}

void test_segment_tree_print_int_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	segment_tree *tree;


	//ֵ�������
	segment_tree *valueList_0[]={(segment_tree *)tree_PTRTO};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x3000};
	unsigned int listLength_1=1;
	void *valueList_2[]={(void *)0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={5};
	unsigned int listLength_4=1;
	void (*valueList_5[])(const void *, const void *, void *)={(void (*)(const void *, const void *, void *))0};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_segment_tree_print_int_4,false,0\n");
	aunit_printf("#CASE_START_test_segment_tree_print_int_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			tree=(segment_tree *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(tree_PTRTO[0]).root=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(tree_PTRTO[0]).identity=(void *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(tree_PTRTO[0]).elem_size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(tree_PTRTO[0]).length=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(tree_PTRTO[0]).combine=(void (*)(const void *, const void *, void *))valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		segment_tree_print_int(tree);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_segment_tree_print_int_4\n");
}

void test_segment_tree_print_int_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	segment_tree *tree;


	//ֵ�������
	segment_tree *valueList_0[]={(segment_tree *)tree_PTRTO};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x4000};
	unsigned int listLength_1=1;
	void *valueList_2[]={(void *)0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={4};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={1000};
	unsigned int listLength_4=1;
	void (*valueList_5[])(const void *, const void *, void *)={(void (*)(const void *, const void *, void *))0};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_segment_tree_print_int_5,false,0\n");
	aunit_printf("#CASE_START_test_segment_tree_print_int_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			tree=(segment_tree *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(tree_PTRTO[0]).root=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(tree_PTRTO[0]).identity=(void *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(tree_PTRTO[0]).elem_size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(tree_PTRTO[0]).length=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(tree_PTRTO[0]).combine=(void (*)(const void *, const void *, void *))valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		segment_tree_print_int(tree);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_segment_tree_print_int_5\n");
}

void test_segment_tree_print_int_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	segment_tree *tree;


	//ֵ�������
	segment_tree *valueList_0[]={(segment_tree *)tree_PTRTO};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0};
	unsigned int listLength_1=1;
	void *valueList_2[]={(void *)0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={4};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={10};
	unsigned int listLength_4=1;
	void (*valueList_5[])(const void *, const void *, void *)={(void (*)(const void *, const void *, void *))0};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_segment_tree_print_int_6,false,0\n");
	aunit_printf("#CASE_START_test_segment_tree_print_int_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			tree=(segment_tree *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(tree_PTRTO[0]).root=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(tree_PTRTO[0]).identity=(void *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(tree_PTRTO[0]).elem_size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(tree_PTRTO[0]).length=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(tree_PTRTO[0]).combine=(void (*)(const void *, const void *, void *))valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		segment_tree_print_int(tree);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_segment_tree_print_int_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_segment_tree_print_int_up();

	switch(caseIndex){
	case 1:
		test_segment_tree_print_int_1();
		break;
	case 2:
		test_segment_tree_print_int_2();
		break;
	case 3:
		test_segment_tree_print_int_3();
		break;
	case 4:
		test_segment_tree_print_int_4();
		break;
	case 5:
		test_segment_tree_print_int_5();
		break;
	case 6:
		test_segment_tree_print_int_6();
		break;
	default:
		abnormal_segment_tree_print_int_case(caseIndex);
		break;
	}

	test_segment_tree_print_int_down();
}

