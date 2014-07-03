/**
 * Copyright (c) 2012-2014 Magnet Systems, Inc. All rights reserved.
 */
 
#import "MMOptions.h"

/**
 * Options for a reliable asynchronous call.  A reliable asynchronous call
 * allows the caller to:
 * - Use the cached value.
 * - Queue a call in persistent storage even if the caller is offline at submission time.
 * - Execute the calls in a sequential manner.
 * - Impose a restriction on when the call can be invoked.
 * - Specify a timeout for the call.
 */
@interface MMReliableCallOptions : MMOptions

/**
 * Place a call on the specified queue.  The pending calls on the queue will be
 * invoked sequentially.  
 * When using concurrent invocation, place the calls on multiple reliable queues.
 */
@property(nonatomic, copy) NSString *queueName;

/**
 * The request expiry time.
 */
@property(nonatomic) NSTimeInterval requestTimeout;

@end
