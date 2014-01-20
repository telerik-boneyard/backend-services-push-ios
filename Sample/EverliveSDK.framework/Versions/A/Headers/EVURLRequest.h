//
//  EVURLRequest.h
//  EverliveSDK
//
//  Created by Mehfuz Hossain on 8/28/13.
//  Copyright (c) 2013 Telerik Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EVURLRequest : NSObject
{
    NSString *httpMethod;
}

@property id target;
@property SEL selector;

@property (nonatomic, strong) NSURL *url;
@property (nonatomic, strong) NSData *body;
@property (nonatomic, strong) NSMutableDictionary *headers;
@property id sender;
@property (nonatomic, strong) NSString *httpMethod;

+ (id)countRequestWithKindOfClass:(Class)aClass;
+ (id)requestWithURL:(NSURL*)url;
+ (id)requestWithObject:(id)obj;
+ (id)requestWithKindOfClass:(Class)aClass;
+ (id)requestWithKindOfClass:(id)aClass uniqueId:(NSString*)uniqueId;

@end
