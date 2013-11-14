//
//  MMObjectSerializer.h
//  MagnetMobileServer
//
//  Created by Pritesh Shah on 5/20/13.
//  Copyright (c) 2013 Magnet Systems, Inc. All rights reserved.
//

@interface MMObjectSerializer : NSObject

+ (NSString *)convertToJSON:(id)object;
+ (NSDictionary *)convertToDictionary:(id)object;

@end
