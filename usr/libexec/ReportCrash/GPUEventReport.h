//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OSAnalytics/OSAReport.h>

@class NSDictionary, NSString;

@interface GPUEventReport : OSAReport
{
    NSDictionary *_event;	// 48 = 0x30
    NSString *_tailspinPath;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100010a7c
- (void)generateLogAtLevel:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000109e0
- (id)appleCareDetails;	// IMP=0x00000001000109d8
- (id)reportNamePrefix;	// IMP=0x0000000100010944
- (id)problemType;	// IMP=0x0000000100010934
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100010540

@end
