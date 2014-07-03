/**
 * Copyright (c) 2012-2014 Magnet Systems, Inc. All rights reserved.
 */
 
/**
 * This interface represents an asynchronous invocation to a controller.  An
 * instance of the object is typically returned by a method call from any
 * MMController implementation.
 * If the options are not specified in the MMController subclass method
 * call, a fail-fast asynchronous call will be assumed.
 * <p/>
 *
 */
@interface MMCall : NSOperation

/**
 * A system-generated unique ID for this call.
 */
@property(nonatomic, readonly) NSString *callId;

/**
 * A custom opaque token provided by the caller.
 */
@property(nonatomic, readonly) NSString *token;

/**
 * The last cached time of the result.  It is available only
 * if isFinished returns YES.
 */
@property(nonatomic, readonly) NSDate *cachedTime;

/**
 * Indicates whether the result is retrieved from the cache.
 */
@property(nonatomic, readonly) BOOL isResultFromCache;

/**
 * The result returned by the call.
 * This property is `nil` if the call failed.
 */
@property(nonatomic, strong, readonly) id result;

/**
 * The error, if any, that occurred during execution of the call.
 * A `nil` error value indicates that the call completed successfully.
 */
@property(nonatomic, strong, readonly) NSError *error;

/**
 * Dispose this call and optionally clear its result from cache.
 */
- (void)disposeAndClearResult:(BOOL)shouldClearResult
                        block:(void (^)(BOOL success, NSError *error))block;


/**
 Posted when a reliable call finishes.
 */
extern NSString *const MMReliableCallDidFinishNotification;

@end
