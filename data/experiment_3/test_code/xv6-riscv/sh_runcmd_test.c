void test_runcmd_up(void);
void test_runcmd_down(void);


void test_runcmd_up(void){

	aunit_printf("\n##FUNCTION_START_runcmd\n");
 }

void test_runcmd_down(void){
	aunit_printf("\n##FUNCTION_END_runcmd\n");
 }



void abnormal_runcmd_case(int index);

void abnormal_runcmd_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_runcmd_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cmd *cmd;


	//ֵ�������
	struct cmd *valueList_0[]={(struct cmd *)cmd_PTRTO};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	wait_call_counter = 0;
	pipe_call_counter = 0;
	fprintf_call_counter = 0;
	close_call_counter = 0;
	fork1_call_counter = 0;
	exec_call_counter = 0;
	open_call_counter = 0;
	dup_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_runcmd_1,false,0\n");
	aunit_printf("#CASE_START_test_runcmd_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			cmd=(struct cmd *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		runcmd(cmd);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("pipe","pipe_call_counter",pipe_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("fork1","fork1_call_counter",fork1_call_counter)
	OB_INT_EXPR("exec","exec_call_counter",exec_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)
	OB_INT_EXPR("dup","dup_call_counter",dup_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_runcmd_1\n");
}

void test_runcmd_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cmd *cmd;


	//ֵ�������
	struct cmd *valueList_0[]={(struct cmd *)cmd_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	wait_call_counter = 0;
	pipe_call_counter = 0;
	fprintf_call_counter = 0;
	close_call_counter = 0;
	fork1_call_counter = 0;
	exec_call_counter = 0;
	open_call_counter = 0;
	dup_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_runcmd_2,false,0\n");
	aunit_printf("#CASE_START_test_runcmd_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			cmd=(struct cmd *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(cmd_PTRTO[0]).type=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		runcmd(cmd);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("pipe","pipe_call_counter",pipe_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("fork1","fork1_call_counter",fork1_call_counter)
	OB_INT_EXPR("exec","exec_call_counter",exec_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)
	OB_INT_EXPR("dup","dup_call_counter",dup_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_runcmd_2\n");
}

void test_runcmd_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cmd *cmd;


	//ֵ�������
	struct cmd *valueList_0[]={(struct cmd *)cmd_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	wait_call_counter = 0;
	pipe_call_counter = 0;
	fprintf_call_counter = 0;
	close_call_counter = 0;
	fork1_call_counter = 0;
	exec_call_counter = 0;
	open_call_counter = 0;
	dup_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_runcmd_3,false,0\n");
	aunit_printf("#CASE_START_test_runcmd_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			cmd=(struct cmd *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(cmd_PTRTO[0]).type=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		runcmd(cmd);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("pipe","pipe_call_counter",pipe_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("fork1","fork1_call_counter",fork1_call_counter)
	OB_INT_EXPR("exec","exec_call_counter",exec_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)
	OB_INT_EXPR("dup","dup_call_counter",dup_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_runcmd_3\n");
}

void test_runcmd_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cmd *cmd;


	//ֵ�������
	struct cmd *valueList_0[]={(struct cmd *)cmd_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={2};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	wait_call_counter = 0;
	pipe_call_counter = 0;
	fprintf_call_counter = 0;
	close_call_counter = 0;
	fork1_call_counter = 0;
	exec_call_counter = 0;
	open_call_counter = 0;
	dup_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_runcmd_4,false,0\n");
	aunit_printf("#CASE_START_test_runcmd_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			cmd=(struct cmd *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(cmd_PTRTO[0]).type=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		runcmd(cmd);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("pipe","pipe_call_counter",pipe_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("fork1","fork1_call_counter",fork1_call_counter)
	OB_INT_EXPR("exec","exec_call_counter",exec_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)
	OB_INT_EXPR("dup","dup_call_counter",dup_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_runcmd_4\n");
}

void test_runcmd_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cmd *cmd;


	//ֵ�������
	struct cmd *valueList_0[]={(struct cmd *)cmd_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={4};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	wait_call_counter = 0;
	pipe_call_counter = 0;
	fprintf_call_counter = 0;
	close_call_counter = 0;
	fork1_call_counter = 0;
	exec_call_counter = 0;
	open_call_counter = 0;
	dup_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_runcmd_5,false,0\n");
	aunit_printf("#CASE_START_test_runcmd_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			cmd=(struct cmd *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(cmd_PTRTO[0]).type=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		runcmd(cmd);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("pipe","pipe_call_counter",pipe_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("fork1","fork1_call_counter",fork1_call_counter)
	OB_INT_EXPR("exec","exec_call_counter",exec_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)
	OB_INT_EXPR("dup","dup_call_counter",dup_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_runcmd_5\n");
}

void test_runcmd_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cmd *cmd;


	//ֵ�������
	struct cmd *valueList_0[]={(struct cmd *)cmd_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={3};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	wait_call_counter = 0;
	pipe_call_counter = 0;
	fprintf_call_counter = 0;
	close_call_counter = 0;
	fork1_call_counter = 0;
	exec_call_counter = 0;
	open_call_counter = 0;
	dup_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_runcmd_6,false,0\n");
	aunit_printf("#CASE_START_test_runcmd_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			cmd=(struct cmd *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(cmd_PTRTO[0]).type=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		runcmd(cmd);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("pipe","pipe_call_counter",pipe_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("fork1","fork1_call_counter",fork1_call_counter)
	OB_INT_EXPR("exec","exec_call_counter",exec_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)
	OB_INT_EXPR("dup","dup_call_counter",dup_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_runcmd_6\n");
}

void test_runcmd_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cmd *cmd;


	//ֵ�������
	struct cmd *valueList_0[]={(struct cmd *)cmd_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={5};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	wait_call_counter = 0;
	pipe_call_counter = 0;
	fprintf_call_counter = 0;
	close_call_counter = 0;
	fork1_call_counter = 0;
	exec_call_counter = 0;
	open_call_counter = 0;
	dup_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_runcmd_7,false,0\n");
	aunit_printf("#CASE_START_test_runcmd_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			cmd=(struct cmd *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(cmd_PTRTO[0]).type=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		runcmd(cmd);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("pipe","pipe_call_counter",pipe_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("fork1","fork1_call_counter",fork1_call_counter)
	OB_INT_EXPR("exec","exec_call_counter",exec_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)
	OB_INT_EXPR("dup","dup_call_counter",dup_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_runcmd_7\n");
}

void test_runcmd_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cmd *cmd;


	//ֵ�������
	struct cmd *valueList_0[]={(struct cmd *)cmd_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	wait_call_counter = 0;
	pipe_call_counter = 0;
	fprintf_call_counter = 0;
	close_call_counter = 0;
	fork1_call_counter = 0;
	exec_call_counter = 0;
	open_call_counter = 0;
	dup_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_runcmd_8,false,0\n");
	aunit_printf("#CASE_START_test_runcmd_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			cmd=(struct cmd *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(cmd_PTRTO[0]).type=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		runcmd(cmd);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("pipe","pipe_call_counter",pipe_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("fork1","fork1_call_counter",fork1_call_counter)
	OB_INT_EXPR("exec","exec_call_counter",exec_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)
	OB_INT_EXPR("dup","dup_call_counter",dup_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_runcmd_8\n");
}

void test_runcmd_9(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cmd *cmd;


	//ֵ�������
	struct cmd *valueList_0[]={(struct cmd *)cmd_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={2};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=9;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	wait_call_counter = 0;
	pipe_call_counter = 0;
	fprintf_call_counter = 0;
	close_call_counter = 0;
	fork1_call_counter = 0;
	exec_call_counter = 0;
	open_call_counter = 0;
	dup_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_runcmd_9,false,0\n");
	aunit_printf("#CASE_START_test_runcmd_9\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			cmd=(struct cmd *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(cmd_PTRTO[0]).type=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		runcmd(cmd);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("pipe","pipe_call_counter",pipe_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("fork1","fork1_call_counter",fork1_call_counter)
	OB_INT_EXPR("exec","exec_call_counter",exec_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)
	OB_INT_EXPR("dup","dup_call_counter",dup_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_runcmd_9\n");
}

void test_runcmd_10(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cmd *cmd;


	//ֵ�������
	struct cmd *valueList_0[]={(struct cmd *)cmd_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={4};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=10;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	wait_call_counter = 0;
	pipe_call_counter = 0;
	fprintf_call_counter = 0;
	close_call_counter = 0;
	fork1_call_counter = 0;
	exec_call_counter = 0;
	open_call_counter = 0;
	dup_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_runcmd_10,false,0\n");
	aunit_printf("#CASE_START_test_runcmd_10\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			cmd=(struct cmd *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(cmd_PTRTO[0]).type=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		runcmd(cmd);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("pipe","pipe_call_counter",pipe_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("fork1","fork1_call_counter",fork1_call_counter)
	OB_INT_EXPR("exec","exec_call_counter",exec_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)
	OB_INT_EXPR("dup","dup_call_counter",dup_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_runcmd_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_runcmd_up();

	switch(caseIndex){
	case 1:
		test_runcmd_1();
		break;
	case 2:
		test_runcmd_2();
		break;
	case 3:
		test_runcmd_3();
		break;
	case 4:
		test_runcmd_4();
		break;
	case 5:
		test_runcmd_5();
		break;
	case 6:
		test_runcmd_6();
		break;
	case 7:
		test_runcmd_7();
		break;
	case 8:
		test_runcmd_8();
		break;
	case 9:
		test_runcmd_9();
		break;
	case 10:
		test_runcmd_10();
		break;
	default:
		abnormal_runcmd_case(caseIndex);
		break;
	}

	test_runcmd_down();
}

