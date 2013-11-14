//
//  MMObjectMapper.h
//  MagnetMobileServer
//
//  Created by Pritesh Shah on 5/20/13.
//  Copyright (c) 2013 Magnet Systems, Inc. All rights reserved.
//

@interface MMObjectMapper : NSObject

+ (id)mapFromJSON:(NSString *)json
       returnType:(NSString *)returnType;

@end
