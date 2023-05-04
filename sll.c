#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct data {
  int value;
  struct data *next;
};

void insert();
void display();
void delete();
int count();

typedef struct data DATA_data;

DATA_data *head_data, *first_data, *temp_data = 0, *prev_data, next_data;
int data;

int main() {
  int option = 0;

  printf("Singly Linked List Example - All Operations\n");

  while (option < 5) {

    printf("\nOptions\n");
    printf("1 : Insert into Linked List \n");
    printf("2 : Delete from Linked List \n");
    printf("3 : Display Linked List\n");
    printf("4 : Count Linked List\n");
    printf("Others : Exit()\n");
    printf("Enter your option:");
    scanf("%d", &option);
    switch (option) {
      case 1:
        insert();
        break;
      case 2:
        delete();
        break;
      case 3:
        display();
        break;
      case 4:
        count();
        break;
      default:
        break;
    }
  }

  return 0;
}

void insert() {
  printf("\nEnter Element for Insert Linked List : \n");
  scanf("%d", &data);

  temp_data = (DATA_data *) malloc(sizeof (DATA_data));

  temp_data->value = data;

  if (first_data == 0) {
    first_data = temp_data;
  } else {
    head_data->next = temp_data;
  }
  temp_data->next = 0;
  head_data = temp_data;
  fflush(stdin);
}

void delete() {
  int countvalue, pos, i = 0;
  countvalue = count();
  temp_data = first_data;
  printf("\nDisplay Linked List : \n");

  printf("\nEnter Position for Delete Element : \n");
  scanf("%d", &pos);

  if (pos > 0 && pos <= countvalue) {
    if (pos == 1) {
      temp_data = temp_data -> next;
      first_data = temp_data;
      printf("\nDeleted Successfully \n\n");
    } else {
      while (temp_data != 0) {
        if (i == (pos - 1)) {
          prev_data->next = temp_data->next;
          if(i == (countvalue - 1))
          {
			  head_data = prev_data;
		  }
          printf("\nDeleted Successfully \n\n");
          break;
        } else {
          i++;
          prev_data = temp_data;
          temp_data = temp_data -> next;
        }
      }
    }
  } else
    printf("\nInvalid Position \n\n");
}

void display() {
  int count = 0;
  temp_data = first_data;
  printf("\nDisplay Linked List : \n");
  while (temp_data != 0) {
    printf("%d ", temp_data->value);
    count++;
    temp_data = temp_data -> next;
  }
  printf("\nNo Of Items In Linked List : %d\n", count);
}

int count() {
  int count = 0;
  temp_data = first_data;
  while (temp_data != 0) {
    count++;
    temp_data = temp_data -> next;
  }
  printf("\nNo Of Items In Linked List : %d\n", count);
  return count;
}
