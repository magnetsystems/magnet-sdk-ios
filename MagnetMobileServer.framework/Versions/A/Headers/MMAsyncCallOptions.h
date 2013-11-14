//
//  MMAsyncCallOptions.h
//
//
//  Copyright (c) 2013 Magnet Systems, Inc. All rights reserved.
//

#import "MMOptions.h"

/**
 * Options for an asynchronous call.  An asynchronous call allows the caller to
 * use the cached value and to impose a restriction when the call can be invoked.
 *
 * These types of options are only applicable when the user is seen as "online"
 * and connected to the server.  If you wish to submit operations while in an "offline"
 * state, or there is a need for more reliable long-lasting durable operations then
 * use MMReliableCallOptions instead.
 *
 * If no options are specified, async (unreliable) call is assumed.
 */
@interface MMAsyncCallOptions : NSObject <MMOptions>

@end