/*In this question you are required to find whether a character exists in a string
(a) [XX Marks] write the function int char_exists(char target, char str[]) that returns 1 if target exists in str and 0 otherwise.
(b) [Y MArks] complete the main function to test your function (by simply calling it and check the result)*/


int char_exists(char target, char str[]){
  
  for (int i=0;str[i]!='\0';i++){
    if(str[i]==target){
      return 1;
    }
    
  }
  
  return 0;
  
  
}

int main(){
  
  /*test case found*/
  char input_str[10]="COMPENG2SH4";
  char input_char ='E';
  int expected =1;
  int actual = char_exists(input_char,input_str);
  
  if (actual==expected){
    printf("Executed correctly\n");
  }
  else {
    printf("ERROR: expected is: %d, while found is:%d\n",expected,found);
  }
  
  
  return 0;
}
