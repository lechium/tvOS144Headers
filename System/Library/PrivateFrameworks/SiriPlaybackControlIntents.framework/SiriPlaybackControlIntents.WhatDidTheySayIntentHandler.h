/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WhatDidTheySayIntentHandling.h>

@interface SiriPlaybackControlIntents.WhatDidTheySayIntentHandler : NSObject <WhatDidTheySayIntentHandling> {

	 playbackController;
	 deviceSelector;
	 timer;
	 queue;
	 assertion;
	 analyticsService;
	 deviceState;

}
-(id)init;
-(void)resolveDeviceForWhatDidTheySay:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)handleWhatDidTheySay:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmWhatDidTheySay:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
