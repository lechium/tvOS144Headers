/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class AVExternalPlaybackMonitorInternal;

@interface AVExternalPlaybackMonitor : NSObject {

	AVExternalPlaybackMonitorInternal* _ivars;

}

@property (getter=isAirPlayVideoActive,readonly) BOOL airPlayVideoActive; 
@property (getter=isAirPlayVideoPlaying,readonly) BOOL airPlayVideoPlaying; 
+(void)initialize;
+(id)longFormVideoExternalPlaybackMonitor;
-(id)description;
-(id)init;
-(void)dealloc;
-(BOOL)isAirPlayVideoActive;
-(id)initWithFigRoutingSessionManager:(OpaqueFigRoutingSessionManagerRef)arg1 ;
-(BOOL)isAirPlayVideoPlaying;
@end

