//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PDLocationMap : NSObject
{
    NSMutableDictionary *_locationsByUniqueID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010026b924
- (id)description;	// IMP=0x000000010026b914
- (id)locationsForUniqueID:(id)arg1;	// IMP=0x000000010026b904
- (void)insertLocation:(id)arg1 forUniqueID:(id)arg2;	// IMP=0x000000010026b850
- (id)init;	// IMP=0x000000010026b7ec

@end

