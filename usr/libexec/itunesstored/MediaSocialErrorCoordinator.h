//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableOrderedSet;
@protocol MediaSocialErrorDelegate, OS_dispatch_queue;

@interface MediaSocialErrorCoordinator : NSObject
{
    id <MediaSocialErrorDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    id _notification;	// 24 = 0x18
    NSMutableOrderedSet *_postIDs;	// 32 = 0x20
    NSArray *_temporaryPostIDs;	// 40 = 0x28
    NSArray *_temporaryUploadIDs;	// 48 = 0x30
    NSMutableOrderedSet *_uploadIDs;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001001138c8
@property(nonatomic) __weak id <MediaSocialErrorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_showDialog:(id)arg1;	// IMP=0x00000001001136d8
- (void)_sendDidFinishWithResponseFlags:(unsigned long long)arg1;	// IMP=0x00000001001135e4
- (id)_newErrorDialogWithServerMessageWithPost:(id)arg1 erroMessage:(id)arg2 canRetry:(_Bool)arg3;	// IMP=0x0000000100113144
- (id)_newSingleErrorDialogWithUpload:(id)arg1;	// IMP=0x0000000100112d34
- (id)_newSingleErrorDialogWithPost:(id)arg1;	// IMP=0x0000000100112924
- (id)_newPluralErrorDialogWithUploadCount:(long long)arg1;	// IMP=0x0000000100112864
- (id)_newPluralErrorDialogWithPostCount:(long long)arg1 uploadCount:(long long)arg2;	// IMP=0x00000001001124f4
- (id)_newPluralErrorDialogWithPostCount:(long long)arg1;	// IMP=0x0000000100112434
- (id)_newPluralErrorDialogWithCount:(long long)arg1 formatString:(id)arg2;	// IMP=0x0000000100112164
@property(readonly, copy, nonatomic) NSArray *uploadIdentifiers;
@property(readonly, copy, nonatomic) NSArray *postIdentifiers;
- (void)dismissAllDialogs;	// IMP=0x0000000100112048
- (_Bool)addDialogForUploadIdentifiers:(id)arg1;	// IMP=0x0000000100111ef4
- (_Bool)addDialogForUpload:(id)arg1;	// IMP=0x0000000100111d6c
- (_Bool)addDialogForPost:(id)arg1 errorMessage:(id)arg2 canRetry:(_Bool)arg3;	// IMP=0x0000000100111c44
- (_Bool)addDialogForPost:(id)arg1;	// IMP=0x0000000100111ac8
- (id)initWithDispatchQueue:(id)arg1;	// IMP=0x0000000100111a50

@end

