//
//  URLFactory.h
//  EverliveSDK
//
//  Created by Pavel Pavlov on 7/22/13.
//  Copyright (c) 2013 Telerik Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EVConstants.h"
#import "EverliveOperations.h"

@interface EVURLFactory : NSObject

+(NSURL*)urlWithContentType:(NSString*)contentType withId:(NSString*)objectId appKey:(NSString*) appKey;
+(NSURL*)countUrlWithContentType:(NSString*) contentType appKey:(NSString*) appKey;
+(NSURL*)adfsMetaDataUrlWithAppKey:(NSString*) appKey;

@end
