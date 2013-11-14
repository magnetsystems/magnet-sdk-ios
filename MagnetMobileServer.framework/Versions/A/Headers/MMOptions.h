//
//  MMOptions.h
//
//
//  Copyright (c) 2013 Magnet Systems, Inc. All rights reserved.
//

@protocol MMOptions <NSObject>

@required

/**
 * Optional.  A user can set a custom opaque token for this call.
 */
@property(nonatomic, copy) NSString *token;

/**
 * Invoke the call only if this constraint is met.
 * This means Async (non-reliable) calls will fail fast. Reliable calls will wait.
 * constraint should be of type MMConstraint, @see MMConstraint
 */
@property(nonatomic, strong) Class constraint;

/**
 * Specify the age of the cached value.  If this option is specified, the call
 * will attempt to use the cached value and the response will always be cached.
 * If not specified, the cached value will be discarded and the response will
 * not be cached.
 * @param timeout 0 to discard the cache, > 0 to use the cache if the age is still valid.
 * @param ignoreIfOffline true to ignore the timeout in offline mode.
 */
- (void)setCacheAge:(NSTimeInterval)timeout
    ignoreIfOffline:(BOOL)ignoreIfOffline;

@end