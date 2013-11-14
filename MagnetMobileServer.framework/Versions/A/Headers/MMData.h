//
//  MMData.h
//
//
//  Copyright (c) 2013 Magnet Systems, Inc. All rights reserved.
//

@interface MMData : NSObject <NSCoding>

/**
 * The mime type associated with this data object.
 */
@property(nonatomic, copy) NSString *mimeType;

/**
 * The actual binary data.
 */
@property(nonatomic, strong) NSData *binaryData;

@end
