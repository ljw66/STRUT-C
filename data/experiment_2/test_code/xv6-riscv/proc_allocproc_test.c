void test_allocproc_up(void);
void test_allocproc_down(void);


void test_allocproc_up(void){

	aunit_printf("\n##FUNCTION_START_allocproc\n");
 }

void test_allocproc_down(void){
	aunit_printf("\n##FUNCTION_END_allocproc\n");
 }



void abnormal_allocproc_case(int index);

void abnormal_allocproc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_allocproc_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct proc *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	forkret_call_counter = 0;
	release_call_counter = 0;
	freeproc_call_counter = 0;
	kalloc_call_counter = 0;
	acquire_call_counter = 0;
	proc_pagetable_call_counter = 0;
	memset_call_counter = 0;
	allocpid_call_counter = 0;

	aunit_printf("###TEST_TREE_test_allocproc_6,false,0\n");
	aunit_printf("#CASE_START_test_allocproc_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = allocproc();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("allocproc","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("forkret","forkret_call_counter",forkret_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("freeproc","freeproc_call_counter",freeproc_call_counter)
	OB_INT_EXPR("kalloc","kalloc_call_counter",kalloc_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("proc_pagetable","proc_pagetable_call_counter",proc_pagetable_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("allocpid","allocpid_call_counter",allocpid_call_counter)

	aunit_printf("#CASE_END_test_allocproc_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_allocproc_up();

	switch(caseIndex){
	case 6:
		test_allocproc_6();
		break;
	default:
		abnormal_allocproc_case(caseIndex);
		break;
	}

	test_allocproc_down();
}

