//
//  MMSettings.h
//
//
//  Copyright (c) 2013 Magnet Systems, Inc. All rights reserved.
//

/** Interface to settings.plist */
@interface MMSettings : NSObject

/** 
 Returns the singleton settings instance.
 @return A dictionary that represents settings.plist

 */
+ (NSDictionary *)sharedSettings;

@end
