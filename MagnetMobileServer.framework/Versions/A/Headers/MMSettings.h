/**
 * Copyright (c) 2012-2014 Magnet Systems, Inc. All rights reserved.
 */
 
/** Interface to settings.plist. */
@interface MMSettings : NSObject

/** 
 Returns the singleton settings instance.
 @return A dictionary that represents settings.plist.

 */
+ (NSDictionary *)sharedSettings;

/**
 Retrieves the Magnet SDK version string.
 @return The Magnet SDK version string. For example, "2.3.0".
 
 */
+ (NSString *) sdkVersion;


@end
