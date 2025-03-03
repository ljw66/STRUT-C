void test_acquiresleep_up(void);
void test_acquiresleep_down(void);


void test_acquiresleep_up(void){

	aunit_printf("\n##FUNCTION_START_acquiresleep\n");
 }

void test_acquiresleep_down(void){
	aunit_printf("\n##FUNCTION_END_acquiresleep\n");
 }



void abnormal_acquiresleep_case(int index);

void abnormal_acquiresleep_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_acquiresleep_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct sleeplock *lk;


	//ֵ�������
	struct sleeplock *valueList_0[]={(struct sleeplock *)lk_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"test_lock"};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	sleep_call_counter = 0;
	release_call_counter = 0;
	acquire_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_acquiresleep_1,false,0\n");
	aunit_printf("#CASE_START_test_acquiresleep_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			lk=(struct sleeplock *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(lk_PTRTO[0]).pid=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(lk_PTRTO[0]).name=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(lk_PTRTO[0]).locked=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		acquiresleep(lk);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("acquiresleep","lk->pid",1234,lk->pid)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("acquiresleep","lk->locked",1,lk->locked)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("sleep","sleep_call_counter",sleep_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_acquiresleep_1\n");
}

void test_acquiresleep_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct sleeplock *lk;


	//ֵ�������
	struct sleeplock *valueList_0[]={(struct sleeplock *)lk_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={5678};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"locked_lock"};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={1};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	sleep_call_counter = 0;
	release_call_counter = 0;
	acquire_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_acquiresleep_2,false,0\n");
	aunit_printf("#CASE_START_test_acquiresleep_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			lk=(struct sleeplock *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(lk_PTRTO[0]).pid=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(lk_PTRTO[0]).name=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(lk_PTRTO[0]).locked=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		acquiresleep(lk);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("acquiresleep","lk->pid",1234,lk->pid)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("acquiresleep","lk->locked",1,lk->locked)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("sleep","sleep_call_counter",sleep_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_acquiresleep_2\n");
}

void test_acquiresleep_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct sleeplock *lk;


	//ֵ�������
	struct sleeplock *valueList_0[]={(struct sleeplock *)lk_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"killed_lock"};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={1};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	sleep_call_counter = 0;
	release_call_counter = 0;
	acquire_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_acquiresleep_3,false,0\n");
	aunit_printf("#CASE_START_test_acquiresleep_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			lk=(struct sleeplock *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(lk_PTRTO[0]).pid=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(lk_PTRTO[0]).name=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(lk_PTRTO[0]).locked=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		acquiresleep(lk);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("acquiresleep","lk->pid",0,lk->pid)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("acquiresleep","lk->locked",0,lk->locked)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("sleep","sleep_call_counter",sleep_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_acquiresleep_3\n");
}

void test_acquiresleep_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct sleeplock *lk;


	//ֵ�������
	struct sleeplock *valueList_0[]={(struct sleeplock *)lk_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"spinlock_locked"};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	sleep_call_counter = 0;
	release_call_counter = 0;
	acquire_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_acquiresleep_4,false,0\n");
	aunit_printf("#CASE_START_test_acquiresleep_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			lk=(struct sleeplock *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(lk_PTRTO[0]).pid=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(lk_PTRTO[0]).name=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(lk_PTRTO[0]).locked=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		acquiresleep(lk);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("acquiresleep","lk->pid",1234,lk->pid)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("acquiresleep","lk->locked",1,lk->locked)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("sleep","sleep_call_counter",sleep_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_acquiresleep_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_acquiresleep_up();

	switch(caseIndex){
	case 1:
		test_acquiresleep_1();
		break;
	case 2:
		test_acquiresleep_2();
		break;
	case 3:
		test_acquiresleep_3();
		break;
	case 4:
		test_acquiresleep_4();
		break;
	default:
		abnormal_acquiresleep_case(caseIndex);
		break;
	}

	test_acquiresleep_down();
}

