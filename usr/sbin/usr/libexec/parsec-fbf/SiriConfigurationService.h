//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Osprey/OspreyService.h>

@class NSDictionary, OspreyMethodCall;

@interface SiriConfigurationService : OspreyService
{
    OspreyMethodCall *_configurationVersionMethod;	// 8 = 0x8
    NSDictionary *_extraHeaders;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000038e4
@property(readonly, nonatomic) NSDictionary *extraHeaders; // @synthesize extraHeaders=_extraHeaders;
- (id)configurationWithResponseHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100003838
@property(readonly, nonatomic) OspreyMethodCall *configurationVersionMethod; // @synthesize configurationVersionMethod=_configurationVersionMethod;
- (id)initWithConnectionURL:(id)arg1 extraHeaders:(id)arg2;	// IMP=0x00000001000035bc

@end

