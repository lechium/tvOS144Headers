//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CSAudioRecordContext, CSAudioStartStreamOption, CSAudioStopStreamOption, CSCommandControlBehaviorMonitor;

@protocol CSCommandControlBehaviorMonitorDelegate <NSObject>
- (void)commandControlBehaviorMonitor:(CSCommandControlBehaviorMonitor *)arg1 didStopStream:(CSAudioStopStreamOption *)arg2;
- (void)commandControlBehaviorMonitor:(CSCommandControlBehaviorMonitor *)arg1 willStopStream:(CSAudioStopStreamOption *)arg2;
- (void)commandControlBehaviorMonitor:(CSCommandControlBehaviorMonitor *)arg1 didStartStreamWithContext:(CSAudioRecordContext *)arg2 successfully:(_Bool)arg3 option:(CSAudioStartStreamOption *)arg4;
- (void)commandControlBehaviorMonitor:(CSCommandControlBehaviorMonitor *)arg1 willStartStreamWithContext:(CSAudioRecordContext *)arg2 option:(CSAudioStartStreamOption *)arg3;
@end

