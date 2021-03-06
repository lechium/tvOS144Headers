//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, SDTaskDepotPushBufferDelegate;

__attribute__((visibility("hidden")))
@interface SDTaskDepot : NSObject
{
    _Bool isExecuting;	// 8 = 0x8
    _Bool mayStartExecuting;	// 9 = 0x9
    NSMutableArray *runningTasks;	// 16 = 0x10
    _Bool _noTimeout;	// 24 = 0x18
    int _totalTasks;	// 28 = 0x1c
    NSString *_outputDirectory;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_timeout_queue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_child_exit_queue;	// 48 = 0x30
    id <SDTaskDepotPushBufferDelegate> _pushBufferDelegate;	// 56 = 0x38
}

+ (void)signalStopTasks;	// IMP=0x000000010003c7f8
+ (void)signalInterrupt;	// IMP=0x000000010003c6bc
+ (void)stopTasks;	// IMP=0x000000010003c538
+ (int)runTasksConcurrently:(id)arg1 withTimeout:(double)arg2;	// IMP=0x000000010003b3f0
+ (int)runTasksSequentially:(id)arg1 withTimeout:(double)arg2;	// IMP=0x000000010003b360
+ (void)runCommand:(id)arg1 withArguments:(id)arg2 asUID:(unsigned int)arg3 outputFile:(id)arg4 withTimeout:(double)arg5;	// IMP=0x000000010003b20c
+ (void)runCommand:(id)arg1 withArguments:(id)arg2 inBootstrapDomainOfUID:(unsigned int)arg3 outputFile:(id)arg4 withTimeout:(double)arg5;	// IMP=0x000000010003b0b8
+ (void)runCommand:(id)arg1 withArguments:(id)arg2 outputFile:(id)arg3 withTimeout:(double)arg4;	// IMP=0x000000010003af6c
+ (void)runCommand:(id)arg1 withArguments:(id)arg2 outputFile:(id)arg3 withSubDir:(id)arg4 withTimeout:(double)arg5;	// IMP=0x000000010003ae04
+ (void)runShellCommand:(id)arg1 outputFile:(id)arg2 withTimeout:(double)arg3;	// IMP=0x000000010003acdc
+ (id)sharedTaskDepot;	// IMP=0x000000010003ab98
- (void).cxx_destruct;	// IMP=0x000000010003ca74
@property(nonatomic) __weak id <SDTaskDepotPushBufferDelegate> pushBufferDelegate; // @synthesize pushBufferDelegate=_pushBufferDelegate;
@property int totalTasks; // @synthesize totalTasks=_totalTasks;
@property(retain) NSObject<OS_dispatch_queue> *child_exit_queue; // @synthesize child_exit_queue=_child_exit_queue;
@property(retain) NSObject<OS_dispatch_queue> *timeout_queue; // @synthesize timeout_queue=_timeout_queue;
@property(retain) NSString *outputDirectory; // @synthesize outputDirectory=_outputDirectory;
- (void)_reapTasks;	// IMP=0x000000010003c1b0
- (int)_runTasks:(id)arg1 withTimeout:(double)arg2 concurrently:(_Bool)arg3;	// IMP=0x000000010003b480
- (_Bool)noTimeout;	// IMP=0x000000010003acd4
- (_Bool)setNoTimeout:(_Bool)arg1;	// IMP=0x000000010003acc4

@end

