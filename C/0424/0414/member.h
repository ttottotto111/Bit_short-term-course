//member.h
//����ü���Ǵ� h���Ͽ��� �ؾ��Ѵ�.
//�׷��� include ���ؼ� ��� ���� ���ϵ��� �ش� Ű���带 �˰Եȴ�.
#pragma once

//stgruct tagmember Ÿ�Ի���
//member��� Ÿ�� Ű����� ��밡��
typedef struct tagnumber
{
	int flag;			//0 �̸� �������� 1�̸� ����� ����
	int number;			//ȸ����ȣ
	char name[20];		//�̸�
	char gender;		//����
	char phone[20];		//��ȭ��ȣ
}member;
