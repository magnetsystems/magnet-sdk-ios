//
//  MMConstraint.h
//
//
//  Copyright (c) 2013 Magnet Systems, Inc. All rights reserved.
//

@interface MMConstraint : NSObject

/**
 * Subclasses should override this method and return true if the constraint is allowed.
 */
+ (BOOL)isAllowed;

/**
 * Do not override this method.
 * Subclasses should call this method to indicate that the constraint is met.
 * This method is useful when the constraint computation is asynchronous (like Geo-fenced constraints).
 */
+ (void)notifyThatConstraintIsMet;

@end
