/**
 * Copyright (c) 2012-2014 Magnet Systems, Inc. All rights reserved.
 */
 
#import "MMOptions.h"

/**
 * Options for an asynchronous call.  An asynchronous call allows the caller to
 * use the cached value and impose a restriction on when the call can be invoked.
 *
 * These types of options are only applicable when the user is online
 * and connected to the server.  If you would like to submit operations while offline
 * or need more reliable, long-lasting durable operations, use MMReliableCallOptions instead. 
 * If no options are specified, an asynchronous (unreliable) call is assumed.
 */
@interface MMAsyncCallOptions : MMOptions

@end
