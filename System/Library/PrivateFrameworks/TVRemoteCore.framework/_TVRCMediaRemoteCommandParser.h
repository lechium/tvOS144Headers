/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSMutableSet;

@interface _TVRCMediaRemoteCommandParser : NSObject {

	NSArray* _allCommands;
	NSMutableSet* _enabledCommandNames;

}
-(void)_gatherEnabledCommands;
-(BOOL)_containsAnySkipCommands;
-(id)_skipButtons;
-(BOOL)_containsAnyTrackCommands;
-(id)_trackAndSpeedButtons;
-(BOOL)_containsEnabledCommand:(unsigned)arg1 ;
-(id)buttonsForCommands:(id)arg1 ;
@end

