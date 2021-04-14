//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSString, SSMetricsEventController;

@interface AnalyticsReportingOperation : ISOperation
{
    SSMetricsEventController *_controller;	// 96 = 0x60
    NSString *_directory;	// 104 = 0x68
    CDUnknownBlockType _finishBlock;	// 112 = 0x70
    long long _insertTimestamp;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000001001e9b2c
- (id)_signatureWithData:(id)arg1 error:(id *)arg2;	// IMP=0x00000001001e98c4
- (_Bool)_shouldClearEventsDespiteError:(id)arg1;	// IMP=0x00000001001e97e8
- (_Bool)_shouldBackoffAfterError:(id)arg1;	// IMP=0x00000001001e973c
- (_Bool)_runForReportingURL:(id)arg1 suppressUserInfo:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000001001e8758
- (id)_path;	// IMP=0x00000001001e8660
- (void)_destroyOutputFile:(id)arg1;	// IMP=0x00000001001e85ec
- (id)uniqueKey;	// IMP=0x00000001001e85e0
- (void)run;	// IMP=0x00000001001e7a0c
@property(copy) CDUnknownBlockType finishBlock;
- (id)init;	// IMP=0x00000001001e7908
- (id)initWithController:(id)arg1;	// IMP=0x00000001001e7734

@end

