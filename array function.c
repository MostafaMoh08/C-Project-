
int last_position_array(int *arr,int size,int x){

       int flag=-1;

        for (int i=0;i<size;i++){
          if (arr[i]==x){
          flag=i;
          }
       }
    return flag ;
}
//-------------------------------------
int pow_3(int num){

    if (num<1){
         return num ;
    }
    else{
        while (num%3==0){
        num /= 3;
        }
    }
    return num==1;
}
//**********************************
void array_print(int*arr,int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
//-------------------
void between_array(int *arr,int num1,int num2){

   int flag=0,i,x=0,size;
   if(num1<num2){
        for( i=num1+1;i<num2;i++){
           arr[x]=i;
        x=x+1;
        }
        }

   else if(num1>num2){
        for( i=num1-1;i>num2;i--){
            arr[x]=i;
        x=x+1;
        }
        }}
//****************
int scan_array(int*arr){
    int size,i;
    printf("enter the size of arr:");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        scanf(" %d ",&arr[i]);
    }
    return size;

}
//--------------------------
int binarysearch_array(int*arr,int size,int num){

    int first=0;
    int last=size-1;
    int middle;
    while(first<=last)
    {
        middle=(first+last)/2;
        if(arr[middle]==num)
        {
            return middle;
        }
        else if(arr[middle]<num)
        {
            first=middle+1;
        }
        else
        {
            last=middle-1;
        }
    }
    return -1;
}
//----------------------------
void reverse_array(int *arr,int size){

    int i=0,temp;
    while(i<size){
       temp=arr[i];
       arr[i]=arr[size];
       arr[size]=temp;
       size--;
       i++;


}}
//------------------------------
void swape_array(int *arr1,int size1,int *arr2,int size2){

    int z=0,x=0,i=0,flag=0,temp;

    for(int i=size1;i>=0;i--){
    for(int x=0;x<size2;x++){
    temp=arr1[i];
    arr1[i]=arr2[x];
    arr2[x]=temp;

             }
}}
//-----------------------------
int array_mostrepeated(int*arr,int size){

    int count[10]={0};
    int max ,index;
    for(int i=0;i<size;i++){
            count[arr[i]]++;
        }
    for(int i=0;i<10;i++){
        if(max<count[i]){
            max=count[i];
            index=i;
        }}
        return index;
}
//-------------------------
int* array_scan_dynamic(int*psize){
     int size;
     printf("enter the num of element: ");
     scanf("%d",&size);
     int*arr=(int*)malloc(size*sizeof(int));
     printf("enter the numbers:\n");
     for(int i=0;i<size;i++){

        scanf("%d",&arr[i]);
     }
     *psize=size;
     return arr;
 }
//-----------------
void swap_pointers(int**p1,int**p2){

    int temp=**p1;
    **p1=**p2;
    **p2=temp;

}
//--------------------------
void arr_return_pointers(char**arr,int size){
    int i,x;
    for(i=0;i<size;i++){
        for(x=0;arr[i][x];x++){

            //printf("%c",*(*(arr+i)+x));
            printf("%c",arr[i][x]);
        }
        printf("\n");
    }

}
//-------------------------
int array_mostReapeated_sorted(int*arr,int size){

    int i, count=1,max=1,index,element;
    for(i=0;i<size-1;i++){
        if(arr[i]==arr[i+1]){
            count++;
            if(count>max){
                max=count;
                element=arr[i];
                index=i;
            }
        }
        else{
            count=1;
        }
    }
    return element;
}
//-----------------
void array_sort(int*arr,int size){
    int x,i,temp;
    for(x=0; x<size; x++){
            int flag=0;
        for(i=0; i<size; i++){
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                flag=1;

            }}
            if (flag==0){
                break;
            }

            }}
//-------------------------------
