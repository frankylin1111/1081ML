
#include <stdio.h>
 
int bingo[5][5], number[80], in_bingo[80];
 
int main()
{
    int n;
    while (~scanf("%d", &n))
    while (n --) {
        for (int i = 1; i <= 75; ++ i) {
            in_bingo[i] = -1;
		}
        for (int i = 0; i < 5; ++ i) {
            for (int j = 0; j < 5; ++ j) {
            	if (i == 2 && j == 2) {
                	bingo[i][j] = 0;
                }else {
                	scanf("%d", &bingo[i][j]);
                	in_bingo[bingo[i][j]] = i * 5 + j;
				}
			}
		}
        for (int k = 0; k < 75; ++ k) {
            scanf("%d", &number[k]);
		}
        
        int flag = 0;
		for (int k = 0; k < 75; ++ k) {
            int position = in_bingo[number[k]];
            if (position != -1) {
				bingo[position/5][position%5] = 0;
			}
              
            for (int i = 0; i < 5; ++ i) {
                int count = 0;
                for (int j = 0; j < 5; ++ j) {
                    if (bingo[i][j] == 0) {
						count ++;
					}
                }
                if (count == 5) {
                    flag = 1;
                    break;
                }
            }
            
            for (int i = 0; i < 5; ++ i) {
                int count = 0;
                for (int j = 0; j < 5; ++ j) {
                    if (bingo[j][i] == 0) {
						count ++;
					}
                }
                if (count == 5) {
                    flag = 1;
                    break;
                }
            }
            
            if (!bingo[0][0] && !bingo[1][1] && !bingo[3][3] && !bingo[4][4]) {
                 flag = 1;
			}
              
           	if (!bingo[0][4] && !bingo[1][3] && !bingo[3][1] && !bingo[4][0]) {
                 flag = 1;
			}
                 
            if (flag) {
            	printf("BINGO after %d numbers announced\n", k+1);
                break;
            }
        }
    }
    
    return 0;
}
