//
//  EVResult.h
//  EverliveSDK
//
//  Created by Mehfuz Hossain on 8/28/13.
//  Copyright (c) 2013 Telerik Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EVResult : NSObject

@property (nonatomic, strong) NSData *rawData;
@property (nonatomic, strong) id obj;
@property (nonatomic, strong) NSError *error;

@end
