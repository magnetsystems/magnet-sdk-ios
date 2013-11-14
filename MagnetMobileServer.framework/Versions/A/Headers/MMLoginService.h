//
//  MMLoginService.h
//
//
//  Copyright (c) 2013 Magnet Systems, Inc. All rights reserved.
//

#import "MMLoginServiceProtocol.h"
#import "MMLoginServiceDelegate.h"

/** Allows for explicitly binding user to the current session. */
@interface MMLoginService : NSObject <MMLoginServiceProtocol>

/**
 Returns the singleton login service instance.
 @return The singleton login service instance
 
 */
+ (instancetype)instance;

@end
