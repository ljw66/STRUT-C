void test_ilock_up(void);
void test_ilock_down(void);


void test_ilock_up(void){

	aunit_printf("\n##FUNCTION_START_ilock\n");
 }

void test_ilock_down(void){
	aunit_printf("\n##FUNCTION_END_ilock\n");
 }



void abnormal_ilock_case(int index);

void abnormal_ilock_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ilock_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct inode *ip;


	//ֵ�������
	struct inode *valueList_0[]={(struct inode *)ip_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={10};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={1};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={2};
	unsigned int listLength_4=1;
	int valueList_5[]={1};
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
	case_id=8;
	//��ʼ����׮�������ü�����
	bread_call_counter = 0;
	acquiresleep_call_counter = 0;
	memmove_call_counter = 0;
	brelse_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ilock_8,false,0\n");
	aunit_printf("#CASE_START_test_ilock_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ip=(struct inode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sb.inodestart=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ip_PTRTO[0]).dev=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ip_PTRTO[0]).valid=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ip_PTRTO[0]).inum=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ip_PTRTO[0]).ref=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		ilock(ip);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("ilock","ip->valid",1,ip->valid)
	TEST_ASSERT_EQUAL_SHORT("ilock","ip->major",2,ip->major)
	TEST_ASSERT_EQUAL_SHORT("ilock","ip->minor",3,ip->minor)
	TEST_ASSERT_EQUAL_SHORT("ilock","ip->type",1,ip->type)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("bread","bread_call_counter",bread_call_counter)
	OB_INT_EXPR("acquiresleep","acquiresleep_call_counter",acquiresleep_call_counter)
	OB_INT_EXPR("memmove","memmove_call_counter",memmove_call_counter)
	OB_INT_EXPR("brelse","brelse_call_counter",brelse_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_ilock_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_ilock_up();

	switch(caseIndex){
	case 8:
		test_ilock_8();
		break;
	default:
		abnormal_ilock_case(caseIndex);
		break;
	}

	test_ilock_down();
}

