//
//  EulerNodeController.h
//  EulerFinder
//
//  Created by Jerrad Thramer on 2/8/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "EulerNode.h"



@interface EulerNodeController : NSObject


- (void) startTheHuntWithNodeLinks:(NSMutableArray *)nodes;
- (NSMutableArray *) buildEulerLinks;
- (NSMutableArray *) doHuntWithLinks:(NSMutableArray *)nodes parentIs:(id)parent;

@end
