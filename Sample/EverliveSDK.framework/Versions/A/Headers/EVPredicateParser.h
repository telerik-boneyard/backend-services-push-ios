//
//  EVPredicateParser.h
//  EverliveSDK
//
//  Created by Pavel Pavlov on 7/31/13.
//  Copyright (c) 2013 Telerik Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EVPredicateParser : NSObject
+ (NSData*)parsePredicate:(NSPredicate*) predicate;
@end
