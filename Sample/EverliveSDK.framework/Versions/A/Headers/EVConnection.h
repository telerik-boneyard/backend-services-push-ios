//
//  EVConnection.h
//  EverliveSDK
//
//  Created by Mehfuz Hossain on 7/19/13.
//  Copyright (c) 2013 Telerik Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EVConstants.h"
#import "EVURLRequest.h"
#import "EVResult.h"

@interface EVConnection : NSObject

+ (void)sendAsynchronousRequest:(EVURLRequest*)request;
+ (void)sendAsynchronousRequest:(EVURLRequest*)request block:(void (^)(EVResult* result))block;
+ (void)sendAsynchronousRequest:(NSURL*)url body:(NSDictionary*)body httpMethod:(NSString*)httpMethod block:(EVResultBlock)block;

@end
