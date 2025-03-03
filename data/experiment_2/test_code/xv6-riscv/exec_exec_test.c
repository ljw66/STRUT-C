void test_exec_up(void);
void test_exec_down(void);


void test_exec_up(void){

	aunit_printf("\n##FUNCTION_START_exec\n");
 }

void test_exec_down(void){
	aunit_printf("\n##FUNCTION_END_exec\n");
 }



void abnormal_exec_case(int index);

void abnormal_exec_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_exec_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *path;
	char **argv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"/validpath"};
	unsigned int listLength_0=1;
	char valueList_1[]={'r'};
	unsigned int listLength_1=1;
	char valueList_2[]={'a'};
	unsigned int listLength_2=1;
	char valueList_3[]={'v'};
	unsigned int listLength_3=1;
	char valueList_4[]={'g'};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)_argv_PTRTO};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={1};
	unsigned int listLength_6=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	namei_call_counter = 0;
	safestrcpy_call_counter = 0;
	readi_call_counter = 0;
	copyout_call_counter = 0;
	ilock_call_counter = 0;
	uvmclear_call_counter = 0;
	begin_op_call_counter = 0;
	strlen_call_counter = 0;
	flags2perm_call_counter = 0;
	end_op_call_counter = 0;
	iunlockput_call_counter = 0;
	proc_freepagetable_call_counter = 0;
	uvmalloc_call_counter = 0;
	loadseg_call_counter = 0;
	proc_pagetable_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_exec_4,false,0\n");
	aunit_printf("#CASE_START_test_exec_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			path=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			_argv_PTRTO[1]=(char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			_argv_PTRTO[0]=(char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			_argv_PTRTO[3]=(char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			_argv_PTRTO[2]=(char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			*argv=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(namei_returnValue_PTRTO[0]).dev=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = exec(path,argv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("exec","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("namei","namei_call_counter",namei_call_counter)
	OB_INT_EXPR("safestrcpy","safestrcpy_call_counter",safestrcpy_call_counter)
	OB_INT_EXPR("readi","readi_call_counter",readi_call_counter)
	OB_INT_EXPR("copyout","copyout_call_counter",copyout_call_counter)
	OB_INT_EXPR("ilock","ilock_call_counter",ilock_call_counter)
	OB_INT_EXPR("uvmclear","uvmclear_call_counter",uvmclear_call_counter)
	OB_INT_EXPR("begin_op","begin_op_call_counter",begin_op_call_counter)
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("flags2perm","flags2perm_call_counter",flags2perm_call_counter)
	OB_INT_EXPR("end_op","end_op_call_counter",end_op_call_counter)
	OB_INT_EXPR("iunlockput","iunlockput_call_counter",iunlockput_call_counter)
	OB_INT_EXPR("proc_freepagetable","proc_freepagetable_call_counter",proc_freepagetable_call_counter)
	OB_INT_EXPR("uvmalloc","uvmalloc_call_counter",uvmalloc_call_counter)
	OB_INT_EXPR("loadseg","loadseg_call_counter",loadseg_call_counter)
	OB_INT_EXPR("proc_pagetable","proc_pagetable_call_counter",proc_pagetable_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_exec_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_exec_up();

	switch(caseIndex){
	case 4:
		test_exec_4();
		break;
	default:
		abnormal_exec_case(caseIndex);
		break;
	}

	test_exec_down();
}

