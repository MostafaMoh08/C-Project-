void string_scan(char*str){

    int i;
    scanf("%c",&str[0]);
    for( i=0;str[i]!='\n';){
            i++;
    scanf("%c",&str[i]);
    }
    str[i]='\0';

}
//---------------------

//---------------------
int string_compare(char*str1,char*str2){
    int i,x,flag=1;
    for( i=0;str1[i]!='\0';i++){
            if(str1[i]==str2[i]){

            }
            else{
                flag=0;

            }}
            return flag;
}
//--------------------
void string_print(char*str){
    int i;
    for(i=0;str[i]!=0;i++){
        printf("%c",str[i]);
    }
    printf("\n");
}
