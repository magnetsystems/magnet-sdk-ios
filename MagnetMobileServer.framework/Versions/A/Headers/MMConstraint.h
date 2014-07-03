/**
 * Copyright (c) 2012-2014 Magnet Systems, Inc. All rights reserved.
 */
 
@interface MMConstraint : NSObject

/**
 * Subclasses must override this method and return true if the constraint is allowed.
 */
+ (BOOL)isAllowed;

/**
 * Do not override this method.
 * Subclasses must call this method to indicate that the constraint is met.
 * Use this method when the constraint computation is asynchronous (for example, Geo-fenced constraints).
 * This method will trigger a notification of type "com.magnet.mobileserver.<constraint_subclass_name>WasMet". *
 * @param userInfo An optional userinfo object
 */
+ (void) notifyThatConstraintIsMetWithUserInfo : (NSDictionary *) userInfo;

/**
 * Subclasses must call this method to indicate that the constraint is not met.
 * Use this method when the constraint computation is asynchronous (for example, Geo-fenced constraints).
 * This method will trigger a notification of type "com.magnet.mobileserver.<constraint_subclass_name>WasNotMet". *
 * @param userInfo An optional userinfo object
 */
 + (void) notifyThatConstraintIsNotMetWithUserInfo : (NSDictionary *) userInfo;

@end
