#include <stdio.h>
#include <string.h>

void verifyGabarit(char gabarit[], char studentGabarit[] , float *bestNote , char studentName[30] , char bestStudent[30]){
    float relativeNote;
    int note = 0, count = 0;
    for (int i = 0; gabarit[i] != '\0' ; i++){
        count += 1;
        if (gabarit[i] == studentGabarit[i]){
            note += 1;
        }
    }
    relativeNote = (float) (note / count) * 100;
    if (relativeNote > *bestNote){
        *bestNote = relativeNote;
        strcpy(bestStudent, studentName);
    }
}
int main(){
    float bestNote = 0.0;
    int students;
    char gabarit[51] = "11111111111111111111111111111111111111111111111111" , tempStudent[30] , bestStudent[30] , tempGabarit[51];
    printf("Put the gabarit of the test and I will return the notes (max of 50 questions)");
    scanf("%s", gabarit);
    printf("Put how many students made the test");
    scanf("%d" , &students);
    for ( int i = 1; i < students; i ++){
        printf("Put the student name (without spaces)");
        scanf("%s" , tempStudent);
        printf("Put the gabarit of the student");
        scanf("%s", tempGabarit);
        verifyGabarit(gabarit , tempGabarit, &bestNote, tempStudent , bestStudent);
    }
    printf("The student with the best note is %s with the note of %.2f" , bestStudent , bestNote);
    return 0;
}