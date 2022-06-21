
enum ARTIST {
	BLACKPINK,
	WINNER,
	BIGBANG,
	IKON,
	AKMU,
	TREASURE,
	SECHSKIES,
	KRUNK,
};


class Trainer {
public :
	void T_Singing();	// �뷡 ����ġ��
	void T_Dancing();	// �� ����ġ��
private:
	int salary;	// ����(����)
	int s_skill;	// �뷡 �ɷ�ġ
	int d_skill;	// �� �ɷ�ġ
};


class Singer {
public:
	void Singing();	// �뷡�ϱ�
	void Dancing();	// �� �߱�
	void Filming();	// �Կ��ϱ�
	void Practice();	// �����ϱ�
	void Donate();	// ���

private:
	int salary;	// ����(����)
	int s_skill;	// �뷡 �ɷ�ġ
	int d_skill;	// �� �ɷ�ġ
	bool handsome;	// �̸�
	int height;	// Ű
	int weight;	// ������
	char position;	// ������
};	


class MINO : public Singer {
public:
	void Compose();	// �۰��ϱ�
	void Lyricist();	// �ۻ��ϱ�

private:
	int property;	// ���
	char car;	// ��
	char address;	// �ּ�
	char song;	// �뷡
	int song_rank;	// ���� ����
	int trophy_cnt;	// Ʈ���� ����

	ARTIST artist;
	Trainer* trainer;
	Singer* singer;
};


class deukie : public Trainer {
public:
	void m_Dance();	// �� �����
	void s_develop();	// �ڱⰳ��

private :
	int property;	// ���
	bool portfolio;	// ��Ʈ�������� �ִ��� ������
	int attend_cnt;	// ������ �� ����

	Trainer* trainer;
	Singer* singer;
};