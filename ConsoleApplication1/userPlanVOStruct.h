#pragma once
#include <string>
using namespace std;

struct UserPlanVO {
	string phone;		// �ֻ���
	int id;					// ���
	float fee;				// ����
	int duration;		// ͨ��ʱ�� ��λ����
	int traffic;			// ���� ��λMByte
	int broadband;	// ��� ��λMbits
};