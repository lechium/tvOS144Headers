//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, StoreDownloadQueueResponse;

@interface RestoreDownloadItemsResponse : NSObject
{
    NSArray *_requestItems;	// 8 = 0x8
    StoreDownloadQueueResponse *_serverResponse;	// 16 = 0x10
}

@property(retain, nonatomic) StoreDownloadQueueResponse *serverResponse; // @synthesize serverResponse=_serverResponse;
@property(copy, nonatomic) NSArray *requestItems; // @synthesize requestItems=_requestItems;
- (void)setServerResponseWithError:(id)arg1;	// IMP=0x00000001001a691c
- (void)dealloc;	// IMP=0x00000001001a68cc

@end
