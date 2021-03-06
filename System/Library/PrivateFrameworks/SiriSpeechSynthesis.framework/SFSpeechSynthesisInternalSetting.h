/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUserDefaults, NSString;

@interface SFSpeechSynthesisInternalSetting : NSObject {

	NSUserDefaults* _defaults;

}

@property (nonatomic,retain) NSUserDefaults * defaults;                   //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,readonly) NSString * ospreyEndpointURL; 
@property (nonatomic,readonly) NSString * deviceId; 
@property (nonatomic,readonly) BOOL disableCaching; 
+(id)sharedInstance;
-(id)init;
-(NSUserDefaults *)defaults;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(NSString *)deviceId;
-(BOOL)disableCaching;
-(NSString *)ospreyEndpointURL;
@end

