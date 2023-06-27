//counts elements of a linked list, always starts inside loop - count only elements of loop
int loopLength(class Node* startNode)
{
  int count = 1;
  
  class Node* tmp = startNode;
  
  while(tmp->getNext() != startNode)
  {
    ++count;
    tmp = tmp->getNext();
  }
  
  return count;
}

int getLoopSize(Node* startNode)
{
  class Node *nodePtrSlow = startNode, *nodePtrFast = startNode;
 
  while(nodePtrFast->getNext())
  {
    nodePtrSlow = nodePtrSlow->getNext();
    nodePtrFast = nodePtrFast->getNext()->getNext();
    
    //loop detector
    if(nodePtrSlow == nodePtrFast) return loopLength(nodePtrFast);
  }
  
  //returns 0 when ther is NO loop
  return 0;
}
