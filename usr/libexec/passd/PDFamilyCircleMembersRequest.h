//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDFamilyCircleRequest-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface PDFamilyCircleMembersRequest : NSObject <PDFamilyCircleRequest>
{
    NSMutableArray *_completionHandlers;	// 8 = 0x8
    _Bool _ignoreCache;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001001c5d18
@property(readonly, copy, nonatomic) NSArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(nonatomic) _Bool ignoreCache; // @synthesize ignoreCache=_ignoreCache;
- (id)_pkFamilyMemberArrayFromFAFamilyMemberArray:(id)arg1;	// IMP=0x00000001001c5b6c
- (void)executeRequestWithManager:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001c5740
- (_Bool)_canCoalesceRequest:(id)arg1;	// IMP=0x00000001001c56a0
- (_Bool)coalesceWithRequest:(id)arg1;	// IMP=0x00000001001c560c
@property(readonly, nonatomic) unsigned long long requestType;
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001c55bc
- (id)init;	// IMP=0x00000001001c5558

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

