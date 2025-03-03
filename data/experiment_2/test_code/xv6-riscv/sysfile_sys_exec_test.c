void test_sys_exec_up(void);
void test_sys_exec_down(void);


void test_sys_exec_up(void){

	aunit_printf("\n##FUNCTION_START_sys_exec\n");
 }

void test_sys_exec_down(void){
	aunit_printf("\n##FUNCTION_END_sys_exec\n");
 }



void abnormal_sys_exec_case(int index);

void abnormal_sys_exec_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_sys_exec_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64 returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����
	fetchstr_call_counter = 0;
	kfree_call_counter = 0;
	argstr_call_counter = 0;
	kalloc_call_counter = 0;
	argaddr_call_counter = 0;
	exec_call_counter = 0;
	fetchaddr_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_exec_8,false,0\n");
	aunit_printf("#CASE_START_test_sys_exec_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = sys_exec();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_exec","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fetchstr","fetchstr_call_counter",fetchstr_call_counter)
	OB_INT_EXPR("kfree","kfree_call_counter",kfree_call_counter)
	OB_INT_EXPR("argstr","argstr_call_counter",argstr_call_counter)
	OB_INT_EXPR("kalloc","kalloc_call_counter",kalloc_call_counter)
	OB_INT_EXPR("argaddr","argaddr_call_counter",argaddr_call_counter)
	OB_INT_EXPR("exec","exec_call_counter",exec_call_counter)
	OB_INT_EXPR("fetchaddr","fetchaddr_call_counter",fetchaddr_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_sys_exec_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_sys_exec_up();

	switch(caseIndex){
	case 8:
		test_sys_exec_8();
		break;
	default:
		abnormal_sys_exec_case(caseIndex);
		break;
	}

	test_sys_exec_down();
}

