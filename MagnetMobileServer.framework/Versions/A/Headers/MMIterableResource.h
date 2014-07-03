/**
 * Copyright (c) 2012-2014 Magnet Systems, Inc. All rights reserved.
 */
 
#import <Mantle/Mantle.h>


@interface MMIterableResource : MTLModel

/** Provides access to the type information for the response, or `nil` if it is unknown or heterogeneous. */
@property(nonatomic, copy) NSString *type;

//@property (nonatomic, copy) NSString *byValue;

/** Start index of the response. */
@property(nonatomic, assign) int startIndex;

/** Page size of the response. */
@property(nonatomic, assign) int pageSize;

/** Total response size. */
@property(nonatomic, assign) int totalSize;

/** Next page URL. */
@property(nonatomic, copy) NSString *nextPageUrl;

/** Response data. */
@property(nonatomic, copy) NSArray *page;

@end
