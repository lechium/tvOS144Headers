//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PKSharingIDSManagerDataSource-Protocol.h"

@class NSMutableArray, NSString;
@protocol PDFamilyCircleRequest;

@interface PDFamilyCircleManager : NSObject <PKSharingIDSManagerDataSource>
{
    NSMutableArray *_fetchRequests;	// 8 = 0x8
    id <PDFamilyCircleRequest> _currentRequest;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001c5528
- (void)_executeNextRequestIfPossible;	// IMP=0x00000001001c53cc
- (void)_addFamilyCircleRequest:(id)arg1;	// IMP=0x00000001001c511c
- (void)familyMemberForHandle:(id)arg1 sharingManager:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001c4e14
- (void)photosForFamilyMembersWithDSIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001c4aac
- (void)familyMembersIgnoringCache:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001c4824
- (void)dealloc;	// IMP=0x00000001001c47ac
- (id)init;	// IMP=0x00000001001c4744

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

