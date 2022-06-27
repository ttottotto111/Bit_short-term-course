//member.h
//구조체정의는 h파일에서 해야한다.
//그래야 include 통해서 모든 소프 파일들이 해당 키워드를 알게된다.
#pragma once

//stgruct tagmember 타입생성
//member라는 타입 키워드로 사용가능
typedef struct tagnumber
{
	int flag;			//0 이면 없는정보 1이면 저장된 정보
	int number;			//회원번호
	char name[20];		//이름
	char gender;		//성별
	char phone[20];		//전화번호
}member;
