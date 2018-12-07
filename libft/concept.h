#ifndef CONCEPT_H
# define CONCEPT_H
# define BUF_SIZE 128
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef	struct	s_kilospeed
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
}				t_kilospeed;

typedef struct s_centikilospeed
{
	t_kilospeed 	ram1;	t_kilospeed 	ram33;	t_kilospeed 	ram65;	t_kilospeed 	ram97;
	t_kilospeed 	ram2;	t_kilospeed 	ram34;	t_kilospeed 	ram66;	t_kilospeed 	ram98;
	t_kilospeed 	ram3;	t_kilospeed 	ram35;	t_kilospeed 	ram67;	t_kilospeed 	ram99;
	t_kilospeed 	ram4;	t_kilospeed 	ram36;	t_kilospeed 	ram68;	t_kilospeed 	ram100;
	t_kilospeed 	ram5;	t_kilospeed 	ram37;	t_kilospeed 	ram69;
	t_kilospeed 	ram6;	t_kilospeed 	ram38;	t_kilospeed 	ram70;
	t_kilospeed 	ram7;	t_kilospeed 	ram39;	t_kilospeed 	ram71;
	t_kilospeed 	ram8;	t_kilospeed 	ram40;	t_kilospeed 	ram72;
	t_kilospeed 	ram9;	t_kilospeed 	ram41;	t_kilospeed 	ram73;
	t_kilospeed 	ram10;	t_kilospeed 	ram42;	t_kilospeed 	ram74;
	t_kilospeed 	ram11;	t_kilospeed 	ram43;	t_kilospeed 	ram75;
	t_kilospeed 	ram12;	t_kilospeed 	ram44;	t_kilospeed 	ram76;
	t_kilospeed 	ram13;	t_kilospeed 	ram45;	t_kilospeed 	ram77;
	t_kilospeed 	ram14;	t_kilospeed 	ram46;	t_kilospeed 	ram78;
	t_kilospeed 	ram15;	t_kilospeed 	ram47;	t_kilospeed 	ram79;
	t_kilospeed 	ram16;	t_kilospeed 	ram48;	t_kilospeed 	ram80;
	t_kilospeed 	ram17;	t_kilospeed 	ram49;	t_kilospeed 	ram81;
	t_kilospeed 	ram18;	t_kilospeed 	ram50;	t_kilospeed 	ram82;
	t_kilospeed 	ram19;	t_kilospeed 	ram51;	t_kilospeed 	ram83;
	t_kilospeed 	ram20;	t_kilospeed 	ram52;	t_kilospeed 	ram84;
	t_kilospeed 	ram21;	t_kilospeed 	ram53;	t_kilospeed 	ram85;
	t_kilospeed 	ram22;	t_kilospeed 	ram54;	t_kilospeed 	ram86;
	t_kilospeed 	ram23;	t_kilospeed 	ram55;	t_kilospeed 	ram87;
	t_kilospeed 	ram24;	t_kilospeed 	ram56;	t_kilospeed 	ram88;
	t_kilospeed 	ram25;	t_kilospeed 	ram57;	t_kilospeed 	ram89;
	t_kilospeed 	ram26;	t_kilospeed 	ram58;	t_kilospeed 	ram90;
	t_kilospeed 	ram27;	t_kilospeed 	ram59;	t_kilospeed 	ram91;
	t_kilospeed 	ram28;	t_kilospeed 	ram60;	t_kilospeed 	ram92;
	t_kilospeed 	ram29;	t_kilospeed 	ram61;	t_kilospeed 	ram93;
	t_kilospeed 	ram30;	t_kilospeed 	ram62;	t_kilospeed 	ram94;
	t_kilospeed 	ram31;	t_kilospeed 	ram63;	t_kilospeed 	ram95;
	t_kilospeed 	ram32;	t_kilospeed 	ram64;	t_kilospeed 	ram96;
}				t_centikilospeed;

typedef struct s_megaspeed
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
}				t_megaspeed;

typedef struct	s_gigaspeed
{
 char ram[1073741824];
} 				t_gigaspeed;


#endif
