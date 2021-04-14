/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AXAudioHardwareManager : NSObject
+(id)sharedManager;
+(id)defaultPort;
+(void)setDefaultPort:(id)arg1 ;
+(void)updateTestingChannels;
+(void)enableMultiroute;
+(void)disableMultiroute;
+(id)channelsForPort:(id)arg1 ;
+(BOOL)channelsAreAirplay:(id)arg1 route:(id)arg2 ;
+(BOOL)channelsAreWiredHeadphones:(id)arg1 ;
+(void)setDefaultPortChannels:(id)arg1 ;
+(void)setDefaultRouteDescription:(id)arg1 ;
+(id)defaultRouteDescription;
+(id)defaultPortChannels;
-(id)init;
-(id)_savedIdForRouteDescription:(id)arg1 ;
-(void)_handleSurroundSoundDefaults:(id)arg1 returnedChannels:(id)arg2 port:(id)arg3 source:(long long)arg4 ;
-(id)savedChannelsForOutput:(id)arg1 forSource:(long long)arg2 ;
-(void)setSavedChannels:(id)arg1 forOutput:(id)arg2 forSource:(long long)arg3 ;
@end

