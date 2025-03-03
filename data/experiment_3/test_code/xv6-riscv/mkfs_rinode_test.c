void test_rinode_up(void);
void test_rinode_down(void);


void test_rinode_up(void){

	aunit_printf("\n##FUNCTION_START_rinode\n");
 }

void test_rinode_down(void){
	aunit_printf("\n##FUNCTION_END_rinode\n");
 }



void abnormal_rinode_case(int index);

void abnormal_rinode_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_rinode_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int inum;
	struct dinode *ip;


	//ֵ�������
	struct dinode *valueList_0[]={(struct dinode *)ip_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	short int valueList_3[]={0};
	unsigned int listLength_3=1;
	short int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0};
	unsigned int listLength_5=1;
	short int valueList_6[]={0};
	unsigned int listLength_6=1;
	short int valueList_7[]={0};
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
	rsect_call_counter = 0;

	aunit_printf("###TEST_TREE_test_rinode_1,false,0\n");
	aunit_printf("#CASE_START_test_rinode_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ip=(struct dinode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			inum=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			sb.magic=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ip_PTRTO[0]).minor=(short int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ip_PTRTO[0]).nlink=(short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ip_PTRTO[0]).size=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ip_PTRTO[0]).major=(short int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ip_PTRTO[0]).type=(short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		rinode(inum,ip);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("rinode","sb.magic",0,sb.magic)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("rsect","rsect_call_counter",rsect_call_counter)

	aunit_printf("#CASE_END_test_rinode_1\n");
}

void test_rinode_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int inum;
	struct dinode *ip;


	//ֵ�������
	struct dinode *valueList_0[]={(struct dinode *)ip_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={1234};
	unsigned int listLength_2=1;
	short int valueList_3[]={3};
	unsigned int listLength_3=1;
	short int valueList_4[]={4};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={1024};
	unsigned int listLength_5=1;
	short int valueList_6[]={2};
	unsigned int listLength_6=1;
	short int valueList_7[]={1};
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
	rsect_call_counter = 0;

	aunit_printf("###TEST_TREE_test_rinode_2,false,0\n");
	aunit_printf("#CASE_START_test_rinode_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ip=(struct dinode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			inum=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			sb.magic=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ip_PTRTO[0]).minor=(short int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ip_PTRTO[0]).nlink=(short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ip_PTRTO[0]).size=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ip_PTRTO[0]).major=(short int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ip_PTRTO[0]).type=(short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		rinode(inum,ip);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("rinode","sb.magic",1234,sb.magic)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("rsect","rsect_call_counter",rsect_call_counter)

	aunit_printf("#CASE_END_test_rinode_2\n");
}

void test_rinode_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int inum;
	struct dinode *ip;


	//ֵ�������
	struct dinode *valueList_0[]={(struct dinode *)ip_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={10};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={5678};
	unsigned int listLength_2=1;
	short int valueList_3[]={6};
	unsigned int listLength_3=1;
	short int valueList_4[]={8};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={2048};
	unsigned int listLength_5=1;
	short int valueList_6[]={4};
	unsigned int listLength_6=1;
	short int valueList_7[]={2};
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
	rsect_call_counter = 0;

	aunit_printf("###TEST_TREE_test_rinode_3,false,0\n");
	aunit_printf("#CASE_START_test_rinode_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ip=(struct dinode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			inum=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			sb.magic=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ip_PTRTO[0]).minor=(short int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ip_PTRTO[0]).nlink=(short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ip_PTRTO[0]).size=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ip_PTRTO[0]).major=(short int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ip_PTRTO[0]).type=(short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		rinode(inum,ip);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("rinode","sb.magic",5678,sb.magic)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("rsect","rsect_call_counter",rsect_call_counter)

	aunit_printf("#CASE_END_test_rinode_3\n");
}

void test_rinode_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int inum;
	struct dinode *ip;


	//ֵ�������
	struct dinode *valueList_0[]={(struct dinode *)ip_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={15};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={91011};
	unsigned int listLength_2=1;
	short int valueList_3[]={9};
	unsigned int listLength_3=1;
	short int valueList_4[]={12};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={3072};
	unsigned int listLength_5=1;
	short int valueList_6[]={6};
	unsigned int listLength_6=1;
	short int valueList_7[]={3};
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
	rsect_call_counter = 0;

	aunit_printf("###TEST_TREE_test_rinode_4,false,0\n");
	aunit_printf("#CASE_START_test_rinode_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ip=(struct dinode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			inum=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			sb.magic=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ip_PTRTO[0]).minor=(short int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ip_PTRTO[0]).nlink=(short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ip_PTRTO[0]).size=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ip_PTRTO[0]).major=(short int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ip_PTRTO[0]).type=(short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		rinode(inum,ip);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("rinode","sb.magic",91011,sb.magic)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("rsect","rsect_call_counter",rsect_call_counter)

	aunit_printf("#CASE_END_test_rinode_4\n");
}

void test_rinode_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int inum;
	struct dinode *ip;


	//ֵ�������
	struct dinode *valueList_0[]={(struct dinode *)ip_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={20};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={121314};
	unsigned int listLength_2=1;
	short int valueList_3[]={12};
	unsigned int listLength_3=1;
	short int valueList_4[]={16};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={4096};
	unsigned int listLength_5=1;
	short int valueList_6[]={8};
	unsigned int listLength_6=1;
	short int valueList_7[]={4};
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
	case_id=5;
	//��ʼ����׮�������ü�����
	rsect_call_counter = 0;

	aunit_printf("###TEST_TREE_test_rinode_5,false,0\n");
	aunit_printf("#CASE_START_test_rinode_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ip=(struct dinode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			inum=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			sb.magic=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ip_PTRTO[0]).minor=(short int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ip_PTRTO[0]).nlink=(short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ip_PTRTO[0]).size=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ip_PTRTO[0]).major=(short int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ip_PTRTO[0]).type=(short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		rinode(inum,ip);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("rinode","sb.magic",121314,sb.magic)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("rsect","rsect_call_counter",rsect_call_counter)

	aunit_printf("#CASE_END_test_rinode_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_rinode_up();

	switch(caseIndex){
	case 1:
		test_rinode_1();
		break;
	case 2:
		test_rinode_2();
		break;
	case 3:
		test_rinode_3();
		break;
	case 4:
		test_rinode_4();
		break;
	case 5:
		test_rinode_5();
		break;
	default:
		abnormal_rinode_case(caseIndex);
		break;
	}

	test_rinode_down();
}

