/**
 * Copyright (c) 2012-2014 Magnet Systems, Inc. All rights reserved.
 */
 
#import "MMLoginServiceProtocol.h"

/** Explicitly binds the user to the current session. */
@interface MMLoginService : NSObject <MMLoginServiceProtocol>

/**
 Retrieves the singleton login service instance.
 @return The singleton login service instance.
 
 */
+ (instancetype)sharedService;

@end
