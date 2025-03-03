void test_bmap_up(void);
void test_bmap_down(void);


void test_bmap_up(void){

	aunit_printf("\n##FUNCTION_START_bmap\n");
 }

void test_bmap_down(void){
	aunit_printf("\n##FUNCTION_END_bmap\n");
 }



void abnormal_bmap_case(int index);

void abnormal_bmap_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bmap_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct inode *ip;
	unsigned int bn;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint returnValue = 0;

	//ֵ�������
	struct inode *valueList_0[]={(struct inode *)ip_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={20};
	unsigned int listLength_1=1;
	short int valueList_2[]={1};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={1};
	unsigned int listLength_3=1;
	int valueList_4[]={1};
	unsigned int listLength_4=1;
	short int valueList_5[]={1};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={1024};
	unsigned int listLength_6=1;
	short int valueList_7[]={1};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={2};
	unsigned int listLength_8=1;
	short int valueList_9[]={1};
	unsigned int listLength_9=1;
	int valueList_10[]={1};
	unsigned int listLength_10=1;
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
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����
	bread_call_counter = 0;
	log_write_call_counter = 0;
	balloc_call_counter = 0;
	brelse_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bmap_8,false,0\n");
	aunit_printf("#CASE_START_test_bmap_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ip=(struct inode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			bn=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ip_PTRTO[0]).minor=(short int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ip_PTRTO[0]).dev=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ip_PTRTO[0]).valid=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

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
			(ip_PTRTO[0]).inum=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ip_PTRTO[0]).type=(short int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(ip_PTRTO[0]).ref=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		returnValue = bmap(ip,bn);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("bmap","returnValue",500,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("bread","bread_call_counter",bread_call_counter)
	OB_INT_EXPR("log_write","log_write_call_counter",log_write_call_counter)
	OB_INT_EXPR("balloc","balloc_call_counter",balloc_call_counter)
	OB_INT_EXPR("brelse","brelse_call_counter",brelse_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_bmap_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_bmap_up();

	switch(caseIndex){
	case 8:
		test_bmap_8();
		break;
	default:
		abnormal_bmap_case(caseIndex);
		break;
	}

	test_bmap_down();
}

