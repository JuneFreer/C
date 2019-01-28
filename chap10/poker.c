#include <stdio.h> /*C99 only*/
#include <stdbool.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/*external variables*/
int num_in_rank[NUM_RANKS];
/*存放等级的一维数组 长13,13个等级,用于给出现过的等级计数，类似于“桶排序”使用的记录相应索引的元素出现的次数*/
int num_in_suit[NUM_SUITS]; /*存放花色的一维数组 长4， 4种花色，用于给出现过的花色计数*/
bool straight, flush, four, three;
int pairs;

/*prototypes*/
void read_cards(void);
void analyze_hand(void);
void print_result(void);

int main(void)
{
  for(;;)
  {
    read_cards();
    analyze_hand();
    print_result();
  }
}
/*func read_cards: read the cards into the external variables num_in_rank and
num_in_suit; checks for bad cards and duplicate cards*/
void read_cards(void)
{
  bool card_exists[NUM_RANKS][NUM_SUITS]; /*13行4列的2维数组*/
  char ch, rank_ch, suit_ch; /*记录用户的输入*/
  int rank, suit; /*转换成连续数字便于操作*/
  bool bad_card;
  int cards_read = 0;

  for(rank = 0; rank < NUM_RANKS; rank++){
    num_in_rank[rank] = 0;
    for(suit = 0; suit < NUM_SUITS; suit++){
      card_exists[rank][suit] = false; /*将所有组合的牌先设为假*/
    }
  }
  for(suit = 0; suit < NUM_SUITS; suit++){
    num_in_suit[suit] = 0;
  }
  while(cards_read < NUM_CARDS){ /*只能读入5张牌，超过就跳出循环不再读取*/
    bad_card = false; /*将此变量先设为假*/
    printf("Enter a card: ");
    rank_ch = getchar(); /*getchar()表示下一个输入*/
    switch(rank_ch){
      case '0': exit(EXIT_SUCCESS);
      case '2': rank = 0; break;
      case '3': rank = 1; break;
      case '4': rank = 2; break;
      case '5': rank = 3; break;
      case '6': rank = 4; break;
      case '7': rank = 5; break;
      case '8': rank = 6; break;
      case '9': rank = 7; break;
      case 't': case 'T': rank = 8; break;
      case 'j': case 'J': rank = 9; break;
      case 'q': case 'Q': rank = 10; break;
      case 'k': case 'K': rank = 11; break;
      case 'a': case 'A': rank = 12; break;
      default: bad_card = true; /*输入了无意义的字符*/
    }
    suit_ch = getchar();
    switch(suit_ch){
      case 'c': case 'C': suit = 0; break;
      case 'd': case 'D': suit = 1; break;
      case 'h': case 'H': suit = 2; break;
      case 's': case 'S': suit = 3; break;
      default: bad_card = true; /*输入了无意义的字符*/
    }

    while((ch = getchar()) != '\n')
      if(ch != ' ') bad_card = true; /*输入了多于两个字符，输入"坏牌"*/

    if(bad_card)
      printf("Bad card; ignored.\n");
    else if(card_exists[rank][suit])
      printf("Duplicate card; ignored.\n");
    else{
      num_in_rank[rank]++; /*计数 出现的等级*/
      num_in_suit[suit]++; /*计数 出现的花色*/
      card_exists[rank][suit] = true; /*记录一张已经输入的牌*/
      cards_read++; /*已输入的牌数 计数*/
    }
  }
}
/*analyze_hand: determines wether the hand contains a straight, a flush, four-of-a-kind,
and/or a three-of-a-kind, and determines the number of pairs; stores the variables into
external variables straight, flush, three and pair.*/
void analyze_hand(void)
{
  int num_consec = 0; /*consequnce 记录顺子*/
  int rank, suit;

  straight = false;
  flush = false;
  four = false;
  three = false;
  pairs = 0;
  /*check for flush*/
  for(suit = 0; suit < NUM_SUITS; suit++)
    if(num_in_suit[suit] == NUM_CARDS){ /*对出现的同一种花色的计数==5*/
      flush = true;
      break; /*如果这里不break，那即便已经检查出了flush，也还是要把for循环完，岂不是很浪费资源？*/
    }
  /*check for straight*/
  rank = 0;
  while(num_in_rank[rank] == 0) rank++;
  for(; rank < NUM_RANKS && num_in_rank[rank] > 0; rank++) /*num_in_rank[rank] > 0是说 这种等级必须出现过一次，否则顺子就断了*/
    num_consec++; /*记录出现的顺子*/
  if(num_consec == NUM_CARDS){ /*如果顺子等于5*/
    straight = true;
    return;
  }

  /*check for four-of-a-kind, three-of-a-kind, pairs*/
  for(rank = 0; rank < NUM_RANKS; rank++){
    if(num_in_rank[rank] == 4) four = true;
    if(num_in_rank[rank] == 3) three = true;
    if(num_in_rank[rank] == 2) pairs++;
  }
}
/*print_result: 根据牌的规则，作出相应的输出*/
void print_result(void)
{
  if(straight && flush) printf("straight flush\n"); /*同花顺*/
  else if(four) printf("Four of a kind\n");
  else if(three && pairs == 1) printf("Full house.\n");
  else if(flush) printf("flush\n");
  else if(straight) printf("straight\n");
  else if(three) printf("three of a kind\n");
  else if(pairs == 2) printf("two pairs.\n");
  else if(pairs == 1) printf("Pair.\n");
  else  printf("High card.\n");

  printf("\n\n");
}
