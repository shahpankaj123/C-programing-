#include <stdio.h>


int Calc(int size_wall, int size_bb, int size_sb, int num_bb, int num_sb){

    int ts_bb = num_bb * size_bb;
    int ts_sb = num_sb * size_sb;
    int ts = ts_bb + ts_sb;
    

    int x = size_wall % ts_bb;
    int y = size_wall % ts_sb;
    int z = size_wall % ts;


    if (size_wall != ts_bb && size_wall > ts_sb){
        ts_bb += ts_sb;
    }else if (size_wall != ts_sb && size_wall > ts_bb){
        ts_sb += ts_bb;
    }


    if ((ts_bb == size_wall) && (x == 0)){
        printf("True");
    }else if((ts_sb == size_wall) && (y == 0)){
        printf("True");
    }else if((ts == size_wall) && (z == 0)){
        printf("True");    
    }else{
        printf("False");
    }

    return 0;
}


int main(){
    int size_wall, size_bb, size_sb, num_bb, num_sb;

    printf("Enter Size of Wall: ");
    scanf("%d", &size_wall);

    printf("Enter Number of Big Bricks: ");
    scanf("%d", &num_bb);
    if (num_bb > 0){
        printf("Enter Size of Big Brick: ");
        scanf("%d", &size_bb);
    }

    printf("Enter Number of Small Brick: ");
    scanf("%d", &num_sb);
    if (num_sb > 0){
        printf("Enter Size of Small Brick: ");
        scanf("%d", &size_sb);       
    }


    int Res = Calc(size_wall, size_bb, size_sb, num_bb, num_sb);

    printf("%s", Res);

    return 0;
}
