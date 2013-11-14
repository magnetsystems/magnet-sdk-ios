//
//  MMRoutingInfoService.h
//
//
//  Copyright (c) 2013 Magnet Systems, Inc. All rights reserved.
//

#import "MMRoutingInfoServiceDelegate.h"
#import "MMRoutingInfoServiceProtocol.h"

/** Provides an interface to configure the routing info for apps running behind a proxy. */
@interface MMRoutingInfoService : NSObject <MMRoutingInfoServiceProtocol>

/**
 Returns the singleton routing info service instance.
 @return The singleton routing info service instance
 
 */
+ (instancetype)instance;

@end
