//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFWatchdogTimer, NSMutableDictionary, NSString;

@interface ADCloudResponseHandler : NSObject
{
    unsigned short _responseType;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    long long _outstandingResponses;	// 24 = 0x18
    NSMutableDictionary *_responses;	// 32 = 0x20
    CDUnknownBlockType _completion;	// 40 = 0x28
    AFWatchdogTimer *_timeoutTimer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010011889c
@property(retain, nonatomic) AFWatchdogTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSMutableDictionary *responses; // @synthesize responses=_responses;
@property(nonatomic) unsigned short responseType; // @synthesize responseType=_responseType;
@property(nonatomic) long long outstandingResponses; // @synthesize outstandingResponses=_outstandingResponses;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

@end

