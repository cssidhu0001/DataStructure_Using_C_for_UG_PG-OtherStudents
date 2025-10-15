
    {
        head->Link = head;
        free(temp);
        printf("First node of the Linked List has been Deleted Sucesfully!!");
    }
}

void insertatmidUsingPos()
{
    int valueinsert, pos;
    struct Node *newnode, *temp = head;

    newnode = (struct Node *)malloc(1 * (sizeof(struct Node)));
    printf("\nInsert at Mid in Singly Linked List!!\n");
    printf("\nEnter the position after which you want to insert in Linked List: ");
    scanf("%d", &pos);
    printf("\nEnter the value you want to insert at front of Linked List: ");
    scanf("%d", &valueinsert);

    newnode->Data = valueinsert;
    newnode->Link = NULL;

    int count = 0;
    while (count < pos - 1)
    {
        temp = temp->Link;
        count++;
    }
    newnode->Link = temp->Link;
    temp->Link = newnode;
    printf("Node at Pos %d has been inserted Sucessfully!!");
}
