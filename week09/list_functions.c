// Tutorial 9 linked list functions
// Pat Chambers (z5264081), 24/7/24

#include <stdio.h>
#include <stdlib.h>

struct node {
    // The data stored in the node
    int data;
    // Pointer to the next node in the linked list
    struct node *next;
};

// Prescribed functions
int list_evens(struct node *head1, struct node *head2);
struct node *list_ordered_insert(struct node *head, int data);
struct node *list_delete_smallest(struct node *head);
struct node *list_copy(struct node *head1);
struct node *list_append(struct node *head1, struct node *head2);
struct node *list_reverse(struct node *head);
struct node *list_find_intersection(struct node *head1, struct node *head2);
int list_count_occurrences(struct node *head, int data);

// Helper functions for testing and prescribed functions
struct node *create_node(int data);
struct node *insert_tail(struct node *head, int data);
void print_list(struct node *head);


int main(void) {
    // Use `list1` and `list2` to test your linked list functions!
    struct node *list1 = create_node(10);
    list1 = insert_tail(list1, 11);
    list1 = insert_tail(list1, 13);
    list1 = insert_tail(list1, 16);
    list1 = list_ordered_insert(list1, 14);
    print_list(list1);
    printf("14 occurrs %d times\n", list_count_occurrences(list1, 16));

    // struct node *list2 = create_node(3);
    // list2 = insert_tail(list2, 5);
    // list2 = insert_tail(list2, 7);
    // list2 = insert_tail(list2, 9);

    return 0;
}

// Given two linked lists `head1` and `head2`:
// return 0, if neither list contains even numbers.
// return 1, if one list contains even numbers, but the other does not.
// return -1, if both lists contain even numbers.
int list_evens(struct node *head1, struct node *head2) {
    return 42;
}

// Given a linked list `head` that is ordered in acending order and a value 
// `data` to insert, insert the value into the list that will allow the list 
// to remain in ascending order.
// Return the head of the list
struct node *list_ordered_insert(struct node *head, int data) {

    struct node *new = create_node(data);

    // EDGE CASES
    // head == NULL
    // head->next == NULL
    // data is larger than any in list
    // data is smaller than any in list

    struct node *curr = head;
    while ( curr->next->data < data ) {
        curr = curr->next;
    }
    new->next = curr->next;
    curr->next = new;
    return head;
}

// Given a linked list `head`, remove the first node with the smallest 
// value from the linked list and return the new head of the list.
// e.g. list `5 -> 4 -> 6 -> 4 -> X` should become `5 -> 6 -> 4 -> X`
struct node *list_delete_smallest(struct node *head) {

    return NULL;
}

// Given a linked list `head`, make a copy of the list and return the head of 
// the copied list.
struct node *list_copy(struct node *head) {
    return NULL;
}

// Given two linked lists, append list `head2` to list `head2`. 
// Return the head of this list 
struct node *list_append(struct node *head1, struct node *head2) {
    return NULL;
}

// Given a linked list `head`, reverse the list and return the new head of 
// the list.
struct node *list_reverse(struct node *head) {

  return NULL;
}

// Given two linked lists `head1` and `head2`, return a new list that is 
// constructed of nodes containing any values that appear in both lists.
struct node *list_find_intersection(struct node *head1, struct node *head2) {
    return NULL;
}

// Given a linked list `head` and a value `data`, return the number of times 
// that value appears in the linked list.
int list_count_occurrences(struct node *head, int data) {
    int count = 0;
    struct node *curr = head;
    while (curr != NULL) {
        if (curr->data == data) {
            count++;
        }
        curr = curr->next;
    }
    return count;
}

// Mallocs memory for a new node with given `data`
// Returns pointer to this new node
struct node *create_node(int data) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;

    return new_node;
}

// Inserts node with value `data` at the tail of list 
// `head`, returns the head of the list
struct node *insert_tail(struct node *head, int data) {
    struct node *new_node = create_node(data);

    if (head == NULL) {
        return new_node;
    }

    struct node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_node;

    return head;
}

// Prints out list `head` in format:
// 1 -> 2 -> 3 -> X
void print_list(struct node *head) {
    struct node *current = head;

    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("X\n");
}