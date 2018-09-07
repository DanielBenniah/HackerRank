#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int h; 
    scanf("%d",&h);
    int m; 
    scanf("%d",&m);
    char a[14][7]={"\0","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve"};
    char b[32][30]={" o' clock","one minute past ","two minutes past ","three minutes past ","four minutes past ","five minutes past ","six minutes past ","seven minutes past ","eight minutes past ","nine minutes past ","ten minutes past ","eleven minutes past ","twelve minutes past ","thirteen minutes past ","fourteen minutes past ","quarter past ","sixteen minutes past ","seventeen minutes past ","eighteen minutes past ","nineteen minutes past ","twenty minutes past ","twenty one minutes past ","twenty two minutes past ","twenty three minutes past ","twenty four minutes past ","twenty five minutes past ","twenty six minutes past ","twenty seven minutes past ","twenty eight minutes past ","twenty nine minutes past ","half past "};
	char b1[32][30]={"/0","one minute to ","two minutes to ","three minutes to ","four minutes to ","five minutes to ","six minutes to ","seven minutes to ","eight minutes to ","nine minutes to ","ten minutes to ","eleven minutes to ","twelve minutes to ","thirteen minutes to ","fourteen minutes to ","quarter to ","sixteen minutes to ","seventeen minutes to ","eighteen minutes to ","nineteen minutes to ","twenty minutes to ","twenty one minutes to ","twenty two minutes to ","twenty three minutes to ","twenty four minutes to ","twenty five minutes to ","twenty six minutes to ","twenty seven minutes to ","twenty eight minutes to ","twenty nine minutes to "};
    if(m<=30 && m!=0)
	printf("%s%s",b[m],a[h]);
	else if(m>30)
	printf("%s%s",b1[60-m],a[h+1]);
	else
	printf("%s%s",a[h],b[0]);
    
    return 0;
}

