void test_winode_up(void);
void test_winode_down(void);


void test_winode_up(void){

	aunit_printf("\n##FUNCTION_START_winode\n");
 }

void test_winode_down(void){
	aunit_printf("\n##FUNCTION_END_winode\n");
 }



void abnormal_winode_case(int index);

void abnormal_winode_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_winode_1(void){
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
	unsigned int valueList_2[]={10};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={12345};
	unsigned int listLength_3=1;
	short int valueList_4[]={1};
	unsigned int listLength_4=1;
	short int valueList_5[]={1};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={1024};
	unsigned int listLength_6=1;
	short int valueList_7[]={1};
	unsigned int listLength_7=1;
	short int valueList_8[]={1};
	unsigned int listLength_8=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	wsect_call_counter = 0;
	rsect_call_counter = 0;

	aunit_printf("###TEST_TREE_test_winode_1,false,0\n");
	aunit_printf("#CASE_START_test_winode_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ip=(struct dinode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			inum=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			sb.inodestart=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			sb.magic=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ip_PTRTO[0]).minor=(short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ip_PTRTO[0]).nlink=(short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ip_PTRTO[0]).size=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ip_PTRTO[0]).major=(short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ip_PTRTO[0]).type=(short int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		winode(inum,ip);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("winode","sb.magic",12345,sb.magic)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("wsect","wsect_call_counter",wsect_call_counter)
	OB_INT_EXPR("rsect","rsect_call_counter",rsect_call_counter)

	aunit_printf("#CASE_END_test_winode_1\n");
}

void test_winode_2(void){
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
	unsigned int valueList_2[]={20};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={67890};
	unsigned int listLength_3=1;
	short int valueList_4[]={1};
	unsigned int listLength_4=1;
	short int valueList_5[]={1};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={512};
	unsigned int listLength_6=1;
	short int valueList_7[]={1};
	unsigned int listLength_7=1;
	short int valueList_8[]={2};
	unsigned int listLength_8=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	wsect_call_counter = 0;
	rsect_call_counter = 0;

	aunit_printf("###TEST_TREE_test_winode_2,false,0\n");
	aunit_printf("#CASE_START_test_winode_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ip=(struct dinode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			inum=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			sb.inodestart=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			sb.magic=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ip_PTRTO[0]).minor=(short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ip_PTRTO[0]).nlink=(short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ip_PTRTO[0]).size=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ip_PTRTO[0]).major=(short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ip_PTRTO[0]).type=(short int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		winode(inum,ip);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("winode","sb.magic",67890,sb.magic)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("wsect","wsect_call_counter",wsect_call_counter)
	OB_INT_EXPR("rsect","rsect_call_counter",rsect_call_counter)

	aunit_printf("#CASE_END_test_winode_2\n");
}

void test_winode_3(void){
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
	unsigned int valueList_2[]={15};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	short int valueList_4[]={0};
	unsigned int listLength_4=1;
	short int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0};
	unsigned int listLength_6=1;
	short int valueList_7[]={0};
	unsigned int listLength_7=1;
	short int valueList_8[]={0};
	unsigned int listLength_8=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	wsect_call_counter = 0;
	rsect_call_counter = 0;

	aunit_printf("###TEST_TREE_test_winode_3,false,0\n");
	aunit_printf("#CASE_START_test_winode_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ip=(struct dinode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			inum=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			sb.inodestart=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			sb.magic=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ip_PTRTO[0]).minor=(short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ip_PTRTO[0]).nlink=(short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ip_PTRTO[0]).size=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ip_PTRTO[0]).major=(short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ip_PTRTO[0]).type=(short int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		winode(inum,ip);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("winode","sb.magic",0,sb.magic)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("wsect","wsect_call_counter",wsect_call_counter)
	OB_INT_EXPR("rsect","rsect_call_counter",rsect_call_counter)

	aunit_printf("#CASE_END_test_winode_3\n");
}

void test_winode_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int inum;
	struct dinode *ip;


	//ֵ�������
	struct dinode *valueList_0[]={(struct dinode *)ip_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={4294967295};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={30};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={54321};
	unsigned int listLength_3=1;
	short int valueList_4[]={2};
	unsigned int listLength_4=1;
	short int valueList_5[]={2};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={2048};
	unsigned int listLength_6=1;
	short int valueList_7[]={2};
	unsigned int listLength_7=1;
	short int valueList_8[]={3};
	unsigned int listLength_8=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	wsect_call_counter = 0;
	rsect_call_counter = 0;

	aunit_printf("###TEST_TREE_test_winode_4,false,0\n");
	aunit_printf("#CASE_START_test_winode_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ip=(struct dinode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			inum=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			sb.inodestart=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			sb.magic=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ip_PTRTO[0]).minor=(short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ip_PTRTO[0]).nlink=(short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ip_PTRTO[0]).size=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ip_PTRTO[0]).major=(short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ip_PTRTO[0]).type=(short int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		winode(inum,ip);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("winode","sb.magic",54321,sb.magic)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("wsect","wsect_call_counter",wsect_call_counter)
	OB_INT_EXPR("rsect","rsect_call_counter",rsect_call_counter)

	aunit_printf("#CASE_END_test_winode_4\n");
}

void test_winode_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int inum;
	struct dinode *ip;


	//ֵ�������
	struct dinode *valueList_0[]={(struct dinode *)ip_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={7};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={25};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={98765};
	unsigned int listLength_3=1;
	short int valueList_4[]={1};
	unsigned int listLength_4=1;
	short int valueList_5[]={1};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={1024};
	unsigned int listLength_6=1;
	short int valueList_7[]={1};
	unsigned int listLength_7=1;
	short int valueList_8[]={2};
	unsigned int listLength_8=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	wsect_call_counter = 0;
	rsect_call_counter = 0;

	aunit_printf("###TEST_TREE_test_winode_5,false,0\n");
	aunit_printf("#CASE_START_test_winode_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ip=(struct dinode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			inum=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			sb.inodestart=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			sb.magic=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ip_PTRTO[0]).minor=(short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ip_PTRTO[0]).nlink=(short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ip_PTRTO[0]).size=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ip_PTRTO[0]).major=(short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ip_PTRTO[0]).type=(short int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		winode(inum,ip);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("winode","sb.magic",98765,sb.magic)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("wsect","wsect_call_counter",wsect_call_counter)
	OB_INT_EXPR("rsect","rsect_call_counter",rsect_call_counter)

	aunit_printf("#CASE_END_test_winode_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_winode_up();

	switch(caseIndex){
	case 1:
		test_winode_1();
		break;
	case 2:
		test_winode_2();
		break;
	case 3:
		test_winode_3();
		break;
	case 4:
		test_winode_4();
		break;
	case 5:
		test_winode_5();
		break;
	default:
		abnormal_winode_case(caseIndex);
		break;
	}

	test_winode_down();
}

