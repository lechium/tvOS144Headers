//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CSAudioRecordContext, CSAudioStartStreamOption, CSAudioStopStreamOption, CSSiriClientBehaviorMonitor, NSString;

@protocol CSSiriClientBehaviorMonitorDelegate <NSObject>
- (void)siriClientBehaviorMonitor:(CSSiriClientBehaviorMonitor *)arg1 didStopStream:(CSAudioStopStreamOption *)arg2 withEventUUID:(NSString *)arg3;
- (void)siriClientBehaviorMonitor:(CSSiriClientBehaviorMonitor *)arg1 willStopStream:(CSAudioStopStreamOption *)arg2;
- (void)siriClientBehaviorMonitor:(CSSiriClientBehaviorMonitor *)arg1 didStartStreamWithContext:(CSAudioRecordContext *)arg2 successfully:(_Bool)arg3 option:(CSAudioStartStreamOption *)arg4 withEventUUID:(NSString *)arg5;
- (void)siriClientBehaviorMonitor:(CSSiriClientBehaviorMonitor *)arg1 willStartStreamWithContext:(CSAudioRecordContext *)arg2 option:(CSAudioStartStreamOption *)arg3;

@optional
- (void)siriClientBehaviorMonitor:(CSSiriClientBehaviorMonitor *)arg1 didChangedRecordState:(_Bool)arg2 withEventUUID:(NSString *)arg3 withContext:(CSAudioRecordContext *)arg4;
@end
