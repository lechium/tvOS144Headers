//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;
@protocol CSAudioSessionProviding;

@protocol CSAudioSessionProvidingDelegate <NSObject>

@optional
- (void)audioSessionProvider:(id <CSAudioSessionProviding>)arg1 didChangeContext:(_Bool)arg2;
- (void)audioSessionProvider:(id <CSAudioSessionProviding>)arg1 providerInvalidated:(_Bool)arg2;
- (void)audioSessionProvider:(id <CSAudioSessionProviding>)arg1 didSetAudioSessionActive:(_Bool)arg2;
- (void)audioSessionProvider:(id <CSAudioSessionProviding>)arg1 willSetAudioSessionActive:(_Bool)arg2;
- (void)audioSessionProviderEndInterruption:(id <CSAudioSessionProviding>)arg1;
- (void)audioSessionProviderBeginInterruption:(id <CSAudioSessionProviding>)arg1 withContext:(NSDictionary *)arg2;
- (void)audioSessionProviderBeginInterruption:(id <CSAudioSessionProviding>)arg1;
@end

