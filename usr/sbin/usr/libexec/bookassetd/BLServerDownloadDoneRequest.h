//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface BLServerDownloadDoneRequest : NSObject
{
    _Bool _isCancel;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
    NSNumber *_accountID;	// 24 = 0x18
    NSString *_downloadID;	// 32 = 0x20
    NSURL *_finishURL;	// 40 = 0x28
    NSNumber *_storeID;	// 48 = 0x30
    NSString *_transactionID;	// 56 = 0x38
}

+ (void)notifyDownloadDoneWithAccountID:(id)arg1 downloadID:(id)arg2 storeID:(id)arg3 transactionID:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100074618
+ (void)notifyDownloadCancelledWithAccountID:(id)arg1 downloadID:(id)arg2 storeID:(id)arg3 transactionID:(id)arg4 cancelDownloadURL:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000100074500
- (void).cxx_destruct;	// IMP=0x0000000100074794
@property(copy, nonatomic) NSString *transactionID; // @synthesize transactionID=_transactionID;
@property(retain, nonatomic) NSNumber *storeID; // @synthesize storeID=_storeID;
@property(nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
@property(retain, nonatomic) NSURL *finishURL; // @synthesize finishURL=_finishURL;
@property(copy, nonatomic) NSString *downloadID; // @synthesize downloadID=_downloadID;
@property(retain, nonatomic) NSNumber *accountID; // @synthesize accountID=_accountID;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (id)_requestPromiseForDownloadDoneForAccountIdentifier:(id)arg1 storeID:(id)arg2 transactionID:(id)arg3 downloadID:(id)arg4 finishURL:(id)arg5;	// IMP=0x000000010007406c
- (void)start;	// IMP=0x0000000100073ac8
- (id)initWithAccountID:(id)arg1 downloadID:(id)arg2 storeID:(id)arg3 transactionID:(id)arg4 finishURL:(id)arg5 isCancel:(_Bool)arg6;	// IMP=0x000000010007399c
- (id)initWithAccountID:(id)arg1 downloadID:(id)arg2 storeID:(id)arg3 transactionID:(id)arg4;	// IMP=0x00000001000738f8
- (id)initWithAccountID:(id)arg1 downloadID:(id)arg2 storeID:(id)arg3 transactionID:(id)arg4 cancelDownloadURL:(id)arg5;	// IMP=0x000000010007380c

@end

