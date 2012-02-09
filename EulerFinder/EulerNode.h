//
//  EulerNode.h
//  EulerFinder
//
//  Created by Jerrad Thramer on 2/8/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EulerNode : NSObject

int NodeSerial;
NSMutableArray *nodeLinks;
id parentNode;

@property (nonatomic, readonly) int NodeID;
@property (nonatomic, retain) NSMutableArray *NodeLinks;

- (NSString)huntWithNodeLinks:(NSMutableArray *)links referringNode:(id)parent;

@end
