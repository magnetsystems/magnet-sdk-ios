/**
 * Copyright (c) 2012-2014 Magnet Systems, Inc. All rights reserved.
 */
 
#import <CoreLocation/CoreLocation.h>

/**
 Geolocation tag constant.
 */
extern NSString * const MMGeolocationTag;

/**
 Retrieves a GeolocationTag of a CLLocation value.
 */
extern NSString * MMGeolocationTagFromLocation(CLLocation *location);

/**
 Request time tag constant.
 */
extern NSString * const MMRequestTimeTag;

/**
 Retrieves a RequestTimeTag of an NSDate value.
 */
extern NSString *MMRequestTimeTagFromDate(NSDate *date);


/**
 Network info tag constant.
 */
extern NSString * const MMNetworkInfoTag;

/**
 Retrieves the current NetworkInfoTag value.
 */
extern NSString *MMCurrentNetworkInfoTagValue();
