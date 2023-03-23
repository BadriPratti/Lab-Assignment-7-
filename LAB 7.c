#include <stdio.h>


int main(void) {
  
int array[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
  
  for(int i =  0; i< 9-1; i++)
    {
    int counter = 0;
    for(int j = 0; j<9-i-1; j++){
      if(array[j]>array[j+1]){
        
    int temp =array[j];
    array[j] = array[j+1];
    array[j+1]=temp;
    counter++; 
  
}
    } 
    printf("pass %d: %d\n", i + 1, counter);
  }
    return 0;
  
}

