//
//  MMReliableCallOptions.h
//
//
//  Copyright (c) 2013 Magnet Systems, Inc. All rights reserved.
//

#import "MMOptions.h"

/**
 * Options for a reliable asynchronous call.  A reliable asynchronous call
 * allows the caller to use the cached value, to queue up a call in a persistent
 * storage even if the caller is offline at submission time, to execute the calls
 * in sequential manner, to impose a restriction when the call can be invoked and to
 * specify a timeout for this call.
 */
@interface MMReliableCallOptions : NSObject <MMOptions>

/**
 * Place a call on a queue specified by a queue name.  The pending calls on a queue will be
 * invoked sequentially.  If concurrent invocation is wanted, the calls should be put on multiple reliableQueues.
 */
@property(nonatomic, copy) NSString *queueName;

/**
 * The request expiry time.
 */
@property(nonatomic) NSTimeInterval requestTimeout;

@end