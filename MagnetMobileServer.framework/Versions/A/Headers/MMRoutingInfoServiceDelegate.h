//
//  MMRoutingInfoServiceDelegate.h
//
//
//  Copyright (c) 2013 Magnet Systems, Inc. All rights reserved.
//

/**
 * The `MMRoutingInfoServiceDelegate` protocol defines the optional methods implemented by delegates of `MMRoutingInfoService` objects.
 */
@protocol MMRoutingInfoServiceDelegate <NSObject>

/** Indicates the delegate is ready with the routing info. */
@property (nonatomic, assign) BOOL isDataReady;

@optional


// Right now, routing info is just a NSString!
/**
 Provide the routing info for the app.
 
 @return A `id` object describing the routing info for the app.
 
 */
- (id)routingInfo;

@end