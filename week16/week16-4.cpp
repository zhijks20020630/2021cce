#include <stdio.h>
char line[300]="101010101010101010101010110000101010";
int main()
{
    int ans=0;

    int i=0;
    while(line[i]!='\0'){
        if(line[i]=='1') ans++;

        i++;
    }
    printf("��%d��1\n",ans);
}
