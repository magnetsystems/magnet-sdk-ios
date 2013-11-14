//
//  MMListResponse.h
//
//
//  Copyright (c) 2013 Magnet Systems, Inc. All rights reserved.
//

@interface MMListResponse : NSObject <NSCoding>

/** Provides access to the type information for the response, or nil if it's unknown or heterogeneous. */
@property(nonatomic, copy) NSString *type;

//@property (nonatomic, copy) NSString *byValue;

/** Start index of the response. */
@property(nonatomic, strong) NSNumber *startIndex;

/** Page size of the response. */
@property(nonatomic, strong) NSNumber *pageSize;

/** Total response size. */
@property(nonatomic, strong) NSNumber *totalSize;

/** Next page Url. */
@property(nonatomic, copy) NSString *nextPageUrl;

/** Response data. */
@property(nonatomic, copy) NSArray *page;

@end
