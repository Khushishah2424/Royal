#include<stdio.h>
int sumdivby3(int num){
    if(num < 1){
        return 0;
    }
    else{
        if(num%3 == 0){
            return num + sumdivby3(num-1);
        }
        else{
            return 0+sumdivby3(num-1);
        }   
    }
    
}
int main(){
    int ans = sumdivby3(10);
    printf("The ans is = %d",ans);
}