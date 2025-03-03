void test_morecore_up(void);
void test_morecore_down(void);


void test_morecore_up(void){

	aunit_printf("\n##FUNCTION_START_morecore\n");
 }

void test_morecore_down(void){
	aunit_printf("\n##FUNCTION_END_morecore\n");
 }



void abnormal_morecore_case(int index);

void abnormal_morecore_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_morecore_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kmem_t *km;
	unsigned int nu;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	header_t *returnValue = 0;

	//ֵ�������
	kmem_t *valueList_0[]={(kmem_t *)km_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={10};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={64};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={32};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={8};
	unsigned int listLength_4=1;
	header_t *valueList_5[]={(header_t *)&struct_header_t2};
	unsigned int listLength_5=1;
	void *valueList_6[]={(void *)0x1000};
	unsigned int listLength_6=1;
	header_t *valueList_7[]={(header_t *)&struct_header_t1};
	unsigned int listLength_7=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	kfree_call_counter = 0;
	kmalloc_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_morecore_1,false,0\n");
	aunit_printf("#CASE_START_test_morecore_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			km=(kmem_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nu=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_header_t1.size=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_header_t2.size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(km_PTRTO[0]).min_core_size=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(km_PTRTO[0]).core_head=(header_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(km_PTRTO[0]).par=(void *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(km_PTRTO[0]).loop_head=(header_t *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = morecore(km,nu);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("morecore","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("kfree","kfree_call_counter",kfree_call_counter)
	OB_INT_EXPR("kmalloc","kmalloc_call_counter",kmalloc_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_morecore_1\n");
}

void test_morecore_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kmem_t *km;
	unsigned int nu;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	header_t *returnValue = 0;

	//ֵ�������
	kmem_t *valueList_0[]={(kmem_t *)km_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={20};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={64};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={32};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={16};
	unsigned int listLength_4=1;
	header_t *valueList_5[]={(header_t *)&struct_header_t2};
	unsigned int listLength_5=1;
	void *valueList_6[]={(void *)0x1000};
	unsigned int listLength_6=1;
	header_t *valueList_7[]={(header_t *)&struct_header_t1};
	unsigned int listLength_7=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	kfree_call_counter = 0;
	kmalloc_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_morecore_2,false,0\n");
	aunit_printf("#CASE_START_test_morecore_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			km=(kmem_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nu=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_header_t1.size=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_header_t2.size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(km_PTRTO[0]).min_core_size=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(km_PTRTO[0]).core_head=(header_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(km_PTRTO[0]).par=(void *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(km_PTRTO[0]).loop_head=(header_t *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = morecore(km,nu);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("morecore","returnValue","NULL",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("kfree","kfree_call_counter",kfree_call_counter)
	OB_INT_EXPR("kmalloc","kmalloc_call_counter",kmalloc_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_morecore_2\n");
}

void test_morecore_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kmem_t *km;
	unsigned int nu;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	header_t *returnValue = 0;

	//ֵ�������
	kmem_t *valueList_0[]={(kmem_t *)km_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={32};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={64};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={16};
	unsigned int listLength_4=1;
	header_t *valueList_5[]={(header_t *)&struct_header_t2};
	unsigned int listLength_5=1;
	void *valueList_6[]={(void *)0x1000};
	unsigned int listLength_6=1;
	header_t *valueList_7[]={(header_t *)&struct_header_t1};
	unsigned int listLength_7=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	kfree_call_counter = 0;
	kmalloc_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_morecore_3,false,0\n");
	aunit_printf("#CASE_START_test_morecore_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			km=(kmem_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nu=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_header_t1.size=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_header_t2.size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(km_PTRTO[0]).min_core_size=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(km_PTRTO[0]).core_head=(header_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(km_PTRTO[0]).par=(void *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(km_PTRTO[0]).loop_head=(header_t *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = morecore(km,nu);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("morecore","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("kfree","kfree_call_counter",kfree_call_counter)
	OB_INT_EXPR("kmalloc","kmalloc_call_counter",kmalloc_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_morecore_3\n");
}

void test_morecore_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kmem_t *km;
	unsigned int nu;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	header_t *returnValue = 0;

	//ֵ�������
	kmem_t *valueList_0[]={(kmem_t *)km_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={64};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={32};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={16};
	unsigned int listLength_4=1;
	header_t *valueList_5[]={(header_t *)&struct_header_t2};
	unsigned int listLength_5=1;
	void *valueList_6[]={(void *)0x1000};
	unsigned int listLength_6=1;
	header_t *valueList_7[]={(header_t *)&struct_header_t1};
	unsigned int listLength_7=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	kfree_call_counter = 0;
	kmalloc_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_morecore_4,false,0\n");
	aunit_printf("#CASE_START_test_morecore_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			km=(kmem_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nu=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_header_t1.size=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_header_t2.size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(km_PTRTO[0]).min_core_size=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(km_PTRTO[0]).core_head=(header_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(km_PTRTO[0]).par=(void *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(km_PTRTO[0]).loop_head=(header_t *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = morecore(km,nu);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("morecore","returnValue","&struct_header_t1",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("kfree","kfree_call_counter",kfree_call_counter)
	OB_INT_EXPR("kmalloc","kmalloc_call_counter",kmalloc_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_morecore_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_morecore_up();

	switch(caseIndex){
	case 1:
		test_morecore_1();
		break;
	case 2:
		test_morecore_2();
		break;
	case 3:
		test_morecore_3();
		break;
	case 4:
		test_morecore_4();
		break;
	default:
		abnormal_morecore_case(caseIndex);
		break;
	}

	test_morecore_down();
}

