/*
* ��¥ : 2025-10-16 
* �н���ǥ : �ڷ����� ����
* �ǽ���ǥ : ���� ������ �м��ؼ� �ڷ����� �����Ѵ�
*/

// �ڷ��� Data Tyoe
// Data : ��ǻ�� �󿡼� ����,�׸�,��ȣ ���ǵǾ� ���� ���� ����
// ��ǻ�Ϳ��� ����� ������ �ʹ�
// ����ų(����) , ų�� ���ھ� ����(����), ���� ����(�Ǽ�)
// �̹��� 1920 * 1080 �̹����� ǥ���ϱ� ���� �ȼ� �� �Ҹ�(����)
//�ڷ���� Ư¡�� ���� ���¸� �з� type�� �з��ߴ� -> �ڷ��� ź��
// �ڷ��� : ���� , ���� , �Ǽ�


//�ڵ�� �����Լ��� ������ �Ʒ��� ����

#include <stdio.h>

int main()
{
	//����ų ���� ȭ�鿡 ����ϰ� �ʹ�
	printf("���� ų\n");

	//�������� ������� ���ھ ����ϰ� �ʹ�
	printf("10 vs 20\n");
	//è�Ǿ��� ������ �ִ� ������ ����ϰ� �ʹ�
	printf("AD ; 20\n");
	////////////////////////////////////////////////
	
	// %%d �� ���� %d�� ���
	printf("������ ����\n");
	int level = 2;

	int GarenfirstlevelHP = 690;
	float GarenGrowthHP = 98.23f;
	
	printf("ü��	| %d (+%f)\n" , GarenfirstlevelHP , GarenGrowthHP); //%d ���� �ִ°�
	printf("���� ü�� : %f \n", GarenfirstlevelHP + (level - 1) * GarenGrowthHP); //%f �Ǽ�

	int GarenfirstlevelMP = 0;
	float GarenGrowthMP = 2.76;

	printf("����	| %d (+%f)\n", GarenfirstlevelMP, GarenGrowthMP);
	printf("���� ���� : %f \n", GarenfirstlevelMP + (level - 1) * GarenGrowthMP);

	int Garenfirstlevelpower = 69;
	float GarenGrowthpower = 4.5;

	printf("���ݷ�	| %d (+%f)\n", Garenfirstlevelpower, GarenGrowthpower);
	printf("���� ���ݷ� : %f \n", Garenfirstlevelpower + (level - 1) * GarenGrowthpower);
	
	int Garenfirstleveldefense = 38;
	float GarenGrowthdefense = 4.2;

	printf("����	| %d (+%f)\n", Garenfirstleveldefense, GarenGrowthdefense);
	printf("���� ���� : %f \n", Garenfirstleveldefense + (level - 1) * GarenGrowthdefense);

	printf("����ť�� ����");
	int level = 50;
	float EXP = 2730.23;

	printf("���� �������� �ʿ� ���� : %f", EXP);
	
	int MimikyuHP = 55;
	printf("����ť�� ���� ü�� : %d", MimikyuHP);

	int MimikyuAttack = 90;
	printf("����ť�� ���� ���ݷ� : %d", MimikyuAttack);

	int MimikyuDefense = 80;
	printf("����ť�� ���� ���� : %d", MimikyuDefense);

	int MimikyuSpAttack = 50;
	printf("����ť�� ���� Ư�����ݷ� : %d", MimikyuSpAttack);
	
	//���� ���������� �ٸ� ���� ����

	//�м��غ��� ���� ���� ����
	//�м��غ��� ���� ��ġ�� ���� ����

	return 0;
}