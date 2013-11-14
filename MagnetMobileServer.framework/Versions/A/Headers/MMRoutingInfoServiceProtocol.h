//
//  MMRoutingInfoServiceProtocol.h
//
//
//  Copyright (c) 2013 Magnet Systems, Inc. All rights reserved.
//

/**
 * The MMRoutingInfoServiceProtocol protocol defines the operations that can be performed using the `MMRoutingInfoService`.
 */
@protocol MMRoutingInfoServiceProtocol <NSObject>

/** Defines the routing info service delegate.
 * @see MMRoutingInfoServiceDelegate
 */
@property (nonatomic, weak) id<MMRoutingInfoServiceDelegate> delegate;

/** Sets the routing info by reading the information from the delegate. */
- (void)setRoutingInfo;

/** 
 * Returns the app URL.
 * @return A NSURL object
 */
- (NSURL *)appURL;

@end