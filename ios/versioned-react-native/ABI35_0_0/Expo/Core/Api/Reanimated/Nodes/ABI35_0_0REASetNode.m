#import "ABI35_0_0REASetNode.h"
#import "ABI35_0_0REAValueNode.h"
#import "ABI35_0_0REANodesManager.h"

@implementation ABI35_0_0REASetNode {
  NSNumber *_whatNodeID;
  NSNumber *_valueNodeID;
}

- (instancetype)initWithID:(ABI35_0_0REANodeID)nodeID config:(NSDictionary<NSString *,id> *)config
{
  if ((self = [super initWithID:nodeID config:config])) {
    _whatNodeID = config[@"what"];
    _valueNodeID = config[@"value"];
  }
  return self;
}

- (id)evaluate
{
  NSNumber *newValue = [[self.nodesManager findNodeByID:_valueNodeID] value];
  ABI35_0_0REAValueNode *what = (ABI35_0_0REAValueNode *)[self.nodesManager findNodeByID:_whatNodeID];
  [what setValue:newValue];
  return newValue;
}

@end
