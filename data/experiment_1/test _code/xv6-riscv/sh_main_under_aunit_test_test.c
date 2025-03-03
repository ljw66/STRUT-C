void test_main_under_aunit_test_up(void);
void test_main_under_aunit_test_down(void);


void test_main_under_aunit_test_up(void){

	aunit_printf("\n##FUNCTION_START_main_under_aunit_test\n");
 }

void test_main_under_aunit_test_down(void){
	aunit_printf("\n##FUNCTION_END_main_under_aunit_test\n");
 }



void abnormal_main_under_aunit_test_case(int index);

void abnormal_main_under_aunit_test_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_main_under_aunit_test_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	strlen_call_counter = 0;
	exit_call_counter = 0;
	wait_call_counter = 0;
	runcmd_call_counter = 0;
	chdir_call_counter = 0;
	parsecmd_call_counter = 0;
	getcmd_call_counter = 0;
	close_call_counter = 0;
	fprintf_call_counter = 0;
	fork1_call_counter = 0;
	open_call_counter = 0;

	aunit_printf("###TEST_TREE_test_main_under_aunit_test_1,false,0\n");
	aunit_printf("#CASE_START_test_main_under_aunit_test_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = main_under_aunit_test();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("main_under_aunit_test","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("runcmd","runcmd_call_counter",runcmd_call_counter)
	OB_INT_EXPR("chdir","chdir_call_counter",chdir_call_counter)
	OB_INT_EXPR("parsecmd","parsecmd_call_counter",parsecmd_call_counter)
	OB_INT_EXPR("getcmd","getcmd_call_counter",getcmd_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("fork1","fork1_call_counter",fork1_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)

	aunit_printf("#CASE_END_test_main_under_aunit_test_1\n");
}

void test_main_under_aunit_test_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	strlen_call_counter = 0;
	exit_call_counter = 0;
	wait_call_counter = 0;
	runcmd_call_counter = 0;
	chdir_call_counter = 0;
	parsecmd_call_counter = 0;
	getcmd_call_counter = 0;
	close_call_counter = 0;
	fprintf_call_counter = 0;
	fork1_call_counter = 0;
	open_call_counter = 0;

	aunit_printf("###TEST_TREE_test_main_under_aunit_test_2,false,0\n");
	aunit_printf("#CASE_START_test_main_under_aunit_test_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = main_under_aunit_test();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("main_under_aunit_test","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("runcmd","runcmd_call_counter",runcmd_call_counter)
	OB_INT_EXPR("chdir","chdir_call_counter",chdir_call_counter)
	OB_INT_EXPR("parsecmd","parsecmd_call_counter",parsecmd_call_counter)
	OB_INT_EXPR("getcmd","getcmd_call_counter",getcmd_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("fork1","fork1_call_counter",fork1_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)

	aunit_printf("#CASE_END_test_main_under_aunit_test_2\n");
}

void test_main_under_aunit_test_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	strlen_call_counter = 0;
	exit_call_counter = 0;
	wait_call_counter = 0;
	runcmd_call_counter = 0;
	chdir_call_counter = 0;
	parsecmd_call_counter = 0;
	getcmd_call_counter = 0;
	close_call_counter = 0;
	fprintf_call_counter = 0;
	fork1_call_counter = 0;
	open_call_counter = 0;

	aunit_printf("###TEST_TREE_test_main_under_aunit_test_3,false,0\n");
	aunit_printf("#CASE_START_test_main_under_aunit_test_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = main_under_aunit_test();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("main_under_aunit_test","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("runcmd","runcmd_call_counter",runcmd_call_counter)
	OB_INT_EXPR("chdir","chdir_call_counter",chdir_call_counter)
	OB_INT_EXPR("parsecmd","parsecmd_call_counter",parsecmd_call_counter)
	OB_INT_EXPR("getcmd","getcmd_call_counter",getcmd_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("fork1","fork1_call_counter",fork1_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)

	aunit_printf("#CASE_END_test_main_under_aunit_test_3\n");
}

void test_main_under_aunit_test_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	strlen_call_counter = 0;
	exit_call_counter = 0;
	wait_call_counter = 0;
	runcmd_call_counter = 0;
	chdir_call_counter = 0;
	parsecmd_call_counter = 0;
	getcmd_call_counter = 0;
	close_call_counter = 0;
	fprintf_call_counter = 0;
	fork1_call_counter = 0;
	open_call_counter = 0;

	aunit_printf("###TEST_TREE_test_main_under_aunit_test_4,false,0\n");
	aunit_printf("#CASE_START_test_main_under_aunit_test_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = main_under_aunit_test();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("main_under_aunit_test","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("runcmd","runcmd_call_counter",runcmd_call_counter)
	OB_INT_EXPR("chdir","chdir_call_counter",chdir_call_counter)
	OB_INT_EXPR("parsecmd","parsecmd_call_counter",parsecmd_call_counter)
	OB_INT_EXPR("getcmd","getcmd_call_counter",getcmd_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("fork1","fork1_call_counter",fork1_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)

	aunit_printf("#CASE_END_test_main_under_aunit_test_4\n");
}

void test_main_under_aunit_test_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	strlen_call_counter = 0;
	exit_call_counter = 0;
	wait_call_counter = 0;
	runcmd_call_counter = 0;
	chdir_call_counter = 0;
	parsecmd_call_counter = 0;
	getcmd_call_counter = 0;
	close_call_counter = 0;
	fprintf_call_counter = 0;
	fork1_call_counter = 0;
	open_call_counter = 0;

	aunit_printf("###TEST_TREE_test_main_under_aunit_test_5,false,0\n");
	aunit_printf("#CASE_START_test_main_under_aunit_test_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = main_under_aunit_test();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("main_under_aunit_test","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("runcmd","runcmd_call_counter",runcmd_call_counter)
	OB_INT_EXPR("chdir","chdir_call_counter",chdir_call_counter)
	OB_INT_EXPR("parsecmd","parsecmd_call_counter",parsecmd_call_counter)
	OB_INT_EXPR("getcmd","getcmd_call_counter",getcmd_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("fork1","fork1_call_counter",fork1_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)

	aunit_printf("#CASE_END_test_main_under_aunit_test_5\n");
}

void test_main_under_aunit_test_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	strlen_call_counter = 0;
	exit_call_counter = 0;
	wait_call_counter = 0;
	runcmd_call_counter = 0;
	chdir_call_counter = 0;
	parsecmd_call_counter = 0;
	getcmd_call_counter = 0;
	close_call_counter = 0;
	fprintf_call_counter = 0;
	fork1_call_counter = 0;
	open_call_counter = 0;

	aunit_printf("###TEST_TREE_test_main_under_aunit_test_6,false,0\n");
	aunit_printf("#CASE_START_test_main_under_aunit_test_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = main_under_aunit_test();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("main_under_aunit_test","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("runcmd","runcmd_call_counter",runcmd_call_counter)
	OB_INT_EXPR("chdir","chdir_call_counter",chdir_call_counter)
	OB_INT_EXPR("parsecmd","parsecmd_call_counter",parsecmd_call_counter)
	OB_INT_EXPR("getcmd","getcmd_call_counter",getcmd_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("fork1","fork1_call_counter",fork1_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)

	aunit_printf("#CASE_END_test_main_under_aunit_test_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_main_under_aunit_test_up();

	switch(caseIndex){
	case 1:
		test_main_under_aunit_test_1();
		break;
	case 2:
		test_main_under_aunit_test_2();
		break;
	case 3:
		test_main_under_aunit_test_3();
		break;
	case 4:
		test_main_under_aunit_test_4();
		break;
	case 5:
		test_main_under_aunit_test_5();
		break;
	case 6:
		test_main_under_aunit_test_6();
		break;
	default:
		abnormal_main_under_aunit_test_case(caseIndex);
		break;
	}

	test_main_under_aunit_test_down();
}

