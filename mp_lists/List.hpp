/**
 * @file list.cpp
 * Doubly Linked List (MP 3).
 */

template <class T>
List<T>::List() {
  // @TODO: graded in MP3.1
    head_ = NULL;
    tail_ = NULL;
    length_ = 0;
  }

/**
 * Returns a ListIterator with a position at the beginning of
 * the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::begin() const {
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(head_);
}

/**
 * Returns a ListIterator one past the end of the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::end() const {
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(NULL);
}


/**
 * Destroys all dynamically allocated memory associated with the current
 * List class.
 */
template <typename T>
void List<T>::_destroy() {
  /// @todo Graded in MP3.1
  ListNode *temp = new ListNode;
  while(head_ != NULL) {
    temp = head_->next;
    delete head_;
    head_ = temp;
  }
  delete temp;
  delete head_;
  temp = NULL;
  head_ = NULL;
  tail_ = NULL;
  length_ = 0;

}

/**
 * Inserts a new node at the front of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertFront(T const & ndata) {
  /// @todo Graded in MP3.1

  ListNode * newNode = new ListNode(ndata);
  newNode->prev = NULL;
  if (head_ ==  NULL && tail_ == NULL) {
    newNode->next = NULL;
    head_ = newNode;
    tail_ = newNode;
  } else {
    newNode->next = head_;
    head_->prev = newNode;
    head_ = newNode;
  }
  length_++;
}

/**
 * Inserts a new node at the back of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertBack(const T & ndata) {
  /// @todo Graded in MP3.1
        //cout << "reached 2" << endl;

  ListNode * newNode = new ListNode(ndata);
  newNode->next = NULL;

  if(tail_ == NULL && head_ == NULL) {
    newNode->prev = NULL;
    head_ = newNode;
    tail_ = newNode;
  } else {
    newNode->prev = tail_;
    tail_->next = newNode;
    tail_ = newNode;
  }
  length_++;
}

/**
 * Helper function to split a sequence of linked memory at the node
 * splitPoint steps **after** start. In other words, it should disconnect
 * the sequence of linked memory after the given number of nodes, and
 * return a pointer to the starting node of the new sequence of linked
 * memory.
 *
 * This function **SHOULD NOT** create **ANY** new List or ListNode objects!
 *
 * This function is also called by the public split() function located in
 * List-given.hpp
 *
 * @param start The node to start from.
 * @param splitPoint The number of steps to walk before splitting.
 * @return The starting node of the sequence that was split off.
 */
template <typename T>
typename List<T>::ListNode * List<T>::split(ListNode * start, int splitPoint) {
  /// @todo Graded in MP3.1

  if (splitPoint >= this->length_){
     return start;
  }
  if (splitPoint < 0){
     return start;
  }
  ListNode *curr = start;
  for (int i = 0; i < splitPoint; i++) {
    if (curr->next == NULL) {
      return NULL;
    }
    curr = curr->next;
  }

  if (curr->prev != NULL) {
    curr->prev->next = NULL;
  }
  curr->prev = NULL;
  return curr;
}

/**
 * Modifies the List using the waterfall algorithm.
 * Every other node (starting from the second one) is removed from the
 * List, but appended at the back, becoming the new tail. This continues
 * until the next thing to be removed is either the tail (**not necessarily
 * the original tail!**) or NULL.  You may **NOT** allocate new ListNodes.
 * Note that since the tail should be continuously updated, some nodes will
 * be moved more than once.
 */
template <typename T>
void List<T>::waterfall() {
  /// @todo Graded in MP3.1
  cout << "reached waterfall 1" << endl;
  if (head_ == NULL || head_->next == NULL){
     return;
   }

   ListNode *curr = head_;
   ListNode *temp;

   while (curr != tail_ && curr != tail_->prev) {
     temp = curr->next->next;
     tail_->next = curr->next;
     curr->next->prev = tail_;
     curr->next->next = NULL;
     curr->next = temp;
     if (temp != NULL) {
       temp->prev = curr;
     }
     tail_ = tail_->next;
     curr = curr->next;
   }
}
/**
 * Reverses the current List.
 */
template <typename T>
void List<T>::reverse() {
  reverse(head_, tail_);
}

/**
 * Helper function to reverse a sequence of linked memory inside a List,
 * starting at startPoint and ending at endPoint. You are responsible for
 * updating startPoint and endPoint to point to the new starting and ending
 * points of the rearranged sequence of linked memory in question.
 *
 * @param startPoint A pointer reference to the first node in the sequence
 *  to be reversed.
 * @param endPoint A pointer reference to the last node in the sequence to
 *  be reversed.
 */
template <typename T>
void List<T>::reverse(ListNode *& startPoint, ListNode *& endPoint) {
  /// @todo Graded in MP3.2
  if (startPoint == NULL || endPoint == NULL || startPoint == endPoint) {
    return;
  }


  ListNode *tempB = startPoint->prev;
  ListNode *tempE = endPoint->next;

  ListNode *curr = endPoint;

  while (curr != tempB) {
    ListNode *temp = curr->next;
    curr->next = curr->prev;
    curr->prev = temp;
    curr = curr->next;
  }

  startPoint->next = tempE;
  endPoint->prev = tempB;

  if (tempE != NULL) {
    tempE->prev = startPoint;
  }
  if(tempB != NULL) {
    tempB->next = endPoint;
  }

  ListNode *temp2 = startPoint;
  startPoint = endPoint;
  endPoint = temp2;
}

/**
 * Reverses blocks of size n in the current List. You should use your
 * reverse( ListNode * &, ListNode * & ) helper function in this method!
 *
 * @param n The size of the blocks in the List to be reversed.
 */
template <typename T>
void List<T>::reverseNth(int n) {
  /// @todo Graded in MP3.2

  if (tail_ == head_) {
    return;
  }
  if (n > length_){
    reverse(head_, tail_);
    return;
  }
  if (n == length_){
    reverse(head_, tail_);
    return;
  }
  if (n <= 0){
    return;
  }

  ListNode *first = head_;
  ListNode *last = head_;
  bool firs = true;

  for (int i = 0; i < this->size(); i += n) {
    for (int i = 0; i < n-1; i++) {
      if (last->next == NULL) {
        break;
      }
        last = last->next;
    }

    reverse(first, last);

    if (firs) {
      head_ = first;
      firs = false;
    }
    tail_ = last;
    first = last->next;
    last = last->next;
  }
}


/**
 * Merges the given sorted list into the current sorted list.
 *
 * @param otherList List to be merged into the current list.
 */
template <typename T>
void List<T>::mergeWith(List<T> & otherList) {
    // set up the current list
    head_ = merge(head_, otherList.head_);
    tail_ = head_;

    // make sure there is a node in the new list
    if (tail_ != NULL) {
        while (tail_->next != NULL)
            tail_ = tail_->next;
    }
    length_ = length_ + otherList.length_;

    // empty out the parameter list
    otherList.head_ = NULL;
    otherList.tail_ = NULL;
    otherList.length_ = 0;
}

/**
 * Helper function to merge two **sorted** and **independent** sequences of
 * linked memory. The result should be a single sequence that is itself
 * sorted.
 *
 * This function **SHOULD NOT** create **ANY** new List objects.
 *
 * @param first The starting node of the first sequence.
 * @param second The starting node of the second sequence.
 * @return The starting node of the resulting, sorted sequence.
 */
template <typename T>
typename List<T>::ListNode * List<T>::merge(ListNode * first, ListNode* second) {
  /// @todo Graded in MP3.2

  if (first == NULL && second == NULL){
    return NULL;
  }
  if (first == NULL){
    return second;
  }
  if (second == NULL){
    return first;
  }
  ListNode* mergeFront = NULL;
  if (first->data < second->data){
    mergeFront = first;
    first = first->next;
  }
  else {
    mergeFront = second;
    second = second->next;
  }
  ListNode* mergeCount = mergeFront;
  while (first!=NULL && second!=NULL){
    if (first->data < second->data){
      first->prev = mergeCount;
      mergeCount->next = first;
      first = first->next;
    }
    else {
      second->prev = mergeCount;
      mergeCount->next = second;
      second = second->next;
    }
    mergeCount = mergeCount->next;
  }

  if (first == NULL){
     second->prev = mergeCount;
     mergeCount->next = second;
  }
  if (second == NULL){
     first->prev = mergeCount;
     mergeCount->next = first;
  }

   return mergeFront;
}

/**
 * Sorts a chain of linked memory given a start node and a size.
 * This is the recursive helper for the Mergesort algorithm (i.e., this is
 * the divide-and-conquer step).
 *
 * Called by the public sort function in List-given.hpp
 *
 * @param start Starting point of the chain.
 * @param chainLength Size of the chain to be sorted.
 * @return A pointer to the beginning of the now sorted chain.
 */
template <typename T>
typename List<T>::ListNode* List<T>::mergesort(ListNode * start, int chainLength) {
  /// @todo Graded in MP3.2
  if (chainLength <= 1) {
    return start;
  }

  ListNode *temp2 = mergesort(split(start, chainLength/2), chainLength - chainLength/2);
  ListNode *temp1 = mergesort(start, chainLength/2);
  return merge(temp1, temp2);
}
