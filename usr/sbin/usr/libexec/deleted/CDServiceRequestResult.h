//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CDResult.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CDServiceRequestResult : CDResult
{
    int _urgency;	// 8 = 0x8
    NSString *_serviceName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010003f790
@property(nonatomic) int urgency; // @synthesize urgency=_urgency;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;

@end

