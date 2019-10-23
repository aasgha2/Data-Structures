/**
 * @file avltree.cpp
 * Definitions of the binary tree functions you'll be writing for this lab.
 * You'll need to modify this file.
 */
#include <cmath>
#include "avltree.h"
using namespace std;

template <class K, class V>
V AVLTree<K, V>::find(const K& key) const
{
    return find(root, key);
}

template <class K, class V>
V AVLTree<K, V>::find(Node* subtree, const K& key) const
{
    if (subtree == NULL)
        return V();
    else if (key == subtree->key)
        return subtree->value;
    else {
        if (key < subtree->key)
            return find(subtree->left, key);
        else
            return find(subtree->right, key);
    }
}

template <class K, class V>
void AVLTree<K, V>::rotateLeft(Node*& t)
{
    functionCalls.push_back("rotateLeft"); // Stores the rotation name (don't remove this)
    // your code here
    Node* tempNode = t->right;
    t->right = tempNode->left;
    tempNode->left = t;
    t->height = max(heightOrNeg1(t->left), heightOrNeg1(t->right)) + 1;
    tempNode->height = max(heightOrNeg1(tempNode->left), heightOrNeg1(tempNode->right)) + 1;
    t = tempNode;

}

template <class K, class V>
void AVLTree<K, V>::rotateLeftRight(Node*& t)
{
  cout << __LINE__ << endl;

    functionCalls.push_back("rotateLeftRight"); // Stores the rotation name (don't remove this)
    // Implemented for you:
    rotateLeft(t->left);
    rotateRight(t);
}

template <class K, class V>
void AVLTree<K, V>::rotateRight(Node*& t)
{
  cout << __LINE__ << endl;

    functionCalls.push_back("rotateRight"); // Stores the rotation name (don't remove this)
    // your code here
    Node* tempNode = t->left;
    t->left = tempNode->right;
    tempNode->right = t;
    t->height = max(heightOrNeg1(t->left), heightOrNeg1(t->right)) + 1;
    tempNode->height = max(heightOrNeg1(tempNode->left), heightOrNeg1(tempNode->right)) + 1;
    t = tempNode;

}

template <class K, class V>
void AVLTree<K, V>::rotateRightLeft(Node*& t)
{
  cout << __LINE__ << endl;

    functionCalls.push_back("rotateRightLeft"); // Stores the rotation name (don't remove this)
    // your code here
    rotateRight(t->right);
    rotateLeft(t);
}

template <class K, class V>
void AVLTree<K, V>::rebalance(Node*& subtree)
{
  if(subtree == NULL) {
    return;
  }
  cout << __LINE__ << endl;

    int balanceFactor = heightOrNeg1(subtree->right) - heightOrNeg1(subtree->left);
    if (balanceFactor == -2) {
    int leftBalance = heightOrNeg1(subtree->left->right) - heightOrNeg1(subtree->left->left);
    if(leftBalance == -1) {
      cout << __LINE__ << endl;

      rotateRight(subtree);
    } else {
      cout << __LINE__ << endl;

      rotateLeftRight(subtree);
    }
  } else if (balanceFactor == 2) {
    int rightBalance = heightOrNeg1(subtree->right->right) - heightOrNeg1(subtree->right->left);
    if(rightBalance == -1) {
      rotateRightLeft(subtree);
    } else {
      rotateLeft(subtree);
    }
  }
}

template <class K, class V>
void AVLTree<K, V>::insert(const K & key, const V & value)
{
    insert(root, key, value);
}

template <class K, class V>
void AVLTree<K, V>::insert(Node*& subtree, const K& key, const V& value)
{
    if(subtree == NULL) {
      cout << __LINE__ << endl;

      Node *temp = new Node(key, value);
      subtree = temp;
      return;
    }

    if(key < subtree->key) {
      cout << __LINE__ << endl;

      insert(subtree->left, key, value);
    } else {
      insert(subtree->right, key, value);
    }
    cout << __LINE__ << endl;

    rebalance(subtree);
}

template <class K, class V>
void AVLTree<K, V>::remove(const K& key)
{
    remove(root, key);
}

template <class K, class V>
void AVLTree<K, V>::remove(Node*& subtree, const K& key)
{
    if (subtree == NULL)
        return;

    if (key < subtree->key) {
        // your code here
        remove(subtree->left, key);
    } else if (key > subtree->key) {
        // your code here
        remove(subtree->right, key);
    } else {
        if (subtree->left == NULL && subtree->right == NULL) {
          delete subtree;
          subtree = NULL;
        } else if (subtree->left != NULL && subtree->right != NULL) {
           Node* curr = subtree->left;
           while(subtree->right != NULL) {
             curr = curr->right;
             cout << __LINE__ << endl;
           }
           swap(curr, subtree);
           remove(subtree->left, key);
           delete curr;
           curr = NULL;

        } else {
          if (subtree->left != NULL) {
            Node *temp = subtree;
            subtree = subtree->left;
            delete temp;
          } else if (subtree->right != NULL) {
            Node *temp = subtree;
            subtree = subtree->right;
            delete temp;
          }
        }
        rebalance(subtree);
    }
}
