/*
_Revenge_ bless me!
_Revenge_ AK NOIP!
_Revenge_ AK NGOI!
_Revenge_ AK IOI!
_Revenge_ AK Universe OI!
_Revenge_ AK ACM World Final!
_Revenge_ AK ACM Universe Final!
_Revenge_ thinks all of U are vegetable chickens!
*/
/*
This is an exe to play GO
To every ceil:
	-- means none chess
	00 means white
	01 means black
	(Actually,U also can swap them)
00 input firstly,01 input secondly.
First input number.Second input alpha.
CAUTION:DO NOT INPUT SPACE
U can finish the game by input 'N' for 4 times.
*/
#include"cstdio"
#include"cstdlib"
typedef long long LL;
#define R read()
#define CH getchar()
#define __FREOPEN__(x) freopen(#x".in","r",stdin);freopen(#x".out","w",stdout);
#define For(i,l,r)for(int i=(l);i<=(r);++i)
const int N_=20;
int a[N_][N_];
char w,x,y,z,__[5];

int read(){int s=0,k=1;char c=CH;while(c<'0'||c>'9'){if(c=='-')k=-1;c=CH;}while(c>='0'&&c<='9'){s=(s<<1)+(s<<3)+(c^'0');c=CH;}return s*k;}
void print(int n);//print the GO board
void work(int n);//main para
void gr();//get the result
bool ckd(int x,int y,bool c);//check can or cannot down a chess
bool dead(int x,int y);//check if the chess(es) dead;

int main()
{
	work(19);
	return 0;
}

void print(int n)
{
	system("cls");
	putchar(' ');putchar(' ');For(i,1,n){if(i<10)putchar('0');printf("%d ",i);}puts("");
	For(i,1,n){putchar(64+i);putchar(' ');For(j,1,n){putchar(a[i][j]?' ':'-');printf("%c ",a[i][j]?a[i][j]+47:'-');}puts("");}
}

bool dead(int x,int y)
{
	
}

bool ckd(int x,int y,bool c)
{
	if(a[x][y])return 0;
	if(dead(x,y))return 0;
	return 1;
}

void work(int n)
{
	print(n);
	scanf("%s",__);w=__[0];x=__[1];y=__[2];z=__[3];
	if(w=='N'&&x=='N'&&y=='N'&&z=='N')gr();
	while(ckd(w,x,0));
	while(ckd(y,z,1));
}
