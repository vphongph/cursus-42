#ifndef CONCEPT_H
# define CONCEPT_H
# define BUF_SIZE 128
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef	struct	s_kilospeed_test
{
	void		*ram1;	void	*ram33;	void	*ram65;	void	*ram97;
	void		*ram2;	void	*ram34;	void	*ram66;	void	*ram98;
	void		*ram3;	void	*ram35;	void	*ram67;	void	*ram99;
	void		*ram4;	void	*ram36;	void	*ram68;	void	*ram100;
	void		*ram5;	void	*ram37;	void	*ram69;	void	*ram101;
	void		*ram6;	void	*ram38;	void	*ram70;	void	*ram102;
	void		*ram7;	void	*ram39;	void	*ram71;	void	*ram103;
	void		*ram8;	void	*ram40;	void	*ram72;	void	*ram104;
	void		*ram9;	void	*ram41;	void	*ram73;	void	*ram105;
	void		*ram10;	void	*ram42;	void	*ram74;	void	*ram106;
	void		*ram11;	void	*ram43;	void	*ram75;	void	*ram107;
	void		*ram12;	void	*ram44;	void	*ram76;	void	*ram108;
	void		*ram13;	void	*ram45;	void	*ram77;	void	*ram109;
	void		*ram14;	void	*ram46;	void	*ram78;	void	*ram110;
	void		*ram15;	void	*ram47;	void	*ram79;	void	*ram111;
	void		*ram16;	void	*ram48;	void	*ram80;	void	*ram112;
	void		*ram17;	void	*ram49;	void	*ram81;	void	*ram113;
	void		*ram18;	void	*ram50;	void	*ram82;	void	*ram114;
	void		*ram19;	void	*ram51;	void	*ram83;	void	*ram115;
	void		*ram20;	void	*ram52;	void	*ram84;	void	*ram116;
	void		*ram21;	void	*ram53;	void	*ram85;	void	*ram117;
	void		*ram22;	void	*ram54;	void	*ram86;	void	*ram118;
	void		*ram23;	void	*ram55;	void	*ram87;	void	*ram119;
	void		*ram24;	void	*ram56;	void	*ram88;	void	*ram120;
	void		*ram25;	void	*ram57;	void	*ram89;	void	*ram121;
	void		*ram26;	void	*ram58;	void	*ram90;	void	*ram122;
	void		*ram27;	void	*ram59;	void	*ram91;	void	*ram123;
	void		*ram28;	void	*ram60;	void	*ram92;	void	*ram124;
	void		*ram29;	void	*ram61;	void	*ram93;	void	*ram125;
	void		*ram30;	void	*ram62;	void	*ram94;	void	*ram126;
	void		*ram31;	void	*ram63;	void	*ram95;	void	*ram127;
	void		*ram32;	void	*ram64;	void	*ram96;	void	*ram128;
}				t_kilospeed_test;

typedef struct	s_centikilospeed
{
	t_kilospeed_test ram1;	t_kilospeed_test ram33;	t_kilospeed_test ram65;	t_kilospeed_test ram97;
	t_kilospeed_test ram2;	t_kilospeed_test ram34;	t_kilospeed_test ram66;	t_kilospeed_test ram98;
	t_kilospeed_test ram3;	t_kilospeed_test ram35;	t_kilospeed_test ram67;	t_kilospeed_test ram99;
	t_kilospeed_test ram4;	t_kilospeed_test ram36;	t_kilospeed_test ram68;	t_kilospeed_test ram100;
	t_kilospeed_test ram5;	t_kilospeed_test ram37;	t_kilospeed_test ram69;
	t_kilospeed_test ram6;	t_kilospeed_test ram38;	t_kilospeed_test ram70;
	t_kilospeed_test ram7;	t_kilospeed_test ram39;	t_kilospeed_test ram71;
	t_kilospeed_test ram8;	t_kilospeed_test ram40;	t_kilospeed_test ram72;
	t_kilospeed_test ram9;	t_kilospeed_test ram41;	t_kilospeed_test ram73;
	t_kilospeed_test ram10;	t_kilospeed_test ram42;	t_kilospeed_test ram74;
	t_kilospeed_test ram11;	t_kilospeed_test ram43;	t_kilospeed_test ram75;
	t_kilospeed_test ram12;	t_kilospeed_test ram44;	t_kilospeed_test ram76;
	t_kilospeed_test ram13;	t_kilospeed_test ram45;	t_kilospeed_test ram77;
	t_kilospeed_test ram14;	t_kilospeed_test ram46;	t_kilospeed_test ram78;
	t_kilospeed_test ram15;	t_kilospeed_test ram47;	t_kilospeed_test ram79;
	t_kilospeed_test ram16;	t_kilospeed_test ram48;	t_kilospeed_test ram80;
	t_kilospeed_test ram17;	t_kilospeed_test ram49;	t_kilospeed_test ram81;
	t_kilospeed_test ram18;	t_kilospeed_test ram50;	t_kilospeed_test ram82;
	t_kilospeed_test ram19;	t_kilospeed_test ram51;	t_kilospeed_test ram83;
	t_kilospeed_test ram20;	t_kilospeed_test ram52;	t_kilospeed_test ram84;
	t_kilospeed_test ram21;	t_kilospeed_test ram53;	t_kilospeed_test ram85;
	t_kilospeed_test ram22;	t_kilospeed_test ram54;	t_kilospeed_test ram86;
	t_kilospeed_test ram23;	t_kilospeed_test ram55;	t_kilospeed_test ram87;
	t_kilospeed_test ram24;	t_kilospeed_test ram56;	t_kilospeed_test ram88;
	t_kilospeed_test ram25;	t_kilospeed_test ram57;	t_kilospeed_test ram89;
	t_kilospeed_test ram26;	t_kilospeed_test ram58;	t_kilospeed_test ram90;
	t_kilospeed_test ram27;	t_kilospeed_test ram59;	t_kilospeed_test ram91;
	t_kilospeed_test ram28;	t_kilospeed_test ram60;	t_kilospeed_test ram92;
	t_kilospeed_test ram29;	t_kilospeed_test ram61;	t_kilospeed_test ram93;
	t_kilospeed_test ram30;	t_kilospeed_test ram62;	t_kilospeed_test ram94;
	t_kilospeed_test ram31;	t_kilospeed_test ram63;	t_kilospeed_test ram95;
	t_kilospeed_test ram32;	t_kilospeed_test ram64;	t_kilospeed_test ram96;
}				t_centikilospeed;

typedef struct	s_megaspeed_test
{
	t_centikilospeed 	ram1;
	t_centikilospeed 	ram2;
	t_centikilospeed 	ram3;
	t_centikilospeed 	ram4;
	t_centikilospeed 	ram5;
	t_centikilospeed 	ram6;
	t_centikilospeed 	ram7;
	t_centikilospeed 	ram8;
	t_centikilospeed 	ram9;
	t_centikilospeed 	ram10;
}				t_megaspeed_test;

typedef struct	s_megaspeed
{
	char		ram[1048576];
}				t_megaspeed;

typedef struct	s_kilospeed
{
	char		ram[1024];
}				t_kilospeed;

typedef struct	s_bufspeed
{
	char		ram[BUF_SIZE];
}				t_bufspeed;

// typedef struct	s_gigaspeed
// {
//  char ram[1073741824];
// } 				t_gigaspeed;


#endif
