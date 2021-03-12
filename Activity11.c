#include<stdio.h>

typedef struct studentDetail {
    char name[100];
    int scores[100];
    float average;
    char grade;
} Student;

typedef struct GradeBook {
	char courseName[30];
	float weights[30];
	int tstudents, tscores;
	Student student[100];
} Book;

Student input_one_Student(int totalScores) {
	Student temp;
	scanf("%s",temp.name);
	for(int i=0;i<totalScores;i++) 
		scanf("%d", &temp.scores[i]);
	return temp;
}

Book input_one_gradeBook() {
	Book temp;
	scanf("%s", temp.courseName);
	scanf("%d%d",&temp.tstudents, &temp.tscores);
	for(int i=0;i<temp.tscores;i++) 
		scanf("%f",&temp.weights[i]);
	for(int i=0;i<temp.tstudents;i++) 
		temp.student[i] = input_one_Student(temp.tscores);
	return temp;
}

void input_n_gradeBooks (int testCases, Book gradeBook[]) {
	for (int i=0; i<testCases; i++) {
	    gradeBook[i] = input_one_gradeBook();
    }
}

char compute_Grade(Student s) {
	if (0<=s.average && s.average<60) 
		s.grade = 'F';
	else if (60<=s.average && s.average<70)
		s.grade = 'D';
	else if (70<=s.average && s.average<80)
		s.grade = 'C';
	else if (80<=s.average && s.average<90)
		s.grade = 'B';
	else 
		s.grade = 'A';
	return s.grade;
}


void compute_one_gradebook(Book *pg) {
	float sum=0;
	float sumOfWeights=0;
	for (int j=0; j<pg->tscores; j++) {
		sumOfWeights+= pg->weights[j];
	}
	for (int i=0; i<pg->tstudents; i++) {
		sum=0;
	    for (int j=0; j<pg->tscores; j++) {
			sum+= pg->student[i].scores[j]*pg->weights[j];
		}
		pg->student[i].average=sum/sumOfWeights;
		pg->student[i].grade = compute_Grade(pg->student[i]);
    }
} 

void compute_n_gradebooks(int testCases, Book gradeBook[testCases]) {
	for (int i=0; i<testCases; i++) {
	    compute_one_gradebook(&gradeBook[i]);
    }
}

void print_one_student(Student s) {
	printf("%s\t%.2f\t%c\n", s.name, s.average, s.grade);
}

void print_n_students(int testCases, Book gradeBook[testCases]) {
	for (int i=0; i<testCases; i++) {
	    printf("%s\n", gradeBook[i].courseName);
		for(int j=0; j<gradeBook[i].tstudents; j++) {
           print_one_student(gradeBook[i].student[j]);
        }
    }
}

int main() {
	int testCases;
	scanf("%d", &testCases);
	Book gradeBook[testCases];
	input_n_gradeBooks(testCases, gradeBook);
	compute_n_gradebooks(testCases, gradeBook);
	print_n_students(testCases, gradeBook);
	return 0;
}