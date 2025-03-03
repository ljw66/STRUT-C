void test_sys_mknod_up(void);
void test_sys_mknod_down(void);


void test_sys_mknod_up(void){

	aunit_printf("\n##FUNCTION_START_sys_mknod\n");
 }

void test_sys_mknod_down(void){
	aunit_printf("\n##FUNCTION_END_sys_mknod\n");
 }



void abnormal_sys_mknod_case(int index);

void abnormal_sys_mknod_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_sys_mknod_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64 returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	begin_op_call_counter = 0;
	end_op_call_counter = 0;
	iunlockput_call_counter = 0;
	argint_call_counter = 0;
	argstr_call_counter = 0;
	create_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_mknod_1,false,0\n");
	aunit_printf("#CASE_START_test_sys_mknod_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = sys_mknod();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_mknod","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("begin_op","begin_op_call_counter",begin_op_call_counter)
	OB_INT_EXPR("end_op","end_op_call_counter",end_op_call_counter)
	OB_INT_EXPR("iunlockput","iunlockput_call_counter",iunlockput_call_counter)
	OB_INT_EXPR("argint","argint_call_counter",argint_call_counter)
	OB_INT_EXPR("argstr","argstr_call_counter",argstr_call_counter)
	OB_INT_EXPR("create","create_call_counter",create_call_counter)

	aunit_printf("#CASE_END_test_sys_mknod_1\n");
}

void test_sys_mknod_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64 returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	begin_op_call_counter = 0;
	end_op_call_counter = 0;
	iunlockput_call_counter = 0;
	argint_call_counter = 0;
	argstr_call_counter = 0;
	create_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_mknod_2,false,0\n");
	aunit_printf("#CASE_START_test_sys_mknod_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = sys_mknod();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_mknod","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("begin_op","begin_op_call_counter",begin_op_call_counter)
	OB_INT_EXPR("end_op","end_op_call_counter",end_op_call_counter)
	OB_INT_EXPR("iunlockput","iunlockput_call_counter",iunlockput_call_counter)
	OB_INT_EXPR("argint","argint_call_counter",argint_call_counter)
	OB_INT_EXPR("argstr","argstr_call_counter",argstr_call_counter)
	OB_INT_EXPR("create","create_call_counter",create_call_counter)

	aunit_printf("#CASE_END_test_sys_mknod_2\n");
}

void test_sys_mknod_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64 returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	begin_op_call_counter = 0;
	end_op_call_counter = 0;
	iunlockput_call_counter = 0;
	argint_call_counter = 0;
	argstr_call_counter = 0;
	create_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_mknod_3,false,0\n");
	aunit_printf("#CASE_START_test_sys_mknod_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = sys_mknod();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_mknod","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("begin_op","begin_op_call_counter",begin_op_call_counter)
	OB_INT_EXPR("end_op","end_op_call_counter",end_op_call_counter)
	OB_INT_EXPR("iunlockput","iunlockput_call_counter",iunlockput_call_counter)
	OB_INT_EXPR("argint","argint_call_counter",argint_call_counter)
	OB_INT_EXPR("argstr","argstr_call_counter",argstr_call_counter)
	OB_INT_EXPR("create","create_call_counter",create_call_counter)

	aunit_printf("#CASE_END_test_sys_mknod_3\n");
}

void test_sys_mknod_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64 returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	begin_op_call_counter = 0;
	end_op_call_counter = 0;
	iunlockput_call_counter = 0;
	argint_call_counter = 0;
	argstr_call_counter = 0;
	create_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_mknod_4,false,0\n");
	aunit_printf("#CASE_START_test_sys_mknod_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = sys_mknod();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_mknod","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("begin_op","begin_op_call_counter",begin_op_call_counter)
	OB_INT_EXPR("end_op","end_op_call_counter",end_op_call_counter)
	OB_INT_EXPR("iunlockput","iunlockput_call_counter",iunlockput_call_counter)
	OB_INT_EXPR("argint","argint_call_counter",argint_call_counter)
	OB_INT_EXPR("argstr","argstr_call_counter",argstr_call_counter)
	OB_INT_EXPR("create","create_call_counter",create_call_counter)

	aunit_printf("#CASE_END_test_sys_mknod_4\n");
}

void test_sys_mknod_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64 returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	begin_op_call_counter = 0;
	end_op_call_counter = 0;
	iunlockput_call_counter = 0;
	argint_call_counter = 0;
	argstr_call_counter = 0;
	create_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_mknod_5,false,0\n");
	aunit_printf("#CASE_START_test_sys_mknod_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = sys_mknod();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_mknod","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("begin_op","begin_op_call_counter",begin_op_call_counter)
	OB_INT_EXPR("end_op","end_op_call_counter",end_op_call_counter)
	OB_INT_EXPR("iunlockput","iunlockput_call_counter",iunlockput_call_counter)
	OB_INT_EXPR("argint","argint_call_counter",argint_call_counter)
	OB_INT_EXPR("argstr","argstr_call_counter",argstr_call_counter)
	OB_INT_EXPR("create","create_call_counter",create_call_counter)

	aunit_printf("#CASE_END_test_sys_mknod_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_sys_mknod_up();

	switch(caseIndex){
	case 1:
		test_sys_mknod_1();
		break;
	case 2:
		test_sys_mknod_2();
		break;
	case 3:
		test_sys_mknod_3();
		break;
	case 4:
		test_sys_mknod_4();
		break;
	case 5:
		test_sys_mknod_5();
		break;
	default:
		abnormal_sys_mknod_case(caseIndex);
		break;
	}

	test_sys_mknod_down();
}

