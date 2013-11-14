//
//  MMCallManager.h
//
//
//  Copyright (c) 2013 Magnet Systems, Inc. All rights reserved.
//

@class MMCall;

/**
 * This interface provides the basic cache management, queue management,
 * and reliable calls management.  All methods in this interface are blocking
 * methods.
 */
@interface MMCallManager : NSObject

/**
 Return the shared instance of the call manager

 @return The shared call manager instance.
 */
+ (instancetype)instance;

/**
 * Clear all cached results.
 */
- (void)clearCache;

/**
 * Cancel all pending reliable calls.
 */
- (void)cancelAllPendingCalls;

/**
 * Cancel all pending reliable calls in a queue.
 * @param queueName A queue name.
 */
- (void)cancelAllPendingCalls:(NSString *)queueName;

/**
 * Get all pending reliable calls.
 * @return A collection of pending Call objects.
 */
- (NSArray *)allPendingCalls;

/**
 * Get all pending reliable calls in a queue.  This is a blocking method.
 * @param queueName A queue name.
 * @return A collection of pending MMCall objects.
 */
- (NSArray *)allPendingCalls:(NSString *)queueName;

/**
 * Get a MMCall instance by its unique ID.  It is for reliable calls
 * only. May return nil if callId is invalid, the call is timed out, or the async
 * call was "done".
 * @param callId A MMCall uuid.
 * @return A MMCall object or nil.
 */
- (MMCall *)call:(NSString *)callId;

/**
 * Shortcut for calling cancelAllPendingCalls and clearCache
 */
- (void)reset;

/**
 * Triggers all non-empty thread queues to be awaken (if asleep) to
 * re-attempt processing.
 */
- (void)run;

@end