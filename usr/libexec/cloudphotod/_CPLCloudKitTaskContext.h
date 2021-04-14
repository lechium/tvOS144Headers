//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCountedSet, NSDate, NSDictionary, NSMapTable;
@protocol CPLCloudKitTrackableTask;

@interface _CPLCloudKitTaskContext : NSObject
{
    NSMapTable *_contexts;	// 8 = 0x8
    NSCountedSet *_classCounts;	// 16 = 0x10
    NSCountedSet *_cellularClassCounts;	// 24 = 0x18
    NSDate *_lastOperationDate;	// 32 = 0x20
    Class _lastOperationClass;	// 40 = 0x28
    _Bool _cancelled;	// 48 = 0x30
    id <CPLCloudKitTrackableTask> _task;	// 56 = 0x38
    NSDate *_startDate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001000a0864
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) id <CPLCloudKitTrackableTask> task; // @synthesize task=_task;
@property(readonly, nonatomic) NSArray *operationStatusDictionaries;
@property(readonly, nonatomic) NSDictionary *statusPerOperationType;
- (_Bool)_operationAllowsCellular:(id)arg1;	// IMP=0x000000010009fdb8
- (id)_priorityDescriptionForOperation:(id)arg1;	// IMP=0x000000010009fc9c
@property(readonly, nonatomic) NSCountedSet *countOfOperationWithCellularAccessClasses;
@property(readonly, nonatomic) NSCountedSet *countOfOperationClasses;
- (void)cancelAllOperations;	// IMP=0x000000010009fb7c
- (id)contextForOperation:(id)arg1;	// IMP=0x000000010009fb6c
- (_Bool)hasBlockedOperationsIncludingBackground:(_Bool)arg1;	// IMP=0x000000010009f960
- (void)operationDidFinish:(id)arg1;	// IMP=0x000000010009f8d4
- (void)operationWillStart:(id)arg1 context:(id)arg2;	// IMP=0x000000010009f82c
- (id)initWithTask:(id)arg1;	// IMP=0x000000010009f754

@end

