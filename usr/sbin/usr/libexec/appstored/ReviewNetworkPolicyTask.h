//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class EvaluatorDownload;

@interface ReviewNetworkPolicyTask : Task
{
    EvaluatorDownload *_download;	// 8 = 0x8
    _Bool _accessWasUnblocked;	// 16 = 0x10
    _Bool _suppressDialogs;	// 17 = 0x11
    long long _cellularResult;	// 24 = 0x18
    long long _constrainedResult;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100194bd8
@property _Bool suppressDialogs; // @synthesize suppressDialogs=_suppressDialogs;
@property long long constrainedResult; // @synthesize constrainedResult=_constrainedResult;
@property long long cellularResult; // @synthesize cellularResult=_cellularResult;
@property(readonly) _Bool accessWasUnblocked; // @synthesize accessWasUnblocked=_accessWasUnblocked;
- (void)main;	// IMP=0x00000001001945f8
- (id)initWithDownload:(id)arg1;	// IMP=0x0000000100194578

@end

