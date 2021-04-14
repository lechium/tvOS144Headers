/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>

@class NSArray, NSNumber, DeviceQuery;

@interface PauseMediaIntent : INIntent

@property (nonatomic,copy) NSArray * devices; 
@property (nonatomic,copy) NSArray * deviceContext; 
@property (nonatomic,copy) NSNumber * isDirectInvocation; 
@property (assign,nonatomic) long long mediaType; 
@property (nonatomic,copy) DeviceQuery * deviceQuery; 
@end

