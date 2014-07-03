/**
 * Copyright (c) 2012-2014 Magnet Systems, Inc. All rights reserved.
 */
 
#import <CoreLocation/CoreLocation.h>
#import "MMTagUtilities.h"

@interface MMOptions : NSObject

/**
 * Optional.  A user can set a custom opaque token for this call.
 */
@property(nonatomic, copy) NSString *token;

/**
 * Invoke the call only if this constraint is met.
 * This means asynchronous (non-reliable) calls will fail fast. Reliable calls will wait.
 * The constraint must be of type MMConstraint. 
 * @see MMConstraint
 */
@property(nonatomic, strong) Class constraint;

/**
 * Tags to be added to a call.
 */
@property(nonatomic, readonly) NSDictionary *tags;

/**
 * Specify the age of the cached value.  If this option is specified, the call
 * will attempt to use the cached value and the response will always be cached.
 * If not specified, the cached value will be discarded and the response will
 * not be cached.
 * @param timeout Set to 0 to discard the cache. Specify a value greater than 0 to use the cache if the age is still valid.
 * @param ignoreIfOffline Set to true to ignore the timeout in offline mode, false otherwise.
 */
- (void)setCacheAge:(NSTimeInterval)timeout
    ignoreIfOffline:(BOOL)ignoreIfOffline;

/**
 * Add tags to a controller call.
 * @param value The value of the tag to be added to a call.
 * @param key The key for the tag to be added to a call.
 */
- (void)addTagValue:(NSString *)value
             forKey:(NSString *)key;

/**
 * Add tags to a controller call.
 * @param tags Key-value pairs of tags to be added to a call.
 */
- (void)addTags:(NSDictionary *)tags;


@end
