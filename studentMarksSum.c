

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int total=0;
  if(gender == 'b') {
      for(int i=0; i<number_of_students;) {
        total+=*(marks + i);
        i+=2; 
        }
    }
  if(gender == 'g') {
    for(int i=1; i<number_of_students; i+=2) 
        total+=*(marks+i);  
  }
  return total;
}

