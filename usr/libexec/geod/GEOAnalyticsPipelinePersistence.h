//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GEOKeyBagProtectedDataDidBecomeAvailableObserver-Protocol.h"

@class GEOSQLiteDB, NSString;

@interface GEOAnalyticsPipelinePersistence : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver>
{
    GEOSQLiteDB *_db;	// 8 = 0x8
    _Bool _shadowEnabled;	// 16 = 0x10
    NSString *_dbFilePath;	// 24 = 0x18
    _Bool _firstAuthComplete;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010001c1cc
- (void).cxx_destruct;	// IMP=0x0000000100020d20
- (void)clearAllData;	// IMP=0x0000000100020c7c
- (void)clearPendingLogMsgElemsForBatchUploadOfPolicyType:(int)arg1;	// IMP=0x0000000100020a98
- (void)clearExpiredLogMsgsWithResultBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100020548
- (void)deleteCurCollSaved:(id)arg1;	// IMP=0x00000001000203b8
- (void)selectDailySettingsWithVisitorBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ff6c
- (void)selectDailyCountsWithVisitorBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010001fa00
- (void)selectCurCollSavedWithVisitorBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010001f708
- (void)selectCurCollViewsWithVisitorBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010001f1e4
- (void)selectMapKitCountWithVisitorBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ed08
- (void)selectLogMsgsForBatchUploadOfPolicyType:(int)arg1 visitorBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010001e78c
- (id)selectHandlingPoliciesForBatchUpload;	// IMP=0x000000010001e57c
- (void)storeLogMsgElems:(id)arg1;	// IMP=0x000000010001e1f0
- (void)_writeDailySettingsElem:(id)arg1;	// IMP=0x000000010001e090
- (void)_writeCuratedCollectionElem:(id)arg1;	// IMP=0x000000010001daa4
- (void)_writeDailyCountElem:(id)arg1;	// IMP=0x000000010001d6a4
- (void)_writeMapKitCountElem:(id)arg1;	// IMP=0x000000010001d46c
- (void)_writeLogMsgQueueElem:(id)arg1;	// IMP=0x000000010001d024
- (long long)_analyticsCount;	// IMP=0x000000010001ceec
- (void)_tearDown;	// IMP=0x000000010001ce78
- (void)dealloc;	// IMP=0x000000010001ce2c
- (void)_setupEvalStmtsOnDb:(id)arg1;	// IMP=0x000000010001cc0c
- (void)_configureDatabase;	// IMP=0x000000010001c488
- (void)protectedDataDidBecomeAvailable:(id)arg1;	// IMP=0x000000010001c428
@property(nonatomic) _Bool firstAuthComplete;
- (id)initWithDBFilePath:(id)arg1;	// IMP=0x000000010001c298
- (id)init;	// IMP=0x000000010001c238
- (id)getEvalStatus;	// IMP=0x0000000100022a50
- (void)showEvalDataWithPredicate:(id)arg1 visitorBlock:(CDUnknownBlockType)arg2 summaryBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000226ac
- (void)flushEvalData;	// IMP=0x00000001000225f4
- (void)setEvalMode:(_Bool)arg1;	// IMP=0x0000000100022544

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
