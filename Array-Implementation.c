// Array-Implementation



#include <stdio.h>

int i=0,s;
const int C=5;

//Insert//
/*
int Insertcoder(int A[],int value){
  if(i==C){
    printf("Array is full.\n");
  }
  else{
    i=i+1;
    A[i]=value;
  }
  return 0;
}
*/

                  // INSERT //
int Insert(int A[]){
  int value;
  if(i==C){
    printf("\n\nArray is full.\n");
  }
  else{
    i=i+1;
    printf("\n\nEnter the value: ");
    scanf("%d",&value);
    A[i]=value;
  }
  return 0;
}

                  // DISPLAY //
int Display(int A[]){
  int j;
  /*
  printf("\n");
  printf(" ---- ");
  for(j=1; j<=C-1; j++)
    printf("---- ");
  printf("\n");
  for(j=1; j<=i ; j++)
    printf("|%4d", A[j]);
  printf("|");
  for(j=i; j<=C-1; j++)
    printf("%4s|","");
  printf("\n");
  printf(" ---- ");
  for(j=1; j<=C-1; j++)
    printf("---- ");
  */
  printf("\n             -: Here is your Array :-\n");
  printf("            ");
  for(j=1; j<=C;j++)
    printf("-----");
  printf("-");
  printf("\n");
  printf("            ");
  for(j=1; j<=i ; j++)
    printf("|%4d", A[j]);
  printf("|");
  for(j=i; j<=C-1; j++)
    printf("%4s|","");
  printf("\n");
  printf("            ");
  for(j=1; j<=C;j++)
    printf("-----");
  printf("-");
  return 0;
}


              // DELETE FROM LAST //
int Deletel(int A[]){
  int value;
  if(i==0){
    printf("\n\nArray is empty.\n");
  }
  else{
    value = A[i];
    i=i-1;
  }
  printf("\nDeleted element from the last position is: %d", value);
  printf("\n");
  return 0;
}


             // DELETE FROM FIRST //
int Deletef(int A[]){
  int value, j;
  if(i==0){
    printf("\n\nArray is empty.\n");
  }
  else{
    value = A[1];
    for(j=1;j<=i-1;j++)
      A[j] = A[j+1];
    i--;
  }
  printf("\nDeleted element from the first position is: %d", value);
  printf("\n");
  return 0;
}

           // Delete from position //
int Deletep(int A[]){
  int value, j, pos;
  printf("\n\nEnter the position you want to delete: ");
  scanf("%d", &pos);
  if(i==0){
    printf("\n\nArray is empty.\n");
  }
  else{
    if(pos>i){
      printf("\n\nInvalid position.\n");
    }
    else{
      value = A[pos];
      if(pos<i){
	for(j=pos;j<=(i-1);j++)
	  A[j]=A[j+1];
      }
      i=i-1;
    }
  }
  printf("\nDeleted element from the %d position is: %d",pos,value);
  printf("\n");
  return 0;
}

              // Delete item //
int Deletei(int A[]){
  int value,pos,j,item;
  printf("\n\nEnter your item: ");
  scanf("%d",& item);
  if(i==0){
    printf("\n\nArray is empty.\n");
  }
  else{
    for(j=1;j<=i;j++){
      if(A[j]==item){
	pos = j;
	break;
      }
    }
    if(pos<=i){
      value = A[pos];
      if(pos<i){
	for(j=pos;j<=(i-1);j++)
	  A[j]=A[j+1];
      }
      i=i-1;
    }
  }
  printf("\nDeleted element from the Array as per your choice is: %d", value);
  printf("\n");
  return 0;
}
               // BUBBLE SORT //
int BubbleSort(int A[]){
  int i,j,temp;
  for(i=1;i<=C-1;i++){
    for(j=1;j<=C-i;j++){
      if(A[j]>A[j+1]){
        temp = A[j];
        A[j] = A[j+1];
        A[j+1] = temp;
      }
    }
  }
  return 0;
}

              // INSERTION SORT //
int InsertionSort(int A[]){
  int i, key, j;
    for (i = 1; i < C+1; i++) {
        key = A[i];
        j = i - 1;

        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = key;
    }
  return 0;
}

              // LINEAR SEARCH //
int LinearSearch(int A[]){
 int i,key;
 printf("Enter your element: ");
 scanf("%d",&key);
 for(i=1;i<=C+1;i++){
  if(key==A[i]){
    printf("Element %d is found at index %d.",A[i],i);
    break;
  }
  if(i>5){
    printf("Element %d not found in the array.",key);
  }
 }
 return 0;
}


                // BINARY SEARCH //
int BinarySearch(int A[])
{
 int l,mid,h,key;
 l=1;
 h=C;
 printf("Enter your element: ");
 scanf("%d",&key);
 while(l<=h){
   mid=(l+h)/2;
 if(A[mid]==key){
   printf("Element %d is found at index %d.",key,mid);
   break;
 }
 else if(A[mid]>key)
   h=mid-1;
 else
   l=mid+1;
 if(i>5)
   printf("Element %d is not found in the Array.",key);
 }
return 0;
}

               // MAIN FUNCTION //
int main(){
  int A[5], input, din, si, soi;
  do{
  printf("\n\n: THIS PROGRAM WILL IMPLEMENT ARRAY : \n\nInput a number as per your choice:\n1. Insert\n2. Display\n3. Delete\n4. Sorting\n5. Searching\n6. Exit\n");
  printf("\nEnter your choice: ");
  scanf("%d", &input);
  if(input==1)
    Insert(A);
  if(input==2)
    Display(A);
  if(input==3){
    printf("\n\nEnter the process of deletion you want:\n1. Delete from first position\n2. Delete from last position\n3. Delete from any position\n4. Delete an item taking choice\n\nEnter your deletion choice: ");
    scanf("%d", &din);
    if(din==1)
      Deletef(A);
    if(din==2)
      Deletel(A);
    if(din==3)
      Deletep(A);
    if(din==4)
      Deletei(A);
  }
  if(input==4){
    printf("\nEnter your choice as per selection:\n1. Bubble Sorting.\n2. Insertion Sorting.\n\nEnter your choice: ");
    scanf("%d",&soi);
    if(soi==1)  
      BubbleSort(A);
    if(soi==2)
      InsertionSort(A);
  }
  if(input==5){
    printf("\nEnter your choice as per selection:\n1.Linear Search.\n2.Binary Search.\n\nEnter your choice: ");
    scanf("%d",&si);
    if(si==1)
      LinearSearch(A);
    if(si==2)
      BinarySearch(A);
  }
  if(input==6){
    printf("\nPROGRAM TERMINATED.\n");
    break;
  }
  if(input<=0 || input>=7){
    printf("\nWRONG INPUT\n");
  }
    }while(1);
 return 0;
}
