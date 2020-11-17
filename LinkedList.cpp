#include <stdio.h>
#include "LinkedList.h"

bool isEven(int x) {
    bool res = false;
    if (x%2 == 0) {
        res = true;
    }
    return res;
}



Node::Node(int value) {
    this->value = value;
    next = NULL;
}


LinkedList::LinkedList() {
    head = NULL;
}

LinkedList::~LinkedList() {
    while (head != NULL) {
        removeFirst();
    }
}

bool LinkedList::isEmpty() {
    return head == NULL;
}

void LinkedList::addLast(int value) {
    Node* newNode = new Node(value);
    if (head == NULL){
        head = newNode;
    }
    else {
        Node* node = head;
        // Go until I find the end of the list
        // where the arrow points to nothing
        while (node->next != NULL) {
            node = node->next;
        }
        node->next = newNode;
    }
}

void LinkedList::addFirst(int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

int LinkedList::removeFirst() {
    int ret = -1;
    if (head != NULL) {
        ret = head->value;
        Node* newHead = head->next;
        delete head;
        head = newHead;
    }
    return ret;
}

void LinkedList::printList() {
    Node* node = head;
    while (node != NULL) {
        printf("%i", node->value);
        if (node->next != NULL) {
            printf(", ");
        }
        node = node->next;
    }
    printf("\n");
}