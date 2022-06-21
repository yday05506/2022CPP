
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
	void T_Singing();	// 노래 가르치기
	void T_Dancing();	// 춤 가르치기
private:
	int salary;	// 월급(연봉)
	int s_skill;	// 노래 능력치
	int d_skill;	// 춤 능력치
};


class Singer {
public:
	void Singing();	// 노래하기
	void Dancing();	// 춤 추기
	void Filming();	// 촬영하기
	void Practice();	// 연습하기
	void Donate();	// 기부

private:
	int salary;	// 월급(연봉)
	int s_skill;	// 노래 능력치
	int d_skill;	// 춤 능력치
	bool handsome;	// 미모
	int height;	// 키
	int weight;	// 몸무게
	char position;	// 포지션
};	


class MINO : public Singer {
public:
	void Compose();	// 작곡하기
	void Lyricist();	// 작사하기

private:
	int property;	// 재산
	char car;	// 차
	char address;	// 주소
	char song;	// 노래
	int song_rank;	// 음원 순위
	int trophy_cnt;	// 트로피 개수

	ARTIST artist;
	Trainer* trainer;
	Singer* singer;
};


class deukie : public Trainer {
public:
	void m_Dance();	// 춤 만들기
	void s_develop();	// 자기개발

private :
	int property;	// 재산
	bool portfolio;	// 포트폴리오가 있는지 없는지
	int attend_cnt;	// 참여한 곡 개수

	Trainer* trainer;
	Singer* singer;
};