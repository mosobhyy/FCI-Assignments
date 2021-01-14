// C++ code for inserting element in skip list

#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int value;

    Node **forward;

    Node(int, int);
};

Node::Node(int value, int level)
{
    this->value = value;

    forward = new Node *[level + 1];

    for (int i = 0; i <= level; i++)
        forward[i] = nullptr;
}

class SkipList
{
    int mxLevel;
    float P;
    int level;
    Node *header;

public:

    SkipList(int, float);

    int randLevel();

    Node *createNode(int, int);

    void insert(int);

    void display();
};

SkipList::SkipList(int mxLevel, float P)
{
    this->mxLevel = mxLevel;
    this->P = P;
    level = 0;

    header = new Node(-1, mxLevel);
};

// create random level for node
int SkipList::randLevel()
{
    float r = (float) rand() / RAND_MAX;
    int lvl = 0;
    while (r < P && lvl < mxLevel)
    {
        lvl++;
        r = (float) rand() / RAND_MAX;
    }
    return lvl;
};

// create new node
Node *SkipList::createNode(int value, int level)
{
    Node *n = new Node(value, level);
    return n;
};

// Insert given value in skip list
void SkipList::insert(int value)
{
    Node *current = header;

    // create update array and initialize it
    Node *update[mxLevel + 1];

    for (int i = 0; i <= level; i++)
        update[i] = nullptr;

    for (int i = level; i >= 0; i--)
    {
        while (current->forward[i] != nullptr &&
               current->forward[i]->value < value)
            current = current->forward[i];
        update[i] = current;
    }

    current = current->forward[0];

    if (current == nullptr || current->value != value)
    {
        int rand = randLevel();

        if (rand > level)
        {
            for (int i = level + 1; i < rand + 1; i++)
                update[i] = header;

            level = rand;
        }

        Node *n = createNode(value, rand);

        for (int i = 0; i <= rand; i++)
        {
            n->forward[i] = update[i]->forward[i];
            update[i]->forward[i] = n;
        }
        cout << "Inserted " << value << " Successfully\n";
    }
};

void SkipList::display()
{
    cout << "\n*************** List ***************\n\n";
    for (int i = 0; i <= level; i++)
    {
        Node *node = header->forward[i];
        cout << "Level " << i << ": ";
        while (node != NULL)
        {
            cout << node->value << " ";
            node = node->forward[i];
        }
        cout << "\n";
    }
};

int main()
{
    srand(time(nullptr));

    // create SkipList object with mxLevel and P
    SkipList l(3, 0.5);

    l.insert(74);
    l.insert(72);
    l.insert(20);
    l.insert(5);
    l.insert(4);
    l.insert(29);
    l.insert(32);
    l.insert(58);
    l.insert(75);
    l.insert(26);
    l.display();
}
