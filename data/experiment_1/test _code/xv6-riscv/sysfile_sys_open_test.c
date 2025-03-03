void test_sys_open_up(void);
void test_sys_open_down(void);


void test_sys_open_up(void){

	aunit_printf("\n##FUNCTION_START_sys_open\n");
 }

void test_sys_open_down(void){
	aunit_printf("\n##FUNCTION_END_sys_open\n");
 }



void abnormal_sys_open_case(int index);

void abnormal_sys_open_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_sys_open_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64 returnValue = 0;

	//ֵ�������
	short int valueList_0[]={2};
	unsigned int listLength_0=1;
	short int valueList_1[]={1};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	fileclose_call_counter = 0;
	namei_call_counter = 0;
	argint_call_counter = 0;
	argstr_call_counter = 0;
	itrunc_call_counter = 0;
	ilock_call_counter = 0;
	begin_op_call_counter = 0;
	end_op_call_counter = 0;
	iunlockput_call_counter = 0;
	create_call_counter = 0;
	filealloc_call_counter = 0;
	iunlock_call_counter = 0;
	fdalloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_open_5,false,0\n");
	aunit_printf("#CASE_START_test_sys_open_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(namei_returnValue_PTRTO[0]).type=(short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(namei_returnValue_PTRTO[0]).major=(short int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = sys_open();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_open","returnValue",3,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fileclose","fileclose_call_counter",fileclose_call_counter)
	OB_INT_EXPR("namei","namei_call_counter",namei_call_counter)
	OB_INT_EXPR("argint","argint_call_counter",argint_call_counter)
	OB_INT_EXPR("argstr","argstr_call_counter",argstr_call_counter)
	OB_INT_EXPR("itrunc","itrunc_call_counter",itrunc_call_counter)
	OB_INT_EXPR("ilock","ilock_call_counter",ilock_call_counter)
	OB_INT_EXPR("begin_op","begin_op_call_counter",begin_op_call_counter)
	OB_INT_EXPR("end_op","end_op_call_counter",end_op_call_counter)
	OB_INT_EXPR("iunlockput","iunlockput_call_counter",iunlockput_call_counter)
	OB_INT_EXPR("create","create_call_counter",create_call_counter)
	OB_INT_EXPR("filealloc","filealloc_call_counter",filealloc_call_counter)
	OB_INT_EXPR("iunlock","iunlock_call_counter",iunlock_call_counter)
	OB_INT_EXPR("fdalloc","fdalloc_call_counter",fdalloc_call_counter)

	aunit_printf("#CASE_END_test_sys_open_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_sys_open_up();

	switch(caseIndex){
	case 5:
		test_sys_open_5();
		break;
	default:
		abnormal_sys_open_case(caseIndex);
		break;
	}

	test_sys_open_down();
}

