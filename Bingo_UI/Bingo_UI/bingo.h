#pragma once
namespace std {
	class player_1 {
	public:
		static string card[25];

		static void card_arr_gen();		
	};

	class player_2 {
	public:
		static string card[25];

		static void card_arr_gen();
	};

	class generate {
	public:		
		static string card(int card_num);

		static string ball(bool card);
	};

	class check {
	public:
		static int bingo();
	};

	class game {
	public:
		static void restart();
	};
	
}