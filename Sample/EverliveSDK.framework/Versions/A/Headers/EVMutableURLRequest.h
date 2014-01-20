//
//  EVMutableURLRequest.h
//  EverliveSDK
//
//  Created by Mehfuz Hossain on 8/28/13.
//  Copyright (c) 2013 Telerik Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EVURLRequest.h"

@interface EVMutableURLRequest : EVURLRequest

- (void)setHTTPMethod:(NSString*)method;
- (void)setHTTPBody:(NSDictionary*)body;
- (void)setPredicate:(NSPredicate *)predicate;

@end
